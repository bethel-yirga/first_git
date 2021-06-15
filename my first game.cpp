#include<iostream>
#include <cstdlib>// random number
using namespace std;

int main()
{

    int rd, number;

    char ch;

do{
int attmpt=0;
    bool found=false;
    rd= rand()%15+1;


    while(!found  && attmpt<3)

    {

cout<<"=======Game rules========"<<endl;

cout<<++attmpt<<". trial: ";
cin>>number;
if( number>rd)
cout<<"Wrong guess, too high!"<<endl;
else if (number<rd)
    cout<<"Wrong guess, too low!"<<endl;
else
{
    found=true;
    cout<<"Congrats ! you won!!"<<endl;

}

    }

    if(!found)// if computer won
        {

        cout<<"I won!!!!"<<endl;
        cout<<"The number was"<<rd<<endl;
        }


        cout<<"Play again? (y/n)";
        cin>>ch;

} while(ch!='n');

return 0;

}
