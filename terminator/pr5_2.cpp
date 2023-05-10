//Create hybrid inheritance and remove ambiguity permanently.

#include<iostream>
using namespace std;

int main()
{
	int p,q;
	
	cout<<"Enter p : ";
	cin>>p;
	cout<<"Enter q : ";
	cin>>q;
	try{
		if(q==0)
		{
			throw q;	
		}
		else {
			cout<<"ANS : "<<p/q<<endl;
		}
	}
	catch(int r)
	{
		cout<<"can not divied "<<r<<endl;
	}
	catch(char s)
	{
		cout<<"can not divied "<<s<<endl;
	}
	catch(...)
	{
		cout<<"Special character "<<endl;
	}
}
