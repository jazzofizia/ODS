#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class item
	{
	static	 int count;
		string num;
	public:
		void getdata(string itemname, int quantity)
			{
				num=itemname;
				count+=quantity;
				cout<<"things added:  "
					<<num<< " in quantity: "
					<<quantity<<endl;
			}
		void showcount()
			{
				cout<<"count ";
				cout<<count<<"\n";
			}
};
int item::count;
int main()
{
	item a;
	a.getdata("soap", 12);
	a.showcount();
	item b;
	b.getdata("pepsi cotton", 6);
//	a.showcount();
	b.showcount();

}


