all:
	g++ -c -Wall -std=c++20 */*.cc
	g++ -c -Wall -std=c++20 */*.hh
	g++ -c -x c++-header  -std=c++20 */*.ih
	ar rvs header.a *.o
	g++ main.cc header.a -o main

main:
	rm -rf main
	g++ main.cc header.a -o main

clean:
	rm -rf *.o
	rm -rf *.a
	rm -rf */*.gch
	rm -rf main
	rm -rf main2