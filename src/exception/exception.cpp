#include <iostream>
#include <vector>
#include<stdexcept>
using namespace std;

//基类
class Base{
    public:
        Base(string msg):m_msg(msg)
        {
        }
        virtual void what(){
            cout << m_msg << endl;
        }
    protected:
        string m_msg;
};
//派生类，重新实现了虚函数
class CBase : public Base
{
    public:
        CBase(string msg):Base(msg)
        {

        }
        void what()
        {
           cout << "CBase:" << m_msg << endl;
        }
        void test()
        {
            cout << "I am a CBase" << endl;
        }
};


class MyError {
    const char* const data;
public:
    MyError(const char* const msg = 0):data(msg)
    {
        //idle
    }
};

void do_error() {
    throw MyError("something bad happend");
}
//自定义的terminate函数，函数原型需要一致
void terminator()
{
    cout << "I'll be back" << endl;
    exit(0);
}

int main(){
	int i,j;
	while(cin>>i>>j){
	try{
		if(j==0) throw range_error("error");
		cout<<i/j<<endl;
	}catch(range_error e){
		cout<<e.what()<<"\n Try Again?Enter y or n"<<endl;
		string c;
		cin>>c;
		if(!cin||c=="n")
			break;
	}
	}
	return 0;
}

/*
int main() try {
	cout<<"do my thing"<<endl;
    throw "main";
} catch(const char* msg) {
    cout << msg << endl;
    return 1;
}*/

/*
int main()
{
    //设置自定义的terminate，返回的是原有的terminate函数指针
    void (*old_terminate)() = set_terminate(terminator);
    do_error();
}*/

/*
int main()
{
    try {
        //do some thing
    //抛出派生类对象
        throw CBase("I am a CBase exception");

    }catch(Base& e) {  //使用基类可以接收
        e.what();
    }
}*/
