TARGET=pair
OUT_FILE=output.txt
all: $(TARGET).exe
	./$(TARGET).exe

$(TARGET).exe: main.o queue.o $(TARGET).o
	gcc -o $(TARGET).exe main.o queue.o $(TARGET).o

main.o: main.c 
	gcc -c main.c -o main.o 

queue.o: queue.c
	gcc -c queue.c -o queue.o

$(TARGET).o: $(TARGET).c
	gcc -c $(TARGET).c -o $(TARGET).o

clean:
	rm -fr *.o $(TARGET).exe $(OUT_FILE)
