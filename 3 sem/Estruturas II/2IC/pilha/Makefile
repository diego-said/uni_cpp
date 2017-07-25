all: dec2bin

dec2bin: dec2bin.o pilha.o
	g++ -g -Wall -o dec2bin dec2bin.o pilha.o

%.o: %.cpp
	g++ -g -Wall -c $<

clean:
	rm -f *.o dec2bin *~