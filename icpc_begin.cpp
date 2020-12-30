// just a test file to check repos set up correvtly or not
#include<bits/stdc++.h>
using namespace std;

int subsetsum(int a[],int n,int sum)
{
	
	int dp[n+1][sum+1];
	
	for(int i=0;i<=sum;i++)
	dp[0][i]=0;
	for(int i=0;i<=n;i++)
	dp[i][0]=1;
	
	for(int i=1;i<=n;i++)
    {
    	for(int j=1;j<=sum;j++)
    	{
    		if(a[i-1]<=j)
    		{
    			dp[i][j]=dp[i-1][j]||dp[i-1][j-a[i-1]];
			}
			else
			dp[i][j]=dp[i-1][j];
		}
	}
	return dp[n][sum];
}

int main()
{
	
	int a[]={1,2,3};
	int sum=7;
	
	int n=sizeof(a)/sizeof(a[0]);
	
	cout<<subsetsum(a,n,sum);
}
