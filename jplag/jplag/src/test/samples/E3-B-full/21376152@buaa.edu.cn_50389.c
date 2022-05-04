"""
2022-03-29 23:11:23
WA
0.0
Wrong Answer | 0 * (5 / 100) | 1 ms | 1656 KB
Wrong Answer | 0 * (35 / 100) | 1 ms | 1568 KB
Wrong Answer | 0 * (60 / 100) | 3 ms | 1736 KB

"""

#include<stdio.h>
int main()
{
	int n,i,a,b=0;
	scanf("%d",&n);
while(n--){
	scanf("%d",&a);
	for(i=1;i<a;i++)
	 {
	 if(a%i==0)
	  b+=i;
     }
	if(a==b)
	printf("YES\n");
	else
	printf("NO\n"); 	
}
return 0;
}