//Program to reverse a string without using built in function
//Coded by MR Abhinay Peddapati
#include<stdio.h>
int main()
{
	char str[100],t;
	int i,l=0;
	puts("Enter the string:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		l=l+1;
	}
	for(i=0;i<l/2;i++)
	{
	    t=str[i];
	    str[i]=str[l-i-1];
	    str[l-i-1]=t;
	}
	puts("The reversed string is:");
	puts(str);
	printf("\n24B11CS002");
	return 0;
}
