#include <iostream>
#include <conio.h>
#include <bits/stdc++.h>
using namespace std;
//the data types that are directly stored on RAM with known variable allocated memory
//array, object, structure, vector, sets are not premitive. **Java** and C# doesn't support global premitive DT
//dectype(fromvar) ToVar = declarationValue; is same as
//auto ToVar = Declarationvalue; 
/*void size(auto x){ //command to run on g++ -std=c++11 as 
	cout<<sizeof(x)<<":"<<typeid(x).name()<<endl;
}*/
int main()
{
	long l = 1000;				//64-bit
//	decltype(l) j = 10;   //command to run on g++ -std=c++11 as 
//	$ g++ -std=c++11 your_file.cpp -o your_program
	int i = 10;					//32-bit
	short s = 50;				//16-bit
	char c = 'A';				//8-bit
	bool b = true;				//1-bit
	float f = 11.12;			//32-bit
	double d = 10.2	;			//64-bit
	long double ld = 1000.233; //80-bits	
}


