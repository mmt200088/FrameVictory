#include <iostream>
#include <vector>
#include <stdlib.h> 
#include<stdio.h>
#include <time.h> 
#include"Multiton.h"
#include<Windows.h>
#include<string>
#define LIMIT 5

using namespace std;
std::vector<LotteryBall *> LotteryBall::LotteryBallList;
int LotteryBall::limit = LotteryBall::SetSize();
int LotteryBall::currentIndex = 0;

LotteryBall::LotteryBall()
{
	srand((unsigned)time(NULL));
	Sleep(4*1000);
	number = (rand() % 10);//ʵ����һ��С��ģ��齱����
}

int LotteryBall::GetNumber()
{
	return number;
}

int LotteryBall::SetSize()
{
	LotteryBall::LotteryBallList.resize(LIMIT);//���ó�ȡ����
	for (int i = 0; i < LIMIT; i++)
	{
		LotteryBall::LotteryBallList[i] = NULL;//�齱֮ǰ��״̬
	}
	return LIMIT;
}

void Multiton::test()
{
	string ID;
	string number="";
	char str[10];
	int num;
	cout << "Multition���ģʽ��飺" << endl;
	cout << "����ģʽMultiton�ǵ���ģʽsingelton����չ,����������ж���Լ���ʵ����" << endl
		<< "����������Լ������������Լ���ʵ����ÿ��ʵ�������в�ͬ������" << endl <<
		"�������ܹ�������ṩ�Լ���ʵ����һ��Ķ���ģʽ��Ĭ��Ϊ�����޵ģ��������޶���ģʽ��" << endl;
	cout << endl;
	cout << "�������:" << endl;
	cout << "�ڶ����˶��Ὺʼ֮ǰ�����췽���Ѿ�Ϊ�����ǲ߻�����һ����ϲ������ÿһλ�˶�Ա�Լ�" << endl
		<< "�˶���Ĺ�����Ա����һ����λ���ı�ţ����췽׼�����˶����ٽ���Ļ֮ʱ����ȡ��λ" << endl
		<< "�������֣���Ӧ��ŵ�С���ｫ������ش󽱣�ͬʱ����Ϊ��һ�������˶���ļ����" << endl
		<< "���췽׼�����������Ŀ��ӡ��0~9��ͬ���ֵĳ齱�򣬽�ʱ��ͨ���齱��һ��һ�����ҡ��" << endl
		<< "���յ��н����룬ÿһ�������С����ǳ齱�������һ��ʵ��������5��ʵ��" << endl;
	cout << endl << endl;

	Sleep(3 * 1000);
	cout << "�˶����Ѿ��ӽ�β�������Ͼ�Ҫ��Ļʽ�ˣ����췽ͻȻ�ų���Ϣ˵Ҫ�齱��" << endl
		<< "���췽����ʹ�ó齱�����γ����öС�����С����������öС������Ӧ���н���" << endl;
	Sleep(2 * 1000);
	cout<< "�н���С���ｫ�������ش󽱺ͳ�Ϊ��һ�������˶��Ἢ����Ļ��ᣡ" << endl;
	Sleep(3 * 1000);
	cout << "����������Ϣ��С�����Ƕ��������������׷�ȥ�ֳ���֤����......" << endl << endl;
	Sleep(2 * 1000);
	cout << "��Ͻ������˿�����̨��ֻ���Ϸ��ĳ齱�����������ʤ����С��,���Ͼ�Ҫ������......" << endl
		 <<"��Ͻ������˿��Լ��ı�ţ��ǣ�" << endl;
	cin >> ID;
	Sleep(2 * 1000);
	cout << "��������һ����������������Ŀ֮�£�������ʼ��......" << endl;
	cout << "ҡ����......" << endl;

	num = LotteryBall::getInstance()->GetNumber();
	cout << "��һ��С��ҡ�����ˣ�����ĺ�����:" ;
	sprintf_s(str, "%d", num);
	number.append(str);
	cout << num << "��" << endl;
	cout<<"ҡ����......"<<endl;

	num = LotteryBall::getInstance()->GetNumber();
	cout << "�ڶ���С��ҡ�����ˣ�����ĺ�����:" ;
	sprintf_s(str, "%d", num);
	number.append(str);
	cout << num <<"��"<< endl;
	cout << "ҡ����......" << endl;

	num = LotteryBall::getInstance()->GetNumber();
	cout << "������С��ҡ�����ˣ�����ĺ�����:" ;
	sprintf_s(str, "%d", num);
	number.append(str);
	cout << num << "��" << endl;
	cout << "ҡ����......" << endl;

	num = LotteryBall::getInstance()->GetNumber();
	cout << "���ĸ�С��ҡ�����ˣ�����ĺ�����:" ;
	sprintf_s(str, "%d", num);
	number.append(str);
	cout << num <<"!"<< endl;
	cout << "ҡ����......" << endl;

	num = LotteryBall::getInstance()->GetNumber();
	cout << "�����С��ҡ�����ˣ�����ĺ�����:" ;
	sprintf_s(str, "%d", num);
	number.append(str);
	cout << num << "��" << endl;
	cout << endl << "�н�����ǣ�"<<number << endl;
	if (number == ID)
		cout << "��ϲ���н�������һ�������˶���ļ�����;�����������" << endl;
	else
		cout << "���ź�û���н��أ����������Ĺ������ǽ����ִ̼���~" << endl << endl;
}

