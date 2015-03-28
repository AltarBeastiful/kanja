#ifndef DOMAIN_USER_H
#define DOMAIN_USER_H

#include <QObject>

namespace Domain {

class User : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(QString email READ email WRITE setEmail NOTIFY emailChanged)

public:
    explicit User(QObject *parent = 0);
    virtual ~User();

    const QString name() const;
    const QString email() const;

    void setName(const QString &name);
    void setEmail(const QString &email);

signals:
    void nameChanged(const QString &name);
    void emailChanged(const QString &mail);

private:
    QString m_name;
    QString m_email;
};
}

#endif // DOMAIN_USER_H
