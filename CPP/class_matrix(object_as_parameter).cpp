using namespace std;
#include<iostreaam>
int m,n,p,i,j;
class matrix
{
	int a[10][10];
	public:
		void getmat();
		void sum(matrix ,matrix);		
};

void matrix :: getmat_a()
{
	cout<<"\nenter no of rows :";
	cin>>m;
	cout<<"\nenter no of columns :";
	cin>>p;
	cout<<"\nenter value in matrix A :\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<p;j++)
		{
			cin>>a[m][p];	
		}
	}	
}


matrix matrix :: sum(matrix x,matrix y)
{
	
}



int main()
{
	matrix a1,a2,a3;
	a1.getmat();
	a2.getmat();
	a3=a3.sum(a1,a2);
	return 0
}
