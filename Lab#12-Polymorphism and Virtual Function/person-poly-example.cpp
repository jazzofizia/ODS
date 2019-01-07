#include <iostream>
using namespace std;
class base{
	public:
	void person(void){
	cout<<"I am the person\n";
}	
};
class driver:public base{
	public:
	virtual void person(void){
	cout<<"I am the Driver\n";
}	
};
class shopkeeper:public base{
	public:
	virtual void person(void){
	cout<<"I am the Seller\n";
}		
};
class sonOfShopKeeper: public shopkeeper{
	
};


/*void person(void){
	cout<<"I am the person";
}
void person(void){
	cout<<"I am a shopkeeper";
}
void person(void){
	cout<<"I am a writer";
}*/
main(){
	base b;
	b.person();
	driver d;
	d.person();
	shopkeeper s;
	s.person();
	sonOfShopKeeper c;
	c.person();
}
