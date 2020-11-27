#pragma once
#include<string>
#include <windows.h>

using namespace std;

class GuidenceAll
{
public:
	//ctor
	GuidenceAll() {};
	//dtor
	~GuidenceAll() {};
	//实现：执行函数
	void Start();
};

void GuidenceAll::Start() {
	cout<< "\n\n"<<"		                                  场    景    向    导\n\n"
		<< "           ************************************************************************************************\n"
		<< "           *                             $                                  $                             *\n"
		<< "           *     A  比赛现场欢乐多       $       B  后勤保障少不得          $      C  赛事周边合作棒      *\n"
		<< "           *                             $                                  $                             *\n"
		<< "           *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~$~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~$~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*\n"
		<< "           *                             $                                  $                             *\n"	
		<< "           *      1 开幕式：献唱         $          1 物资管理              $     1   运动会小卖部        *\n"
		<< "           *     (Adapter&Strategy)      $         (Visitor&Facade          $          (Command)          *\n"
		<< "           *                             $       &InterceptionFilter)       $                             *\n"
		<< "           *      2   入场登记           $                                  $                             *\n"
		<< "           *     (InterfaceFluent)       $                                  $                             *\n"
		<< "           *                             $                                  $                             *\n"
		<< "           *      3   赛事导航           $          2 赛场维护              $     2  运动会海报生产       *\n"
		<< "           *        (Composite)          $         (State&Template)         $         (FlyWeight)         *\n"
		<< "           *                             $                                  $                             *\n"
		<< "           *      4  参赛证分发          $                                  $                             *\n"
		<< "           *   (StaticFactoryMethod)     $                                  $                             *\n"
		<< "           *                             $          3 观众服务中心          $     3 运动会护具生产：神兽  *\n"
		<< "           *      5 跳高：赛前签到       $        (BusinessDelegate)        $        (AbstractFactor)     *\n"
		<< "           *    (Register&InlineTemp)    $                                  $                             *\n"
		<< "           *                             $                                  $                             *\n"
		<< "           *      6  田径：黑科技        $                                  $                             *\n"
		<< "           *         (Observer)          $          4 运动员服务中心        $                             *\n"
		<< "           *                             $         (FrontController)        $     4 专业运动饮料调配      *\n"
		<< "           *      7  台球：决战          $                                  $          (Decorator)        *\n"
		<< "           *     (Singleton&Memento)     $                                  $                             *\n"
		<< "           *                             $          5  动物食堂             $                             *\n"
		<< "           *      8   体操比赛           $            (Builder              $                             *\n"
		<< "           *         (Mediator)          $     &SeparateQueryFromModifier)  $                             *\n"
		<< "           *                             $                                  $     5  运动会奖牌打造       *\n"
		<< "           *      9  挖洞：隐情          $                                  $         (Prototype)         *\n"
		<< "           *          (Proxy)            $        6  自助饮料贩卖机         $                             *\n"
		<< "           *                             $              (Bridge)            $                             *\n"
		<< "           *      10 举重：分组          $                                  $                             *\n"
		<< "           *     (PrivateClassData)      $                                  $     6  信息系统支持         *\n"
		<< "           *                             $                                  $     (DataAccessObject)      *\n"
		<< "           *      11  闭幕式：抽奖       $       7  物资系统下属部门        $                             *\n"
		<< "           *         (Multition)         $          (HideDelegate)          $                             *\n"
		<< "           *                             $                                  $                             *\n"
		<< "           *                             $                                  $                             *\n"
		<< "           ************************************************************************************************\n"
		<< "           *                                     D  运动会海外频道                                        *\n"
		<< "           *                                                                                              *\n"
		<< "           *   1 Service Center        2 Hospital      3 WaitInLine      4 Payment      5 PriceAssessment *\n"
		<< "           *   (FactoryMethod)                                                                            *\n"
		<< "           *    (Interpreter)  (ChainsOfResponsibility) (Iterator) (ReplaceTempWithQuery）(Specification) *\n"
		<< "           *    (ObjectPool)                                                                              *\n"
		<< "           *    (Substitute)                                                                              *\n"
	    << "           ************************************************************************************************\n";


}
