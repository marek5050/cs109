cs:
	make clean
	@echo `pwd`
	@rsync -r -t -u -v --delete      \
	--include "*.py"                 \
	--include "makefile"             \
	--exclude "*"                    \
	. downing@$(CS):cs/cs109/python/

FILES :=          \
    LowerBound1   \
    LowerBound2   \
    BinarySearch1 \
    BinarySearch2 \
    GCD           \
    GCD2          \
    IsPrime2      \
    Sieve2        \
    Sieve4

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
