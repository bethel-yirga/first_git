/*To make students Grade System*/
#include<iostream>
using namespace std;

int main ()

{

char A,B,C,D,F;//Declaring the grade variables

double c1,c2,c3,mark;
cout<<"Enter Your Quiz Result= "<<endl;
cin>>c1;
cout<<"Enter Your Mid-Exam Result= "<<endl;
cin>>c2;
cout<<"Enter Your Final Exam Result= "<<endl;
cin>>c3;
mark=c1+c2+c3;//To get all mark result for the grade
cout<<endl;
cout<<"The Total Mark is="<<mark<<endl;
{
 if(mark>=90&&mark<=100)
 cout<<"Your Grade Is="<<'A'<<endl;
 else if(mark>=70&&mark<90)
 cout<<"Your Grade Is="<<'B'<<endl;
 else if(mark>=60&&mark<70)
 cout<<"Your Grade Is="<<'C'<<endl;
 else if(mark>=50&&mark<60)
 cout<<"Your Grade Is="<<'D'<<endl;
 else if(mark<50)
 cout<<"Your Grade Is="<<'F'<<endl;
 else
 cout<<"No Grade"<<endl;
 }
return 0;
system ("pause");

}

