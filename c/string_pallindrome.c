#include<stdio.h>
int main()
{
	char str[100],str2[100];
	int i,l=0,f=0;
	printf("Enter the string:");
	scanf("%[^\n]%*c",str);
	for(i=0;str[i]!='\0';i++)
	{
		l=l+1;
	}
	for(i=0;i<l;i++)
	{
	    str2[i]=str[l-i-1];
	}
	for(i=0;i<l;i++)
	{
		if(str[i]!=str2[i])
		{
			f=1;
			break;
		}
	}
	if(f==0)
	printf("The string is a pallindrome");
	else
	printf("The string is not a pallindrome");
	return 0;
}
