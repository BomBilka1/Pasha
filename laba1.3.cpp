#include<iostream>
#include<math.h>
using namespace std;
int main(){
	
	const int a = 3 , b = 2;
	float f,x,y;
	cout<<"Enter X,Y: ";
	cin>>x>>y;
	f = exp(-(pow(x,2)+pow(y,2)))*(cos(x/a)-sin(y/b))/(pow(cos(y/a),2)+pow(sin(x/b),2));
	cout<<f;
	return 0;
	}
