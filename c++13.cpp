#include<iostream>
#include<string.h>
using namespace std;

class derived;
class base
{
	protected:
		int rollno;
		char ph_no[10],name[20],address[50];
		public:
			void getdata(void);
			void showdata(void);
};
void base :: getdata(void)
{
	cout <<"Enter your name:";
	cin >>name;
	cout <<"\n enter your roll no.:";
	cin >>rollno;
	cout <<"\n enter your phone number:";
	cin >>ph_no;
	cout <<"\nenter your address:";
	cin >>address;
}
void base :: showdata()
{
	cout <<"\nname:\t"<<name;
	cout <<"\nrollno:\t"<<rollno;
	cout <<"\nphone number:\t"<<ph_no;
	cout <<"\naddress:\t"<<address;
}
class derived : public base
{
	private:
		int marks1,marks2,total;
		public:
			void getderived(void);
			void showderived(void);
};
void derived :: getderived(void)
{
	getdata();
	cout <<"\nenter  your first semester marks:";
	cin >>marks1;
	cout <<"\nenter your second semester marks:";
	cin >>marks2;
}
void derived :: showderived(void)
{
	total=marks1+marks2;
	cout <<"\nfirst semester marks:\t"<<marks1;
	cout <<"\nsecond semester marks:\t"<<marks2;
	cout <<"\n Total marks:\t"<<total;
}
/*int main()
{
	derived d;
	d.getderived();
	d.showderived();
	return 0;
}*/
int main()
{
	derived d;
	int ch;
	cout <<"\nenter your choice:";
	cin >>ch; 
	cout <<"\n1.create a database\n2.insert new entery\n3.delete an entry\n4.modify an entery\n5.exit";
	while(1)
	{
		if(ch==1)
		{
			break;
		}
	else if(ch==2)
		{
			d.getderived();
			break;
		}
		else if(ch==3)
		{
			break;
		}
		else if(ch==4)
		{
			break;
			
		}
		if(ch==5)
		{
			exit(0);
		}
	}
	return 0;
}
