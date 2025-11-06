#include<stdio.h>
int main()
{
	char s[1000],val,b[1000],c1[1000];
	int i,j,c,k=0,m,f=0;
	int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,c0=0;
	printf("Enter the string");
	scanf("%[^\n]%*c",s);
	for(i=0;s[i]!='\0';i++)
	{
		f=0;
		c=0;
		if(s[i]>='0'&&s[i]<='9')
		{
		    for(j=0;s[j]!='\0';j++)	
		    {
			    if(s[j]==s[i])
			    c++;
		    }
		    if(k==0)
		    {
			    b[k]=s[i];
			    c1[k]=c;
			    k++;
		    }
		    else
		    {
			    for(m=0;m<k;m++)
			    {
				    if(b[m]==s[i])
				    {
					    f=1;
					    break;
				    }
			    }
			    if(f==0)
			    {
				    b[k]=s[i];
				    c1[k]=c;
				    k++;
			    }
		    }
		    printf("%d ",c);
		
	    }
	    else
	    printf("%d ",c);
    }
	return 0;
}
