#include "base.h"

base::base(){
	basename="";
}


int base::operator<(const base& b) const{
	if(this->value<b.value) return -1;
	if(b.value<this->value) return 1;
	return 0;
}