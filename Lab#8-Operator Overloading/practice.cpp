#include <iostream>
#include<conio.h>
#include<string>

using namespace::std;
void inputName(string x){
	
}

class father{
	string Name;
	public:
		father(string x){
			cout<<"Filled constructor\n";
			this->Name = x;
		}
		father(){cout<<"empty constructor\n";}  //empty constructor
		void show(void){
			father x;
			cout<<Name<<endl;
		}
		~father(){
			cout<<"Called Destructor\n";
		}
};
main(){
	father obj("Khan");

	father obj2,obj3;

}
