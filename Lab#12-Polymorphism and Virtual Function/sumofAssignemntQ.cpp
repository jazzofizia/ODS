#include <iostream>
using namespace std;
class base{
	public:
		virtual	void sum (void){}
};
class sum2:public base{
public:
	void sum (void){
			int x, y;
			cin>>x>>y;
			cout<<x+y;	
			}	
};
class sum3:public base{
	public:
	void sum (void){
			int x, y, z;
			cin>>x>>y>>z;
			cout<<x+y+z;	
			}	
};

