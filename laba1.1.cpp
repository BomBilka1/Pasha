#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float y,z,a;
	a = 5;
	y = 1-(1./4.)*pow(sin(2*a),2)+cos(2*a);
	z = pow(cos(a),2)+pow(cos(a),4);
	cout<<y<<"\n"<<z;
	
	return 0;
}
