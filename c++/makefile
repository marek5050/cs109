%: %.c++
#	g++     -pedantic -std=c++11 -Wall $< -o $@ /usr/local/lib/gtest_main.a
	g++-4.8 -pedantic -std=c++11 -Wall $< -o $@ -lgtest -lgtest_main -pthread

all: BinarySearch  \
     BinarySearch2 \
     BinarySearch3 \
     GCD           \
     GCD2          \
     IsPrime2      \
     LowerBound    \
     LowerBound2   \
     LowerBound3   \
     Sieve2        \
     Sieve4

clean:
	rm -f *.gcda
	rm -f *.gcno
	rm -f *.gcov
	rm -f BinarySearch
	rm -f BinarySearch2
	rm -f BinarySearch3
	rm -f GCD
	rm -f GCD2
	rm -f IsPrime2
	rm -f LowerBound
	rm -f LowerBound2
	rm -f LowerBound3
	rm -f Sieve2
	rm -f Sieve4

test: all
	./BinarySearch
	./BinarySearch2
	./BinarySearch3
	./GCD
	./GCD2
	./IsPrime2
	./LowerBound
	./LowerBound2
	./LowerBound3
	./Sieve2
	./Sieve4
