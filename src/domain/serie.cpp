#include "serie.h"

using namespace Domain;

Serie::Serie(QObject *parent) :
    QObject(parent)
{

}

Serie::~Serie()
{

}

QString Serie::name() const
{
    return name_m;
}

int Serie::averageDuration() const
{
    return averageDuration_m;
}

int Serie::year() const
{
    return year_m;
}

QDate Serie::diffusion() const
{
    return diffusion_m;
}

QString Serie::sleevePicture() const
{
    return sleevePicture_m;
}

QString Serie::bannerPicture() const
{
    return bannerPicture_m;
}

void Serie::setName(const QString &name)
{
    name_m = name;
}

void Serie::setAverageDuration(const int averageDuration)
{
    averageDuration_m = averageDuration;
}

void Serie::setYear(const int year)
{
    year_m = year;
}

void Serie::setDiffusion(const QDate &diffusion)
{
    diffusion_m = diffusion;
}

void Serie::setSleevePicture(const QString &sleevePicture)
{
    sleevePicture_m = sleevePicture;
}

void Serie::setBannerPicture(const QString &bannerPicture)
{
    bannerPicture_m = bannerPicture;
}
