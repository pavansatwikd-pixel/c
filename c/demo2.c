#include<stdio.h>
void f3() __attribute__((constructor));
void abc() __attribute__((constructor));
void func() __attribute__((constructor));

void f3()
{
	printf("\nhi");
}
void abc()
{
	printf("\nhello");
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
