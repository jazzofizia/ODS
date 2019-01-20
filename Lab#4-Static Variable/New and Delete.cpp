//variable length of array
#include <iostream>
#include <stdlib.h>
using namespace std;
main(){	
	int *Arr;
	int i;
	cin>>i;
	Arr = new int(i);
	cout<<Arr[i-1];
	delete [] Arr;
}
