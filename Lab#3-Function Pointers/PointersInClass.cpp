#include <iostream>
#include <conio.h>
using namespace std;

class pointerclass{
	
public:	
	void display (int *x){
		cout<<"I am alive (*x)\n";
		cout<<x<<endl;
	}
	void display (int x){
		cout<<x<<endl;
		cout<<"I am alive (x)\n";
	}
};
main ()
	{
		int *ptr;
		int counting =100;
		ptr=&counting;
		pointerclass Mycout;
		Mycout.display(*ptr);
		//Mycout.display(ptr);
	}
