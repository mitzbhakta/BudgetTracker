// BudgetTracker.cpp : main project file.

#include "stdafx.h"
#include "MainWindow.h"
#include "Database.h"
using namespace BudgetTracker;
using namespace System::Data::SQLite;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	Database d;

	SQLiteConnection ^ db = d.dbConnect("tstDB");
	bool t = d.createInitialTables(db);
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew MainWindow());
	return 0;
}
