//Program to concatenate 2 strings using built in functions
//Coded by MR Abhinay Peddapati
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],str2[100];
	int i,l=0;
	puts("Enter the string:");
	gets(str);
	puts("Enter the second string:");
	gets(str2);
    strcat(str,str2);
	puts("The concated string is:");
	puts(str);
	printf("\n24B11CS002");
	return 0;
}
