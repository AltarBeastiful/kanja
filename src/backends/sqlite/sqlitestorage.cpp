#include "sqlitestorage.h"


const char DatabaseName[] = "sqlite.kanja.com";

SqliteStorage::SqliteStorage() :
    m_database(QSqlDatabase::addDatabase("QMYSQL", DatabaseName))
{
}

SqliteStorage::~SqliteStorage()
{
}

QSqlDatabase &SqliteStorage::database()
{
    return m_database;
}

bool SqliteStorage::createDatabaseTables()
{
    // TODO : add test to sql backend !
    // TODO : finish creation of DB
    // try to match the SerieQueries expectations !
    // TODO : mock around if necessary
    // TODO : REACH the GUI
    // TODO : Setup acceptance test !

    return true;
//    Q_ASSERT_X(database().open(), Q_FUNC_INFO,
//                    "Connection to database must be established first");

//    bool error = false;
//    // create tables:
//    for (int i = 0; i < NumberOfTables; ++i)
//    {
//        if (!database().tables().contains(Tables[i]))
//        {
//                QString statement;
//                QTextStream stream(&statement, QIODevice::WriteOnly);

//                stream << "CREATE table  `" << Tables[i] << "` (";
//                const Field* field = Database_Fields[i];
//                while (field->name != QString::null )
//                {
//                        stream << " `" << field->name << "` "
//                        << field->type;
//                        ++field;
//                        if ( field->name != QString::null ) stream << ", ";
//                }
//                stream << ");";

//                QSqlQuery query( database() );
//                qDebug() << statement;
//                query.prepare( statement );
//                if ( ! runQuery( query ) )
//                {
//                        error = true;
//                }
//        }
//    }

//    error = error || ! setMetaData(CHARM_DATABASE_VERSION_DESCRIPTOR, QString().setNum( CHARM_DATABASE_VERSION) );
//    return ! error;
}
