
CC=$(CROSS_COMPILE)gcc -g

TARGET=serialib

serialib.o: serialib.c
	$(CC) -c serialib.c
install: serialib.o
	$(CROSS_COMPILE)ar rcs lib$(TARGET).a serialib.o
	install lib$(TARGET).a /usr/lib/lib$(TARGET).a
	install *.h /usr/include/

example: example1.c
	$(CC) example1.c -lserialib -o ex


