#include "PosterManager.h"

void PosterManager::addPoster()
{
	string slogan, place, color;
	//海报标语
	cout << "请输入海报标语(format:一行字符串):";
	getline(cin, slogan);
	//海报颜色
	cout << "请输入海报颜色(format:代表颜色的单词，不输入默认黑色):";
	getline(cin, color);
	//使用默认颜色
	if (color.empty())
		color = "black";
	//海报张贴地址
	cout << "请输入张贴地址(format:一行代表地址的字符串):";
	getline(cin, place);
	//联系工厂制造海报
	Poster* poster = _posterfac->getPoster(slogan);
	//设定非模板数据
	poster->setColor(color);
	poster->setPlace(place);
	//输出海报信息
	poster->print();
}

