#include<iostream>
using namespace std;

class dis {
	private :
	int feet ,inch;
	public :
	void input()
	{
		cout << "Feet : ";
		cin >> feet;
		cout << "inch : ";
		cin >> inch;
	}
	void output()
	{
		
		while(inch>=12)
			{
				feet++;
				inch-=12;    
			}
			cout<<"inch :"<<inch<<"\nfeet :"<<feet;
	}
};
 main()
{
	dis d1;
	d1.input();
	d1.output();
	
}
