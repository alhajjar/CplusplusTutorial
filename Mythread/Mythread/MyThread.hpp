#ifndef MyThread_HPP
#define MyThread_HPP

#include "Include.hpp"

class MyThread {


public:
	MyThread();
	void PrintOutMessage(string msg);
	void PrintOut(int i, int j, int k);
	void PrintOut(int i, int j);
	~MyThread();
	
};

#endif