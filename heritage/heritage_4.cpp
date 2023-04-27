//WAP to read and print employee information using multiple inheritance.

#include<iostream>
using namespace std;

class A{
	protected :
		int id;
		string name;
	public :
		void setAta()
		{
			cout<<"Enter id : ";
			cin>>id;
			cout<<"Enter Name : ";
			cin>>name;
		}
};
class B{
	protected :
		int contact;
	public :
		void setBeta()
		{
			cout<<"Enter contact : ";
			cin>>contact;
		}
};
class C : public A , public B
{
	public :
		void getData()
		{
			cout<<"Name :"<<name<<endl<<"ID :"<<id<<endl<<"contact : "<<contact;
		}
};

int main()
{
	C c123;
	c123.setAta();
	c123.setBeta();
	c123.getData();
}
