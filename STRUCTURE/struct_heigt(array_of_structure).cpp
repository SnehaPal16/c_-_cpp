#include<stdio.h>
#include<string.h>
struct student
{
	int rollno;
	char name[20];
	float height;
};

int main()
{
	student s[10],temp;
	int i,n,tot=0,avg,r,j;
	char nm[20];
	printf("\nenter number of inputs : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nROLLNO., NAME , HEIGHT : ");
		scanf("%d %s %f",&s[i].rollno,s[i].name,&s[i].height);
		tot=tot+s[i].height;
	}
	avg=tot/n;
	
	for(i=0;i<n;i++)
	{
		printf("\n%d %s %.2f",s[i].rollno,s[i].name,s[i].height);
	}
	
	printf("\naverage height of class : %d",avg);
	
	/*printf("\nLINEAR SEARCH ON THE BASIS OF ROLLNO.");
	printf("\nenter rollno to search : ");
	scanf("%d",&r);
	for(i=0;i<n;i++)
	{
		if(r==s[i].rollno)
		{
			printf("\n%d %s %.2f",s[i].rollno,s[i].name,s[i].height);
		}
		
	}
	printf("\n DATA NOT FOUND");*/
	
	/*printf("\nLINEAR SEARCH ON THE BASIS OF NAME");
	printf("\nenter rollno to search : ");
	scanf("%s",nm);
	for(i=0;i<n;i++)
	{
		if(strcmp(nm,s[i].name)==0)
		{
			printf("\n%d %s %.2f",s[i].rollno,s[i].name,s[i].height);
			return 0;
		}
		
	}
	printf("\n DATA NOT FOUND");*/
	
	
	printf("\nsorting on the basis of HEIGHT ");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(s[j].height>s[j+1].height)
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
			printf("\n%d %s %.2f",s[i].rollno,s[i].name,s[i].height);
		
	}
	
	
	
	
	return 0;
}
