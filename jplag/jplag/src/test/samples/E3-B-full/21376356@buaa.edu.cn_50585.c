"""
2022-03-26 23:17:43
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 2 ms | 1704 KB
Accepted | 1 * (60 / 100) | 4 ms | 1652 KB

"""

#include <stdio.h>
int main()
 {
 	int a[100]={0},s[100]={0};
 	int n,i,x;
 	scanf("%d", &n);
 	for(i=0;i<n;i++)
 	{
 		scanf("%d", &a[i]);
	 }
	for(i=0;i<n;i++)
	{
		for(x=1;x<a[i];x++)
		{
			if(a[i]%x==0)
			{
				s[i]+=x;
			}
		}
	}
	 	for(i=0;i<n;i++)
 	{
 		if(a[i]==s[i])
 		{
 			printf("YES\n");
		 }
		 else{
		 	printf("NO\n");
		 }
	 }
    return 0;
}