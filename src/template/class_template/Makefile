main:main.cpp base
	g++ -o main main.cpp base.o -std=c++11
base:base.cpp
	g++ -c -fpic base.cpp -std=c++11
.PHONY:clean
clean:
	rm *.o main
