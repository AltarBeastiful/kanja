#include "user.h"

using namespace Domain;

User::User(QObject *parent) :
    QObject(parent)
{

}

User::~User()
{

}

const QString User::name() const
{
    return m_name;
}

const QString User::email() const
{
    return m_email;
}

void User::setName(const QString &name)
{
    m_name = name;
}

void User::setEmail(const QString &email)
{
    m_email = email;
}
