#ifndef DOMAIN_SERIE_H
#define DOMAIN_SERIE_H

#include <QDate>
#include <QObject>
#include <QSharedPointer>
#include <QString>

namespace Domain {

class Serie : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(int averageDuration READ averageDuration WRITE setAverageDuration NOTIFY averageDurationChanged)
    Q_PROPERTY(int year READ year WRITE setYear NOTIFY yearChanged)
    Q_PROPERTY(QDate diffusion READ diffusion WRITE setDiffusion NOTIFY diffusionChanged)
    Q_PROPERTY(QString sleevePicture READ sleevePicture WRITE setSleevePicture NOTIFY sleevePictureChanged)
    Q_PROPERTY(QString bannerPicture READ bannerPicture WRITE setBannerPicture NOTIFY bannerPictureChanged)


public:
    typedef QSharedPointer<Serie> Ptr;
    typedef QList<Serie::Ptr> List;

    explicit Serie(QObject *parent = 0);
    virtual ~Serie();

    QString name() const;
    int averageDuration() const;
    int year() const;
    QDate diffusion() const;
    QString sleevePicture() const;
    QString bannerPicture() const;

public slots:
    void setName(const QString &name);
    void setAverageDuration(const int averageDuration);
    void setYear(const int year);
    void setDiffusion(const QDate &diffusion);
    void setSleevePicture(const QString &sleevePicture);
    void setBannerPicture(const QString &bannerPicture);

signals:
    void nameChanged(QString &name);
    void averageDurationChanged(int averageDuration);
    void yearChanged(int year);
    void diffusionChanged(QDate &diffusion);
    void sleevePictureChanged(QString &sleevePicture);
    void bannerPictureChanged(QString &bannerPicture);

private:
    QString name_m;
    int averageDuration_m;
    int year_m;
    QDate diffusion_m;
    QString sleevePicture_m;
    QString bannerPicture_m;
};

}

#endif // DOMAIN_SERIE_H
