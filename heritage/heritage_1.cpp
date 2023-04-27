//WAP that defines a shape class with a constructor that gives value to width and height. 
//The define two sub-classes triangle and rectangle, that calculate the area of the shape area (). 
//In the main, define two variables a triangle and a rectangle and then call the area() function in this two varibles.

#include<iostream>
using namespace std;

class area{
	protected :
		int  width,height;
	public :
		area()
		{
			cout << "Enter width :";
			cin >> width;
			cout << "Enter height :";
			cin >> height;
		}
};
class triangle : public area {
	public :
		void trianglearea()
		{
			cout<<"Triangle area : "<< (width*height)/2<<endl;
		}
				
	
};
class Rectangle : public area {
	public :
		void Rectanglearea()
		{
			cout<<"Rectangle area : " <<width*height<<endl;
		}	
};

 main()
{
	Rectangle r2;
	r2.Rectanglearea();
	triangle t1;
	t1.trianglearea();
}
