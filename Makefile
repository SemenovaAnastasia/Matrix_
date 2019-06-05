.PHONY: lib bin version

all: lib bin 

lib: 
	+cd src && make

bin: lib
	+cd test && make

clean:
	cd src && make clean
	cd test && make clean
	