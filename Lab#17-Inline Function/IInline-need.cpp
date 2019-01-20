#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// assign a value to each element of a vector
void assign(int& v)
{
  static int n = 1; v = n++;
}

// print out each element
void print(int v)
{
  cout << v << " ";
}

int main()
{
	//with each iteration, a fucntionis called which makes the program jumpy and vibratory. (takes less memory)
	// - Output Size: 1.8488130569458 MiB
  vector<int> vec(10);
  // output initial value of each element
  for_each(vec.begin(), vec.end(), print); //the function print takes value from first to last of vector vec (algorthm package usage)
  cout << endl;

  // assign a value to each element of a vector
  for_each(vec.begin(), vec.end(), assign);

  // output updated value of each element
  for_each(vec.begin(), vec.end(), print);
  return 0;
}
