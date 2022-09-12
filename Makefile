mainPoint: main.o Point.o
	gcc *.o -o mainPoint

main.o: main.c
	gcc -c main.c

Point.o: Point.c Point.h
	gcc -c Point.c

clean:
	rm *.o mainPoint