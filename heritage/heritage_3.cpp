//WAP with a mother class animal. Inside it define a name and an age variables, and set_value() function. 
//Then create two bases variables Zebra and Dolphin which write a message telling the age,
// the name and giving some extra information (e.g. place of origin).

#include<iostream>
using namespace std;

class animal{
	protected:
		int age;
		string name;
	public :
		void setanal()
		{
			cout<<"Enter age : ";
			cin>>age;
			cout<<"Enter Nmae : ";
			cin>>name;
		}
};
class zebra : public animal{
	protected:
		string place;
	public :
		void setzebra()
		{
			cout<<"Enter place : ";
			cin>>place;
		}
		void getzebra()
		{
			cout<<"Nmae :"<<name<< endl;
			cout<<"Age :"<<age<< endl;
			cout<<"Place:"<<place<< endl;
		}

	
};
class dolphin : public animal{
	protected:
		string col;
	public :
		void setdolar()
		{
			cout<<"Enter colour : ";
			cin>>col;
		}
		void getdolar()
		{
			cout<<"Nmae  :"<<name<<endl;
			cout<<"Age   :"<<age <<endl;
			cout<<"colour:"<<col<<endl;
		}	
};
int main()
{
	zebra z320;
	z320.setanal();
	z320.setzebra();
	z320.getzebra();
	
	
	dolphin d023;
	d023.setanal();
	d023.setdolar();
	d023.getdolar();
}
