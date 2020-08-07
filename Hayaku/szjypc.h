#ifndef SZJYPC_H
#define SZJYPC_H

#include <QWidget>
#include "ui_szjypc.h"

class SzJyPc : public QWidget
{
	Q_OBJECT

public:
	SzJyPc(QWidget *parent = 0);
	~SzJyPc();

private:
	Ui::SzJyPc ui;
};

#endif // SZJYPC_H
