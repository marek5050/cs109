%: %.c++
	g++ -pedantic -std=c++11 -Wall $< -o $@

all: Test1 Test2

clean:
	rm -f Test1
	rm -f Test2

test:
	Test1
	Test2
