
//A program That changes English Units to Metric Units

#include <iostream>
using namespace std;

int main()
{
	int met;//Declaring The English units we get from the user
double a,b;
cout<<"1.To change gallons to liters"<<endl;
cout<<"2.To change miles to kilometers"<<endl;
cout<<"3.To change feet to meter"<<endl;
cout<<"4.To change yard to meter"<<endl;

cin >> met;
switch(met)
{
case 1:
cout <<"Please Enter Gallon:";
cin >> a;
b= a/0.264;//formula for changing Gallon To Litter
cout << b<<"liter";
break;
case 2:
cout <<"Please Enter Mile:";
cin >> a;
b= a*1.609;//formula for changing Mile to KM
cout << b<<"kilometer";
break;
case 3:
cout <<"Please Enter Feet:"<<endl;
cin >> a;
b= a*0.304;//formula for changing Feeet into Meter
cout << b<<"meter";
break;
case 4:
cout <<"Please Enter Yard:";
cin >> a;
b= a*0.914;//formula for changing Yard to meter
cout << b<<"meter";
break;
default:
cout <<"invalid input"<<endl;//If the user inputs invalid input
break;
}
return 0;
system ("pause");
}