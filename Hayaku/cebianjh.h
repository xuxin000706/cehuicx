#ifndef CEBIANJH_H
#define CEBIANJH_H

#include <QWidget>
#include "ui_cebianjh.h"

class CeBianJH : public QWidget
{
	Q_OBJECT

public:
	CeBianJH(QWidget *parent = 0);
	~CeBianJH();

private:
	Ui::CeBianJH ui;
};

#endif // CEBIANJH_H
