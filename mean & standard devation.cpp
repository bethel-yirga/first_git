#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main ()
{
	double sum=0;
	float mean,sd,sumsqr,i;
	for( i=0;i<=100;i++)
	sum=sum+i;
	mean=sum/100;
	cout<<mean<<endl;
	sumsqr=(i-mean);
	sd= (pow(sumsqr,2))/99;
	cout<<sd;
	
	
	
	
	
	
	
}
