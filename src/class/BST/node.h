#ifndef NODE_H
#define NODE_H
#include<iostream>
using namespace std;

class node
{
public:
	friend void increase(node &);
	node *left;
	node *right;
	node *p;
	int key;
	node();
	node(int n=0);
	~node();
	bool operator==(int);
	void operator=(node);
	friend istream& operator>>(istream&, node&);
	friend class  Tree;
private:
		int test;
};
void increase(node &);


#endif
