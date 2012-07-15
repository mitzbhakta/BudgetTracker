#include "budgettracker.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	BudgetTracker w;
	w.show();
	return a.exec();
}
