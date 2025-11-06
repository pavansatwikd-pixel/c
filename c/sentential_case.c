#include<stdio.h>
int main()
{
	char str[1000];
	printf("Enter the string:");
	scanf("%[^\n]",str);
	if(str[0]>='a'&&str[0]<='z')
	str[0]=str[0]-32;
	printf("The sentential string is : %s",str);
	return 0;
}
