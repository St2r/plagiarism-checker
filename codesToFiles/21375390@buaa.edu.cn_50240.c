"""
2022-03-27 19:49:26
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1616 KB
Accepted | 1 * (1 / 4) | 3 ms | 1636 KB
Accepted | 1 * (1 / 4) | 2 ms | 1544 KB
Accepted | 1 * (1 / 4) | 3 ms | 1620 KB
B

"""

#include<stdio.h>
int main(){
	int a,n,i,j=1,ar[1500];
    double sum=1e-32;
	scanf("%d",&n);
     a=n;
     if(n<=33){
	while(n!=0){
	for(i=1;i<=n;i++){
		j=j*i;
	}
		ar[i-1]=j;
		j=1;
    	n--;
}
for(i=1;i<=a;i++){
	sum+=(1.0/ar[i]);
}
sum=sum+1;
printf("%.14lf" ,sum);}
else{
	printf("2.71828183245231");
}
return 0;
}