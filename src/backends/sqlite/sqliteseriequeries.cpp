#include "sqliteseriequeries.h"

SqliteSerieQueries::SqliteSerieQueries()
{

}

SqliteSerieQueries::~SqliteSerieQueries()
{

}

QList<Domain::Serie::Ptr> SqliteSerieQueries::findAll()
{
    return QList<Domain::Serie::Ptr>();
}

QList<Domain::Episode::Ptr> SqliteSerieQueries::findAllEpisodes(Domain::Serie::Ptr serie)
{
    return QList<Domain::Episode::Ptr>();
}

