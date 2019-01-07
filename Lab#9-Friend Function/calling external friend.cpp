#include <iostream>
#include<conio.h>
#include<string>

using namespace::std;
class father{
	string Name;
	public:
		friend void inputName(father);
		father(string x){
			this->Name = x;
		}
		father(){}  //empty constructor

};
void inputName(father x){
	cout<<x.Name<<endl;
}
main(){
	father obj("Khan");
	inputName(obj);
	father obj2,obj3;

}
