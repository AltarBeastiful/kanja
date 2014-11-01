#ifndef UTILS_TIMEFORMATTER_H
#define UTILS_TIMEFORMATTER_H

#include <QString>
#include <QDate>
#include <QObject>

namespace Utils {

class TimeFormatter : public QObject
{
    Q_OBJECT
public:
    explicit TimeFormatter(QObject *parent = 0);
    virtual ~TimeFormatter();

    static QString formatDateToPassedTime(const QDate date);

private:
    static QString buildPassedTimeLabel(int daysPassed, int daysInTimeUnit, QString timeUnitLabel);
};

}
#endif // UTILS_TIMEFORMATTER_H
