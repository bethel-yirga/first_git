#include<iostream>
#include<iomanip>
using namespace std;


int main()
{

    int size;
    cout<<"please enter table size:";
    cin>>size;


cout<<"=======MULTIPLICATION TABLE========"<<endl;

// loop to print the first column
for(int i=1;i<=size;i++)
    cout<<setw(8)<<i;
    cout<<endl;

// Row and product

for(int j=1;j<=size;j++)// row
{
    cout<<setw(2)<<j;
    for(int k=1;k<=size;k++)// column
      cout<<setw(7)<<j*k;
    cout<<endl;

}
    return 0;
}
