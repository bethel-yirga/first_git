#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main ()
{   
double sum=0;
double temp;
int n, t1=0 ,t2=1;
for(int i=1;i<=8;i++)
  if(i=1)
	cout<<t1<<" ";
  else if(i=t2)
	cout<<t2<<" ";
  else
		n=t1+t2;
		t1=t2;
		t2=n;
		cout<<n;
	
	
}
