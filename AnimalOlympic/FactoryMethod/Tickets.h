#pragma once
#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;

//��Ʒ������
class Tickets {
public:
	//չʾƱ����Ϣ��������д
	virtual void showTickets()=0;
	
	//��ȡ��Ʊ��ֵ
	int getValue() {
		return value;
	}
protected:
	string sports;//��Ŀ����
	string time;//��ʼʱ��
	int value;//��Ʊ��ֵ
};