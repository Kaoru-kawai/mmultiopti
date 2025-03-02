#include "mMultiOpti.h"

std::mutex mtx;

mMultiOpti::mMultiOpti()
{
}

mMultiOpti::~mMultiOpti()
{
}

void mMultiOpti::thread1Test()
{
	for (int i = 0; i < 100; i++)
	{
		std::lock_guard<std::mutex> lock(mtx);
		// メインスレッドとサブスレッドが同時に出力するのを防ぐ
		std::cout << "Thread 1 : " << i << " times." << std::endl;
		std::this_thread::yield();
	}
}

void mMultiOpti::thread2Test()
{
	for (int i = 0; i < 100; i++)
	{
		std::lock_guard<std::mutex> lock(mtx);
		// メインスレッドとサブスレッドが同時に出力するのを防ぐ
		std::cout << "Thread 2 : " << i << " times." << std::endl;
		std::this_thread::yield();
	}
}

void mMultiOpti::MultiThreadTest()
{
	std::thread th1(&mMultiOpti::thread1Test, this);
	std::thread th2(&mMultiOpti::thread2Test, this);

	th2.join();
	th1.join();
}
