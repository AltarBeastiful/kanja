#include <QString>
#include <QtTest>

#include "sqlitestorage.h"
#include "sqliteseriequeries.h"

class SerieQueriesTest : public QObject
{
    Q_OBJECT

public:
    SerieQueriesTest(){}

private Q_SLOTS:

    void ShouldInstanciateSqliteDatabase()
    {
        SqliteStorage myStorage;
        QCOMPARE(myStorage.database().isValid() , true);
    }

    void ShouldFindAllSeries()
    {
        SqliteSerieQueries queries;
        QCOMPARE(queries.findAll().size() , 0);
    }
};

QTEST_MAIN(SerieQueriesTest)

#include "sqliteseriequeriestest.moc"
