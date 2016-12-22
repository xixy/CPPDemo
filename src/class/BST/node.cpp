#include "node.h"
node::node(){
	this->p=NULL;
	this->left=NULL;
	this->right=NULL;
	this->key=0;
}

node::node(int n){
	this->p=NULL;
	this->left=NULL;
	this->right=NULL;
	this->key=n;
}

node::~node(){
	
}

istream& operator>>(istream &in, node &n){
	in>>n.key;
	return in;
}

void node::operator=(node x){
	key=x.key;
}

bool node::operator==(int n){
	return (key==n);
}

void increase(node &nd){
	nd.test++;
}