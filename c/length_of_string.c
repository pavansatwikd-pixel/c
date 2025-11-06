//Program to find length of the string without using built in function
//coded by MR Abhinay Peddapati
#include<stdio.h>
int main()
{
	char str[100];
	int c=0,i;
	puts("Enter the string:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		c=c+1;
	}
	puts("The length of the string is:");
	printf("%d",c);
	printf("\n24B11CS002");
	return 0;
}
