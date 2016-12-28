#ifndef DERIVED_H_
#define DERIVED_H_
#include "base.h"
class derived:public base
{
public:
	void print(ostream &os){base::print(os);os<<"  "<<i;}
	derived(){};
	~derived(){};
private:
	int i;
	
};
#endif