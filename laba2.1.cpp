#include<iostream>
#include<math.h>
using namespace std;
int main(){
	cout<<"Enter X1,Y1: ";
	int x1,y1;
	cin>>x1>>y1;
	cout<<"Enter Radius: ";
	int R;
	cin>>R;
	cout<<"Enter X,Y: ";
	int x,y;
	cin>>x>>y;
	(pow(x-x1,2)+pow(y-y1,2)<pow(R,2)) ? cout<<"Include" : (pow(x-x1,2)+pow(y-y1,2)==pow(R,2)) ? cout<<"On the circle": cout<<"Outside";
		
	return 0;
}
