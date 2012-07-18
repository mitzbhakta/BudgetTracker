#include "StdAfx.h"
#include "Database.h"
#include "sqlite3.h"



Database::Database(void)
{
}

void Database::dbConnect(const char dbName) 
{
	int rc;
	sqlite3 *db;
	rc = sqlite3_open(&dbName, &db);
}
