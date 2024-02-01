all: prog
	./prog
prog: main.o sensor.o 
	gcc -o prog main.o sensor.o

main.o: main.c
	gcc -c -o main.o main.c

sensor.o: sensor.c 
	gcc -c -o sensor.o sensor.c

clean:
	rm -rf *.o prog