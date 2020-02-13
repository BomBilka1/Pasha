#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int number;
	cout<<"Enter number: ";
	cin>>number;
	switch(number){
		case 0: cout<<"Zero";
			break;
		case 1: cout<<"One";
			break;
		case 2: cout<<"Two";
			break;
		case 3: cout<<"Three";
			break;
		case 4: cout<<"Four";
			break;
		case 5: cout<<"Five";
			break;
		case 6: cout<<"Six";
			break;
		case 7: cout<<"Seven";
			break;
		case 8: cout<<"Eight";
			break;
		case 9: cout<<"Nine";
			break;
		default:cout<<"Number > 9";
			break;
	}
	cout<<"\n";
	if (number == 0)
		cout<<"Zero";
	else if (number == 1)
		cout<<"One";
	else if (number == 2)
		cout<<"Two";
	else if (number == 3)
		cout<<"Three";
	else if (number == 4)
		cout<<"Four";
	else if (number == 5)
		cout<<"Five";
	else if (number == 6)
		cout<<"Six";
	else if (number == 7)
		cout<<"Seven";
	else if (number == 8)
		cout<<"Eight";
	else if (number == 9)
		cout<<"Nine";
	else 
		cout<<"Number > 9";
	
	
	
	
	return 0;
}








