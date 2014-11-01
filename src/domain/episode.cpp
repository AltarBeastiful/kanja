#include "episode.h"

using namespace Domain;

Episode::Episode(QObject *parent) :
    QObject(parent)
{
}

Episode::~Episode()
{

}

int Episode::number() const
{
    return number_m;
}

QString Episode::name() const
{
    return name_m;
}

int Episode::season() const
{
    return season_m;
}

QDate Episode::diffusion() const
{
    return diffusion_m;
}

QDate Episode::lastViewed() const
{
    return lastViewed_m;
}

void Episode::setNumber(int number)
{
    number_m = number;
}

void Episode::setName(const QString &name)
{
    name_m = name;
}

void Episode::setSeason(const int season)
{
    season_m = season;
}

void Episode::setDiffusion(const QDate &diffusion)
{
    diffusion_m = diffusion;
}

void Episode::setLastViewed(const QDate &lastViewed)
{
    lastViewed_m = lastViewed;
}
