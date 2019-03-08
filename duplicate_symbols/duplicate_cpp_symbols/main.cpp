/*
this file is to  show that in .cpp file, two functions with  the same name but different input parameters could exsit.

 */

#include <iostream>
using namespace std;

class CTest
{
	public:
		CTest() {};
		~CTest() {};
		int runTest(){return x;};
	private:
		int x=0;
};


int function_with_duplicated_name(int x)
{
	cout<<__FUNCTION__<<"(x)"<<endl;
	return 0;
}


int function_with_duplicated_name(int x,int y)
{
	cout<<__FUNCTION__<<"(x,y)"<<endl;
	return 0;
}


int main()
{
	CTest test;
	auto x=test.runTest();
	
	function_with_duplicated_name(x);
	function_with_duplicated_name(x,1);
	return 0;

}
