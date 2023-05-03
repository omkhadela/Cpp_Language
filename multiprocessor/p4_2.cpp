#include<iostream>
using namespace std;

class distance{
	private :
		int feet;
		int inch;
	public :
		void input()
		{
			cout<<"Enter Feet : ";
			cin>>feet;
			cout<<"Enter Inch : ";
			cin>>inch;
		}
		distance operator+(distance d)
		{
			distance a;
			a.feet=feet+d.feet;
			a.inch=inch+d.inch;
			while(a.inch >= 12)
			{
				a.inch-=12;
				a.feet++;
			}
			return a;
		}
		void output()
		{
			cout<<"Feet :"<<feet<<endl;
			cout<<"inch :"<<inch<<endl;
		}
};

int main()
{
	distancs d1,d2,d3;
	d1.input();
	d2.input();
	d3=d2+d1;
	d3.output();
}
