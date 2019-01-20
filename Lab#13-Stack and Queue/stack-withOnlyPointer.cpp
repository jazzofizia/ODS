#include <iostream>
#include <conio.h>
using namespace std;
static int count = 0;
static int stack;
void push(int x, int *Receiver){
	*(Receiver+count) = x;
	cout<<"Pushed: "<<*(Receiver+count)<<endl;
	count++;
}
void pop(int *Receiver){
	if (count>0)
	{
		cout<<*(Receiver+count-1)<<endl;
		count--;
	}
	else
		cout<<"Empty Stack";
}
main(){
	push(5, &stack);
	push(10, &stack);
	push(15, &stack);
	pop(&stack);
	pop(&stack);
	pop(&stack);
	pop(&stack);
}
