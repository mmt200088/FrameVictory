#include "PosterManager.h"

void PosterManager::addPoster()
{
	string slogan, place, color;
	//��������
	cout << "�����뺣������(format:һ���ַ���):";
	getline(cin, slogan);
	//������ɫ
	cout << "�����뺣����ɫ(format:������ɫ�ĵ��ʣ�������Ĭ�Ϻ�ɫ):";
	getline(cin, color);
	//ʹ��Ĭ����ɫ
	if (color.empty())
		color = "black";
	//����������ַ
	cout << "������������ַ(format:һ�д����ַ���ַ���):";
	getline(cin, place);
	//��ϵ�������캣��
	Poster* poster = _posterfac->getPoster(slogan);
	//�趨��ģ������
	poster->setColor(color);
	poster->setPlace(place);
	//���������Ϣ
	poster->print();
}

