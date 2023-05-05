//1. WAP to abstract some attributes of class Admin to
//prevent them to be inherited by its child classes.
//- Class Admin -> Class Manager
//- Class Manager -> Class Employee
//- Class Admin has following members:
//- company_name
//- manager_salary
//- employee_salary
//- total_staff
//- total_annual_revenue
//- can_terminate
//- use all attributes accessibility in parent class and
//child class properly.
//- override a method myAccess() in both child
//classes to display all parent class’s members value
//accordingly.


#include<iostream>
using namespace std;

class Admin{
	string company_name;
	int manager_salary,employee_salary;
	
	public :
		void input()
		{
			cout<<"Enter The Name Of The Company : ";cin>>company_name;
			cout<<"Enter the salary of the manager :"; cin>>manager_salary;
			cout<<"Enter the salary of the employee :"; cin>>employee_salary;
			cout<<"-------------------------------------------------------------"<<endl;;
		}
		void output()
		{
			cout<<"The Name Of The Company : "<<company_name<<endl;
			cout<<"The salary of the manager :"<<manager_salary<<endl;
			cout<<"The salary of the employee :"<<employee_salary<<endl;
			cout<<"-----------------------------------------------------------------"<<endl;
		}
	};

class Manager : public Admin	
		{
			int total_staff,total_annual_revenue;
			public :
				void GetData()
			{
	        cout<<"Total the quantity of the staff : "; cin>>total_staff;
			cout<<"Total the total annual revenue of the company :"; cin>>total_annual_revenue;
			cout<<"-------------------------------------------------------------"<<endl;
			}
			void GotData()
			{
				 cout<<"The quantity of the staff : "<<total_staff<<endl;
				 cout<<"The total annual revenue of the company :"<<total_annual_revenue<<endl;
				 cout<<"-------------------------------------------------------------"<<endl;
			}
		};

class Employee : public Manager
{
			char can_terminate;
			public :
				void GetD()
				{
				   cout<<"Does compnay terminated or not : "; cin>>can_terminate;
				   cout<<"-------------------------------------------------------------"<<endl;
				}
				void GotD()
				{
					cout<<"compnay terminated or not : "<<can_terminate<<endl;
					cout<<"-------------------------------------------------------------"<<endl;
				}
};
main()
{
	Admin A;
	Manager M;
	Employee E;
	A.input();
	A.output();
	M.GetData();
	M.GotData();
	E.GetD();
	E.GotD();
	
}


