// To count all kinds of characters
// coded by Abhinay Peddapati
#include<stdio.h>
int main()
{
	char str[100],str2[]="aeiouAEIOU";
	int i,j,v=0,c=0,d=0,s=0,sc=0,f,lc=0,uc=0,al=0;
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
				if(str[i]>='A'&&str[i]<='Z'){
			    uc++;al++;}
			    if(str[i]>='a'&&str[i]<='z'){
			    lc++;al++;}
				break;
			}
		}
		if(f==0)
		{
			if(str[i]>='A'&&str[i]<='Z'){
			uc++;al++;}
			if(str[i]>='a'&&str[i]<='z'){
			lc++;al++;}
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
	printf("ALPHABETS= %d\n",al);
	printf("VOWELS= %d\n",v);
	printf("CONSONANTS= %d\n",c);
	printf("DIGITS= %d\n",d);
	printf("SPACES= %d\n",s);
	printf("SPECIAL CHARACTERS= %d\n",sc);
	printf("LOWER CASE= %d\n",lc);
	printf("UPPER CASE= %d\n",uc);
	printf("\n24B11CS002");
	return 0;
}
