#include <QString>
#include <QtTest>

#include "serie.h"

class SerieTest : public QObject
{
    Q_OBJECT

public:
    SerieTest();

private Q_SLOTS:
    void ShouldInstanciateASerie();
};

SerieTest::SerieTest()
{
}

void SerieTest::ShouldInstanciateASerie()
{
    Domain::Serie serie;
    serie.setName("Community");
    serie.setAverageDuration(22);

    serie.setYear(2009);
    serie.setDiffusion(QDate(2009, 9, 17));

    serie.setSleevePicture("resources/images/Game_of_Thrones_bandeau.jpg");
    serie.setBannerPicture("resources/images/Game_of_Thrones_pochette.jpg");

    QCOMPARE(serie.name(), QString("Community"));
    QCOMPARE(serie.averageDuration(), 22);
    QCOMPARE(serie.year(), 2009);
    QCOMPARE(serie.diffusion(), QDate(2009, 9, 17));

    QCOMPARE(serie.sleevePicture(), QString("resources/images/Game_of_Thrones_bandeau.jpg"));
    QCOMPARE(serie.bannerPicture(), QString("resources/images/Game_of_Thrones_pochette.jpg"));
}

QTEST_APPLESS_MAIN(SerieTest)

#include "serietest.moc"
