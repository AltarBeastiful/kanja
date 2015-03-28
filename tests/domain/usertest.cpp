#include <QString>
#include <QtTest>

#include "user.h"

class UserTest : public QObject
{
    Q_OBJECT

public:
    UserTest();

private Q_SLOTS:
    void ShouldInstanciateUser();
};

UserTest::UserTest()
{
}

void UserTest::ShouldInstanciateUser()
{
    Domain::User user;
    user.setName("Richard Stallman");
    user.setEmail("richard.stallman@fsfe.org");

    QCOMPARE(user.name(), QString("Richard Stallman"));
    QCOMPARE(user.email(),QString("richard.stallman@fsfe.org"));
}

QTEST_MAIN(UserTest)

#include "usertest.moc"
