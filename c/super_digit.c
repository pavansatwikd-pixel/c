#include<stdio.h>
int main()
{
	char s[100]="9875";
	int s1=0,i;
	for(i=0;s[i]!='\0';i++)
	{
		s1=s1+(s[i]-'0');
	}
	printf("%d",s1);
	
}
