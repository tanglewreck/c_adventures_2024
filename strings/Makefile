target = strings

executables = $(target)
objects = $(target).o

# default: $(target)

$(target) c: $(target).o
	gcc -Wall -o $(target) $(target).c

$(target)-cc cc: $(target).o
	g++ -Wall -o $(target)_cc $(target).cc

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
