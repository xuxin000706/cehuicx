#include "hayaku.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Hayaku w;
	w.show();
	return a.exec();
}
