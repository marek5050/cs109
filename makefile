cs:

config:
	git config -l

init:
	touch README
	git init
	git add README
	git commit -m 'first commit'
	git remote add origin git@github.com:gpdowning/cs109.git
	git push -u origin master

pull:
	@rsync -r -t -u -v --delete             \
	--include "LowerBound1.h"               \
	--include "LowerBound1.c++"             \
	--include "LowerBound2.h"               \
	--include "LowerBound2.c++"             \
	--include "BinarySearch1.h"             \
	--include "BinarySearch1.c++"           \
	--include "BinarySearch2.h"             \
	--include "BinarySearch2.c++"           \
	--include "GCD.h"                       \
	--include "GCD.c++"                     \
	--include "IsPrime1.h"                  \
	--include "IsPrime1.c++"                \
	--include "IsPrime2.h"                  \
	--include "IsPrime2.c++"                \
	--include "Sieve1.h"                    \
	--include "Sieve1.c++"                  \
	--include "Sieve2.h"                    \
	--include "Sieve2.c++"                  \
	--exclude "*"                           \
	../../exercises/c++/ c++
	@rsync -r -t -u -v --delete             \
	--include "LowerBound1.py"              \
	--include "LowerBound1T.py"             \
	--include "LowerBound2.py"              \
	--include "LowerBound2T.py"             \
	--include "BinarySearch1.py"            \
	--include "BinarySearch1T.py"           \
	--include "BinarySearch2.py"            \
	--include "BinarySearch2T.py"           \
	--include "GCD.py"                      \
	--include "GCDT.py"                     \
	--include "IsPrime1.py"                 \
	--include "IsPrime1T.py"                \
	--include "IsPrime2.py"                 \
	--include "IsPrime2T.py"                \
	--include "Sieve1.py"                   \
	--include "Sieve1T.py"                  \
	--include "Sieve2.py"                   \
	--include "Sieve2T.py"                  \
	--exclude "*"                           \
	../../exercises/python/ python

push:
	cd c++; make clean
	cd python; make clean
	git add .travis.yml
	git add c++
	git add makefile
	git add python
	git commit -m "another commit"
	git push
	git status

status:
	git branch
	git remote -v
	git status
