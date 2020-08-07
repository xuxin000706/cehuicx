#include "dxjypc.h"
#include"qstandarditemmodel.h"
#include<cmath>
#include <math.h>
#include <iomanip>
#define PI 3.14159265358979323846
QStandardItemModel *model = new QStandardItemModel();
int n;
double X0;
double Y0;
static	double *finalangle=new double[n];

typedef struct 
{
	int size;
	int location;
	double du;
	double fen;
	double miao;
	double viewAngle;
	double fangweijiao;
}points;
typedef struct
{
	points *elem;  //存储空间的基地址
	int length;     //信息表当前的个数
}SqList;
double InitList(SqList &L)//构造一个空的顺序表
{
	L.elem=new points[n]; //为顺序表分配大小为maxsize的数组空间
	if(!L.elem) exit(OVERFLOW);  //存储分配失败退出
	L.length=0;            //空表长度为0
	return 1;

}//顺序存储结构的类型为SqList

//存边长
typedef struct 
{
	char start;
	char end;
	double length;
}sides;
typedef struct
{
	sides *elem;  //存储空间的基地址
	int length;     //信息表当前的个数
}SqList_side;          //顺序存储结构的类型为SqList
double InitList_side(SqList_side &L)//构造一个空的顺序表
{
	L.elem=new sides[n]; //为顺序表分配大小为maxsize的数组空间
	if(!L.elem) exit(OVERFLOW);  //存储分配失败退出
	L.length=0;            //空表长度为0
	return 1;
		
}
DxJyPc::DxJyPc(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

}

DxJyPc::~DxJyPc()
{

}
struct guancejiao
{
	int du;
	int fen;
	int miao;
};
void DxJyPc::jisuan()
{
	n=ui.lineEdit->text ().toInt();
	//
	model->setColumnCount(9);
	//
	model->setHeaderData(0,Qt::Horizontal,QString::fromLocal8Bit("序号"));
	model->setHeaderData(1,Qt::Horizontal,QString::fromLocal8Bit("点名"));
	model->setHeaderData(2,Qt::Horizontal,QString::fromLocal8Bit("观测角"));
	model->setHeaderData(3,Qt::Horizontal,QString::fromLocal8Bit("方位角"));
	model->setHeaderData(4,Qt::Horizontal,QString::fromLocal8Bit("边长"));
	model->setHeaderData(5,Qt::Horizontal,QString::fromLocal8Bit("ΔX"));
	model->setHeaderData(6,Qt::Horizontal,QString::fromLocal8Bit("X"));
	model->setHeaderData(7,Qt::Horizontal,QString::fromLocal8Bit("ΔY"));
	model->setHeaderData(8,Qt::Horizontal,QString::fromLocal8Bit("Y"));
	ui.tableView->horizontalHeader()->setStyleSheet("QHeaderView::section {"
		"color: black;padding-left: 4px;border: 1px solid #6c6c6c;}");

	ui.tableView->setModel(model);
	for(int i=0;i<2*n+8;i++)
	{
		char a=i;
		model->setItem(i,0,new QStandardItem());
	}

	for(int j=0;j<3;j++)
	{
		for(int i=0;i<2*n+4;i=i+2)
		{
			ui.tableView->setSpan(i, j, 2, 1);
		}
	}
	for(int j=3;j<6;j++)
	{
		for(int i=1;i<2*n+4;i=i+2)
		{
			ui.tableView->setSpan(i, j, 2, 1);
		}
	}
	for(int i=0;i<2*n+4;i=i+2)
	{
		ui.tableView->setSpan(i, 6, 2, 1);
	}
	for(int i=0;i<2*n+4;i=i+2)
	{
		ui.tableView->setSpan(i, 8, 2, 1);
	}
	for(int i=1;i<2*n+4;i=i+2)
	{
		ui.tableView->setSpan(i, 7, 2, 1);
	}
	char ch = 'A';
	QString ch1;
	for(int i=0;i<2*n;i=i+2)
	{
		ch1=ch;
		model->setItem(i, 1, new QStandardItem(ch1 ) );
		ch++;
	}
	model->setItem(2*n, 1, new QStandardItem("A" ) );
}
void DxJyPc::result()
{
	QList<QString> list;
	QList<guancejiao> listjiao;
	QList<double> bian;
	for(int i=2;i<2*n+1;i=i+2)
	{
		QString  str=model->data(model->index(i,2)).toString(); 
		list<<str;
	}
	for(int i=0;i<n;i++)
	{
		QStringList list1 = list[i].split(" ");
		guancejiao jiao;
		jiao.du =list1[0].toInt();
		jiao.fen=list1[1].toInt();
		jiao.miao=list1[2].toInt();
		listjiao<<jiao;

	}
	X0=model->data(model->index(0,6)).toDouble();
	Y0=model->data(model->index(0,8)).toDouble();
	QString alf01=model->data(model->index(1,3)).toString();
	guancejiao alf0;
	QStringList list2 = alf01.split(" ");
	alf0.du=list2[0].toInt();
	alf0.fen=list2[1].toInt();
	alf0.miao=list2[2].toInt();
	double alf=alf0.du*1.0+alf0.fen*1.0/60+alf0.miao*1.0/3600;
	SqList P;
	InitList(P);
	for(int i=0;i<n;i++)
	{
		P.elem[i].viewAngle=listjiao[i].miao*1.0/3600+listjiao[i].fen*1.0/60+listjiao[i].du*1.0;
	}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	double knowAngle=alf;//已知方位角
	double lilunAngel = (n-2)*180;
	double allAngle=0.0;
	for(int i =0;i<n;i++)	
	{
		allAngle =allAngle+ P.elem[i].viewAngle;
	}
	double chaAngle  = allAngle - lilunAngel;
	int miao = floor((chaAngle*3600+0.5));
	long double a=(int(miao/n))*1.0/3600;
	for(int i =0;i<n;i++)
	{
		P.elem[i].viewAngle-=(int(miao/n))*1.0/3600;
	}
	//double viewAngel_paixu[4];
	double *viewAngel_paixu =new double(n);
	//	QList<double>viewAngel_paixu;
	for(int i=0;i<n;i++)
	{
		viewAngel_paixu[i]=P.elem[i].viewAngle;
	}//新建一个数组存储排序完的观测角

	for(int i =0 ;i<n-1;i++)
	{
		int s_number=i;
		for(int j=i+1;j<n;j++)
		{
			if(viewAngel_paixu[j]<viewAngel_paixu[s_number])
				s_number=j;
		}
		double temp ;
		temp = viewAngel_paixu[s_number];
		viewAngel_paixu[s_number]=viewAngel_paixu[i];
		viewAngel_paixu[i]=temp;
	}//排序小到大
	int yushu = miao%n;
	for(int i =yushu-1;i>=0;i--)
	{
		for(int k = 0;k<n;k++)
		{	
			if(viewAngel_paixu[i]==P.elem[k].viewAngle)
				P.elem[k].viewAngle-=1.0/3600;
		}
	}//余数加到大角
	P.elem[0].fangweijiao=knowAngle+P.elem[0].viewAngle;
	if(P.elem[0].fangweijiao>180)
		P.elem[0].fangweijiao-=180;
	else
		P.elem[0].fangweijiao+=180;
	//计算方位角
	for(int k=0;k<n-1;k++)
	{P.elem[k+1].fangweijiao=P.elem[k].fangweijiao+P.elem[k+1].viewAngle;
	if(P.elem[k+1].fangweijiao>180)
		P.elem[k+1].fangweijiao-=180;
	else
		P.elem[k+1].fangweijiao+=180;
	}
	//将方位角转换成度分秒形式
	guancejiao f;
	QList<guancejiao> F;
	for(int i=0;i<n;i++)
	{
		f.du=int(P.elem[i].fangweijiao);
		f.fen=int((P.elem[i].fangweijiao-f.du)*60);
		f.miao=floor(((P.elem[i].fangweijiao-f.du)*60-f.fen)*60+0.5);
		F<<f;

	}
	//输出方位角
	for(int i =0;i<n;i++)
	{
		QString aa=QString::number( F[i].du)+" "+QString::number(  F[i].fen)+" "+QString::number(  F[i].miao);
		model->setItem(3+2*i, 3, new QStandardItem( aa));
		////	
	}
	/////////////////////////////////////////////边长 及 XY/////////////////////////////////////////////////////////////////////
	
	/*double *side_length = new double[n]; */
	SqList_side S;
	InitList_side(S);
	//S.elem[0].start='A';
	//S.elem[0].end='B';
	S.elem[0].length=157.645;
	//side_length[0]=157.645;
	//S.elem[1].start='B';
	//S.elem[1].end='C';
	S.elem[1].length=106.176;
	//side_length[1]=106.176;
	//S.elem[2].start='C';
	//S.elem[2].end='D';
	S.elem[2].length=160.270;
	//side_length[2]=160.270;
	//S.elem[3].start='D';
	//S.elem[3].end='A';
	S.elem[3].length=101.883;
	//side_length[3]=101.883;
	double *delX = new double[n];
	double *delY = new double[n];
	double *changeFWJ = new double [n];
	int count = 0;
	for(int i = 0; i<n;i++)
	{
		if(count+1==n)
			count=0;
		else
		count++;
		changeFWJ[count]=P.elem[i].fangweijiao;	
	}
	for(int i =0;i<n;i++)
	{
		delX[i]=S.elem[i].length*cos((changeFWJ[i]*PI)/180);
	}
	for(int i =0;i<n;i++)
	{
		delY[i]=S.elem[i].length*sin((changeFWJ[i]*PI)/180);	
	}
	//delXY分配
	double all_delX=0.0,all_delY=0.0;
	double all_length=0.0;
	for(int i =0;i<n;i++)
	{
		all_length+=S.elem[i].length;
	}
	double tset_all_delX;
	double a1=delX[0];
	double a2=delX[1];
	double a3=delX[2];
	double a4=delX[3];
	for(int i = 0;i<n;i++)
	{
		delX[i]=floor(delX[i]*1000+0.5);
		delY[i]=floor(delY[i]*1000+0.5);
	}
		for(int i=0;i<n;i++)
	{
		all_delX+=delX[i]*1.0/1000;
		all_delY+=delY[i]*1.0/1000;
	}
	/*for(int i=0;i<n;i++)
	{
		all_delX+=delX[i];
		all_delY+=delY[i];
	}*/
	
	all_delX=floor(all_delX*1000+0.5);//把改正数换成整数，容易四舍五入
	all_delY=floor(all_delY*1000+0.5);
	for(int i = 0;i<n;i++)
	{
		delX[i]-=floor((S.elem[i].length/all_length)*all_delX+0.5)*1.0/1000;
		double xxxx=floor((S.elem[i].length/all_length)*all_delX+0.5)*1.0/1000;
		delY[i]-=floor((S.elem[i].length/all_length)*all_delY+0.5)*1.0/1000;
	}
	double cc1=delX[0];
	double cc2=delX[1];
	double cc3=delX[2];
	double cc4=delX[3];
	//////////////////////////////////将delXY加到已知点XY上////////////////////////////////////////////
	double *X=new double[n];
	double *Y=new double[n]; 
	double know_X =3854995.215;//这里读取已知数据
	double know_Y =451305.920;
	X[0]=know_X+delX[0];
	Y[0]=know_Y+delY[0];
	for(int i = 0;i<n-1;i++ )
	{
		X[i+1]+=delX[i+1]+X[i];
		Y[i+1]+=delY[i+1]+Y[i];
	}
	double StD1=X[0];
	double StD2=X[1];
	double StD3=X[2];
	double StD4=X[3];
}