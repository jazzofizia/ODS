#include <iostream>
using namespace std;
class vector
{
	double	i, j, k;
public:
	friend void sum (vector);
	friend void show (vector);
	vector():i(0), j(0), k(0){}
	vector(double r, double s, double t):i(r), j(s), k(t){}
	vector operator * (vector rhs)
	{
		vector temp;
		temp.i=i*rhs.i;
		temp.j=j*rhs.j;
		temp.k=k*rhs.k;
		return temp;
	}
};
void show (vector x){
	cout<<x.i<<"\t"<<x.j<<"\t"<<x.k<<endl;
}
void sum (vector x){
	cout<<x.i+x.j+x.k<<endl;
}
main()
{
	
	vector a(1,2,3), b(2,3,4);
	vector x = a*b;
	show(a);
	show(b);
	sum(x);
 }
 
