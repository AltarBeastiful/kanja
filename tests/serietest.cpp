#include <QString>
#include <QtTest>

#include "serie.h"

class SerieTest : public QObject
{
    Q_OBJECT

public:
    SerieTest();

private Q_SLOTS:
    void testCase1();
};

SerieTest::SerieTest()
{
}

void SerieTest::testCase1()
{
    Domain::Serie serie;
    //
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(SerieTest)

#include "serietest.moc"
