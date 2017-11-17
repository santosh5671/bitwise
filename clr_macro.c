#include <stdio.h>

#define CLR_BIT(num,pos) num&=~(0x01<<pos)

void print_bits(unsigned int num)
{
	int i;

	for(i=31;i>=0;i--)
		printf("%d",(num>>i)&0x01);

	printf("\nEND\n");

}

int main()
{
	unsigned int num,pos;
	printf("enter a number and position\n");
	scanf("%d%d",&num,&pos);

	print_bits(num);
	CLR_BIT(num,pos);
	print_bits(num);




}
