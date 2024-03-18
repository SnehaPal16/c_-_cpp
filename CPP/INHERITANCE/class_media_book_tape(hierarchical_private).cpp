using namespace std;
#include<iostream>


class media
{
	char title[20];
	int rate;
	public:
		void getmedia()
		{
			cout<<"\nenter title and rate of media :";
			cin>>title>>rate;
		}
		void putmedia()
		{
			cout<<"\nmedia title :"<<title;
			cout<<"\nmedia rate  :"<<rate;
		}
};

class book : private media
{
	int nop;
	public:
		void getbook()
		{
			getmedia();
			cout<<"\nenter no of pages in a book :";
			cin>>nop;
		}
		void putbook()
		{
			putmedia();
			cout<<"\nno. of pages in book :"<<nop;
		}
};


class tape : private media
{
	int time;
	public:
		void gettape()
		{
			getmedia();
			cout<<"\nenter time :";
			cin>>time;
		}
		void puttape()
		{
			putmedia();
			cout<<"\ntape time :"<<time;
		}
};


int main()
{
	book b;
	tape t;
	b.getbook();
	b.putbook();
	
	
	t.gettape();
	t.puttape();
	
	cout<<"\n"<<sizeof(b);
	cout<<"\n"<<sizeof(t);
	
	return 0;
}











