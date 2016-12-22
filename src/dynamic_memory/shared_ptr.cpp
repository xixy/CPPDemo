#include<exception>
#include "shared_ptr.h"

StrBlob::StrBlob():data(make_shared<vector<string>>()){}
StrBlob::StrBlob(initializer_list<string> il){
	data = make_shared<std::vector<string>>(il);
}
void StrBlob::check(size_type i, const string &msg) const{
	if(i>=data->size())
			throw out_of_range(msg);
}

string& StrBlob::front(){
	check(0,"front on empty StrBlob");
	return data->front();
}
string& StrBlob::back(){
	check(0,"back on empty StrBlob");
	return data->back();
}
void StrBlob::pop_back(){
	check(0,"pop_back on empty StrBlob");
	return data->pop_back();
}
int main(){
	StrBlob b1;
	{
		StrBlob b2={"a","an","the"};
		b1 = b2;
		b2.push_back("hello");
	}
	while(b1.size()>0){
		cout<<b1.back()<<endl;
		b1.pop_back();
	}

	return 0;	
}
