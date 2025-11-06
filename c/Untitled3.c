#include<stdio.h>
void func() __attribute__((constructor));
void abc() __attribute__((constructor));
void f3() __attribute__((constructor));

void abc()
{
	printf("\nhello");
}
void f3()
{
	printf("\nhi");
}
void func()
{
	printf("\n12");
}
int main()
{
	printf("\nExecuted second");
	return 0;
}
