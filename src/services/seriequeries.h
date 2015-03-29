#ifndef SERVICES_SERIEQUERIES_H
#define SERVICES_SERIEQUERIES_H

#include "episode.h"
#include "serie.h"

namespace Services {

class SerieQueries
{
public:
    typedef QSharedPointer<SerieQueries> Ptr;

    SerieQueries();
    ~SerieQueries();

    virtual QList<Domain::Serie::Ptr> findAll() = 0;
    virtual QList<Domain::Episode::Ptr> findAllEpisodes(Domain::Serie::Ptr serie) = 0;
};

}

#endif // SERVICES_SERIEQUERIES_H
