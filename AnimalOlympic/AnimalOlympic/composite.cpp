#include<iostream>
#include<vector>
#include<string>
#include<list>
#include"MenuComponent.h"
#include"MMenu.h"
#include"MenuItem.h"
#include<windows.h>
#include"composite.h"
using namespace std;

void composite::test() {
	cout << "实现模式：Composite " << endl;
	Sleep(2000);
	cout << "模式介绍：组合模式（Composite）又叫作整体-部分（Part-Whole）模式，它是一种将对象组合成树状的层次结构的模式，用来表示“整体-部分”的关系，使用户对单个对象和组合对象具有一致的访问性，属于结构型设计模式。组合模式一般用来描述整体与部分的关系，它将对象组织到树形结构中，顶层的节点被称为根节点，根节点下面可以包含树枝节点和叶子节点，树枝节点下面又可以包含树枝节点和叶子节点，根节点和树枝节点本质上属于同一种数据类型，可以作为容器使用；而叶子节点与树枝节点在语义上不属于用一种类型。但是在组合模式中，会把树枝节点和叶子节点看作属于同一种数据类型（用统一接口定义），让它们具备一致行为。这样，在组合模式中，整个树形结构中的对象都属于同一种类型，带来的好处就是用户不需要辨别是树枝节点还是叶子节点，可以直接进行操作，给用户的使用带来极大的便利" << endl;
	cout << "          组合模式的优点是使得客户端代码可以一致地处理单个对象和组合对象，无须关心自己处理的是单个对象，还是组合对象，这简化了客户端代码，此外，更容易在组合体内加入新的对象，客户端不会因为加入了新的对象而更改源代码，满足“开闭原则”。但是，组合模式也存在不足，组合模式设计较复杂，客户端需要花更多时间理清类之间的层次关系，不容易限制容器中的构件和用继承的方法来增加构件的新功能。" << endl;
	cout << "          组合模式包含以下主要角色:" << endl;
	cout << "            抽象构件（Component）角色：它的主要作用是为树叶构件和树枝构件声明公共接口，并实现它们的默认行为。在透明式的组合模式中抽象构件还声明访问和管理子类的接口；在安全式的组合模式中不声明访问和管理子类的接口，管理工作由树枝构件完成。（总的抽象类或接口，定义一些通用的方法，比如新增、删除）" << endl;
	cout << "	         树叶构件（Leaf）角色：是组合中的叶节点对象，它没有子节点，用于继承或实现抽象构件。" << endl;
	cout << "	         树枝构件（Composite）角色 / 中间构件：是组合中的分支节点对象，它有子节点，用于继承和实现抽象构件。它的主要作用是存储和管理子部件，通常包含 Add()、Remove()、GetChild() 等方法。" << endl;
	Sleep(1000);
	cout << "实现场景：赛事导航" << endl;
	cout << "          为了方便来观看比赛的小动物观众们更好地了解本次运动会的赛事流程，我们专门设置了赛事导航，里面包括本次运动会体育项目的时间、地点和介绍，帮助小动物们玩转本次运动会~~~" << endl;
	cout << "-----------------------------------------------------------------" << endl;
	Sleep(2000);
	cout << "欢迎来到第66届动物运动会！~~~下面是本次运动会的赛事导航，可以帮助你更好地了解本次运动会所有体育项目的时间、地点和介绍~~~~" << endl;
	Sleep(2000);
	MenuComponent* mainMenu = new MMenu("赛事导航", "", "", "");
	MenuComponent* landMenu = new MMenu("陆地运动", "", "", "");
	MenuComponent* waterMenu = new MMenu("水上运动", "", "", "");
	MenuComponent* skyMenu = new MMenu("空中运动", "", "", "");
	MenuComponent* snowMenu = new MMenu("雪地运动", "", "", "");

	mainMenu->Add(landMenu);
	mainMenu->Add(waterMenu);
	mainMenu->Add(skyMenu);
	mainMenu->Add(snowMenu);
	landMenu->Add(new MenuItem("赛跑", "11月15日", "青青草原", "最经典的体育赛事~~猎豹、狮子、斑马等小动物在同一赛道上来一场速度与激情的比拼，看看究竟是谁能在百米赛道上获得胜利呢~"));
	landMenu->Add(new MenuItem("爬树", "11月16日", "森林广场", "在茂密的森林当中，隐藏者许多爬树高手，猫咪、猴子、考拉……到底谁是真正的爬树冠军，让我们拭目以待！"));
	landMenu->Add(new MenuItem("跳高", "11月17日", "金色田野", "非常刺激的跳高比赛~~~袋鼠、兔子、松鼠……这些可爱的小选手们正在努力证明自己~挑战新高度！"));
	waterMenu->Add(new MenuItem("游泳", "11月20日", "彩虹河", "金鱼、鸭子、蝌蚪……这些动物界的游泳健将将在森林里唯一的河流……彩虹河中一决高下！"));
	waterMenu->Add(new MenuItem("水上芭蕾", "11月21日", "阳光海岸", "融合了游泳、技巧、舞蹈、音乐等各种元素的水上芭蕾，是一项非常优雅的水上项目，海马、海豚、章鱼……这些小动物们组成了一个个水上芭蕾舞队，来进行精彩的表演~"));
	waterMenu->Add(new MenuItem("赛龙舟", "11月26日", "彩虹河", "划龙舟比赛来啦~小动物们刻苦训练，划着它们精心制作的各种动物龙舟，齐心协力，乘风破浪，一往无前！"));
	skyMenu->Add(new MenuItem("飞行大赛", "11月27日", "观云台", "大雁、老鹰、麻雀……这些小动物们从观云台出发，绕着动物森林赛道飞行一周，看看谁能先到达终点，成为森林中当之无愧的飞行冠军！~"));
	snowMenu->Add(new MenuItem("堆雪人比赛", "11月29日", "雪人谷", "堆雪人是小动物们在冬天最喜爱的活动之一~~这一次，森林里的堆雪人高手小熊、小羊、小鹿……它们要来比一比谁堆的雪人最受大家喜爱呢~~"));
	snowMenu->Add(new MenuItem("高山滑雪", "11月30日", "喜马拉雅雪山", "小动物们从雪山山顶出发，率先到达山底的动物获胜！在银装素裹的冰雪世界里，来一场刺激的竞速比赛！"));

	mainMenu->print();

	system("pause");

}