#include<stdio.h>
void add();
int main()
{
	printf("Hello World");
	add();
	return 0;
}

void add()
{
	int a,b;
	Printf("Enter the elements to be addded\n");
	scanf("%d %d",&a,&b);
	printf("Result=%d",(a+b));
}