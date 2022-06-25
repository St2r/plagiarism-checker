"""
2022-03-26 20:36:15
AC
1.0
Accepted | 1 * (1 / 10) | 3 ms | 1700 KB
Accepted | 1 * (1 / 10) | 2 ms | 1636 KB
Accepted | 1 * (2 / 10) | 3 ms | 1700 KB
Accepted | 1 * (2 / 10) | 2 ms | 1628 KB
Accepted | 1 * (4 / 10) | 2 ms | 1660 KB

"""

#include <stdio.h>
int main()
{
	int j,k,l;
	double b=1;
	double c=1;
	scanf("%d",&j);
	{
		if(j<=30){
			for(k=1;k<=j;k++){
				for(l=k;l>0;l--){
					b=b/l;
				}
				c=c+b;
				b=1;
			}
			printf("%.14f\n",c);
		}
		else{
			for(k=1;k<=30;k++){
				for(l=k;l>0;l--){
					b=b/l;
				}
				c=c+b;
				b=1;
			}
			printf("%.14f\n",c);	
		}
		
	}
	return 0;
}