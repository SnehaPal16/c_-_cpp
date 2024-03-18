#include<stdio.h>
#include<string.h>

struct stockentry
{
	int icode;
	char iname[20];
	int rate;
	int qoh;
};

int main()
{
	FILE *fptr;
	char reply='y';
	int tot=0;
	struct stockentry s;
	
	fptr=fopen("stock.dat","a");
	if(fptr==NULL)
	{
		printf("\nUNABLE TO OPEN FILE...");
		return 0;
	}
	
	while(reply=='y')
	{
		printf("\nENTER item_code,item_name,item_rate,quantity_on_hand : \n");
		scanf("%d %s %d %d",&s.icode,s.iname,&s.rate,&s.qoh);
		fwrite(&s,sizeof(s),1,fptr);
		printf("\ndo want to enter more records y or n : ");
		fflush(stdin);
		scanf("%c",&reply);
	}
	fclose(fptr);
	
	
	printf("\nreading data : ");
	fptr=fopen("stock.dat","r");
	if(fptr==NULL)
	{
		printf("\nUNABLE TO OPEN FILE...");
		return 0;
	}
	
	while((fread(&s,sizeof(s),1,fptr))!=NULL)
	{
		printf("\n\nITEMCODE : %d",s.icode);
		printf("\nITEMNAME : %s",s.iname);
		printf("\nRATE     : %d",s.rate);
		printf("\nQOH      : %d",s.qoh);
		tot=tot+s.qoh;
	}
	printf("\n\n\ntotal qoh : %d",tot);
	fclose(fptr);
	
	
	
	return 0;
}
