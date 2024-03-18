#include<iostream>
using namespace std;

template <class t>
class vector
{
	public:
		t *arr;
		int size;
		vector(int m)
		{
			size=m;
			arr=new t[m];
		}
		t dot_product(vector &v)
		{
			t d=0;
			for(int i=0;i<size;i++)
			{
				d=d+ this->arr[i]*v.arr[i];
			}
			return d;
		}	
};


int main()
{
	vector <float> v1(3);
	v1.arr[0]=4.1;
	v1.arr[1]=3.2;
	v1.arr[2]=1.0;
	vector <float> v2(3);
	v2.arr[0]=1.1;
	v2.arr[1]=0.9;
	v2.arr[2]=1.8;
	
	float a;
	a=v1.dot_product(v2);
	cout<<a<<endl;
	
	return 0;
}







