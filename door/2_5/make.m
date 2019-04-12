CC=g++
TARGET=all
OBJECTS=stackmain.cpp
$(TARGET):$(OBJECTS)
	$(CC) $(OBJECTS) -o stack
clean:*.o
	rm *.o

