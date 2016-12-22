#include<iostream>
#include<cassert>
using namespace std;
#include "tree.h"
// int tree::count;

void increase(node x){
	x.key++;
}
int main(){
	node x(5),y(6),z(1),t(2);
	node t1(0);
	// node t1(x);
	t1=x;
	cout<<t1.key<<endl;
	increase(t1);	
	cout<<t1.key<<endl;
}