using namespace std;
#include<iostream>
	
class arr
{
	int *a;
	int n;
	public:
		arr(int);
		~arr();
		void getarr();
		void sumarr();
};

arr :: arr(int size)
{
	n=size;
	a=new int[n];
}
arr :: ~arr()
{
	delete [] a;
}
void arr :: getarr()
{
	int i;
	cout<<"\nenter "<<n<<" no. :";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void arr :: sumarr()
{
	int i,sum=0;
	cout<<"\narray is :\n";
	for(i=0;i<n;i++)
	{
		cout<<a[i];
		sum=sum+a[i];
	}
	cout<<"\nsum is :"<<sum;
}


int main()
{
	{
		arr aa(5);
		aa.getarr();
		aa.sumarr();
	}
	{
		arr bb(3);
		bb.getarr();
		bb.sumarr();
	}
	return 0;
}


















