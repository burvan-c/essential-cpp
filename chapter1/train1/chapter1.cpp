//how to write a c++ program
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;//using and namespace are keywords,std为命名空间，
int main()//程序从main 函数执行,int为keyword
{
	string user_name,first_name, last_name;
	cout << "please enter your first name:";
	cin >> user_name;
	cout << "\nhello," << user_name << "……and goodbay!";

	 
	cout << "\nplease enter your first name:";
	cin >> first_name;
	cout << "\nplease enter your last name:";
	cin >> last_name;
	cout << "\nhello," << first_name<< last_name << "...and goodbye!\n";
	return 0;//程序代码所放位置
}




//function includes 函数名称、参数列表、函数体、返回类型
//参数列表位于括号内，用逗号隔开各个类型
//函数体在大括号内，有分号隔开
//c面向过程，c++面向对象
//类（class)指用户自定义的数据类型
//基础数据类型：布尔值，字符，整数，浮点数
//class分为头文件和程序执行文件
//c++标准程序库为iostream,即调用#include<iostream>





