#include <iostream>
#include <conio.h>
class complex{
	int re, im;
	public:
		complex(int _x, int _y):re(_x),im(_y)
		{std::cout<<"Constructor\n";}
		void show(complex x){
			if(x.im>=0)
				std::cout<<x.re<<
				"+j"<<x.im<<std::endl;
			else
				std::cout<<x.re<<
				"-j("<<(-1)*x.im<<")"<<std
				::endl;
		}
		complex conjug(complex x){
		x.im=(-1)*x.im;
		return x;}
		~complex(){std::cout<<
		"Destructor\n";}
	};
using namespace std;
main ()
	{
		complex p(1,2);
		p = p.conjug(p);
		p.show(p);
	}

