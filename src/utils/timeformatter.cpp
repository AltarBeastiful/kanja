#include "timeformatter.h"

#include <QDebug>

#include <QtMath>

using namespace Utils;

TimeFormatter::TimeFormatter(QObject *parent)
{
}

TimeFormatter::~TimeFormatter()
{

}

QString TimeFormatter::formatDateToPassedTime(const QDate date)
{
    QDate now = QDate::currentDate();
    qint64 daysPassed = now.daysTo(date);

    if (daysPassed >= 365)
        return TimeFormatter::buildPassedTimeLabel(daysPassed, 365, tr("year"));
    else if (daysPassed >= 28)
        return TimeFormatter::buildPassedTimeLabel(daysPassed, 30, tr("month"));
    else if (daysPassed >= 7)
        return TimeFormatter::buildPassedTimeLabel(daysPassed, 7, tr("week"));
    else
        return TimeFormatter::buildPassedTimeLabel(daysPassed, 1, tr("day"));
}

QString TimeFormatter::buildPassedTimeLabel(int daysPassed, int daysInTimeUnit, QString timeUnitLabel)
{
    qreal ratioUnitPassed = daysPassed / daysInTimeUnit;
    int unitPassed = qFloor(ratioUnitPassed);

    //When we have almost one unit, put one because 0 doesn't make sense
    if(unitPassed == 0)
        unitPassed = 1;

    QString formattedDate = QString(QString::number(unitPassed) + " " + timeUnitLabel);

    //FIXME: Handle language with non s plurals
    if (unitPassed > 1)
        formattedDate.append("s");

    return formattedDate;
}
