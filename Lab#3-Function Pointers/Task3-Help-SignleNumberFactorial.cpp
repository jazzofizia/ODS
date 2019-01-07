//finding factorial of a single number
#include <iostream>
#include <conio.h>

using namespace std;

class FactorialC
{
	public:
		int findfact(int x)						//function of return type int
		{
			int Fact=1;
			for(int i=x; i>1;i--) Fact=Fact*i;  //implementing x! as x.(x-1).(x-2)......3.2.1
		}
};

main ()
	{
		FactorialC Object1;				//class object initializer
		int k=Object1.findfact(3);		//saving factorial in an integer k
		cout<<k;						//printing k on console
		getch ();
	}

