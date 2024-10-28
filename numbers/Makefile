# 
# export CPPFLAGS="-I/usr/local/opt/llvm/include"
# export LDFLAGS="-L/usr/local/opt/llvm/lib"

CC_FLAGS = -g -Wall -pedantic

PLATFORM := $(shell uname)
ifeq ($(PLATFORM),Darwin)
	PATH := /usr/local/opt/llvm/bin:$(PATH)
endif

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

two: two.o
	@which clang
	${CC} -o two two.o

two-verbose: two.o
	@which clang
	${CC} -v -o two two.o

two.o: two.c
	${CC} -c -o two.o two.c

$(target) c: $(target).o
	@echo make c
	${CC} -o $(target) $(target).o

$(target_cc) cc: $(target).cc
	${CC++} -Wall -o $(target_cc) $(target).cc

cc-verbose: $(target).cc
	${CC++} -v -Wall -o $(target_cc) $(target).cc

$(target).o: $(target).c
	@which clang
	${CC} -c -o $(target).o $(target).c

$(target_cc).o: $(target).cc
	${CC++} -c -o $(target_cc).o $(target).cc

debug: $(target).o
	gcc -g -Wall -o$(target) $(target).c

pedantic: $(target).o
	gcc -Wall -ansi -pedantic -o $(target) $(target).c

ansi: $(target).o
	gcc -Wall -ansi -pedantic -o $(target) $(target).c

clang-path:
	@echo $(CC) 
	@which clang
	@which clang++

clean:
	rm -f $(objects)

really-clean: clean
	rm -f $(executables)
