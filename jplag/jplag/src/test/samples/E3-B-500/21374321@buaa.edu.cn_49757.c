"""
2022-03-28 20:02:55
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1648 KB
Accepted | 1 * (35 / 100) | 1 ms | 1576 KB
Accepted | 1 * (60 / 100) | 2 ms | 1732 KB

"""

#include <stdio.h>
int main()
{
	int n;

	scanf("%d",&n);

	while(n--){
        int x;

        scanf("%d",&x);

        int i,sum=0;

        for(i=1;i<x-1;i++){

           if(x%i==0){
                sum+=i;

           }

        }

        if(sum==x){
            printf("YES\n");
        }

        else{
            printf("NO\n");
      }

	}

	return 0;

}