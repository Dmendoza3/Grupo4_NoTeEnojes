//#include <curses.h>
#include <typeinfo>
#include <iostream>

using namespace std;

int main()
{
	cout << typeid(int).name();
	return 0;
}
