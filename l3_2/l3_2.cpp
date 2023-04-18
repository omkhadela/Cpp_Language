#include<iostream>
using namespace std;

class hotel{
	int id;
	string type;
	string location;
	int rating,est_year,staff_qua,room_qua;
	static string name;
	
	public :
	void input(){
		cout<<endl;
		cout<<"Enter the id :";
		cin>>id;
		cout<<"Enter the type (hotel or motel) :";
		cin>>type;
		cout<<"The location of the"<<" "<<type ; cout<<" :" ;
		cin>>location;
		cout<<"Enter the rating of hotel (in star):";
		cin>>rating;
		cout<<"Enter the established year :";
		cin>>est_year;
		cout<<"Enter the quantity of staff :";
		cin>>staff_qua;
		cout<<"Enter the quantity of rooms :";
		cin>>room_qua;
	}
	void output1(){
		cout<<"The name of hotel is :"<<name;
	}
	void output(){
		cout<<endl;
		cout<<"The id of hotel :"<<id<<endl;
		cout<<"The type is :"<<type<<endl;
		cout<<"The location is :"<<location<<endl;
		cout<<"The rating of the hotel :"<<rating<<endl;
		cout<<"The established year is :"<<est_year<<endl;
		cout<<"The quantity of the staf is :"<<staff_qua<<endl;
		cout<<"The quantity of the room is :"<<room_qua<<endl;
	}
};
string hotel::name="Avadh";

main(){
	int i,n;
	cout<<"Enter the number of hotel : ";
	cin>>n;
	
	hotel a[n];
	
	for(i=0;i<n;i++)
	{
		a[i].input();
		a[i].output();
		a[i].output1();
	}
	return 0;
}
