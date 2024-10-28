CC_FLAGS = -g -Wall -pedantic

CC := clang ${CC_FLAGS}
GCC := gcc ${CC_FLAGS}
CC++ := clang++ ${CC_FLAGS}
GCC++ := clang++ ${CC_FLAGS}

target = numbers
target_cc = $(target)_cc

executables = $(target) $(target_cc) two
# objects = $(target).o $(target_cc).o 
objects = *.o

# gcc = /usr/local/bin/gcc
cc = /usr/bin/clang -Wall

default: $(target)

two: two.c
	@#$(cc) -o two two.o
	${CC} -o two two.c

two.o: two.c
	${CC} -o two.o two.c

$(target) c: $(target).o
	${CC} -Wall -o $(target) $(target).o

$(target_cc) cc g++: $(target).cc
	${CC++} -Wall -o $(target_cc) $(target).cc


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
