#include <iostream>
#include <vector>
#include<cassert>
using namespace std;
int main()
{
	#ifndef NDEBUG
		cerr<<"Error:"<<__FILE__<<":in function"<<__func__
			<<" at line "<<__LINE__<<endl
			<<"	Compiled on	"<<__DATE__
			<<" at "<<__TIME__<<endl;
	#endif
	return 0;	
}
