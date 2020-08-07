#ifndef DXJYPC_H
#define DXJYPC_H

#include <QWidget>
#include "ui_dxjypc.h"

class DxJyPc : public QWidget
{
	Q_OBJECT

public:
	DxJyPc(QWidget *parent = 0);
	~DxJyPc();

private:
	Ui::DxJyPc ui;
	private slots:
		void jisuan();
		void result();
};

#endif // DXJYPC_H
