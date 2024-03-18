#include<stdio.h>
int main()
{
	FILE *fptr;
	char ch;
	int n=0,v=0,c=0,s=0,nl=0;
	
	fptr=fopen("poem.txt","a");
	if(fptr==NULL)
	{
		printf("\nUnable to open file");
		return 0;
	}
	printf("\nenter text char by char and press ^z to exit : \n");
	while((ch=getchar())!=EOF)
	{
		fputc(ch,fptr);
	}
	fclose(fptr);
	
	printf("\nreading data from file : \n");
	fptr=fopen("poem.txt","r");
	if(fptr==NULL)
	{
		printf("\nUnable to open file");
		return 0;
	}
	while((ch=fgetc(fptr))!=EOF)
	{
		printf("%c",ch);
		if(ch>=48 && ch<=57)
		{
			n++;
		}
		else if((ch=='a')||(ch=='A')||(ch=='e')||(ch=='E')||(ch=='i')||(ch=='I')||(ch=='o')||(ch=='O')||(ch=='u')||(ch=='U'))
		{
			v++;
		}
		else if(ch==' ')
		{
			s++;
		}
		else if(ch=='\n')
		{
			nl++;
		}
		else
		{
			c++;
		}
	}
	printf("\nnumbers : %d",n);
	printf("\nvowels : %d",v);
	printf("\nspaces : %d",s);
	printf("\nnew line : %d",nl);
	printf("\nconsonent : %d",c);
	
	fclose(fptr);	
	return 0;
}
