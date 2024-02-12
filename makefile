all: my_graph my_Knapsack my_graph.o my_mat.o my_Knapsack.o

my_Knapsack:my_Knapsack.o
	gcc -Wall -g -o my_Knapsack my_Knapsack.o
my_graph: my_mat.o my_graph.o
	gcc -Wall -g -o my_graph my_mat.o my_graph.o
my_graph.o: my_graph.c
	gcc -Wall -g -c my_graph.c
my_mat.o: my_mat.c
	gcc -Wall -g -c my_mat.c
my_Knapsack.o: my_Knapsack.c
	gcc -Wall -g -c my_Knapsack.c
clean:
	rm *.o my_graph my_Knapsack
