"""
2022-03-29 19:07:31
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1660 KB
Accepted | 1 * (35 / 100) | 1 ms | 1692 KB
Accepted | 1 * (60 / 100) | 2 ms | 1660 KB

"""

#include <stdio.h>
int main()
{int n,s=0;int a;
scanf("%d\n",&n);
while (scanf("%d",&a)!=EOF){
	
	for(int i=1;i<a;i++){
		
		if (a%i==0){
			s+=i;}}
	
			if(s==a){s=0;
				printf("YES\n");
			}
			else{s=0;
				printf("NO\n");}
		
	
}
return 0;
}