"""
2022-03-29 20:12:38
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1628 KB
Accepted | 1 * (35 / 100) | 2 ms | 1540 KB
Accepted | 1 * (60 / 100) | 4 ms | 1544 KB

"""

#include <stdio.h>
int main()
{
	int i,s,n,sum=0;
	scanf("%d",&n);
	while (n--){
		sum=0;
		scanf("%d\n",&s);
			for(i=1;i<s;i++){
		if(s%i==0)
		sum+=i;} 
		if(sum==s)
	printf("YES\n");
	else
	 printf("NO\n");

	
	}
	 return 0;
}