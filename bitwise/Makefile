target = bitwise
executables = $(target)
objects = $(target).o

# default: $(target)

bitwise: $(target).o
	gcc -Wall -ansi -pedantic -o $(target) $(target).c

debug: $(target).o
	gcc -g -Wall -o$(target) $(target).c

clean:
	rm -f $(objects)

really-clean: clean
	rm -f $(executables)
