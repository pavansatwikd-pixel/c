//Program to find length of the string using built in function
//coded by MR Abhinay Peddapati
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int c=0,i;
	puts("Enter the string:");
	gets(str);
	c=strlen(str);
	printf("The length of the string is : %d",c);
	printf("\n24B11CS002");
	return 0;
}
