#ifndef BASE_H_
#define BASE_H_ 
#include<iostream>
using namespace std;
#include<string>
#include<vector>
template <typename T>
class base{
public:
	typedef T value_type;
	typedef typename std::vector<T>::size_type size_type;
	base();
	base(const std::initializer_list<T> &il);
	size_type size() const {return data->size();}
	bool empty() const {return data->empty();}
	void push_back(const T &t){data->push_back(t);}
	void push_back(T &&t){data->push_back(std::move(t));}
	void pop_back();
	T& back();
	T& operator[](size_type i);
private:
	std::shared_ptr<std::vector<T>> data;
	void check(size_type i, const std::string &msg) const;
	
};

template <typename T>
base<T>::base():data(std::make_shared<std::vector<T>>()){
}
template <typename T>
base<T>::base(const std::initializer_list<T> &il):data(std::make_shared<std::vector<T>>(il)){

}

template <typename T>
void base<T>::check(size_type i, const std::string &msg) const
{
	if(i>=data->size())
		throw std::out_of_range(msg);

}

template <typename T>
T& base<T>::back(){
	check(0,"back on empty base");
	return data->back();
}

template <typename T>
T& base<T>::operator[](size_type i){
	check(i,"back on empty base");
	return data[i];
}

template <typename T>
void base<T>::pop_back(){
	check(0,"pop_back on empty base");
	return data->pop_back();
}


#endif
