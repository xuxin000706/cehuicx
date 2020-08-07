#ifndef DXJJPC_H
#define DXJJPC_H

#include <QWidget>
#include "ui_dxjjpc.h"

class DxJjPc : public QWidget
{
	Q_OBJECT

public:
	DxJjPc(QWidget *parent = 0);
	~DxJjPc();

private:
	Ui::DxJjPc ui;
};

#endif // DXJJPC_H
