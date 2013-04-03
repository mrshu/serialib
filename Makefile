
CC=$(CROSS_COMPILE)gcc -g

TARGET=serialib

serialib.o: serialib.c
	$(CC) -c serialib.c

$(TARGET):
	$(CROSS_COMPILE)ar rcs lib$(TARGET).a serialib.o

install: $(TARGET)
	install lib$(TARGET).a /usr/lib/lib$(TARGET).a
	install *.h /usr/include/

example: example.c
	$(CC) example.c -lserialib -o ex

clean:
	rm *.o *.a


