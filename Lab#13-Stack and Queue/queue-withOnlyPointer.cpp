#include <iostream>
#include <conio.h>
using namespace std;

static int count = 0;
static int bottom = 0;

void push(int x, int *Receiver){
	*(Receiver+count) = x;
	cout<<"Pushed: "<<*(Receiver+count)<<endl;
	count++;
}
void pop(int *Receiver){
	if (count!=bottom)
	{
		cout<<*(Receiver+bottom)<<endl;
		bottom++;
	}
	else
		cout<<"Empty Queue";
}
main(){
	static int stack;
	push(5, &stack);
	push(10, &stack);
	push(15, &stack);
	pop(&stack);
	pop(&stack);
	pop(&stack);
	pop(&stack);
}
