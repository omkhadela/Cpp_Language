//WAP to implement exception handling mechanism for
//different types of scenarios:
//- a number cannot be divide by zero
//- a person cannot be able to vote if his/her age is less
//than 18
//- a password cannot be validate if it doesn’t contains
//an uppercase letter

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int ch;
	cout<<"1) Division. "<<endl;
	cout<<"2) voteing."<<endl;
	cout<<"3) chake password."<<endl;
	cout<<"-=-=-=-=-=--=-=-=---=-=-==-=-===--=-="<<endl;
	cout<<"Enter your choice : ";
	cin>>ch;
		cout<<"-=-=-=-=-=--=-=-=---=-=-==-=-===--=-="<<endl;
	
	switch(ch)
	{
		case 1: 
				int a,b;
				cout << "Enter A : ";
				cin >> a;
				cout<<"-=-=-=-=-=--=-=-=---=-=-==-=-===--=-="<<endl;
				cout << "Enter B : ";
				cin >> b;
				cout<<"-=-=-=-=-=--=-=-=---=-=-==-=-===--=-="<<endl;
				
				try 
				{
					if(b==0)
					{
						throw b;
					}
					else
					{
						cout<<"ANS : "<<a/b<<endl;
					}
				}
				catch(int c)
				{
					cout<<"can not divid by "<<b<<endl;
				}
			break;
		case 2: 
				int d;
				cout<<"Enter your age : ";
				cin>>d;
				
				try
				{
					if(a>18)
					{
						throw d;
					}
					else 
					{
					   cout<<"you can vote. "<<endl;
					}
				}
				catch(int e)
				{
					cout<<"Invalid age..."<<endl;
				}
				break;
		case 3:
				char psw[20];
				cout<<"Enter password : ";
				cin>>psw;
				int l;
				l=strlen(psw);
				int upr =0;
				try
				{
					for(int i=0;i<=l;i++)
					{
						if(psw[i]>=65 && psw[i]<=90)
						{
							upr++;
						}
					}
					
					if(upr>0)
					{
						throw psw;
					}
					else
					{
						cout<<"valid password."<<endl;
					}
					
				}
				catch(char s[])
				{
					cout<<"Invalid password.." << endl;
				}
				break;
				
	}
}
