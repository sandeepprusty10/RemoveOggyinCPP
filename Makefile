all:
	g++ -Wall -Wextra -o testchecker *.cpp -fprofile-arcs -ftest-coverage -fPIC -O0
