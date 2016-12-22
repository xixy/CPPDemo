main:node tree
	g++ -o main main.cpp node.o tree.o
node:node.cpp node.h
	g++ -c -fpic node.cpp
	#g++ -o node.o node.cpp -std=c++11 -I./
tree:tree.cpp tree.h
	g++ -c -fpic tree.cpp -fpermissive
	#g++ -o tree.o tree.cpp -std=c++11 -I./
.PHONY:clean

clean:
	rm main *.o

