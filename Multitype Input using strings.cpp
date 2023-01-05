#include<iostream>
#include<string>
using namespace std;
int main()
{
	string Full_name, Roll_number, Address;
	cout<<"HELLO..."<<endl;
	cout<<"Enter YOur Full name ";
	getline(cin,Full_name);           // for single line
	cout<<"\nEnter your Roll Numbner ";
	cin>>Roll_number;
	cout<<"\nEnter your address and end it with full stop ";
	getline(cin,Address,'.');
	cout<<"\nName: "<<Full_name<<"\nRoll Number: is "<<Roll_number<<"\nAddress "<<Address;
	
	return 0;
}
