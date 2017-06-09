#include <iostream>
#include <cstdlib>
#include <mutex>
#include "thread"

using namespace std;

mutex mu;

void PrintHelloWorld(string strFunction)
{
	//mu.lock();
	cout << "Hello mere world:" << strFunction.c_str() << endl;
	//mu.unlock();
}

void Threadfunc()
{
	for (int i = 0; i < 10; i++)
	{
		PrintHelloWorld("From Thread");
	}
}

int main()
{
	thread t1(Threadfunc);

	for (int i = 0; i < 10; i++)
	{
		PrintHelloWorld("From Main");
	}
	getchar();

	return 0;
}
