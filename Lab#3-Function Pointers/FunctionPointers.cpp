#include <iostream>
#include <conio.h>
using namespace std;
void display (int x, int y){
//	cout<<x+y<<endl;
	cout<<"Function-Called\n";
}

main ()
	{
	//	int a=20;
	//	cout<<&a<<endl;					//seeing the address of variable a
		
		
		void (*PointerFunctionName)(int, int) = NULL; //the last int(s) are the input to function
		//OR SIMPLY WIHTOUT GIVING ANY VALUE TO FUNCTION POINTER
		//void (*PointerFunctionName)(int, int);
		PointerFunctionName = &display;	
		cout<<&display<<endl;
		cout<<*PointerFunctionName<<endl;		//displaying first location for saving display function
		display (1,2);
		void (*ptr)(int, int)=NULL;
		ptr = &display;
		(*ptr)(11,12);
	//	(*PointerFunctionName)(123456,1);

	}

