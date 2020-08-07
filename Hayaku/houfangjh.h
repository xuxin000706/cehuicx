#ifndef HOUFANGJH_H
#define HOUFANGJH_H

#include <QWidget>
#include "ui_houfangjh.h"

class HouFangJH : public QWidget
{
	Q_OBJECT

public:
	HouFangJH(QWidget *parent = 0);
	~HouFangJH();

private:
	Ui::HouFangJH ui;
};

#endif // HOUFANGJH_H
