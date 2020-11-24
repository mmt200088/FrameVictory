#include "Poster.h"

void Poster::print()
{
	auto poster = this;
	cout << ">>一张新的海报被制造并张贴! " << endl
		<< ">>标语: '" << poster->getSlogan()
		<< "'\n>>尺寸:(高" << poster->getHeight() << "cm, 宽" << poster->getWidth() << "cm) " << endl
		<< ">>地址: " << poster->getPlace() << endl
		<< ">>颜色: " << poster->getColor()<<endl;
}
