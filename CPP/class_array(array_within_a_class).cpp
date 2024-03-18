using namespace std;
#include<iostream>

class array
{
	int a[20],n;
	public:
		void getarray();
		void sumarray();
		void linear_search();
};

void array::getarray()
{
	int i;
	
	cout<<"\nenter the value of n : ";
	cin>>n;
	cout<<"\nenter array elements: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void array::sumarray()
{
	int sum=0,i;
	cout<<"\nArray : ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
		sum=sum+a[i];
	}
	cout<<"\nSum is : "<<sum;
}

void array::linear_search()
{
	int i,flag=0,num;
	cout<<"\nEnter number to search : ";
	cin>>num;
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			flag=1;
			cout<<"\n "<<num<<" is at "<<i<<" index";
			break;
		}
	}
	if(flag==0)
	{
		cout<<"\nItem does not exists";
	}
}


int main()
{
	array ar;
	int no;
	/*cout<<"\nEnter value of n : ";
	cin>>no;*/
	ar.getarray();
	ar.sumarray();
	ar.linear_search();
	return 0;
}






