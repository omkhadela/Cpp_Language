//WAP to print rate of interests of different banks using
//hierarchical inheritance:
//- Class RBI -> Class SBI
//- Class RBI -> Class BOB
//- Class RBI -> Class ICICI
//- inherit rate attribute and getROI() method in all child
//classes

#include<iostream>
using  namespace std;

class RBI{
		
	public :
		float rate;
		void getROI()
		{
			cout<<"\n--------------------------------------------\n";
			cout <<"Interests Rate of : "<<rate <<"%"<<endl;
			
		}
};
class SBI : public RBI{
	
	public :
	
		SBI()
		{
			cout<<"Enter Interest Rate Of SBI : ";
			cin>>rate;
		}
};
class BOB : public RBI{
	
	public :
		
		BOB()
		{
			cout<<"Enter The Interest Rate Of BOB : ";
			cin>>rate;
		}
};
class ICICI : public RBI{
	
	public :
		
		ICICI()
		{
			cout<<"Enter The Interest Rate Of ICICI : ";
			cin>>rate;
		}
};

int main()
{
	SBI s;
	BOB b;
	ICICI i;
	
	s.getROI();
	b.getROI();
	i.getROI();
	
}

