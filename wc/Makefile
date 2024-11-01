target = wc
target_cc = $(target)_cc
target_clang = $(target)_clang

executables = $(target) $(target_cc) $(target_clang)
objects = $(target).o $(target_cc).o $(target_14).o $(target_clang).o

# default: $(target)

$(target_clang) clang: $(target_clang).o
	@echo clang
	clang -Wall -o $(target_clang) $(target_clang).o

$(target_cc)_14 cc14: $(target_cc)_14.o
	g++ -Wall -std=c++14 -o $(target_cc)_14 $(target_cc)_14.o

$(target_cc)_cc20 cc20: $(target_cc).o
	g++ -Wall -std=c++20 -o $(target_cc) $(target_cc).o

$(target) c: $(target).o
	gcc -Wall -o $(target) $(target).o

$(target_cc) cc g++: $(target_cc).o
	g++ -Wall -o $(target_cc) $(target_cc).o

$(target_cc)_14.o: $(target_cc).c
	g++ -Wall -std=c++14 -o $(target_cc)_14.o $(target_cc).c

$(target_clang).o clang.o: $(target).c
	@echo clang.o
	clang -Wall -c -o $(target_clang).o $(target).c

$(target).o: $(target).c
	gcc -Wall -c -o $(target).o $(target).c

$(target_cc).o: $(target).cc
	g++ -Wall -c -o $(target_cc).o $(target).cc

debug: $(target).o
	gcc -g -Wall -o$(target) $(target).c

pedantic: $(target).o
	gcc -Wall -ansi -pedantic -o $(target) $(target).c

ansi: $(target).o
	gcc -Wall -ansi -pedantic -o $(target) $(target).c

clean:
	rm -f $(objects)

really-clean: clean
	rm -f $(executables)
