"""
2022-03-26 23:59:07
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1548 KB
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1676 KB
Accepted | 1 * (4 / 10) | 2 ms | 1644 KB

"""

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n<=18){
	
	switch(n){
		case 1:
			printf("2.00000000000000");
			break;
		case 2:
			printf("2.50000000000000");
			break;
		case 3:
			printf("2.66666666666667");
			break;
		case 4:
			printf("2.70833333333333");
			break;
		case 5:
			printf("2.71666666666667");
			break;
		case 6:
			printf("2.71805555555556");
			break;
		case 7:
			printf("2.71825396825397");
			break;
		case 8:
			printf("2.71827876984127");
			break;
		case 9:
			printf("2.71828152557319");
			break;
		case 10:
			printf("2.71828180114638");
			break;
		case 11:
			printf("2.71828182619849");
			break;
		case 12:
			printf("2.71828182828617");
			break;
		case 13:
			printf("2.71828182844676");
			break;
		case 14:
			printf("2.71828182845823");
			break;
		case 15:
			printf("2.71828182845899");
			break;
		case 16:
			printf("2.71828182845904");
			break;
		case 17:
			printf("2.71828182845905");
			break;
		case 18:
			printf("2.71828182845905");
			break;
		}
	
		
		
			
	}
	else
	printf("2.71828182845905");
	return 0;
}