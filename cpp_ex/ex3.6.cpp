#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double a,b,c;
	cout<<"please enter a,b,c:";
	cin>>a>>b>>c;
	if (a+b>c && b+c>a && c+a>b)
	{
		double s,erea;
		s=(a+b+c)/2;
		erea=sqrt(s*(s-a)*(s-b)*(s-c));
		cout<<setiosflags(ios::fixed)<<setprecision(4);
		cout<<"erea="<<erea<<endl;
	}
	else cout<<"it is not a trilateral!"<<endl;
	return 0;
}
		
