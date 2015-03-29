#ifndef SQLSTORAGESTORAGE_H
#define SQLSTORAGESTORAGE_H

#include <QSqlDatabase>

class SqliteStorage 
{
public:

    SqliteStorage();
    ~SqliteStorage();

    QSqlDatabase& database();
    bool createDatabaseTables();

private:
    QSqlDatabase m_database;
};

#endif // SQLSTORAGESTORAGE_H

