//avarage.cpp
//a programe to display a student grade 
#include<iostream>
using namespace std;
int main ()
{
       char A,B,C,D,F; //character declaration
       float q,m,f,mark; //variable declaration
       
       cout<<"enter quiz result: ";
            cin>>q;
       cout<<"enter mid result: ";
            cin>>m;
       cout<<"enter the final exam score: ";
            cin>>f;
        mark=q+m+f;  
cout<<"total mark = "<<mark<<endl;
       {
              if(mark>=90&&mark<=100)
                      cout<<"Grade => "<<'A';
              else if(mark>=70&&mark<90)
                      cout<<"Grade => "<<'B';
              else if(mark>=60&&mark<70)
                      cout<<"Grade => "<<'C';
              else if(mark>=50&&mark<60)
                      cout<<"Grade => "<<'D';
               else if(mark<50)
                    cout<<"Grade => "<<'F';
               else
                    cout<<"Grade is incompleted";
       }
      return 0;

}

