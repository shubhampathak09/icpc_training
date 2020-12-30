//apple division

#include<bits/stdc++.h>
using namespace std;


bool subsetsum(int a[],int n,int sum)
{
	
	int dp[n+1][sum+1];
	
	for(int j=0;j<=sum;j++)
	dp[0][j]=0;
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
	//dp[0][0]=1;
}

int main()
{
	
	int a[]={0,2,4};
	
	
	int n=sizeof(a)/sizeof(a[0]);
	int sum=0;
	for(int i=0;i<n;i++)
	sum+=a[i];
	
	int diff=INT_MAX;
	
	for(int j=sum/2;j>=0;j--)
	{
		if(subsetsum(a,n,j))
		{
			diff=sum-2*j;
			break;
		}
	}
	cout<<diff;
}
