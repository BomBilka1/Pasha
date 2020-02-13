#include<iostream>
#include<math.h>
using namespace std;
int main(){
	
	int n;
	cout<<"Enter number: ";
	cin>>n;
	cout<<"\n"<<n<<"\n";
	n >= 100 ? cout<<"Bolshe" : (n % 2 == 0) ? cout<<"chet" : cout<<"ne chet" ;
	
	
	return 0;	
}
