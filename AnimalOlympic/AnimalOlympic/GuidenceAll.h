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
	//ʵ�֣�ִ�к���
	void Start();
};

void GuidenceAll::Start() {
	cout<< "\n\n"<<"		                                  ��    ��    ��    ��\n\n"
		<< "           ************************************************************************************************\n"
		<< "           *                             $                                  $                             *\n"
		<< "           *     A  �����ֳ����ֶ�       $       B  ���ڱ����ٲ���          $      C  �����ܱߺ�����      *\n"
		<< "           *                             $                                  $                             *\n"
		<< "           *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~$~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~$~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*\n"
		<< "           *                             $                                  $                             *\n"	
		<< "           *      1 ��Ļʽ���׳�         $          1 ���ʹ���              $     1   �˶���С����        *\n"
		<< "           *     (Adapter&Strategy)      $         (Visitor&Facade          $          (Command)          *\n"
		<< "           *                             $       &InterceptionFilter)       $                             *\n"
		<< "           *      2   �볡�Ǽ�           $                                  $                             *\n"
		<< "           *     (InterfaceFluent)       $                                  $                             *\n"
		<< "           *                             $                                  $                             *\n"
		<< "           *      3   ���µ���           $          2 ����ά��              $     2  �˶��ả������       *\n"
		<< "           *        (Composite)          $         (State&Template)         $         (FlyWeight)         *\n"
		<< "           *                             $                                  $                             *\n"
		<< "           *      4  ����֤�ַ�          $                                  $                             *\n"
		<< "           *   (StaticFactoryMethod)     $                                  $                             *\n"
		<< "           *                             $          3 ���ڷ�������          $     3 �˶��Ụ������������  *\n"
		<< "           *      5 ���ߣ���ǰǩ��       $        (BusinessDelegate)        $        (AbstractFactor)     *\n"
		<< "           *    (Register&InlineTemp)    $                                  $                             *\n"
		<< "           *                             $                                  $                             *\n"
		<< "           *      6  �ﾶ���ڿƼ�        $                                  $                             *\n"
		<< "           *         (Observer)          $          4 �˶�Ա��������        $                             *\n"
		<< "           *                             $         (FrontController)        $     4 רҵ�˶����ϵ���      *\n"
		<< "           *      7  ̨�򣺾�ս          $                                  $          (Decorator)        *\n"
		<< "           *     (Singleton&Memento)     $                                  $                             *\n"
		<< "           *                             $          5  ����ʳ��             $                             *\n"
		<< "           *      8   ��ٱ���           $            (Builder              $                             *\n"
		<< "           *         (Mediator)          $     &SeparateQueryFromModifier)  $                             *\n"
		<< "           *                             $                                  $     5  �˶��ά�ƴ���       *\n"
		<< "           *      9  �ڶ�������          $                                  $         (Prototype)         *\n"
		<< "           *          (Proxy)            $        6  �������Ϸ�����         $                             *\n"
		<< "           *                             $              (Bridge)            $                             *\n"
		<< "           *      10 ���أ�����          $                                  $                             *\n"
		<< "           *     (PrivateClassData)      $                                  $     6  ��Ϣϵͳ֧��         *\n"
		<< "           *                             $                                  $     (DataAccessObject)      *\n"
		<< "           *      11  ��Ļʽ���齱       $       7  ����ϵͳ��������        $                             *\n"
		<< "           *         (Multition)         $          (HideDelegate)          $                             *\n"
		<< "           *                             $                                  $                             *\n"
		<< "           *                             $                                  $                             *\n"
		<< "           ************************************************************************************************\n"
		<< "           *                                     D  �˶��ả��Ƶ��                                        *\n"
		<< "           *                                                                                              *\n"
		<< "           *   1 Service Center        2 Hospital      3 WaitInLine      4 Payment      5 PriceAssessment *\n"
		<< "           *   (FactoryMethod)                                                                            *\n"
		<< "           *    (Interpreter)  (ChainsOfResponsibility) (Iterator) (ReplaceTempWithQuery��(Specification) *\n"
		<< "           *    (ObjectPool)                                                                              *\n"
		<< "           *    (Substitute)                                                                              *\n"
	    << "           ************************************************************************************************\n";


}
