#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class Item
	{
	static	 int count;
		string num;
	public:
		void getdata(string itemname, int quantity)
			{
				num=itemname;
				count+=quantity;
				cout<<"Added:  "
					<<num<< " in quantity: "
					<<quantity<<endl;
			}
		void showcount()
			{
				cout<<"count ";
				cout<<count<<"\n";
			}
};
int Item::count;
int main()
{
	Item *item = new Item[5];    /* new can create array and then access each element using direct addressing
	or you can create a single object and then access it by -> operator */
	//
	Item *x = new Item;
	item[0].showcount();
	x->getdata("Things", 5);
	x->showcount();
	int *p = new int[10];
	delete [] item;
	p[0]=50;
	delete [] p;
//	delete [] item;  //uncommenting this will give you runtime error
//	item[0].showcount();
//	delete [] x;  //uncommenting this will give you runtime error
	p[0]=10;
	//x->showcount();
}


