//WAP to read and print employee information with use of multilevel inheritance. (as like in below image)

#include<iostream>
using namespace std;

class A{
	protected:
		int id;
		string name,role,salary,exp,c_name,address,email,contact;
	public :
		void setAb()
		{
			cout << "Enter ID : ";
			cin >> id;	
			cout << "Enter name : ";
			cin >> name;
			cout << "Enter role : ";
			cin >> role;
		}
};
class B : public A{
	public :
		void setBc()
		{
			
			cout << "Enter the salary of the emp : ";
			cin >> salary;
			cout << "Enter the experience of the emp: ";
			cin >> exp;
		}
}; 
class C : public B{
	public :
		void setcd()
		{
			
			cout << "Enter the company name of the emp: ";
			cin >>c_name ;
			cout << "Enter the address of the emp : ";
			cin >> address;
		}
		void getcD()
		{
			cout<<"Enter the Name of the emp :" << name << endl;
			cout<<"Enter the role of the emp :" << role << endl;
			cout<<"Enter the Salary of the emp : " << salary << endl;
		}
		
};
class D : public C {
	public :
		void setDe()
		{
			
			cout << "Enter email: ";
			cin >> email;
			cout << "Enter contact : ";
			cin >> contact;
		}
		void getDE()
		{
			cout << "ID of the emp : " << id << endl;
			cout << "Name of the emp :" <<name<<endl;
			cout<< "role of the emp :" <<role<<endl;
			cout<< "Salary of the emp : " <<salary<<endl;
			cout<< "Experience of the emp :" <<exp<<endl;
			cout<< "c_name of the emp : "<<c_name<<endl;
			cout<< "Address of the emp  : "<<address<<endl;
	    	cout<< "Email of the emp:"<<email<<endl;
			cout<< "Contact of the emp: "<<contact<<endl;
		}
};

int main()
{
	D a;
	a.setAb();
	a.setBc();
	a.setcd();
	a.getcD();
	a.setDe();
	a.getDE();
}
