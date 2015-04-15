%: %.c++
	g++ -pedantic -std=c++11 -Wall $< -o $@ $(LIB)

all: Test Test2
	Test
	Test2

clean:
	rm -f Test
	rm -f Test2
