#include "Poster.h"

void Poster::print()
{
	auto poster = this;
	cout << ">>һ���µĺ��������첢����! " << endl
		<< ">>����: '" << poster->getSlogan()
		<< "'\n>>�ߴ�:(��" << poster->getHeight() << "cm, ��" << poster->getWidth() << "cm) " << endl
		<< ">>��ַ: " << poster->getPlace() << endl
		<< ">>��ɫ: " << poster->getColor()<<endl;
}
