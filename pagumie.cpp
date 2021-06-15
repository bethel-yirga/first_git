#include<iostream>
using namespace std;
int main()
{
	
		int year;
	cout<<"enter a year to check if pagumie is 6 or 5"<<endl;
	cin>>year;
	if(year%300==0)
	cout<<year<<"  pagumie is 6"<<endl;
	else if(year%100==0)
	cout<<year<<" pagumie is 5"<<endl;
	else if(year%3==0)
	cout<<year<<" pagumie is 6"<<endl;
	else
	cout<<year<<"  pagumie is 5"<<endl;
	return 0;
	
	
	
	
	
	
}
