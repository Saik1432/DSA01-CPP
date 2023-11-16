#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"";
	cin>>n;
	for (int i=0;i<=n;i++)
	{
		string gap = "";
		for (int j=0;j<=i;j++)
		{
			gap = gap + "* ";
		}
		cout<<gap<<endl;
	}
	return 0;
}

