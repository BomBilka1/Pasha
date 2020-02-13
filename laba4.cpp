#include<iostream>
#include<math.h>
using namespace std;
long double fact(int N)
{
	if(N < 0)
		return 0;
	if (N == 0)
		return 1;
	else
		return N * fact(N - 1);
}
int main(){
	int n=1;
	double e=0.0001, a, an;
	do
	{
		an = a;
		n++;
		a = fact(n)/3*pow(n,n);
	}
	while (abs(an-a)<=e);
	cout<<"Postuslove\n";
	cout<<"an = "<<an<<"\n";
	cout<<"an-1 = "<<a<<"\n";
	cout<<"n= "<<n<<"\n";	
	n=1, a=0;
	
	while (abs(an-a)<=e)
	{
		an = a;
		n++;
		a = fact(n)/3*pow(n,n);	
	}
	cout<<"\nPreduslovie\n";
	cout<<"an = "<<an<<"\n";
	cout<<"an-1 = "<<a<<"\n";
	cout<<"n= "<<n<<"\n";	
	
	return 0;
}
