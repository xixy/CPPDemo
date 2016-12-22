#include "tree.h"
// int tree::count;
tree::tree():T_root(NULL){
	// tree::count++;
	// T_root=NULL;
}
tree::~tree(){

}
void tree::tree_root(node *x){
	T_root=x;
}
// static int tree::get_count(){
// 	// return 0;
// 	return count;
// }
void tree::tree_insert(node *z){
	node *y=NULL;
	node *x=T_root;
	while(x!=NULL){
		y=x;
		if(z->key<x->key)
			x=x->left;
		else
			x=x->right;
	}
	z->p=y;
	if(y==NULL){

		T_root=z;
		
	}
	else{
		if(z->key<y->key)
			y->left=z;
		else
			y->right=z;
	}
}

void tree::write(node *x){
	if(x!=NULL){
		write(x->left);
		cout<<x->key<<"   ";
		write(x->right);
	}
}
