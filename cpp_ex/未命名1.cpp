#include <iostream>
#include <fstream>
using namespace std;
const long maxn=20+5;
long min=1000000;
long n;
long w[maxn];
int main()
{

	fin>>n;
	for(int i=1;i<=n;i++)
		cin>>w[i];
	void search(long,long,long);
	search(1,0,0);
	cout<<min<<endl;
	return 0;
}	
void search(long step,long a,long b)
{
	
