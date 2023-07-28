#include <iostream>
#include "TemplateStack.h"

using namespace std; 

int main()
{
	TemplateStack <int> Ts; 
	Ts.push(1); 
	Ts.push(2);
	Ts.push(3);
	Ts.push(3);
	Ts.print();

	cout << "Hola Mundo" << endl;

}