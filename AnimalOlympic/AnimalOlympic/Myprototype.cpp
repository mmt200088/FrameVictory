#include"Myprototype.h"
#include<windows.h>
using namespace std;

void Myprototype::test(){

	cout <<endl<< "Prototype:\n�����ģʽ���ڴ�����ģʽ�������ڴ����ظ��Ķ���ͬʱ���ܱ�֤���ܡ����ṩ��һ�ִ����������ѷ�ʽ������ģʽ��ʵ����һ��ԭ�ͽӿڣ��ýӿ����ڴ�����ǰ����Ŀ�¡����ֱ�Ӵ�������Ĵ��۱Ƚϴ�ʱ�����������ģʽ��" << endl<<endl;
	
	Sleep(2000);
	cout << "���±������ںܾúܾ���ǰ����������׼����һ�춯���˶����ʱ������������������������ұ����ʦС�����Ϊ�˶�����콱�ơ�" << endl;
	for (int i = 0; i < 2000000000; i++) {}
	cout << "С�����ڤ˼�����˺ܾ�֮�󣬵����˸��ֽ���Ԫ�صı���������Ϊ�˶�����Ƴ�����Ϊ������۵����ֽ��Ƶ��䷽��" << endl<<endl;
	cout << "����������..." << endl;
	for (int i = 0; i < 2000000000; i++) {}
	GoldMedal* Medal1 = new GoldMedal();
	Medal1->setLogoName("��һ�춯���˶����logo");
	Medal1->setType("����");
	Medal1->show();
	cout << endl;
	cout << "����������..." << endl;
	for (int i = 0; i < 2000000000; i++) {}
	SilverMedal* Medal2 = new SilverMedal();
	Medal2->setLogoName("��һ�춯���˶����logo");
	Medal2->setType("����");
	Medal2->show();
	cout << endl;

	cout << "����������..." << endl;
	for (int i = 0; i < 2000000000; i++) {}
	CopperMedal* Medal3 = new CopperMedal();
	Medal3->setLogoName("��һ�춯���˶����logo");
	Medal3->setType("ͭ��");
	Medal3->show();
	cout << endl;


	for (int i = 0; i < 2000000000; i++) {}
	cout <<endl<< "̫������֮��ÿ���˶��ά�Ƶ�����ֻҪ�޸Ľ����ϵ�logo�Ϳ������ÿ���" << endl;
	
	for (int i = 0; i < 1000000000; i++) {}
	cout << "�����ǵ�66�춯���˶����ˡ�������һ������������Ľ��ưɣ�" << endl<<endl;
	for (int i = 0; i < 1000000000; i++) {}


	cout << "����������..." << endl;
	for (int i = 0; i < 2000000000; i++) {}
	GoldMedal* newMedal1 = Medal1->Clone();
	newMedal1->setLogoName("��666�춯���˶����logo");
	newMedal1->show();
	cout << endl;

	cout << "����������..." << endl;
	for (int i = 0; i < 2000000000; i++) {}
	SilverMedal* newMedal2 = Medal2->Clone();
	newMedal2->setLogoName("��666�춯���˶����logo");
	newMedal2->show();
	cout << endl;

	cout << "����������..." << endl;
	for (int i = 0; i < 2000000000; i++) {}
	CopperMedal* newMedal3 = Medal3->Clone();
	newMedal3->setLogoName("��666�춯���˶����logo");
	newMedal3->show();
	cout << endl;

}
