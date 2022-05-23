#include<cstdio>
#include<iostream>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<cstring>
#include<cstdlib>
#include<vector>
#include<queue>
#include<set>
#include<map>
using namespace std;

int T,A,B,sa,sb;

void solve()
{
	if(A==0 && B==0) printf("0\n");
	else if(A==0) printf("%d\n",-B);
	else if(B==0) printf("%d\n",A);
	else if(B==1) printf("%d\n",A-3);
	else if(A==1) printf("%d\n",-(B+1));
	else printf("%d\n",A-B-2);
}

int main()
{
	freopen("my.in","r",stdin);
	freopen("my.out","w",stdout);
	
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d",&A,&B);
		solve();
	}
	
	return 0;
}
