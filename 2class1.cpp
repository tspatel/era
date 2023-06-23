#include<iostream>
#include<string.h>
using namespace std;
class Distance{
	public:
	int feet;
	int inch;
};
int main()
{
	Distance D,D1,t;
	cout<<"enter 1 distance :"<<endl;
	cout<<" 1.enter feet =";
	cin>>D.feet;
	cout<<" 2.enter inch =";
	cin>>D.inch;
	
	cout<<"enter 2 distance : "<<endl;
	cout<<" 1.enter feet =";
	cin>>D1.feet;
	cout<<" 2.enter inch =";
	cin>>D1.inch;
	
	t.feet = D.feet+D1.feet;
	t.inch = D.inch+D1.inch;
	if(t.inch>12)
	{
		++t.feet;
		t.inch=12;
	}
	cout<<"sum of distance ="<<t.feet<<"feet"<<t.inch<<"inch"<<endl;
	cout<<endl;
	return 0;
}
