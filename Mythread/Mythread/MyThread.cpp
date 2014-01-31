#include "MyThread.hpp"


mutex _mu, _mu2;

MyThread::MyThread()
{
	 
}


MyThread::~MyThread()
{
}

void MyThread::PrintOutMessage(string msg)
{

	for (int l = 0; l < 10; l++)
	{

		lock(_mu, _mu2);
		lock_guard<mutex>locker(_mu2, adopt_lock);
		lock_guard<mutex>locker2(_mu, adopt_lock);

		cout<< "message:" << msg << endl;
		Sleep(200);
	}
	
}

void MyThread::PrintOut(int i,int j,int k)
{


	for (int l = 0; l < 10; l++)
	{
		lock(_mu, _mu2);
		//lock_guard<mutex>locker(_mu2, adopt_lock);
		//lock_guard<mutex>locker2(_mu, adopt_lock);
		unique_lock<mutex>locker(_mu2, adopt_lock);
		unique_lock<mutex>locker2(_mu, adopt_lock);
		cout << "message:" << i << ", " << j << ", " << k << endl;
		Sleep(200);
	}
	
}

void MyThread::PrintOut(int i, int j)
{


	for (int l = 0; l < 10; l++)
	{
		lock(_mu, _mu2);
		lock_guard<mutex>locker(_mu2, adopt_lock);
		lock_guard<mutex>locker2(_mu, adopt_lock);

		cout << "message:" << i << ", " << j << endl;
		Sleep(200);
	}

}