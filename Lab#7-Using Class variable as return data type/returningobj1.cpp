#include <iostream>
#include<conio.h>
#include<string>

using namespace::std;
class father{
	string Name;
	int RegNo;
	public:
		friend father mix(father a, father b){
			a.Name=b.Name;
			cout<<"Mixed\n";
		}
		friend void show (father x){
			cout<<x.Name<<"\t"<<x.RegNo<<endl;
		}
		father(string x, int y){
			Name = x;
			RegNo = y;
		}
		father(){}  //empty constructor
};

main(){
	father obj1, obj2("Abdullah", 55);
	obj1 = mix(obj1, obj2);
	show(obj1);
	show(obj2);
}
