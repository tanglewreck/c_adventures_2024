target = bitwise

executables = $(target)
objects = $(target).o

# default: $(target)

bitwise: $(target).o
	@clear
	gcc -Wall -o $(target) $(target).c

debug: $(target).o
	gcc -g -Wall -o$(target) $(target).c

pedantict : $(target).o
	gcc -Wall -ansi -pedantic -o $(target) $(target).c

ansi: $(target).o
	gcc -Wall -ansi -pedantic -o $(target) $(target).c

clean:
	rm -f $(objects)

really-clean: clean
	rm -f $(executables)
