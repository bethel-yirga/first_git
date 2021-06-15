#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c;
	float root1,root2,imaginery;	
	float d;
	cout<<"plese enter a,b and c"<<endl;
	cin>>a>>b>>c;
	d=(b*b)-(4*a*c);
	switch(d>0)
	{
	case 1:
	root1=(-b+sqrt(d))/(2*a);
	root2=(-b-sqrt(d))/(2*a);
	cout<<"the roots of the given quadratic euation is" << root1<<"and"<< root2;
	break;
	case 0:
		switch(d<0)
		{
		case 1:
    	cout<<"have no real root";
     	break;
	
    	case 0:
	    root1=root2=-b/(2*a);
     	cout<<root1;
      	break;
        }
	break;
}
}
