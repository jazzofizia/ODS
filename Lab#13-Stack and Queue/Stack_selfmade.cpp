#include <iostream>
#include<conio.h>
using namespace std;
void displayElements(int stack[], int length, int *empty)
{
	int ValueCounter=0;
	cout<<"\nstack contents\n_________________________\n";
	for (int i=0; i<length; i++){	
		if (stack[i]!=-1)
			{ 
				cout<<stack[i]<<endl;
				ValueCounter++;
			}
		}	
		if (ValueCounter==0)
			cout<<"\nNo values in stack\n";
		cout<<"_________________________";			
}
void Push(int stack[], int value, int *empty){
	if(*empty>=1){
		stack[--*empty]=value;
		cout<<"\nvalue ("<<value<<") pushed in stack\nempty space = :"<<*empty<<endl;
	}
	else
		cout<<"\nno space in the stack\n";
	}
void Pop(int stack[], int *empty){
	if(stack[*empty]!=-1)	{
		cout<<endl<<stack[*empty]<<" popped from stack";
		stack[*empty]=-1;
		*empty+=1;
	}
}
main(){
	
	int length1;
	cout<<"enter length of array :";
	cin>>length1;
	int stack1[length1];
	for (int i=0; i<length1; i++){
		stack1[i]=-1;
	}
	int emptySpace=length1;
displayElements(stack1, length1, &emptySpace);
Push(stack1, 34, &emptySpace);
Push(stack1, 35, &emptySpace);
displayElements(stack1, length1, &emptySpace);
while (emptySpace!=0){
	Push(stack1, emptySpace+2, &emptySpace);
}
displayElements(stack1, length1, &emptySpace); 
Pop(stack1, &emptySpace);
Pop(stack1, &emptySpace);
displayElements(stack1, length1, &emptySpace); 
Pop(stack1, &emptySpace);
displayElements(stack1, length1, &emptySpace);
	getch();
}
