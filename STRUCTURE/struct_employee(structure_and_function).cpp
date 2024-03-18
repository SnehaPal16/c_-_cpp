#include<stdio.h>
typedef struct employee
{
	int ecode;
	char name[20];
	int sal;
} emp;

emp getdata();
void putdata(emp);
emp increament(emp);

int main()
{
	emp a;
	a=getdata();
	putdata(a);
	a=increament(a);
	putdata(a);
	return 0;
}

emp getdata()
{
	emp x;
	printf("\nenter employee code, employee name, employee salary : ");
	scanf("%d %s %d",&x.ecode,x.name,&x.sal);
	
	return x;
}


void putdata(emp y)
{
	printf("\nEMPLOYEE CODE : %d",y.ecode);
	printf("\nEMPLOYEE NAME : %s",y.name);
	printf("\nEMPLOYEE SALARY : %d",y.sal);
	
}

emp increament(emp z)
{
	z.sal=z.sal+1000;
	
	return z;
}










