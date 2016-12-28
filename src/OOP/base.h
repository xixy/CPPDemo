#ifndef BASE_H_
#define BASE_H_ 
#include<iostream>
using namespace std;
#include<string>
#include<iostream>
class base
{
public:
	base(string &str):basename(str){}
	base();
	string name(){return basename;}
	virtual void print(ostream &os){os<<basename;}
private:
	string basename;
	
};


#endif
