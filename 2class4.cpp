#include<iostream>
#include<string.h>
using namespace std;
class house{
	public:
	char house[500];
	int room;
};
int main()
{
	house s;
	cout<<"enter house name =";
	cin>>s.house;
	cout<<"enter room =";
	cin>>s.room;
	cout<<"house"<<s.house<<endl;
	cout<<"room"<<s.room<<endl;
	
	
}
