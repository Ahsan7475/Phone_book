//Ahsan Ali
//Asad Ali
//Ameer Hamza




#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
#include<string.h>
#include<windows.h>
int checkname(string name)
{
    	ifstream ifs("phone.txt");
		char n[80];
		while(1)
		{
			ifs.getline(n,80);
			if(ifs.eof())
			break;
			if(n==name)
			{
			cout << "NAME NO ALREADY ASSIGNED" << endl;
			cout << "PRESS ANY KEY TO RE ENTER" << endl;
			getch();
			return 0;
			}
		}
		ifs.close();
	return 1;
}
void loadingbar()
{	system("Color 0e");
	cout<<"\n\n\n\n";
	cout<<"\t\tloading";
	char x=219;
	for(int i=0;i<=35;i++)
	{
	cout<<x;
	if(i<=10)
	Sleep(300);
	if(i>10 && i<=20)
	Sleep(150);
	if(i>=20)
	Sleep(25);	
	}
	
	system("cls");
	cout<<"\n\n";
	cout<<"\t\t|----Hi Welcome To Semester Final Project----|\t\t\t\t";	
	
}

void add()
{
	system("cls");
	string no;
	string name;
	string email;
	string address;
	ofstream ofs("phone.txt",ios_base::app);
    cout<<"ENTER DATA OF PHONE"<<endl;
     cout<<"ENTER NAME\t";
	cin>>name;
    cout<<"ENTER PHONE NO\t";
    cin>>no;
  
	
	cout<<"ENTER EMAIL\t";
	cin>>email;
	cout<<"ENTER ADDRESS\t";
	cin>>address;
	int check=checkname(name);
	if(check==0)
{
	add();
}



ofs<<name<<endl;
ofs<<no<<endl;

ofs<<email<<endl;
ofs<<address<<endl;

cout << "DATA ADDED SUCCESSFULLY" << endl;
getch();
ofs.close();
}

searchbyName()
	{
		system("cls");
		string name;
		cout<<"ENTER NAME\t";
		cin>>name;
		int i=1;
		ifstream ifs("phone.txt");
		char n[80];
		char a[80];
		while(1)
		{
			ifs.getline(n,80);
			if(ifs.eof())
			break;
			if(n==name)
			{
				cout<<"NAME="<<n<<endl;
				for(i=1;i<=3;i++)
				{
					ifs.getline(a,80);
					if(i==1)
					cout<<"PHONE="<<a<<endl;
					if(i==2)
					cout<<"EMAIL="<<a<<endl;
					if(i==3)
					cout<<"ADDRESS="<<a<<endl;
					
				}
	
			}
		
			
		}
			ifs.close() ;
			getch();
	}

int main()

{
	loadingbar();
    char ch;
    while(1) 
	{
		system("cls");
    cout<<"        |-----------------------------------------------------------|"<<endl;
	cout<<"        |*****************Phone Book Application********************|"<<endl;
	cout<<"        |-----------------------------------------------------------|"<<endl;
	cout<<"        |-----------------------------------------------------------|"<<endl;
	cout<<"        |------------------------Menu Bar---------------------------|"<<endl;
	cout<<"        |               [1]. Entering New Number:                   |"<<endl;
	cout<<"        |               [2]. Enter name for search :                |"<<endl;
	cout<<"        |               [3]. Exit.                                  |"<<endl;
	cout<<"        |-----------------------------------------------------------|"<<endl;
	cout<<"        |-----------------------------------------------------------|"<<endl;
        ch=getche();
        cout<<endl;
        if(ch=='1')
        {
    	 add();
        }
        else if(ch=='2')
        {
	   	    searchbyName();
        }
        else if(ch=='3')
        {
	         break;
        }
        else
        {
            cout<<"INVALID INPUT"<<endl;
        }
}
    getch();
return 0;
}
