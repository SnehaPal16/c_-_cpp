#include<stdio.h>
#include<string.h>

struct employee
{
	int ecode;
	char ename[20];
	char desg[20];
	float sal;
};

int main()
{
	FILE *fptr;
	char reply='y',in[20];
	float b;
	int mtot=0,wtot=0,ic;
	struct employee e;
	
	/*fptr=fopen("emp.dat","a");
	if(fptr==NULL)
	{
		printf("\nUNABLE TO OPEN FILE...");
		return 0;
	}
	
	while(reply=='y')
	{
		printf("\nENTER emp_code,emp_name,emp_designation,emp_salary : \n");
		scanf("%d %s %s %f",&e.ecode,e.ename,e.desg,&e.sal);
		fwrite(&e,sizeof(e),1,fptr);
		printf("\ndo want to enter more records y or n : ");
		fflush(stdin);
		scanf("%c",&reply);
	}
	fclose(fptr);*/
	
	
	printf("\nreading data : ");
	fptr=fopen("emp.dat","r");
	if(fptr==NULL)
	{
		printf("\nUNABLE TO OPEN FILE...");
		return 0;
	}
	
	while((fread(&e,sizeof(e),1,fptr))!=NULL)
	{
		printf("\n\nEMPCODE   : %d",e.ecode);
		printf("\nEMPNAME     : %s",e.ename);
		printf("\nDESIGNATION : %s",e.desg);
		printf("\nSALARY      : %f",e.sal);
		if(strcmp(e.desg,"manager")==0)
		{
			b=0.10*e.sal;
			mtot=mtot+e.sal+b;
		}
		else if(strcmp(e.desg,"worker")==0)
		{
			b=0.05*e.sal;
			wtot=wtot+e.sal+b;
		}
		printf("\nSALARY AFTER BONUS : %f",e.sal+b);
	}
	printf("\n\ntotal sal of managers : %d",mtot);
	printf("\ntotal sal of workers : %d",wtot);
	fclose(fptr);
	
	
	
	//LINEAR SEARCH ON THE BASIS OF ECODE
	fptr=fopen("emp.dat","r");
	if(fptr==NULL)
	{
		printf("\nUNABLE TO OPEN FILE");
		return 0;
	}
	printf("\n\n\nENTER icode to search : ");
	scanf("%d",&ic);
	while((fread(&e,sizeof(e),1,fptr))!=NULL)
	{
		if(e.ecode==ic)
		{
			printf("\n\nEMPCODE   : %d",e.ecode);
			printf("\nEMPNAME     : %s",e.ename);
			printf("\nDESIGNATION : %s",e.desg);
			printf("\nSALARY      : %f",e.sal);
			printf("\nSALARY AFTER BONUS : %f",e.sal+b);
		}
	}
	fclose(fptr);
	
	
	//LINEAR SEARCH ON THE BASIS OF ENAME
	fptr=fopen("emp.dat","r");
	if(fptr==NULL)
	{
		printf("\nUNABLE TO OPEN FILE");
		return 0;
	}
	printf("\n\n\nENTER ename to search : ");
	scanf("%s",in);
	while((fread(&e,sizeof(e),1,fptr))!=NULL)
	{
		if(strcmp(e.ename,in)==0)
		{
			printf("\n\nEMPCODE   : %d",e.ecode);
			printf("\nEMPNAME     : %s",e.ename);
			printf("\nDESIGNATION : %s",e.desg);
			printf("\nSALARY      : %f",e.sal);
			printf("\nSALARY AFTER BONUS : %f",e.sal+b);
		}
	}
	fclose(fptr);
	return 0;
}
