all:
	g++ -c -Wall -std=c++20 */*.cc
	g++ -c -Wall -std=c++20 */*.hh
	g++ -c -x c++-header  -std=c++20 */*.ih
	ar rvs header.a *.o
	g++ main.cc header.a -o main
	g++ main2.cc header.a -o main2

main:
	rm -rf main
	rm -rf main2
	g++ main.cc header.a -o main
	g++ main2.cc header.a -o main2
clean:
	rm -rf *.o
	rm -rf *.a
	rm -rf */*.gch
	rm -rf main
	rm -rf main2