#pragma once
#include"Goods.h"
#include"Porter.h"
#include"List.h"
#include"Add.h"
#include"Reduce.h"
//���ģʽfacade
class Page
{
public:
	Page();
	int getGoodsNum();//��ȡ��������
	int getPorterNum();//��ȡ���˹�����
	void addGoods(Goods* goods);//���������
	void addPorter(Porter* porter);//��Ӱ��˹�
	void buyGoods(int goodsid, int num,int porterid);//�ɹ���������
	void listGoods();//�鿴��������
	void listPorter();//�鿴���а��˹�
	void Port(int goodsid,int num,int porterid);//���ˣ����������

	int goodsNum;
	int porterNum;
	Goods** goodss;//���ʵ�ָ�뼯
	Porter** porters;//���˹���ָ�뼯
	List* list;
	Add* add;
	Reduce* reduce;
};

