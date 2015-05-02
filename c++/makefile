ifeq ($(shell uname), Darwin)
    CXX      := g++ -fprofile-arcs -ftest-coverage -pedantic -std=c++11 -Wall
    GCOV     := gcov -b
    LIB      := /usr/local/lib/gtest_main.a
    VALGRIND :=
else
    CXX      := g++-4.8 -fprofile-arcs -ftest-coverage -pedantic -std=c++11 -Wall
    GCOV     := gcov-4.8 -b
    LIB      := -lgtest -lgtest_main -pthread
    VALGRIND := valgrind
endif

.PRECIOUS: %.app

%.app: %.c++
	$(CXX) $< -o $@ $(LIB)

%.c++.gcov: %.app
	$(VALGRIND) $<
	-$(GCOV) $(<:.app=.c++) | grep -A 5 "File './$(<:.app=.h)'"
	$(GCOV) $(<:.app=.c++) | grep -A 5 "File '$(<:.app=.c++)'"

FILES :=          \
    LowerBound1   \
    LowerBound2   \
    BinarySearch1 \
    BinarySearch2 \
    GCD           \
    IsPrime1      \
    IsPrime2      \
    Sieve1        \
    Sieve2

all: $(FILES:=.app)

clean:
	rm -f *.app
	rm -f *.gcda
	rm -f *.gcno
	rm -f *.gcov

test: $(FILES:=.c++.gcov)
