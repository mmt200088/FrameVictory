#include "PoolGround.h"


void PoolGround::useGround()
{
	if (_water_cleaness > 3)
		cout << "�� ��" << _name << "�� ˮ�ϳ���˳���ٰ������" << endl;
	else if (_water_cleaness > 1)
		cout << "�� ��" << _name << "�� ˮ�ϳ��ؾٰ�����������ز��ѣ�������ѡ�����²���ӡ��" << endl;
	else
	{
		cout << "��" << _name << "�� ˮ�ϳ���ˮ�ʹ����ȫ�޷��ٰ���������췽Ҫ����������л�" << endl;
		return;
	}
	//��ɱ����󳡵ص�״̬���
	_water_cleaness--;
	_lifeguard = false;
}

void PoolGround::setSafeTeam()
{
	_lifeguard = true;
	cout << "����׼���У�ˮ�Ͼ�������פ��" << endl;
}

void PoolGround::prepareWaitingRoom()
{
	cout << "����׼���У�������ѡ�ֽ�����ԡ����ϴ������Ӿ��׼������Ϣ��" << endl;
}

void PoolGround::cleanWaste()
{
	cout << "���󳡵�ά��������½�Ϻ�ˮ��������" << endl;
}

void PoolGround::purifyGround()
{
	_water_cleaness = 5;
	cout << "���󳡵�ά��������ˮ�ʡ�" << endl;
}
