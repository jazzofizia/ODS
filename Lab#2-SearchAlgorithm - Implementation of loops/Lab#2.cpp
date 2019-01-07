//lab#2
// implementing search and count algo using loop
#include <iostream>
#include <conio.h>

using namespace std;

main ()
{
	int index = 0; 	//for addressing a fixed position in array
	int array[6];  //keeping values in array
	int counter=0; //for counting search term
	//adding values to array
	while (index <=5) //for stoping the loop
		{
			array[index]=index%3; //assigning random numbers to array
			index++;//increment
		}
	index = 0;  // re-initialize
	//displaying values from array			
	while (index <=5)
		{
			cout<<"array["<<index<<"] = "<<array[index]<<endl; //concatinating different types of data
			
// 			or we can use as
//			cout<<"array[";
//			cout<<index;
//			cout<<"] = ";
//			cout<<array[index]<<endl;
			index++;
		}
	index = 0;   // re-initialize
	//searching terms in array
			while (index <=5)
		{
			if (array[index]==1)
			counter++; //counting search term
			//cout<<"Found"<<endl;
			index++;
		}
		cout<<"counter value : "<<counter<<endl; //showing final value of counter
		
getch ();	
}
