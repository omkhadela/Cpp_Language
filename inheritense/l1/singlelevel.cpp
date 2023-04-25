//WAP to find sum of all three number’s cubes by
//implementing single level inheritance: Class X->Class Y
//- Class X has following members: a, b & c attributes in
//integer data type
//- Class Y has following members: setData() and
//getData() methods


#include<iostream>
using namespace std;

class x{
		int a,b,c,sum;
		
			public :
		void setdata()
		{
			cout<<"Enter a : ";
			cin>>a;
			cout<<"Enter b : ";
			cin>>b;
			cout<<"Enter c : ";
			cin>>c;
		}
		void getdata()
		{
			int A=a*a*a;
			int B=b*b*b;
			int C=c*c*c;
			cout<<"A : "<<A<< endl;
			cout<<"B : "<<B<< endl;
			cout<<"C : "<<C<< endl;
			sum=A+B+C;
			cout<<"The sum of a,b and c :"<<sum;
		}
};

class y : public x{

};

int main()
{
	y z;
	z.setdata();
	z.getdata();
}
