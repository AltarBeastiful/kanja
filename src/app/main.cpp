#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QVector>

//#include "serie.h"
#include "../domain/serie.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QQmlApplicationEngine engine;

    Domain::Serie *serie1 = new Domain::Serie();

    serie1->setName("Game of Thrones");
    serie1->setBannerPicture("resources/images/Game_of_Thrones_bandeau.jpg");
    serie1->setSleevePicture("resources/images/Game_of_Thrones_pochette.jpg");
    serie1->setAverageDuration(60);
    serie1->setYear(2011);
    serie1->setDiffusion( *new QDate(2015,5,28));
    Domain::Serie *serie2 = new Domain::Serie();
    serie2->setName("un test 2 vgrg  rger zefgg erg erg trher zrththef ztrhtrhe ergher gerg erg ergrgge greg regerg hrhhh");
    serie2->setAverageDuration(20);
    serie2->setYear(2005);
    serie2->setDiffusion( *new QDate(2016,9,27));
    Domain::Serie *serie3 = new Domain::Serie();
    serie3->setName("TotoAuZoo");

    QList<QObject*> testSeries;
    testSeries.append(serie1);
    testSeries.append(serie2);
    testSeries.append(serie3);

    QQmlContext *ctxt = engine.rootContext();
        ctxt->setContextProperty("series", QVariant::fromValue(testSeries));

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}

