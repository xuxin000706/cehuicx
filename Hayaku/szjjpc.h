#ifndef SZJJPC_H
#define SZJJPC_H

#include <QWidget>
#include "ui_szjjpc.h"

class SzJjPc : public QWidget
{
	Q_OBJECT

public:
	SzJjPc(QWidget *parent = 0);
	~SzJjPc();

private:
	Ui::SzJjPc ui;
};

#endif // SZJJPC_H
