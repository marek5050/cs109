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

all:

clean:
	rm -f  .coverage
	rm -f  *.pyc
	rm -rf __pycache__

test:
	for i in $(FILES);                \
	do                                \
		coverage run --branch $$i.py; \
		coverage report -m;           \
	done
