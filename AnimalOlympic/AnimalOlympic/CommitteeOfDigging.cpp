#pragma once
#include"CommitteeOfDigging.h"
#include<iostream>
#include<windows.h>
using namespace std;

void CommitteeOfDigging::askForVCR() {
	cout << "��ί�����ڵ�ȡ�ڶ������ı����طţ������ĵȴ���\n";
	Sleep(1 * 1000);
	cout << "¼��طŻؿ��С�\n";
	Sleep(1 * 1000);
	cout << "¼��طŻؿ��С���\n";
	Sleep(1 * 1000);
	cout << "¼��طŻؿ��С�����\n";
	Sleep(1 * 1000);
	cout << "������ʵ��С�����ڱ����д���ʯͷ����צ�ӣ�����ʧȥ�����ʸ񣡸�л���ķ�����";

}

void CommitteeOfDigging::quit() {
	cout << "��ί����������ļ磬˵���������٣��ú�ѵ�����½����û���Ҳ�������\n";
}

void CommitteeOfDigging::askForRegame() {
	cout << "���±������Ǽ����¶����ڶ���ί�ᾭ�����飬���������ϱ���������ί�ᣡ�����ĵȴ�����\n";
	Sleep(1 * 1000);
	cout << "�����ϱ��С�\n";
	Sleep(1 * 1000);
	cout << "�����ϱ��С���\n";
	Sleep(1 * 1000);
	cout << "�����ϱ��С�����\n";
	Sleep(1 * 1000);
	myCom->askForRegame();

}

void CommitteeOfDigging::askForFire() {
	cout << "Ͷ�߲��п��Ǽ����¶����ڶ���ί�ᾭ�����飬���������ϱ���������ί�ᣡ�����ĵȴ�����\n";
	Sleep(1 * 1000);
	cout << "�����ϱ��С�\n";
	Sleep(1 * 1000);
	cout << "�����ϱ��С���\n";
	Sleep(1 * 1000);
	cout << "�����ϱ��С�����\n";
	Sleep(1 * 1000);
	myCom->askForFire();

}