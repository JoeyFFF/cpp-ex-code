#include <iostream>
using namespace std;
int main()
{
	int a,b;
	int *point_1,*point_2;
	a=100;b=10;
	point_1=&a;
	point_2=&b;
	cout<<a<<" "<<b<<endl;
	cout<<*point_1<<" "<<*point_2<<endl;
	return 0;
}
