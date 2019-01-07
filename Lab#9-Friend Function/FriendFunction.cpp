#include <iostream>
#include<conio.h>
using namespace::std;
class Rect {
	int length=10;
	int width=10;
public:		
friend int check (Rect);
friend Rect setarea (Rect); 
void showarea(void); //member function
};
int check (Rect p){
	p.length = -p.length;
	return p.length;
}
Rect setarea (Rect in)
	{
		Rect returning;
		returning.length=in.length*2;
		returning.width=in.width*2;
		return returning;
	}
void Rect::showarea (void)
	{
		cout<<length*width;
	}
int main () 
	{		
		Rect object1;
		//
		Rect obj5;
		obj5 = setarea (object1);
		object1 = setarea (object1);
		object1 = setarea (object1);
		int thereturninglength=check(object1);
		cout<<thereturninglength;
	}
	
