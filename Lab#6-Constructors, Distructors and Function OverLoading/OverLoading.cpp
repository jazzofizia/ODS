#include <iostream>
#include<conio.h>
using namespace::std;

class Rect {
	int length;
	int width;
public:
int area (void)
	{
	//cout<<"Area: "<<length*width;
		return length*width;
	}
int area (int x, int y)
	{
		length = x;
		width = y;
		int CalculatedArea = length*width;
		return CalculatedArea;
	}
void input (int x, int y)
	{
		length = x;
		width = y;
	}
void input (int x)
	{
		length = width = x;
	}

};

int main () 
	{
		Rect FindArea;
		cout<<FindArea.area(5, 10)<<"\t";
		cout<<FindArea.area()<<"\t";
		FindArea.input(12);
		cout<<FindArea.area()<<"\t";
		FindArea.input(12,13);
		cout<<FindArea.area()<<"\t";
		getch ();
		return 0;
	}
