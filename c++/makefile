%: %.c++
#	g++     -fprofile-arcs -ftest-coverage -pedantic -std=c++11 -Wall $< -o $@ /usr/local/lib/gtest_main.a
	g++-4.8 -fprofile-arcs -ftest-coverage -pedantic -std=c++11 -Wall $< -o $@ -lgtest -lgtest_main -pthread

all: Test1 Test2

clean:
	rm -f *.gcda
	rm -f *.gcno
	rm -f *.gcov
	rm -f Test1
	rm -f Test2

test:
	./Test1
	./Test2
