#include <iostream>
#include <conio.h>
using namespace std;
void SayBye(void){
	 cout<<"Outer Function not giving any info\n";
}
class Collection{
	void SayHi(void){
	 cout<<"hello world\n";
}
void SayBye(void){
	 cout<<"Bye world\n";
}
public:
	void steal(void){
		this->SayBye();
		SayBye();
	}
};

main (){
	Collection obj1;
	obj1.steal();
	Collection x;
	x.steal();
	getch();
}
