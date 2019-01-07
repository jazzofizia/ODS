#include <iostream>
#include<conio.h>
#include<vector>
using namespace::std;
class Queue{
			vector<int> internalVariable;
			public:
				void internalVariableSize(void){
					cout<<"\nSize is:	";
					cout<<internalVariable.size(); //finds size
				}
				void PushElement(int element){
					cout<<"\nPushed:	"<<element<<endl;
					internalVariable.push_back(element); 
				}
				void PopElement(void){
					if (internalVariable.size()!=0){
						cout<<"\nPoped Element:	";
					cout<<internalVariable.front(); 
					internalVariable.erase(internalVariable.begin()); 
					}
					else cout<<"\nemtpy";					
				}				
};
int main () 
	{
		Queue K;
		K.internalVariableSize();
		K.PushElement(5);
		K.internalVariableSize();
		for(int i=0;i<50;i++)
		K.PushElement(5+i);
		K.PopElement();
		/*K.PushElement(5);
		K.PushElement(2);
		K.PushElement(9);
		K.PushElement(19);
		K.PopElement();
		K.PopElement();
		K.PushElement(13);
		K.PopElement();
		cout<<K.QSize();
		K.PopElement();
		K.PopElement();
		K.PopElement();
		cout<<K.QSize(); */
		return 0;
	}
