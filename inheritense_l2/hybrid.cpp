//WAP to perform four different number’s sum by
//inheriting constructors in hybrid inheritance.


#include<iostream>
using  namespace std;

class A{
		
	public :
		int a;
		void input()
		{
			cout <<"Enter The value of a :";
			cin>>a;
			
		}
};
class B : public A{
	
	public :
		int b;
		void getData()
		{
			cout<<"Enter The Value Of b : ";
			cin>>b;
		}
};
class C : public A{
	
	public :
		int c;
		void getD()
		
		{
			cout<<"Enter The Value Of c : ";
			cin>>c;
		}
};
class D : public B,public C {
	
	public :
		int d;
		void setter()
		{
			cout<<"Enter The Value Of d : ";
			cin>>d;
			cout<<"The sum of the all elements : "<<B::a+b+c+d;
		}
};

 main()
{
	D d4;
	d4.B::input();
	d4.getData();
	d4.getD();
	d4.setter();
	
}

