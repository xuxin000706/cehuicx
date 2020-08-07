#include "hayaku.h"
#include <QString>


Hayaku::Hayaku(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	connect(ui.DXJY,SIGNAL(triggered()),this,SLOT(sss()));
}

Hayaku::~Hayaku()
{

}
void Hayaku::sss()
{
	QString c = "asd";
	ui.textEdit->setText(c);
	DxJyPc *a = new DxJyPc();
	a->show();
}