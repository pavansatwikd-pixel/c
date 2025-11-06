#include<stdio.h>
int main()
{
	char str[100],str2[100],f=0;
	int i,l=0,l2=0,c=0;
	printf("Enter the string:");
    scanf("%[^\n]%*c",str);
	for(i=0;str[i]!='\0';i++)
	{
		l=l+1;
	}
	printf("Enter the second string:");
	scanf("%[^\n]%*c",str2);
	for(i=0;str2[i]!='\0';i++)
	{
		l2=l2+1;
	}
	if(l==l2)
	{
		for(i=0;i<l;i++)
		{
			if(str[i]==str2[i])
			{
				c=c+1;
			}
		}
		if(c==l)
		printf("Both the strings are same");
		else
		printf("Both the strings are not same");
	}
	else
	printf("Both the strings are not same");
	return 0;
}
