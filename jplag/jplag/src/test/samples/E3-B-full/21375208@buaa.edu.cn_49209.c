"""
2022-03-26 10:48:11
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1684 KB
Accepted | 1 * (1 / 4) | 2 ms | 1632 KB
Accepted | 1 * (1 / 4) | 2 ms | 1580 KB
Accepted | 1 * (1 / 4) | 11 ms | 1588 KB

"""

#include<stdio.h>

int main()
{    

    int n,a[101];
    scanf("%d",&n);
    
    int i,j,k=0,m;
    
    for(i=1;i<=n;i++)
    {
	scanf("%d",&a[i]);
}
    for(m=1;m<=n;m++){
	k=0；
    for(j=1;j<a[m];j++)
{
	if(a[m]%j==0)
    k+=j;
}
    if(k==a[m])
    printf("Yes\n");
    else
    printf("No\n");

}


   

 	return 0;