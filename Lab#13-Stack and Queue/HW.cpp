#include <iostream>
#include <stdlib.h>
using namespace std;
class stacka
{
protected:
    char *Arr;
    int top=-1;
    int size,l;
    int low=-1,high;
public:
    stacka()
    {
        int i;
        l=i;
        cout<< "enter the size of array: ";
        cin >> i;
        Arr=new char(i);
        high=i-1;
    }
    void display()
    {
        cout<<endl<<endl;
        for(int i=0;i<=top;i++)
        {
            cout<<Arr[i]<<" , ";
        }
    }
    void isempty()
    {
        if(top==-1)
        {
            cout<< "the stack is empty"<<endl;
        }
        else
        {
            cout<< "the stack is not empty"<<endl;
        }
    }
    void topa()
    {
        if(top==-1)
        {
            cout<< "the stack is empty"<<endl;
        }
        else
        {
            cout<< "the last element is : "<< Arr[top]<<endl;
        }
    }
    void push()
    {
        if(top==high)
        {
            cout<< "the stack is full: "<<endl;
        }
        else
        {
            top=top+1;
            cout<< "enter the character : ";
            cin >> Arr[top];
        }
    }
    void pop()
    {
        if(top==low)
        {
            cout<< "sorry the array is empty : "<<endl;
        }
        else
        {
            Arr[top]='0';
            top=top-1;
        }
    }
    void peek()
    {
        int i;
        char searc;
        bool test=false;
        cout << "enter the character you want to search: ";
        cin>> searc;
        for(i=0;i<=top;i++)
        {
            if(Arr[i]==searc)
                {test=true;
                break;
                }

        }
        if(test)
        {
            cout<< "this char exists at: "<< i<<endl;

        }
        else
        {
            cout<<"the char does not exist"<<endl;
        }
    }
    void sizeaa()
    {
        cout<< "the total number of char stored are: "<< top+1<<endl;
    }
};
int main()
{
    stacka Stack1;
    char check;
while (1){
    cout<< "\n what do you want to do: "<<endl<<"i=is the stack empty"<<endl<<"d=display stack"<<endl<< "p=push"<<endl<<"o=pop"<<endl<<"k=peek"<<endl<<"s=size of stack"<<endl<<"t=last element entered"<<endl<< "enter your choice: ";
    cin >> check;
    cout<<endl<<endl<<endl;
    if(check=='p' || check== 'P')
    {
        Stack1.push();
    }
    else if(check=='d' || check== 'D')
    {
        Stack1.display();
    }
    else if(check=='o' || check== 'O')
    {
        Stack1.pop();
    }
    else if (check=='k' || check== 'K')
    {
        Stack1.peek();
    }
    else if (check=='s' || check== 'S')
    {
        Stack1.sizeaa();
    }
    else if (check=='t' || check== 'T')
    {
        Stack1.topa();
    }
    else if (check=='i' || check== 'I')
    {
        Stack1.isempty();
    }
}
    return 0;
}
