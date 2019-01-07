#include <iostream>
#include <conio.h>
using namespace std;

class baseclass{
	float x, y;
	public:
		baseclass(){
			x=5;
			y=5;
		}
		float multiply(int p){
			return x*p;
		}
};
class inh_class:public baseclass{
		int x=2;
		int y=24;
	public:
		int add(void)
		{
			return x+y;
		}
};
main ()
{
	inh_class var1, var2;
	cout<<var1.add()<<endl;
	cout<<var2.multiply(7);
	}
