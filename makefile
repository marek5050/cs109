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
	--include "BinarySearch.c++"            \
	--include "BinarySearch2.c++"           \
	--include "BinarySearch3.c++"           \
	--include "LowerBound.c++"              \
	--include "LowerBound2.c++"             \
	--include "LowerBound3.c++"             \
	--include "GCD.c++"                     \
	--include "GCD2.c++"                    \
	--include "IsPrime.c++"                 \
	--include "IsPrime2.c++"                \
	--include "Sieve.c++"                   \
	--include "Sieve2.c++"                  \
	--include "Sieve3.c++"                  \
	--include "Sieve4.c++"                  \
	--exclude "*"                           \
	../../exercises/c++/ c++
	@rsync -r -t -u -v --delete             \
	--include "BinarySearch.py"             \
	--include "BinarySearch2.py"            \
	--include "BinarySearch3.py"            \
	--include "LowerBound.py"               \
	--include "LowerBound2.py"              \
	--include "LowerBound3.py"              \
	--include "GCD.py"                      \
	--include "GCD2.py"                     \
	--include "IsPrime.py"                  \
	--include "IsPrime2.py"                 \
	--include "Sieve.py"                    \
	--include "Sieve2.py"                   \
	--include "Sieve3.py"                   \
	--include "Sieve4.py"                   \
	--exclude "*"                           \
	../../exercises/python/ python

push:
	git add c++
	git add python
	git add .travis.yml
	git add makefile
	git commit -m "another commit"
	git push
	git status

status:
	git branch
	git remote -v
	git status
