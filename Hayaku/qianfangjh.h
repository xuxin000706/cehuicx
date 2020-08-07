#ifndef QIANFANGJH_H
#define QIANFANGJH_H

#include <QWidget>
#include "ui_qianfangjh.h"

class QianFangJH : public QWidget
{
	Q_OBJECT

public:
	QianFangJH(QWidget *parent = 0);
	~QianFangJH();

private:
	Ui::QianFangJH ui;
};

#endif // QIANFANGJH_H
