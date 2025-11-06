#include<stdio.h>
int main()
{
	char s[1000],val,b[1000],c1[1000];
	int i,j,c,k=0,m,f=0;
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
		
	    }
    }
    for(i=0;i<k;i++)
    {
    	printf("%d ",c1[i]);
	}
	return 0;
}
