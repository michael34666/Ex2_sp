
all:connections

connections:main.o libmat.a
	gcc -o connections main.o libmat.a

main.o:main.c my_mat.h
	gcc -Wall -g -c main.c -o main.o

libmat.a:my_mat.o
	ar -rcs libmat.a my_mat.o

my_mat.o:my_mat.c my_mat.h
	gcc -Wall -g -c my_mat.c -o my_mat.o


clean:
	rm -f *.o *.a connections


.PHONY:all clean
