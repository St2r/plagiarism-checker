"""
2022-03-27 20:10:54
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1624 KB
Accepted | 1 * (1 / 10) | 2 ms | 1628 KB
Accepted | 1 * (2 / 10) | 12 ms | 1604 KB
Accepted | 1 * (2 / 10) | 2 ms | 1536 KB
Accepted | 1 * (4 / 10) | 2 ms | 1628 KB

"""

#include <stdio.h>
int main()
{
    int i,n,p;
    long long int jiec=1;
    double epi=1;
    scanf("%d",&n);
    for(i=1;i<n+1;i++){
        for(p=1;p<=i;p++){
            jiec=jiec*p;
        }
        epi=epi+1.0/jiec;
        //printf("%lld\n",jiec);
        if(1.0/jiec<1e-14){
        	break;
		}
        jiec=1;
    }
    printf("%.14f",epi);
    return 0;
}