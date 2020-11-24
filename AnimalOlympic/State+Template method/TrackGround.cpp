#include "TrackGround.h"

void TrackGround::printGroundStatus()
{
	cout << "��������" << _name << endl
		<< "���ؽ����ߣ�" << (_keepout_line ? "��" : "��") << endl
		<< "���ذ�ȫ�ţ�" << (_safety_gate ? "��" : "��") << endl
		<< "½��ҽ�ƶӣ�" << (_medic ? "����" : "δ����") << endl
		<< "�ܵ������(0-5��)��" <<_track_cleaness << "��" << endl << endl;
}

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
	_keepout_line = false;
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
