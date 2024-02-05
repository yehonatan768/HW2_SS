all: connections main.o my_mat.o

connections: my_mat.o main.o
	gcc -Wall -g -o connections my_mat.o main.o
main.o: main.c
	gcc -Wall -g -c main.c
my_mat.o: my_mat.c
	gcc -Wall -g -c my_mat.c
clean:
	rm *.o connections
