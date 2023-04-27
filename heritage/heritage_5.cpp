//WAP to demonstrate example of hierarchical inheritance to get square and cube of a number.

#include<iostream>
using namespace std;

class num{
	protected :
		int ab;
	public :
		num()
		{
			cout << "Enter A : ";
			cin >> ab;
		}
};

class square  : public num{
	public :
		void getsquare()
		{
			cout << "A : " << ab*ab;
		}
};
class cube  : public num{
	public :
		void getcube()
		{
			cout << "A : " << ab*ab*ab;
		}
};

int main()
{
	cube c786;
	c786.getcube();
	cout << endl;
	square s787;
	s787.getsquare();
}
