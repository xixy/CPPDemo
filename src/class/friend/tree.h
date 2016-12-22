#ifndef TREE_H
#define TREE_H
#include "node.h"

class tree
{
public:
	static constexpr int count=0;
	node * T_root;
	tree();
	void tree_root(node *);
	void tree_insert(node *);
	void write(node *);
	static int get_count(){return count;};
	~tree();
	void increase(node &);

private:
	
	
};
#endif
