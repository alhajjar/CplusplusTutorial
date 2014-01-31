#include "MyThread.hpp"

void (MyThread::*memfunc)(int,int) = &MyThread::PrintOut;
void (MyThread::*memfunc2)(int, int,int) = &MyThread::PrintOut;

void PrintOutmainfunc(int i, int j, int k)
{


	for (int l = 0; l < 10; l++)
	{

		cout << "message:" << i << ", " << j << ", " << k << endl;
		Sleep(200);
	}

}

int main (){
	
	string msg = " hello world";
	int i = 10, j = 20, k = 30;
	string str = lexical_cast<string>(i);
	cout << "str: " << str << endl;

	MyThread mythread;

	thread t1(memfunc, mythread, i, j);
	thread t2(memfunc2, mythread, i, j, k);
	thread t3(&MyThread::PrintOutMessage, mythread, msg);
	//thread t4(PrintOutmainfunc, i, j, k);
	
	//thread t3(bind(&MyThread::PrintOutMessage, mythread, msg));

	t1.join();
	t2.join();
	t3.join();
	//t4.join();

	system("PAUSE");
	return 0;
}