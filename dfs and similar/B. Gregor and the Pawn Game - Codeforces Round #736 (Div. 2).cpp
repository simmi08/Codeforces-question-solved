//  https://codeforces.com/problemset/problem/1549/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		bool vis[n] = {false};
		int result = 0;
		string enemy, pawn;
		cin >> enemy >>pawn;
		for(int i=0;i<n;i++)
		{
			if(pawn[i]=='1')
			{
				if(i-1>=0 && !vis[i-1] && enemy[i-1]=='1')
				{
					result++;
					vis[i-1] = true;
				}
				else if(!vis[i] && enemy[i]!='1')
				{
					result++;
					vis[i] = true;
				}
				else if(i+1<n && !vis[i+1] && enemy[i+1]=='1')
				{
					result++;
					vis[i+1] = true;
				}
			}
		}
		cout << result <<"\n";
	}
}
