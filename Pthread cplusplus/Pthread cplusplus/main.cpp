#include "Include.hpp"

void  * function1(void * argument);
void  * function2(void * argument);

int main(void)
{
	pthread_t t1, t2; // declare 2 threads.
	pthread_create(&t1, NULL, function1, NULL); // create a thread running function1
	pthread_create(&t2, NULL, function2, NULL); // create a thread running function2


	Sleep(1);

	pthread_join(t1, 0);
	pthread_join(t2, 0);
	system("PAUSE");
	return 0;

}

void * function1(void * argument)
{
	for (int i = 0; i < 10; i++)
	{
		cout << " Hello " << endl;
	Sleep(2); 
	}
	
	return 0;
}

void * function2(void * argument)
{
	for (int i = 0; i < 10; i++)
	{
		cout << " World " << endl;
		Sleep(2); 
	}
	return 0;
}

