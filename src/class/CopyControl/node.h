#ifndef NODE_H
#define NODE_H
#include<iostream>
using namespace std;

class node
{
public:
	node *left;
	node *right;
	node *p;
	int key;
	node();
	node(int n=0);
	node(const node &);
	node& operator=(const node&);
	~node();
};


#endif
