#include<stdio.h>
#include<stdlib.h>
int main()
{
	int count=0,a,b,i;
	printf("Enter the given number \n");
	scanf("%d",&a);
	for(i=0;i<=31;i++)
		if((a>>i)&0x01){
		count++;
		printf("count bits=%d\n",count);	
		}
}

