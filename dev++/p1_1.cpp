#include<iostream>
using namespace std;

class dis{
	int feet,inch,feet1,inch1;
	int feet2,inch2;
	
	public:
		void input(){
			cout<<"Enter the feet :";
			cin>>feet;
			cout<<"Enter inch : ";
			cin>>inch;
			cout<<"Enter the feet : ";
			cin>>feet1;
			cout<<"Enter the inch : ";
			cin>>inch1;
		}
		void output(){
			feet2=feet+feet1;
			inch2=inch+inch1;
			
			while(inch2>=12)
			{
				feet++;
				inch-=12;    
			}
			cout<<"inch :"<<inch<<"\nfeet :"<<feet;
		}
};
main(){
	dis d;
	d.input();
	d.output();
}

