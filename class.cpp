#include<iostream>
#include<conio.h>
#include<cmath>

using namespace std;

class cord
{
	int x, y;
	public:
		cord()
		{
			x = 0;
			y = 0;
		}
		cord(int i, int j)
		{
			x = i;
			y = j;
		}
		void get_xy(int &i, int &j)
		{
			i = x;
			j = y;
		}
		friend cord operator<<(ostream &out, cord obj);
		friend istream& operator>>(istream &out, cord &obj);
		friend cord operator+(cord ob, cord ob2);
		cord operator-(cord ob2);
};

cord operator<<(ostream &out, cord obj)
		{
			out << obj.x;
			out << obj.y;
		}
istream& operator>>(istream &out, cord &obj)
		{
			out >> obj.x;
			out >> obj.y;
		}

cord operator+(cord ob1, cord ob2)
{
	cord temp;
	temp.x = ob1.x + ob2.x;
	temp.y = ob1.y + ob2.y;
	return temp;
}
cord cord::operator-(cord ob2)
{
	cord temp;
	temp.x = x - ob2.x;
	temp.y = y = ob2.y;
	return temp;
}

int main()
{
	system("color f0");
	system("chcp 1251 > nul");
	cord o1(10,20), o2(5,3), o3;
//	int x, y;
//	
	o3 = o1 + o2;
//	
//	o3.get_xy(x, y);
//	cout<<"(o1 + o2) X:"<<x<<" ,Y:"<<y<<"\n";
	
	cout<<o3;
	cout<<endl;
	cout<<"!!=";
	cin>>o1;
	cout<<o1;
	cout<<"sdf";
	
//	o3 = o1 - o2;
//	
//	o3.get_xy(x, y);
//	cout<<"(o1 - o2) X:"<<x<<" ,Y:"<<y<<"\n";

	
	_getch();
	
}
