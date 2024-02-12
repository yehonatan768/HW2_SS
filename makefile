all: connections my_graph.o my_mat.o my_Knapsack.o

connections: my_mat.o my_graph.o
	gcc -Wall -g -o connections my_mat.o my_graph.o
my_graph.o: my_graph.c
	gcc -Wall -g -c my_graph.c
my_mat.o: my_mat.c
	gcc -Wall -g -c my_mat.c
my_Knapsack.o: my_Knapsack.c
	gcc -Wall -g -c my_Knapsack.c
clean:
	rm *.o connections
