#include "TrackGround.h"

void TrackGround::useGround()
{
	if(_track_cleaness>3)
		cout << "�� ��" << _name << "�� �ﾶ����˳���ٰ������" << endl;
	else if(_track_cleaness>1)
		cout << "�� ��" << _name << "�� �ﾶ���ؾٰ�����������ز��ѣ�������ѡ�����²���ӡ��" << endl;
	else
	{
		cout << "��" << _name << "�� �ﾶ�����������࣬��ȫ�޷��ٰ���������췽Ҫ����������л�" << endl;
		return;
	}
	//��ɱ����󳡵ص�״̬���
	_track_cleaness--;
	_medic = false;
}

void TrackGround::setSafeTeam()
{
	_medic = true;
	cout << "����׼���У��ﾶ��ҽ�ƶ���פ��" << endl;
}

void TrackGround::prepareWaitingRoom()
{
	cout << "����׼���У�������ѡ�ֽ���׼������Ϣ��" << endl;
}

void TrackGround::cleanWaste()
{
	_track_cleaness = 5;
	cout << "���󳡵�ά��������������" << endl;
}

void TrackGround::purifyGround()
{
	cout << "���󳡵�ά����ά����·������" << endl;
}
