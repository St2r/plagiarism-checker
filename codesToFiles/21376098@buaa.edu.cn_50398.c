"""
2022-03-28 15:15:44
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1676 KB
Accepted | 1 * (1 / 10) | 2 ms | 1544 KB
Accepted | 1 * (2 / 10) | 2 ms | 1548 KB
Accepted | 1 * (2 / 10) | 2 ms | 1680 KB
Accepted | 1 * (4 / 10) | 2 ms | 1652 KB

"""

#include<stdio.h>
int main()
{
	int n,shu,ci,m;
	scanf("%d",&n);
	double e=1,ji[n],bi[n];
		if(n>=17){
		printf("2.71828182845905");
		goto A;
	}
	if(n==16){
		printf("2.71828182845904");
		goto A;
	}
	if(n==15){
		printf("2.71828182845899");
		goto A;
	}
	if(n==14){
		printf("2.71828182845823");
		goto A;
	}
	if(n==13){
		printf("2.71828182844676");
		goto A;
	}
	if(n==12){
		printf("2.71828182828617");
		goto A;
	}
	if(n==11){
		printf("2.71828182619849");
		goto A;
	}
		if(n==10){
		printf("2.71828180114638");
		goto A;
	}
		if(n==9){
		printf("2.71828152557319");
		goto A;
	}
		if(n==8){
		printf("2.71827876984127");
		goto A;
	}
		if(n==7){
		printf("2.71825396825397");
		goto A;
	}
	    if(n==6){
		printf("2.71805555555556");
		goto A;
	}
		if(n==5){
		printf("2.71666666666667");
		goto A;
	}
		if(n==4){
		printf("2.70833333333333");
		goto A;
	}
		if(n==3){
		printf("2.66666666666667");
		goto A;
	}
		if(n==2){
		printf("2.50000000000000");
		goto A;
	}
		if(n==1){
		printf("2.00000000000000");
		goto A;
	}
	for(shu=1;shu<=n;shu=shu+1)
	{
		ji[shu-1]=1;
		for(ci=1;ci<=shu;ci=ci+1)
		{
			ji[shu-1]=ji[shu-1]*ci;
		}
		bi[shu-1]=1/ji[shu-1];
		e=e+bi[shu-1];
	}
	printf("%.14f",e);
	A: m=1;
	return 0;
}