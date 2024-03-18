#include<stdio.h>
struct date
{
	int dd,mm,yy;
};
struct student
{
	int rollno;
	char name[20];
	struct date dob;
};
int main()
{
	struct student s;
	printf("\nenter roll no., name, dob(dd-mm-yy) : ");
	scanf("%d %s %d %d %d",&s.rollno,s.name,&s.dob.dd,&s.dob.mm,&s.dob.yy);
	printf("\n ROLL NO. : %d",s.rollno);
	printf("\n NAME: %s",s.name);
	printf("\n DOB: %d-%d-%d",s.dob.dd,s.dob.mm,s.dob.yy);
	
	
	return 0;
}
