#include <iostream>
#include<conio.h>
using namespace::std;
//
//void function1 (void){
//cout<<"hello world";
//}

class Rect {
	int length;
	int width;
public:
int area (void)
{
	//cout<<"Area: "<<length*width;
	return length*width;
}
void input (int x, int y)
{
	length = x;
	width = y;
}
};
main () {
	Rect FindArea;
	int i,j;
	const int height = 10;
	cout<<"Enter Length :";cin>>i;
	cout<<"Enter Width :";cin>>j;
	//Calling Class Variables
	FindArea.input (i,j);
	int volume = height*FindArea.area();
	cout<<"Height :"<<height<<endl
	    <<"Volume: "<<volume
	    <<"Area: "<<FindArea.area();
getch ();
return 0;
}
