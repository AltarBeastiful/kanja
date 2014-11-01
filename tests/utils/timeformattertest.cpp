#include "timeformatter.h"

#include <QString>
#include <QTest>
#include <QDate>

class TimeFormatterTest : public QObject
{
    Q_OBJECT

public:
    TimeFormatterTest();

private Q_SLOTS:
    void formatDateToPassedTimeFormat_data();
    void formatDateToPassedTimeFormat();
};

TimeFormatterTest::TimeFormatterTest()
{
}

void TimeFormatterTest::formatDateToPassedTimeFormat_data()
{
    QTest::addColumn<QDate>("date");
    QTest::addColumn<QString>("expectedOutput");

    QDate now = QDate::currentDate();

    QTest::newRow("multiple weeks case") << now.addDays(27) << "3 weeks";
    QTest::newRow("multiple weeks case") << now.addDays(16) << "2 weeks";
    QTest::newRow("single week case") << now.addDays(7) << "1 week";

    QTest::newRow("few days case") << now.addDays(5) << "5 days";
    QTest::newRow("one day case") << now.addDays(1) << "1 day";

    QTest::newRow("more than 3 weeks but less than 1 month") << now.addDays(29) << "1 month";
    QTest::newRow("multiple months case") << now.addMonths(2) << "2 months";
    QTest::newRow("one month case") << now.addMonths(1) << "1 month";

    QTest::newRow("multiple years case") << now.addYears(2) << "2 years";
    QTest::newRow("one year case") << now.addYears(1) << "1 year";

}

void TimeFormatterTest::formatDateToPassedTimeFormat()
{
    QFETCH(QDate, date);
    QFETCH(QString, expectedOutput);

    QString formattedTime = Utils::TimeFormatter::formatDateToPassedTime(date);
    QCOMPARE(formattedTime, expectedOutput);
}

QTEST_MAIN(TimeFormatterTest)
#include "timeformattertest.moc"
