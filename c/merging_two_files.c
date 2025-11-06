#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp1,*fp2,*fp3;
	char ch;
	fp1=fopen("abhi1.txt","r");
	fp2=fopen("abhi2.txt","r");
	fp3=fopen("file3.txt","w");
	if(fp1== NULL || fp2== NULL)
	{
		printf("File does not exist");
		exit(1);
	}
	ch=fgetc(fp1);
	while(ch!= EOF)
	{
		fputc(ch,fp3);
		ch=fgetc(fp1);
	}
	ch=fgetc(fp2);
	while(ch!= EOF)
	{
		fputc(ch,fp3);
		ch=fgetc(fp2);
	}
	printf("Data written");
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	return 0;
}
