TARGET=temp
all: $(TARGET).exe
	./$(TARGET).exe

$(TARGET).exe: main.o $(TARGET)_functions.o
	gcc -o $(TARGET).exe main.o $(TARGET)_functions.o

main.o: main.c 
	gcc -c main.c -o main.o 

$(TARGET)_functions.o: $(TARGET)_functions.c $(TARGET)_functions.h
	gcc -c $(TARGET)_functions.c -o $(TARGET)_functions.o

clean:
	rm -fr *.o $(TARGET).exe