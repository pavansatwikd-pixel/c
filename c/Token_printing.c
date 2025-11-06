#include<stdio.h>
int main()
{
	char str[1000];
	int i;
	scanf("%[^\n]",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		printf("\n");
		else
		printf("%c",str[i]);
	}
	return 0;
}
