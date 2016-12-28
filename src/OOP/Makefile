main:main.cpp base derived
	g++ -o main main.cpp base.o derived.o

base:base.cpp base.h
	g++ -c -fpic base.cpp
derived:derived.cpp derived.h
	g++ -c -fpic derived.cpp

.PHONY:clean
	
clean:
	rm *.o main
