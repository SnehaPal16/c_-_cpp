#include<stdio.h>

struct customer
{
	int id;
	char name[20];
	char address[50];
	int pno;	
};

int main()
{
	struct customer c;
	printf("\nenter cid,cname,caddress,cpno. : ");
	scanf("%d %s %s %d",&c.id,c.name,c.address,&c.pno);
	printf("\n CUSTOMER ID : %d",c.id);
	printf("\n CUSTOMER NAME : %s",c.name);
	printf("\n CUSTOMER ADDRESS :  %s",c.address);
	printf("\n CUSTOMER PHONE NO. : %d",c.pno);
	
	return 0;
}
