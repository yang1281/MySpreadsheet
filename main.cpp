#include "mainwindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	MainWindow *mainWin = new MainWindow;
	mainWin->show();
	return app.exec();
}