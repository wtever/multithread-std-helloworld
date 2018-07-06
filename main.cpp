#include <iostream>
#include <thread>
using namespace std;

void someFunction()
{
	cout << "Hello from the thread" << endl;
}

int main()
{
	cout << "Hello from main" << endl;
	std::thread t1(someFunction);
	t1.join();
	return 0;
}
