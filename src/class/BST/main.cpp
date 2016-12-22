#include<iostream>
#include<cassert>
using namespace std;
#include "tree.h"
int main(){
	node x(5),y(6),z(1),t(2);
	increase(x);
	tree T;
	T.tree_insert(&x);	
	T.tree_insert(&y);
	T.tree_insert(&z);
	T.tree_insert(&t);
	T.write(T.T_root);
	cout<<endl<<T.get_count()<<endl;
}