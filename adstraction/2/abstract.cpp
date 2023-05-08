#include<iostream>
using namespace std;

class M{
	public :
		virtual void calculate(int a)=0; 
};
class B : public M{
		int a,b;
	public :
		void calculate(int a)
		{
			switch(a)
			{
				case 1 : 
						cout<<"Enter R :";
						cin>>a;	
						cout<<"Area of circle is : "<<3.14*a*a<<endl;	
						break;
						
				case 2 : 
						cout<<"Enter Base : ";
						cin>>a;	
						cout<<"Enter Height : ";
						cin>>b;
						cout<<"Area of triangle is : "<<0.5*a*b<<endl;
						break;	
				case 3 : 
						cout<<"Enter l : ";
						cin >>a;	
						cout<<"Enter w : ";
						cin>>b;
						cout<<"Area of rectangle is : "<<a*b<<endl;
						break;
				default : 
						cout<<"Invalid Choice..."<<endl;				
			}
		} 
};
int main()
{
	int ch;
	cout<<"Enter C for area of circle. "<<endl;
	cout<<"Enter T for area of triangle."<<endl;
	cout<<"Enter R for area of rectangle."<<endl;
	cout<<"Enter your choice : ";
	cin>>ch;
	cout<<"--------------------------------"<<endl;
	cout<<"Your Choice Is : "<<ch<<endl;
	cout<<"--------------------------------"<<endl;
	B b1;
	b1.calculate(ch);
}
