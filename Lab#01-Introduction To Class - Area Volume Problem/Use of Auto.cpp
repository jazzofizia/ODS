// C++ program to demonstrate working of auto 
// and type inference 

//compile with cpp.sh (website) or g++ library in Ubuntu/Linus as 	$ g++ -std=c++11 your_file.cpp -o NameofOutput
//https://www.geeksforgeeks.org/type-inference-in-c-auto-and-decltype/
#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
	auto x = 4; 
	auto y = 3.37; 
  	decltype(y) abc=3.377; 
	auto ptr = &x; 
	cout << typeid(x).name() << endl 
		<< typeid(y).name() << endl 
		<< typeid(ptr).name() << endl; 
	cout<<typeid(abc).name();
	return 0; 
} 
