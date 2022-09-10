#include <iostream>

using namespace std;
//program to print a table of any number using for loop while Taking input from user.
int main()  
{
	int num; //variable declarationn
	cout<<"\n\n\t\tTABLE FOR ANY NUMBER\n\n";
	cout<<"*******************************************************";
	cout<<"\n\n\t\tEnter the number for table: "; cin>>num; //input from user
	for (int i=1; i<=10; i++) //loop for repeating values 10 times for a table of any no. upto 10
	cout<<"\t\t\t"<<num<<" * "<<i<<" = "<<num*i<<endl;
	
	return 0;
}
