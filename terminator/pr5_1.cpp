//WAP to create a class which illustrate the concept of handling all types of exceptions using general exception.


#include <iostream>
using namespace std;

class Energy{
	public:
	
		  	Energy() 
			{
		    	try 
				{
		    	
		    	}
		 		catch (string e) 
				{
		    	  	throw e ;
		    	}
		  	}
 
};

class Drink : public Energy{
	
	string A="Your Energy Is Low...";
			
		public:
			  	Drink() 
			  	{
					throw  A ;
			    	Energy();
			  	}
};


int main() 
{
	try
	{
  		Drink a;
	} 
	
	catch (string e)
	{
    	cout<<"Please Drink Energy Drink..."<<endl<<endl<<e<<endl;
	}
}
