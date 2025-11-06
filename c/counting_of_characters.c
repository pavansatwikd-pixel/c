#include<stdio.h>
int main()
{
	char str[100],str2[]="aeiouAEIOU";
	int i,j,v=0,c=0,d=0,s=0,sc=0,f;
	printf("Enter the string:");
	scanf("%[^\n]%*c",str);
	for(i=0;str[i]!='\0';i++)
	{
		f=0;
		for(j=0;str2[j]!='\0';j++)
		{
			if(str[i]==str2[j])
			{
				v++;
				f=1;
				break;
			}
		}
		if(f==0)
		{
			if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z')
			c++;
			else if(str[i]>='0'&&str[i]<='9')
	    	d++;
		    else if(str[i]==' ')
		    s++;
		    else
		    sc++;
		}
	}
	printf("%d\n",v);
	printf("%d\n",c);
	printf("%d\n",d);
	printf("%d\n",s);
	printf("%d\n",sc);
	return 0;
}
