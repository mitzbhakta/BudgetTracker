#include "StdAfx.h"
#include "Database.h"
#include <ios>
#include <iostream>
#include "sqlite3.h"
#include <string>

using namespace System::Data::SQLite;
using namespace System::Text;

Database::Database(void)
{
}

SQLiteConnection ^ Database::dbConnect(std::string dbName) 
{
	SQLiteConnection ^db = gcnew SQLiteConnection();
	std::string source("Data Source=");
	source += dbName;
	source += ".db";
	System::String^ dataSource = gcnew System::String(source.c_str());
	db->ConnectionString = dataSource;
	db->Open();

	
	return db;
}

bool Database::createInitialTables(SQLiteConnection ^ db) 
{
	try 
	{
		SQLiteCommand ^cmdCreateTable = db->CreateCommand();
		cmdCreateTable->CommandText = "CREATE TABLE USER (id INTEGER PRIMARY KEY, value STRING);";
		cmdCreateTable->ExecuteNonQuery();
		cmdCreateTable->CommandText = "CREATE TABLE entries(id INTEGER PRIMARY KEY, value STRING);";
		cmdCreateTable->ExecuteNonQuery();
		return true;
	} catch (int e)
	{
		return false;
	
	}
}
