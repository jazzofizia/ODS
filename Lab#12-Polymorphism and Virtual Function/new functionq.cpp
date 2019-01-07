#include <iostream>
using namespace std;

class Weapon
{
    public:
    	int carriage=0;
       void virtual loadFeatures(void)
         { cout << "This is the parent class function Loadfeatures";
		}
		void showAmmo(void){
			cout<<carriage<<endl;
		}
	void picknew(int x){
			carriage+=x;
			//carriage = carriage + x;
		}
	void fire(void){
		carriage--;
	}
};
class Bomb : public Weapon
{
    public:
       void loadFeatures(void)
         { cout << "You have loaded features of a bomb\n total bombs: ";
		 carriage = 3; 
		 
		 }
};

class Gun : public Weapon
{
    public:
       void loadFeatures(void)
         { cout << "Loading gun features.\n";
		 carriage = 25; }
};
main(){
	Weapon weapon;
	weapon.showAmmo();
	Bomb bomb;
	bomb.loadFeatures();
	bomb.showAmmo();
	bomb.picknew(3);
	bomb.fire();
	bomb.showAmmo();
	Gun gun;
	gun.loadFeatures();
	gun.showAmmo(); 
	
	return 0;
}

