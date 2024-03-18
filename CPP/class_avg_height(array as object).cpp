using namespace std;
#include<iostream>
#include<string.h>

class hclass
{
	int rollno;
	char name[20];
	float height;
	
	public:
		void getdata()
		{
			cout<<"\nenter student rollno, name,height : ";
			cin>>rollno>>name>>height;
		}
		void putdata()
		{
			cout<<"\n";
			cout<<"\nstudent rollno. :"<<rollno;
			cout<<"\nstudent name    :"<<name;
			cout<<"\nstudent height  :"<<height;
		}
		int giveheight()
		{
			return height;
		}
		char givename()
		{
			return name[20];
		}
		int giverollno()
		{
			return rollno;
		}
};

int main()
{
	hclass hc[3];
	int i;
	float sum=0,avg;
	cout<<"\nenter 3 students details :";
	for(i=0;i<3;i++)
	{
		hc[i].getdata();
		sum=sum+hc[i].giveheight();
	}
	avg=sum/3;
	for(i=0;i<3;i++)
	{
		hc[i].putdata();
	}
	cout<<"\naverage height of the class is : "<<avg;
	
	
	//linear search on the basis of name;
	/*char n[20];
	cout<<"\n";
	cout<<"\n enter name to search : ";
	cin>>n;
	for(i=0;i<3;i++)
	{
		if(strcmp(n,hc[i].givename())==0)
		{
			hc[i].putdata();
			return 0;
		}
	}
	cout<<"\nno data found : ";
	*/
	
	
	
	//linear search on the basis of rollno
	/*int r;
	cout<<"\n";
	cout<<"\n enter rollno. to search : ";
	cin>>r;
	for(i=0;i<3;i++)
	{
		if(r==hc[i].giverollno())
		{
			hc[i].putdata();
			return 0;
		}
	}
	cout<<"\nno data found : ";
	*/
	
	
	
	
	//bubble sorting on the basis of height
	int j,temp;
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			if(hc[j].giveheight()>hc[j+1].giveheight())
			{
				temp=hc[j].giveheight();
				hc[j].giveheight()=hc[j+1].giveheight();
				hc[j+1].giveheight()=temp;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		hc[i].putdata();
	}
	
	
	
	return 0;
}
