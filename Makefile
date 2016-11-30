install:string A vector iterator vector_hw1 bit exception
exception:exception.cpp
	g++ -o exception exception.cpp -std=c++11
bit:bit.cpp
	g++ -o bit bit.cpp -std=c++11
vector_hw1:vector_hw1.cpp
	g++ -o vector_hw1 vector_hw1.cpp -std=c++11
iterator:iterator.cpp
	g++ -o iterator iterator.cpp -std=c++11
vector:vector.cpp
	g++ -o vector vector.cpp -std=c++11
string:string.cpp
	g++ -o string string.cpp

A:A.cpp A.h
	g++ -o A A.cpp -I.
