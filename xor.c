#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x,y,z;
	printf("Enter x and y values\n");
	scanf("%d %d",&x,&y);
	z=((~x)&y)|(x&(~y));
	printf("%d\n",z);
}
