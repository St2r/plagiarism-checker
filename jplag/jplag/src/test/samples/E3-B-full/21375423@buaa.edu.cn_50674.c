"""
2022-03-28 12:15:35
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1668 KB
Accepted | 1 * (35 / 100) | 2 ms | 1544 KB
Accepted | 1 * (60 / 100) | 2 ms | 1680 KB

"""

#include<stdio.h>

#define x first
#define y second
typedef long long LL;

void solve(int x){
	int res = 1;
	for(int i=2;i <= x/i;i++){
		if(x % i == 0){
			res += i;
			if(i * i != x) res += x/i;
		}
	}
	if(res == x) printf("YES\n");
	else printf("NO\n");
}

int main()
{
	
//	#define DEBUG
	#ifdef DEBUG	
	freopen("in.txt","r",stdin);
	#endif
	
	int n;
	scanf("%d",&n);
	
	while(n--){
		int x;
		scanf("%d",&x);
		
		solve(x);
	}
	
	return 0;
}