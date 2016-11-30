#include <stdlib.h>
#include <stdio.h>
#include "A.h"
void A::print(){
	printf("hello this is A\n");
}

void B::print(){
	printf("hello this is B\n");
}

void test_char(){
	char a[10];
	a[0]='A';
	a[1]='B';
	a[2]='\n';
	a[3]='C';
	printf("%s\n",a);
}

void test_initialize()
{
	long double ld=3.1415926;
	int a = ld;
	printf("a is %d\n",ld);
}
void test_declaration(){
	int errNumb = 100;
	int *const curErr = &errNumb;
	printf("errNumb is %d\n",*curErr);
	*curErr=200;
        printf("errNumb is %d\n",*curErr);
}
int main(){
	A *a=new A();
	B *b=new B();
	a->print();
	b->print();
	test_char();
	test_declaration();
	return 0;
}

