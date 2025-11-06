#include<stdio.h>
void abc() __attribute__((constructor));
void func() __attribute__((constructor));
void abc()
{
	printf("\nhello");
}
void func()
{
	printf("\nExecuted first");
}
int main()
{
	printf("\nExecuted second");
	return 0;
}
