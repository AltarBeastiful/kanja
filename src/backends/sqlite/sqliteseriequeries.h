#ifndef SQLITESERIEQUERIES_H
#define SQLITESERIEQUERIES_H

#include "seriequeries.h"

class SqliteSerieQueries : public Services::SerieQueries
{
public:
    SqliteSerieQueries();
    ~SqliteSerieQueries();

    virtual QList<Domain::Serie::Ptr> findAll() Q_DECL_OVERRIDE;
    virtual QList<Domain::Episode::Ptr> findAllEpisodes(Domain::Serie::Ptr serie) Q_DECL_OVERRIDE;
};

#endif // SQLITESERIEQUERIES_H
