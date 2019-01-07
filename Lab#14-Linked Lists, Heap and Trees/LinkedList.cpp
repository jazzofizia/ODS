#include <iostream>
#include <conio.h>
using namespace std;

class List{
	int data;
	public:
		List(List *Link, int setData){
			data = setData;
			prev=Link;
		}
		List(int setData){
			data = setData;
			prev=NULL;
		}
		List *next=NULL;
		List *prev;
		void showConnection(void){
			cout<<this->prev<<endl;
			cout<<this->next<<endl;
		}
		void showData(void){
			cout<<"Contains :"<<data<<endl;
		}
		int getData(void){
			return data;
		}
		void showData (List x){
			cout<<"Contains :"<<x.data<<endl;
		}
		void NodeStatus(List x){
			cout<<"Connected to: "<<x.prev<<endl<<"Contains :"<<x.data<<endl;
		}
};
void GotoFirst(List);
void Search(int, List);
main(){
	
	List start(NULL, 1);
	List second(&start, 5);
	//second.showConnection();
	List third(&second, 10);
	List fourth (&third, 5);
	List fifth (&fourth, 5);
	//third.showConnection();
	/*start.showData(start);
	start.showData(second);
	start.showData(third);
	start.NodeStatus(start);
	start.NodeStatus(second);
	start.NodeStatus(third); */
	GotoFirst(third);
	Search(5, fifth);
	getch();
}
void GotoFirst(List x){
	while (x.prev != NULL)
	{
		x.showData();
		x=*(x.prev);
	}
	x.showData();
}
void Search(int value, List x){
	int k=0;
	while(x.prev!=NULL)
	{	
		if(value==x.getData()){cout<<"found"; k++;}
		x=*(x.prev);
	}
	if(k==0 && x.prev==NULL)cout<<"Not Found";
}

