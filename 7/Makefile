all: cleanall
	g++ -c -Wall -std=c++20 */*.cc
	g++ -c -Wall -std=c++20 */*.h
	g++ -c -x c++-header  -std=c++20 */*.ih
	ar rvs header.a *.o
	g++ main.cc header.a -o main


main: cleanmain
	rm -rf main
	g++ main.cc header.a -o main

cleanall: clean cleanmain
clean:
	rm -rf *.o
	rm -rf *.a
	rm -rf */*.gch

cleanmain:
	rm -rf main