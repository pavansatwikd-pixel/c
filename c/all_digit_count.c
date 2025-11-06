//Program to find the digit frequency
// Coded by MR Abhinay Peddapti
#include<stdio.h>
int main()
{
	char s[1000],val,b[1000],c[1000];
	int i,j,k=0,m,f=0;
	int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,c0=0;
	printf("Enter the string");
	scanf("%[^\n]%*c",s);
	for(i=0;s[i]!='\0';i++)
	{
		f=0;
		if(s[i]>='0'&&s[i]<='9')
	    {
	    	if(s[i]=='0')
	    	c0++;
	    	if(s[i]=='1')
	    	c1++;
	    	if(s[i]=='2')
	    	c2++;
	    	if(s[i]=='3')
	    	c3++;
	    	if(s[i]=='4')
	    	c4++;
	    	if(s[i]=='5')
	    	c5++;
	    	if(s[i]=='6')
	    	c6++;
	    	if(s[i]=='7')
	    	c7++;
	    	if(s[i]=='8')
	    	c8++;
	    	if(s[i]=='9')
	    	c9++;
		}
    }
    printf("%d %d %d %d %d %d %d %d %d %d",c0,c1,c2,c3,c4,c5,c6,c7,c8,c9);
    printf("\n24B11CS002");
	return 0;
}
