ifeq ($(shell uname), Darwin)
	CXX      := g++ -pedantic -std=c++11 -Wall
	LIB      := /usr/local/lib/gtest_main.a
	VALGRIND :=
else
	CXX      := g++-4.8 -pedantic -std=c++11 -Wall
	LIB      := -lgtest -lgtest_main -pthread
	VALGRIND := valgrind
endif

%.app: %.c++
	$(CXX) $< -o $@ $(LIB)

all: BinarySearch.app  \
     BinarySearch2.app \
     BinarySearch3.app \
     GCD.app           \
     GCD2.app          \
     IsPrime2.app      \
     LowerBound.app    \
     LowerBound2.app   \
     LowerBound3.app   \
     Sieve2.app        \
     Sieve4.app

clean:
	rm -f *.app

test: all
	./BinarySearch.app
	./BinarySearch2.app
	./BinarySearch3.app
	./GCD.app
	./GCD2.app
	./IsPrime2.app
	./LowerBound.app
	./LowerBound2.app
	./LowerBound3.app
	./Sieve2.app
	./Sieve4.app
