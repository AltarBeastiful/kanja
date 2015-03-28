#include <QString>
#include <QtTest>

#include "episode.h"

class EpisodeTest : public QObject
{
    Q_OBJECT

public:
    EpisodeTest();

private Q_SLOTS:
    void ShouldInstanciateAnEpisode();
};

EpisodeTest::EpisodeTest()
{
}

void EpisodeTest::ShouldInstanciateAnEpisode()
{
    Domain::Episode episode;

    episode.setNumber(42);
    episode.setName("Pilot");
    episode.setSeason(1);
    episode.setDiffusion(QDate(1984, 1, 1));

    QCOMPARE(episode.number(), 42);
    QCOMPARE(episode.name(), QString("Pilot"));
    QCOMPARE(episode.season(), 1);
    QCOMPARE(episode.diffusion(), QDate(1984, 1, 1));
}

QTEST_MAIN(EpisodeTest)

#include "episodetest.moc"
