#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_test.h"


class Test : public QMainWindow
{
	Q_OBJECT

public:
	Test(QWidget *parent = Q_NULLPTR);

private:
	Ui::TestClass ui;

private slots:
	void on_addButton_clicked();
	void on_addressList_currentItemChanged();
	void on_deleteButton_clicked();
};