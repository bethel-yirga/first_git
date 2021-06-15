#include <iostream>
using namespace std;
int main() {
	int e,g=0;
	cout<<"enter the number to check prime or composite"<<endl;
	cin>>e;
	for (int a=1; a<=e; a++)
	if (e%a==0)
{g++;}
	if (g==2)
	{
		cout<<e<<" is prime number"<<endl;
	} else
	{
		cout <<e<<" is composite number "<<endl;
	}
}
