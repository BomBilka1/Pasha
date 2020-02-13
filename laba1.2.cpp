#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int lot_n,lot_p;
	float summ,price_p,price_n;
	
	cout<<"Ptice notebook= ";
	cin>>price_n;
	cout<<"Lot notebook= ";
	cin>>lot_n;
	cout<<"Price_pen= ";
	cin>>price_p;
	cout<<"Lot_pen";
	cin>>lot_p;
	
	summ=price_n*lot_n+price_p*lot_p;
	cout<<"Value of purchase: "<<int(summ)<<" rub "<<((summ-int(summ))*100)<<" kop";
	return 0;}
