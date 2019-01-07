#include <iostream>
#include<conio.h>
#include<string>
#include<typeinfo>
#include <sstream>
using namespace::std;

class Airport {
	string Flight[10];
	string Status[10];
	string Time[10];
public:
/*	Airport(){
			cout<<typeid(*this).name()<<endl;
		for (int i=0;i<10;i++)
		{
			Flight[i] = "Unknown0"+to_string(i*2);
			Status[i] = "On Time";
			Time[i]  = "0"+to_string(i%12)+":"+to_string(i*10%60)+"PM";
		}
	}*/
		Airport(string Name){
			cout<<typeid(*this).name()<<endl;
		for (int i=0;i<10;i++)
		{
			Flight[i] = Name+to_string(i*2);
			Status[i] = "On Time";
			Time[i]  = "0"+to_string(i%12)+":"+to_string(i*10%60)+"PM";
		}
	}
	~Airport(){
		cout<<"Destructor called for\t:"<<typeid(*this).name()<<endl;
	}
	void status (){
		for (int i=0;i<10;i++)
		{
			cout<<Flight[i]<<"\t"<<Status[i]<<"\t\t"<<Time[i] <<endl;
		}
	}
	string to_string (int x){ //converting integer to string
		stringstream sstm;
		sstm<<x;
		return sstm.str();
	}
};

int main () 
	{
		Airport x("AFG");
	//	x.status();
	//	x.~Airport();y.~Airport();
	//	y.status();
		return 0;
	}
