// using this keyword for calling own class functions and static data types
#include <iostream>
#include <conio.h>

using namespace std;

class FactorialC
{
	static int count;
	int Fact;
	public:
		//this->x=0;
		//Fact = 1; can't be initialized here
		//int Fact = 1; multiple declaration error
		int findfact(int x)						//function of return type int, returing factorial
		{
			Fact = 1;
			if (x>=1)
				{
				for(int i=x; i>1;i--) Fact=Fact*i;  //implementing x! as x.(x-1).(x-2)......3.2.1
				}
			else if (x==0) Fact=1;
			else 	cout<<"Error input argument"<<endl;
			count++; cout<<"called in Factorial Function"<<endl;
			return Fact;
		
		}
		int NCR (int n, int r)	//combination
			{
			int x = this->findfact(n)/(this->findfact(n-r)*this->findfact(r)); //n!/(n-r)!r!
			count++; cout<<"called in NCR Function"<<endl;
			return x;
			}
		int NPR (int n, int r) //permutation
			{
			int x = this->findfact(n)/this->findfact(n-r); //n!/(n-r)!
			count++; cout<<"called in NPR Function"<<endl;
			return x;
			}
		void showcount()
			{
			cout<<endl<<count<<endl;
			}
		void setcount(int x)
		{
			count = x;
		}
};
int FactorialC::count;
main ()
	{
		FactorialC Object1;				//class object initializer
		int k=Object1.findfact(-23);		//saving factorial in an integer k
		cout<<k<<endl;					//printing k on console
		//Object1.setcount(5);
		//---------------------------------------------------------------------
		int ncr = Object1.NCR(3,1);
		cout<<ncr<<"\n";
		Object1.setcount(5);
		//---------------------------------------------------------------------
		int npr = Object1.NCR(3,1);
		cout<<npr<<"\n";
		Object1.showcount();
		//---------------------------------------------------------------------
		FactorialC Object2; //creating another object of the same class
		Object2.NCR(5,1);   //calling its function for incrementing counter
		Object2.showcount(); //checking counter if it is incremented from 0 or from value already stored by first object i-e Object1
		getch ();
	}

