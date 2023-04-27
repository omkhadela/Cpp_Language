//WAP with a mother class and an inherited daugther class.
//Both of them should have a method void display ()that prints a message (different for mother and daugther).
//In the main define a daughter and call the display() method on it.


#include<iostream>
using namespace std;

class mother {
	public :
		void diplay()
		{
			cout<<"I Am Your Motherrr..." << endl;	
		}
		
};
class daugther:public mother {
	public :
		void diplay()
		{
			cout<<"I am Your Daughterrr..." << endl;	
		}
		
};

int main()
{
	daugther d56;
	d56.daugther::diplay();
	d56.mother::diplay();
}
