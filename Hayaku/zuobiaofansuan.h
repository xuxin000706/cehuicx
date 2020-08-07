#ifndef ZUOBIAOFANSUAN_H
#define ZUOBIAOFANSUAN_H

#include <QWidget>
#include "ui_zuobiaofansuan.h"

class ZuoBiaoFanSuan : public QWidget
{
	Q_OBJECT

public:
	ZuoBiaoFanSuan(QWidget *parent = 0);
	~ZuoBiaoFanSuan();

private:
	Ui::ZuoBiaoFanSuan ui;
};

#endif // ZUOBIAOFANSUAN_H
