#include<iostream>
#include<vector>
#include<string>
#include<list>
#include"MenuComponent.h"
#include"Menu.h"
#include"MenuItem.h"
#include<windows.h>
#include"composite.h"
using namespace std;

void composite::test() {
	cout << "ʵ��ģʽ��Composite ʵ�ֳ��������µ���" << endl;
	Sleep(2000);
	cout << "��ӭ������66�춯���˶��ᣡ~~~�����Ǳ����˶�������µ��������԰�������õ��˽Ȿ���˶�������������Ŀ��ʱ�䡢�ص�ͽ���~~~~" << endl;
	Sleep(2000);
	MenuComponent* mainMenu = new Menu("���µ���", "", "", "");
	MenuComponent* landMenu = new Menu("½���˶�", "", "", "");
	MenuComponent* waterMenu = new Menu("ˮ���˶�", "", "", "");
	MenuComponent* skyMenu = new Menu("�����˶�", "", "", "");
	MenuComponent* snowMenu = new Menu("ѩ���˶�", "", "", "");

	mainMenu->Add(landMenu);
	mainMenu->Add(waterMenu);
	mainMenu->Add(skyMenu);
	mainMenu->Add(snowMenu);
	landMenu->Add(new MenuItem("����", "11��15��", "�����ԭ", "������������~~�Ա���ʨ�ӡ������С������ͬһ��������һ���ٶ��뼤��ı�ƴ������������˭���ڰ��������ϻ��ʤ����~"));
	landMenu->Add(new MenuItem("����", "11��16��", "ɭ�ֹ㳡", "��ï�ܵ�ɭ�ֵ��У�����������������֣�è�䡢���ӡ�������������˭�������������ھ�����������Ŀ�Դ���"));
	landMenu->Add(new MenuItem("����", "11��17��", "��ɫ��Ұ", "�ǳ��̼������߱���~~~�������ӡ����󡭡���Щ�ɰ���Сѡ��������Ŭ��֤���Լ�~��ս�¸߶ȣ�"));
	waterMenu->Add(new MenuItem("��Ӿ", "11��20��", "�ʺ��", "���㡢Ѽ�ӡ���򽡭����Щ��������Ӿ��������ɭ����Ψһ�ĺ��������ʺ����һ�����£�"));
	waterMenu->Add(new MenuItem("ˮ�ϰ���", "11��21��", "���⺣��", "�ں�����Ӿ�����ɡ��赸�����ֵȸ���Ԫ�ص�ˮ�ϰ��٣���һ��ǳ����ŵ�ˮ����Ŀ���������ࡢ���㡭����ЩС�����������һ����ˮ�ϰ�����ӣ������о��ʵı���~"));
	waterMenu->Add(new MenuItem("������", "11��26��", "�ʺ��", "�����۱�������~С�����ǿ̿�ѵ�����������Ǿ��������ĸ��ֶ������ۣ�����Э�����˷����ˣ�һ����ǰ��"));
	skyMenu->Add(new MenuItem("���д���", "11��27��", "����̨", "���㡢��ӥ����ȸ������ЩС�����Ǵӹ���̨���������Ŷ���ɭ����������һ�ܣ�����˭���ȵ����յ㣬��Ϊɭ���е�֮�����ķ��йھ���~"));
	snowMenu->Add(new MenuItem("��ѩ�˱���", "11��29��", "ѩ�˹�", "��ѩ����С�������ڶ�����ϲ���Ļ֮һ~~��һ�Σ�ɭ����Ķ�ѩ�˸���С�ܡ�С��С¹��������Ҫ����һ��˭�ѵ�ѩ�����ܴ��ϲ����~~"));
	snowMenu->Add(new MenuItem("��ɽ��ѩ", "11��30��", "ϲ������ѩɽ", "С�����Ǵ�ѩɽɽ�����������ȵ���ɽ�׵Ķ����ʤ������װ�ع��ı�ѩ�������һ���̼��ľ��ٱ�����"));

	mainMenu->print();

	system("pause");

}