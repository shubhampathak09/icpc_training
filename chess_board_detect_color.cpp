#include<bits/stdc++.h>
using namespace std;

//g5

int main()
{
	
	string s;
	
	cin>>s;
	
	char x=s[0];
	int  y=s[1]-'0';
	
	if(x=='a'||x=='c'||x=='e'||x=='g')
	{
		if(y&1)
		{
			cout<<s<<" is white";
		}
		else
		{
			cout<<s<<" is black";
		}
	}
	else
	{
		if(y&1)
		{
			cout<<s<<" is Black";
		}
		else
		{
			cout<<s<<" is white";
		}
	}
	
}
