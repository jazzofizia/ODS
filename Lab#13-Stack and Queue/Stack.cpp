#include <iostream>
#include<conio.h>
#include<vector>
using namespace::std;

class stack{
			vector<int> stack;
			public:
				int StackSize(void){
					cout<<"\nSize is:	";
					cout<<stack.size(); //finds size
				}
				void PushElement(int element){
					cout<<"\nPushed:	"<<element<<endl;
					stack.push_back(element); //pushes at the end of vector
				}
				void PopElement(void){
					if (stack.size()!=0){
						cout<<"\nPoped Element:	";
					cout<<stack.back(); //shows last element
					//return this->stack.front();	if you want to receive the variable by another variable in main
					//you also have to make the function a return type for that
					stack.pop_back(); //erases last element as well
					}
					else cout<<"\nemtpy stack";					
				}				
};
int main () 
	{
		stack K;
		K.StackSize();
		K.PushElement(4);
		K.PushElement(5);
		K.PopElement();
		return 0;
	}
