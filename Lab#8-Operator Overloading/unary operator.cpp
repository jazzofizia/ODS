#include <iostream>
using namespace std;
class complex
{
private:
	int re, im;
public:
	complex():re(0), im(0){}
	complex(double r, double i):re(r), im(i){}	
	void friend show(complex x);		
	void operator ++()
	{	
		++re;
		++im;
	}
	void operator --(){
		im=-im;
	}
};
void show(complex x){
if (x.im<0)
cout<<"complex number: "<<x.re<<"-"<<-1*x.im<<"i"<<endl;
else
cout<<"complex number: "<<x.re<<"+"<<x.im<<"i"<<endl;
}
main()
{
	complex p(1,2);
	show(p);
	++p;
	show(p);
	complex q(0, 1);
	show(q);
	--q;
	show(q);
}




















