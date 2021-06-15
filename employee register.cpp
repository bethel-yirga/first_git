#include <iostream>
#include <string.h>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>
using namespace std;
// declare five menu
void menu();
void registr();
void list();
void search();
void replace();
void delet();
void clrscr();
void sortList();
int n,Id,counter=1;
string fname[20];
string lname[20];
string sex[20];
string city[20];
string status[20];
int age[20];
int phone[20];
int experience[5];
char option;
int main()
{system("color 97");
 	char user_name[]={"BETTY"};
	char password[]={"1234"};
	char usr_name[5];
	char pass[4];
	cout<<"\n\n\n\t\t\tuser name ";
	gets(usr_name);
	cout<<"\n\n\t\t\tpassword ";
	gets(pass);
	if(strcmp(user_name,usr_name)==0)
	{
	if(strcmp(password,pass)==0)
		 menu();
	else
	{
		cout<<"wrong user name or password\n";
		cout<<"please try again\n";
	}

	}



}

void menu()
{ clrscr();
	char ch;
cout<<endl<<endl;
cout<<"\t\twelcome to employee registration system\n\n";
cout<<endl<<endl;
cout<<"\t\tpress any key to register new people\n";
cin>>ch;
clrscr();


 registr();

clrscr();
cout<<"enter any key to show the data\n";

list();

}

// register option
void registr()
{ clrscr();

	 cout<<endl<<endl;

	cout<<"\t\thow many people do you want to enter\n";
	cout<<"\n";
	cin>>n;
	for(int i=1;i<=n;i++)

	{
		cout<<"\t\tenter number "<<counter<<"\n";
		cout<<"\t\tFirst name :";
		cin>>fname[counter];
		cout<<"\t\tLast name :";
		cin>>lname[counter];
		cout<<"\t\tsex :";
		cin>>sex[counter];
		cout<<"\t\tage :";
		cin>>age[counter];
		cout<<"\t\tphone number :";
		cin>>phone[counter];
		cout<<"\t\thome town :";
		cin>>city[counter];
		cout<<"\t\teducational status :";
		cin>>status[counter];
		cout<<"\t\twork experience :";
		cin>>experience[counter];
		counter++;

	}

}
// list menu
void list()
{ clrscr();
cout<<endl<<endl;
 cout<<setw(8)<<"ID"<<setw(15)<<"First Name"<<setw(15)<<"Last Name"<<setw(10)<<"Age"<<setw(10)<<"Sex"<<setw(15)<<"phone number"<<setw(15)<<"HomeTown"<<setw(20)<<"EducationalStatus"<<setw(20)<<"experience"<<endl;
cout<<"\n******************************************************************************************************************************\n";
     for(int i=1;i<counter;i++)
     {
             cout<<setw(8)<<i<<setw(15)<<fname[i]<<setw(15)<<lname[i]<<setw(10)<<age[i]<<setw(10)<<sex[i]<<setw(15)<<phone[i]<<setw(15)<<city[i]<<setw(20)<<status[i]<<setw(20)<<experience[i];
             cout<<endl;


     }
     cout<<endl<<endl<<endl;
	cout<<"\t\tpress any key to continue\n";
	cin>>option;
	search();
}
//search enter data
void search()
{

	clrscr();
	cout<<endl<<endl;
	cout<<"\t\tpress 1 to add another data\n";
	cout<<"\t\tpress 2 to search entered data \n";
	cout<<"\t\tpress 3 back to homepage\n";
	cout<<"\t\tpress 4 to sort list\n";
	cout<<"\t\tpress 5 to exit\n";

	cin>>option;
	if(option=='2')
	{
	cout<<"\t\tplease enter id number \n";
	 cin>>Id;
if(Id>=counter)
{
	cout<<"sorry your data is incorrect\n";
	cout<<"please enter the correct data\n";
	cout<<endl<<endl;
	cout<<"press any key to continue...\n";
	cin>>option;

	search();
}
	 cout<<endl<<endl;
	 	cout<<"\tFirst name :"<<fname[Id]<<endl;
	 	cout<<"\tLast name : "<<lname[Id]<<endl;
	 	cout<<"\tSex :"<<sex[Id]<<endl;
	 	cout<<"\tAge :"<<age[Id]<<endl;
	 	cout<<"\tphone number :"<<phone[Id]<<endl;
        cout<<endl<<endl;
        	cout<<endl<<endl;
 cout<<"\t\tplease select an option\n";
        cout<<"\t\tpress 1 to replace the older data\n";
        cout<<"\t\tpress 2 to delete the data\n";
        cout<<"\t\tpress 3 back to the homepage\n";
        cin>>option;
        if(option=='1')
        {
        	replace();
		}
		else if(option=='2')
		{
			delet();
		}
		else if(option=='3')
		{
			list();
		}

}

        else if(option=='1')
  {
        	registr();
        	list();
		}

		else if(option=='3')
{
			list();
		}
		else if(option=='4')
		{
			sortList();
		}
	else
	{
		system("pause");
	}

  }

//replace older data
void replace()
{
	clrscr();
	cout<<endl<<endl;
	cout<<"\tFirst name :";
		cin>>fname[Id];
		cout<<"\tLast name :";
		cin>>lname[Id];
		cout<<"\tsex :";
		cin>>sex[Id];
		cout<<"\tage :";
		cin>>age[Id];
		cout<<"\tphone number :";
		cin>>phone[Id];
		cout<<"\thome town :";
		cin>>city[Id];
		cout<<"\teducational status :";
		cin>>status[Id];
		cout<<"\twork experience :";
		cin>>experience[Id];
		cout<<endl<<endl;
	cout<<"\t\tpress any key to continue...\n";
	list();

}
//to delete older data
void delet()
{
clrscr();
fname[Id].erase();
lname[Id].erase();
sex[Id].erase();
status[Id].erase();
experience[Id]=0;
phone[Id]=0;
age[Id]=0;
city[Id].erase();
list();

}
void sortList()
{
  list();

}




void clrscr()
{
     system("cls");
}







