#include "node.h"
node::node(){
	this->p=NULL;
	this->left=NULL;
	this->right=NULL;
	this->key=0;
	cout<<"default contructor"<<endl;
}
node& node::operator=(const node &nd){
	this->p=nd.p;
	this->left=nd.left;
	this->right=nd.right;
	this->key=nd.key+1;
	cout<<"operator ="<<endl;
	return *this;
}

node::node(int n){
	cout<<"default n contructor"<<endl;
	this->p=NULL;
	this->left=NULL;
	this->right=NULL;
	this->key=n;
}

node::node(const node &nd){
	this->p=nd.p;
	this->left=nd.left;
	this->right=nd.right;
	this->key=nd.key+1;
	cout<<"hello"<<endl;

}

node::~node(){
	
}
