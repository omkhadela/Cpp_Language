#include<iostream>
using namespace std;

class Msg{
	private :
		string msgs;
	public :
		Msg()
		{
			cout<<"Enter message : ";
			cin>>msgs;
		}
		void print()
		{
			cout<<msgs<<endl;
		}
		void print(string n)
		{
			cout<<msgs<< " " <<n<<endl;
		}
};

int main()
{
	Msg m7;
	m7.print();
	m7.print("Hello There...");
}
