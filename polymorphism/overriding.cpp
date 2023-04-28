//WAP to implement method overriding by following
//below mentioned criteria:
//- Class Cricket -> Class T20Match
//- Class Cricket -> Class TestMatch
//- override getTotalOvers() method in both classes


#include<iostream>
using namespace std;

class cricket{
	private :
		int over;
	public :
		void getover()
		{
			cout<<"Enter over : ";
			cin>>over; 
		}
};

class t20 : public cricket{
	public :
		void getover()
		{
			cout<<"20 over." << endl;
		}
};

class test : public cricket{
	public :
		void getover()
		{
			cout<<"90 over per day."<<endl;
		}
};

int main()
{
	t20 t19;
	test t12;
	t19.getover();
	t12.getover();
	t19.cricket::getover();
}
