file1.cpp
#include <iostream>
using namespace std;
int main()
{
	extern int max(int,int);
	int a,b;
	cin>>a>>b;
	cout<<max(a,b)<<endl;
	return 0;
}
file2.cpp
int max(int x,int y)
{
	int z;
	z=x>y?x:y;
	return z;
}
	
