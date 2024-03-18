#include<stdio.h>
typedef struct rectangle
{
	int l,b;
}rect;

rect getdata();
void area(rect);
rect increament(rect);

int main()
{
	rect x;
	x=getdata();
	area(x);
	x=increament(x);
	area(x);
	return 0;
}

rect getdata()
{
	rect a;
	printf("\nenter length and bradth : ");
	scanf("%d %d",&a.l,&a.b);
	return a;
}

void area(rect c)
{
	int ar;
	ar=c.l*c.b;
	printf("\nAREA : %d",ar);
}

rect increament(rect d)
{
	d.l=d.l*2;
	d.b=d.b*3;
	return d;
}








