#include<stdio.h>
struct marks
{
	int p,c,m;	
};
struct student
{
	int rollno;
	char name[20];
	struct marks m;
};
int main()
{
	struct student s;
	int tot;
	float p;
	char r;
	
	printf("\nenter roll no., name, marks : ");
	scanf("%d %s %d %d %d",&s.rollno,s.name,&s.m.p,&s.m.c,&s.m.m);
	tot=s.m.p+s.m.c+s.m.m;
	//p=(tot/300)*100;
	printf("\n ROLL NO. : %d",s.rollno);
	printf("\n NAME: %s",s.name);
	printf("\n MARKS(P C M): %d %d %d",s.m.p,s.m.c,s.m.m);
	printf("\n TOTAL MARKS : %d",tot);
	printf("\n PERCENTAGE : %.2f",p);
	/*if(p>=50)
	{
		printf("\n RESULT : PASS");
	}
	else
	{
		printf("\n RESULT : FAIL");
	}*/

	return 0;
}
