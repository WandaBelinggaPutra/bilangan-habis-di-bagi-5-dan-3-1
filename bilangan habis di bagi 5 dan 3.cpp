#include<iostream>
using namespace std;

int main()
{
int a;

cout<<"menentukan suatu bilangan habis di bagi 5 dan 3"<<endl;
cout<<"masukan nilai"<<endl;
cin>>a;

if(a%3==0 && a%5==0)
	cout<<"merupakan bilangan yang habis di bagi 5 dan 3"<<endl;
	else
		cout<<"merupakan bilangan yang tidak habis di bagi 5 dan 3"<<endl;
	return 0;
}
