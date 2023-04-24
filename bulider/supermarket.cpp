#include <iostream>
#include <string>

using namespace std;

class GroceryItem {
public:
    int itemNumber;
    string itemName;
    double itemPrice;
    string itemUnit;

    GroceryItem(int number, string name, double price, string unit) {
        itemNumber = number;
        itemName = name;
        itemPrice = price;
        itemUnit = unit;
    }
};

int main() {

    GroceryItem a[20] = {
        {1, "Bananas", 35.83, "kg"},
        {2, "Apples", 72.68, "kg"},
        {3, "Bread", 74.17, "packet"},
        {4, "Milk", 63.54, "liter"},
        {5, "Eggs", 120.05, "dozen"},
        {6, "Cheese", 210.50, "kg"},
        {7, "Yogurt", 190.02, "liter"},
        {8, "Carrots", 72.68, "kg"},
        {9, "Tomatoes", 107.04, "kg"},
        {10, "Cabbage", 43.64, "kg"},
        {11, "Basmati Rice", 143.64, "kg"},
        {12, "Pasta", 37.04, "kg"},
        {13, "Chicken", 130.02, "kg"},
        {14, "Mutton", 174.17, "kg"},
        {15, "Sugar", 89.67, "kg"},
        {16, "Salt", 21.42, "kg"},
        {17, "Flour", 143.64, "kg"},
        {18, "Garam masala", 43.64, "Packet"},
        {19, "Chicken legs", 143.64, "kg"},
        {20, "Paneer", 143.64, "kg"},
        
    };

    for (int i = 0; i < 20; i++) {
        cout << "Item " << i+1 << ": " << a[i].itemName << ", " << a[i].itemPrice << " rupees per " << a[i].itemUnit << endl;
    }

	int cart[100];
	int choice=1, i=0 ; 
	float price=0;
	cout<<endl;
	while(choice!=0)
	{
		cout<<"Pick an item or press 0 for end of shopping : "; cin>>cart[i]; 
		choice=cart[i];
		i++; 
	}

	cout<<"\n\t\t\t\t\tItems in your shopping cart : \n";
	cout<<"\t\t\t\t\t---------------------------------------------\n";
	 for (int i = 0; cart[i]!=NULL ; i++) {
	 	int j=cart[i];
        cout << "\t\t\t\t\tItem " << j << ": " << a[j-1].itemName << ", " << a[j-1].itemPrice << " rupees per " << a[j-1].itemUnit << endl;
        price=price+a[j-1].itemPrice;
    }	
   	cout<<"\t\t\t\t\t--------------------------------------------------\n";
	cout<<"\t\t\t\t\tYour Bill is : "<<price<<" Rupees.";

	
    return 0;
}

