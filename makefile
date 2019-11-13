final: main.o
	g++ -o test main.o
driver: main.cpp BST312.h
	g++ main.cpp
