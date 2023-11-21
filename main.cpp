#include <iostream>


using namespace std;


class StaticTest
{
private:
{

}

public:
	StaticTest()
	{
		Count++;
		PrintCount();
	}
	~StaticTest()
	{
		Count--;
		PrintCount();
	}

private:

	static void PrintCount()
	{
		cout << Count << endl;
	}

	static int Count;
	StaticTest* GetInstance = nullptr;

};

int StaticTest::Count = 0;

int main()
{
	StaticTest* P1 = StaticTest::GetInstance();
	StaticTest* P2 = StaticTest::GetInstance();

	delete P1 << endl;
	delete P2 << endl;


	return 0;
}