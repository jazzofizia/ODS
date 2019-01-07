#include <iostream>
#include<conio.h>
#include<string>
using namespace::std;

class Grocery {
	string item[10];
	int Quantity[10];
	static int storeitems;

public:

int Insert_Item (string name, int quantity)
	{
	item[storeitems]=name;
	Quantity[storeitems]=quantity;
	storeitems+=quantity;
	}
void metadata (void){
	cout<<"Item Number\t"<<"Item\t\t"<<"Quantity"<<endl;
}
void ShowStore (void){
	for (int Position = 0; Position<storeitems && storeitems >0; Position++)
	cout<<Position+1<<"\t\t"<<item[Position]<<"\t\t"<<Quantity[Position]<<endl;
	cout<<"_________"<<"\t"<<"__________"<<"\t"<<"__________"<<endl;
}
void Delete(int count){
	if (count<storeitems&&count-storeitems>=0){
		storeitems-=count;
		cout<<count<<" items deleted\n";
	}
	
	else
	cout<<">>The store has no such amount\n\n";
}

};
int Grocery::storeitems; //the most important step
int main () 
	{
		Grocery x;
		x.Insert_Item("Cabbage", 3);
		x.metadata();
		x.ShowStore();
		x.Insert_Item("Turnips", 12);
		x.Insert_Item("beats", 36);
		x.ShowStore();
		x.Delete(2);
		x.Insert_Item("beats", 3);
		x.Insert_Item("beats", 6);
		x.Insert_Item("beats", 36);
		x.ShowStore();
		Grocery y;
		y.Insert_Item("Unknown Vegitable", 10);
		x.ShowStore();
		y.ShowStore();
		return 0;
	}
