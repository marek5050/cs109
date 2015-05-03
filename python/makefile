cs:
	make clean
	@echo `pwd`
	@rsync -r -t -u -v --delete      \
	--include "*.py"                 \
	--include "makefile"             \
	--exclude "*"                    \
	. downing@$(CS):cs/cs109/python/

FILES :=           \
    LowerBound1T   \
    LowerBound2T   \
    BinarySearch1T \
    BinarySearch2T \
    GCDT           \
    IsPrime1T      \
    IsPrime2T      \
    Sieve1T        \
    Sieve2T

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
