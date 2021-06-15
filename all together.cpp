#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	here:
	int a,a1;
	cout<<"choose the question"<<endl;
	cout<<endl;
	cout<<"1. unit conversion"<<endl;
	cout<<"2. To check file size"<<endl;
	cout<<"3. setfill"<<endl;
	cout<<"4. fraction"<<endl;
	cout<<"5. pound"<<endl;
	cout<<"6. mid point"<<endl;
	cout<<"7. prime no"<<endl;
	cout<<endl;
	cin>>a;
	switch(a){
		case 1:
				double x,k,c;

	cout<<"1. Mile to Kilometer\n";
	cout<<"2. Gallon to Liter\n";
	cout<<"3. Pound to Kilogram\n";
	cout<<"4. Quart to Liter\n";	
	cout<<"5. Inch to Centimeter\n";
    cout<<endl;
	cout<<"choose conversion units\n";
	cout<<endl;

	cin>>k;
	cout<<endl;
	if (k==1)
	{
		cout<<"Enter mile value\n";
	cin>>c;
	x= (1.61)*c;
	cout<<"The value in kilometer is= "<<x<<"km"<<endl;
}
	else if (k==2)
	 	{
	 	cout<<"Enter Gallon value\n";
	cin>>c;
	x= (3.78541)*c;
	cout<<"The value in liter is= "<<x<<"l"<<endl;
}
	else if (k==3)
		{
		cout<<"Enter Pound value\n";
	cin>>c;
	x= (0.45)*c;
	cout<<"The value in kilogram is= "<<x<<"kg"<<endl;
}
	else if (k==5)
		{
		cout<<"Enter inch value\n";
	cin>>c;
	x= (2.54)*c;
	cout<<"The value in centimeter is= "<<x<<"cm"<<endl;
}
	else if (k==4)
	{
		cout<<"Enter quart value\n";
	cin>>c;
	x= (0.95)*c;
	cout<<"The value in liter is= "<<x<<"l"<<"l"<<endl;
					
}

 break;
 case 2:
 	int a;
	cout<<"Enter the file size in byte"<<endl;
	cin>>a;
	cout<<"It will take"<<endl;
	cout<<(((a/960)/3600))/24<<"days";
	break;
	case 3:
	cout<<"Year"<<setw(12)<<setfill('.')<<"Population"<<endl;
	cout<<"1990"<<setw(12)<<setfill('.')<<"135"<<endl;
	cout<<"1991"<<setw(12)<<setfill('.')<<"7290"<<endl;
	cout<<"1992"<<setw(12)<<setfill('.')<<"11300"<<endl;
	cout<<"1993"<<setw(12)<<setfill('.')<<"16200"<<endl;
break;
case 4:
	int r,t,f,h,j,n;
double s;
char dummychar;
cout <<" Enter the first fraction:"<<endl;         
cin>>r>>dummychar>>t; 
cout<<"Enter the second fraction:"<<endl;
cin>>f>>dummychar>>h;
cout <<"The sum is "<<(r*h)+(t*f)<<dummychar<<t*h<<endl;
	break;
case 5:
		float pound,shelling,pence,u,q,z;
	cout<<"Enter value in pound:"<<endl;
	cin>>pound;
	cout<<"Enter value in shelling:"<<endl;
	cin>>shelling;
	cout<<"Enter value in pence"<<endl;
	cin>>pence;
	u=(shelling*12)+pence;
	q=u/240;
	z=pound+q;
	cout<<"Decimal pound: "<<z<< '\x9c';
	break;
case 6:
		double x1,y1,x2,y2,m,xm,ym;
	char left_paren, comma, right_paren;
  cout<<"Enter the first point: ";
   cin >> left_paren >> x1 >> comma >> y1 >>right_paren;
   cout<<endl;
cout<<"Enter the second point: ";
   cin >> left_paren >> x2 >> comma >> y2 >>right_paren;
   cout<<endl;
   xm=(x1+x2)/2;
   ym=(y1+y2)/2;
   cout<<"The mid point of "<<left_paren << x1 << comma << y1 <<right_paren<<" and "<<left_paren << x2 << comma << y2 << right_paren<< " is "<<left_paren << xm << comma << ym <<right_paren;
break;
case 7:
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

break;

}
cout<<endl;
cout<<"enter 1 to continue or any key to exit\n";
cin>>a1;
if (a1==1)

 goto here;
 else 
 cout<<"thank you, good bye\n";

}
