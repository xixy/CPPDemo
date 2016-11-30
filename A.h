#ifndef A_H
#define A_H
#include <stdlib.h>
class A{
	public:
		virtual void print();
		int count;
};

class B:public A{
	public:
		int myB;
		void print();	
};
#endif
