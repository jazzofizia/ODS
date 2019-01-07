#include <iostream>
using namespace std;

class Weapon
{
    public:
    	int carriage=0;
       void virtual loadFeatures()
         { cout << "Loading weapon features.\n";
		}
		void showAmmo(void){
			cout<<carriage<<endl;
		}
};

class Bomb : public Weapon
{
    public:
       void loadFeatures()
         { cout << "Loading bomb features.\n";
		 carriage = 3; 
		 }
		void fire(void){
			carriage--;
		}
};

class Gun : public Weapon
{
    public:
       void loadFeatures()
         { cout << "Loading gun features.\n";
		 carriage = 25; }
};

int main()
{
    Weapon x;
    x.loadFeatures();
    Bomb y;
    y.loadFeatures();
    x.showAmmo();
    y.showAmmo();

    return 0;
}
