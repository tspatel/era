#include<iostream>
#include<string.h>
using namespace std;
class student{
	private:
	int id;
	char name[50];
	int age;
	
};

int main()
{
	student s;
	cout<<"enter id =";
	cin>>s.id;
	cout<<"enter name =";
	cin>>s.name;
	cout<<"enter age =";
	cin>>s.age;
	cout<<"id="<<s.id<<endl;
	cout<<"name="<<s.name<<endl;
	cout<<"age="<<s.age<<endl;
}
