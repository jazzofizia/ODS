
/*
1- WRITE A FUNCTION THAT TAKES 3 NUMBERS FROM MAIN() AND IT ASSIGNS THESE
NUMBERS TO 3 PRIVATE VARIABLES X, Y AND Z

2- FIND VOLUME OF CUBE USING X, Y AND Z

3- FIND HALF VOLUME OF VALUE IN PART (2) USING THIS POINTER
*/
#include <iostream>
#include <conio.h>
using namespace std;
class findv{
	float x, y, z;
	public:
		void input(float l, float w, float h){
			x=l;
			y=w;
			z=h;
		}
		void doNothing(int x){
			
			
		}
		float volume(void){
			return x*y*z;
		}
		float vb2(void){
		//	cout<<this->x<<endl<<this->y<<endl<<this->z<<endl;
			return this->volume()/2;
		}
};
main(){
	
	findv o;
	o.doNothing(10000000000);
/*	o.input(1.2, 5, 7);
	cout<<o.volume()<<endl<<o.vb2(); */
}





/*
#include <iostream>
#include <conio.h>
using namespace std;

class FindR{
	float Area(float);//prototype
	float Rad;
public:
	float Resistance(float, float, float); //prototype
	float ShowArea(void);
};

float FindR::Area(float r){   //definition or declaration
	return (22/7)*r*r;
}

float FindR::Resistance(float L, float R, float resis){
	Rad = R;
	return resis*L/this->Area(R);
}

float FindR::ShowArea(void){
		return this->Area(Rad);
	}

main(){
	FindR o;
	cout<<o.Resistance(1,0.001, 10)/1000000<<"Mega-Ohm"<<endl;
	cout<<"the area of the particular wire is: "<<o.ShowArea()
;} */
