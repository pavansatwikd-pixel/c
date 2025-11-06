//Program to concatenate 2 strings using built in functions
//Coded by MR Abhinay Peddapati
#include<stdio.h>
int main()
{
	char str[100],str2[100];
	int i,l=0;
	puts("Enter the string:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		l=l+1;
	}
	puts("Enter the second string:");
	gets(str2);
	for(i=0;str2[i]!='\0';i++)
	{
		str[i+l]=str2[i];
	}
	puts("The concated string is:");
	puts(str);
	printf("\n24B11CS002");
	return 0;
}
