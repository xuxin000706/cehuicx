#ifndef HAYAKU_H
#define HAYAKU_H

#include <QtGui/QMainWindow>
#include "ui_hayaku.h"

#include"cebianjh.h"
#include"qianfangjh.h"
#include"houfangjh.h"
#include"dxjjpc.h"
#include"dxjypc.h"
#include"szjjpc.h"
#include"szjypc.h"
#include"zuobiaofansuan.h"

class Hayaku : public QMainWindow
{
	Q_OBJECT

public:
	Hayaku(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Hayaku();

private:
	Ui::HayakuClass ui;
private slots:
	void sss();
};

#endif // HAYAKU_H
