"""
2022-03-26 14:31:44
AC
1.0
Accepted | 1 * (3 / 5) | 2 ms | 1544 KB
Accepted | 1 * (1 / 5) | 2 ms | 1552 KB
Accepted | 1 * (1 / 5) | 2 ms | 1652 KB

"""

#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int n;
	char a[510],b[510];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%s",&a);
		scanf("%s",&b);
		int cha=abs(strlen(a)-strlen(b));
		if(strlen(a)>strlen(b))
		{
			for(int j=0;j<strlen(b);j++)
			{
				a[j+cha]+=b[j]-'0';
			}
			for(int j=strlen(a)-1;j>0;j--)
			{
				if(a[j]>=10+'0')
				{
					a[j]=a[j]-10;
					a[j-1]++;
				}
			}
			if(a[0]>=10+'0')
			{
				a[0]=a[0]-10;
				printf("1");
				for(int j=0;j<strlen(a);j++)
					printf("%c",a[j]);
				printf("\n");
			}
			else 
			{
				for(int j=0;j<strlen(a);j++)
					printf("%c",a[j]);
				printf("\n");
			}
		}
		else
		{
			for(int j=0;j<strlen(a);j++)
			{
				b[j+cha]+=a[j]-'0';
			}
			for(int j=strlen(b)-1;j>0;j--)
			{
				if(b[j]>=10+'0')
				{
					b[j]=b[j]-10;
					b[j-1]++;
				}
			}
			if(b[0]>=10+'0')
			{
				b[0]=b[0]-10;
				printf("1");
				for(int j=0;j<strlen(b);j++)
					printf("%c",b[j]);
				printf("\n");
			}
			else 
			{
				for(int j=0;j<strlen(b);j++)
					printf("%c",b[j]);
				printf("\n");
			}
		}
	} 
    return 0;
}