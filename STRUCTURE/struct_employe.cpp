#include<stdio.h>

struct employe
{
	int code;
	char name[20];
	char dept[20];
	char desg[20];
	float sal;	
};

int main()
{
	struct employe e;
	printf("\nenter ecode,ename,edepartment,edesignation,esalary : ");
	scanf("%d %s %s %s %f",&e.code,e.name,e.dept,e.desg,&e.sal);
	printf("\n EMPLOYE CODE : %d",e.code);
	printf("\n EMPLOYE NAME : %s",e.name);
	printf("\n EMPLOYE DEPARTMENT :  %s",e.dept);
	printf("\n EMPLOYE DESIGNATION :  %s",e.desg);
	printf("\n EMPLOYE SALARY : %f",e.sal);
	
	return 0;
}
