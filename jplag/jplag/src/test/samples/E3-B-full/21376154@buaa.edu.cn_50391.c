"""
2022-03-26 14:36:21
AC
1.0
Accepted | 1 * (5 / 100) | 7 ms | 1632 KB
Accepted | 1 * (35 / 100) | 5 ms | 1652 KB
Accepted | 1 * (60 / 100) | 4 ms | 1632 KB

"""

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#define eps 1e-10
int a[100];
int main()
{
	int n,s=0,j=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
		
	for(int k=0;k<n;k++){
			for(j=1;j<a[k];j++)
				if((a[k] % j)==0)
					s=s+j;
				if(s==a[k])
					printf("YES\n");
				else
					printf("NO\n");
		s=0;
		j=0;

}
	
	return 0;
}