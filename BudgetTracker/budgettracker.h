#ifndef BUDGETTRACKER_H
#define BUDGETTRACKER_H

#include <QtGui/QMainWindow>
#include "ui_budgettracker.h"

class BudgetTracker : public QMainWindow
{
	Q_OBJECT

public:
	BudgetTracker(QWidget *parent = 0, Qt::WFlags flags = 0);
	~BudgetTracker();

private:
	Ui::BudgetTrackerClass ui;
};

#endif // BUDGETTRACKER_H
