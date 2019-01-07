#include <iostream>
#include <conio.h>
using namespace std;

void sum(int x,int y){
std::cout<<x+y<<endl;
}
/*int sum(int j, int k){
	return j+k;
}*/

main ()
{
sum(5,6);
void (*FunPtr) (int ,int)	= NULL;
FunPtr = &sum;
int *ptr; //nothing in the pointe
int a=60; //value inside a
ptr=&a;   //thre address of a is kept inside ptr
(*FunPtr)(10,12);
cout<<FunPtr;

}

