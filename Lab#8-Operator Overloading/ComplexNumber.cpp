#include <iostream>
using namespace std;
 
class Complex			//.\name of class
{
   private:				//real and imaginary
      int real;            
      int imaginary;          
      // required constructors
      public:
      	void show(Complex p){
         cout<<p.real<<endl<<p.imaginary<<endl;
     }
      Complex(){
         real = 0;
         imaginary = 0;
      }
      Complex(int f, int i){ //overloaded constr
         real = f;
         imaginary = i;
      }
       Complex operator+(Complex b)
   {
      Complex return1;
      return1.real = real + b.real;
      return1.imaginary = imaginary + b.imaginary;
      return return1;
  }
   
};
int main()
{
	Complex D3(0,0);
   Complex D1(11, 10), D2(-5, 11);
   D1.show(D1);
   D1=D1+D2;
   D1.show(D1);
   return 0;
}
