target = numbers
target_cc = $(target)_cc

executables = $(target) $(target_cc)
objects = $(target).o $(target_cc).o

# default: $(target)

$(target) c: $(target).o
	gcc -Wall -o $(target) $(target).o

$(target_cc) cc g++: $(target_cc).o
	g++ -Wall -o $(target_cc) $(target_cc).o

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
