#include <iostream>

using namespace std;

class MyClass{
	private:
	int a;
	public:
	void set_a(int num){a=num;}
	int get_a() {return a;}
};
void MyClass::set_a(int num){
	 a=num;
}
int MyClass::get_a(){
	return a;
}

int main(){
	
	MyClass object, obj3;
	MyClass object2;
	/*
	object.a=10*2;
	cout<<object.a;
	*/
	object.set_a(9*9);
	cout<<object.get_a()<<endl;
	object2.set_a(9*8);
	cout<<object2.get_a()<<endl;
	
	
	return 0;
}
