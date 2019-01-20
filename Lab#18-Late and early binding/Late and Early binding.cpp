// CPP Program to illustrate early binding. 
// Any normal function call (without virtual) 
// is binded early. Here we have taken base 
// and derived class example so that readers 
// can easily compare and see difference in 
// outputs. 
#include<iostream> 
using namespace std; 
    
class Base 
{ 
public: 
    void show() { cout<<" In Base \n"; } 
    virtual void show1() { cout<<" In Base \n"; } //virtual will cause late binding
}; 
    
class Derived: public Base 
{ 
public: 
    void show() { cout<<"In Derived \n"; } 
    void show1() { cout<<" In Drived \n"; } 
}; 
    
int main(void) 
{ 
    Base *bp = new Derived; 
 
    bp->show();   
    bp->show1();
  
    return 0; 
}
