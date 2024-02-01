all: rev
	./rev

rev: main.o rev.o
	gcc -o rev main.o rev.o 

main.o: main.c 
	gcc -c main.c -o main.o 

rev.o: rev.c
	gcc -c rev.c -o rev.o 

clean:
	rm -fr *.o rev
