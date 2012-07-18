#pragma once
#include <string>
using namespace System::Data::SQLite;
ref class Database
{
public:
	Database(void);
	SQLiteConnection ^ dbConnect(std::string dbName);
	bool createInitialTables(SQLiteConnection ^db);
};

