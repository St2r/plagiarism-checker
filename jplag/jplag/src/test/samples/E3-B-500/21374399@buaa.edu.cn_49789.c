"""
2022-03-29 18:13:30
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 4 ms | 1632 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
int s,n,a;
scanf("%d",&n);
for(int i=0;i<n;i++){
scanf("%d",&a);
s=0;
for(int j=1;j<a;j++){
	if(a%j==0){
	s=s+j;
	}
}
if(s==a){
	printf("YES\n");
}
else{
	printf("NO\n");
}
}
	return 0;
}