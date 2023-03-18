all: clean executable execute 

executable:lista.o mem.o p0.o p1.o p2.o 
	gcc -Wall -o p0 lista.o mem.o p0.o p1.o p2.o

p0.o:
	gcc -c -g p0.c 

p1.o: 
	gcc -c -g p1.c

p2.o: 
	gcc -c -g p2.c

lista.o:
	gcc -c -g lista.c

mem.o:
	gcc -c -g mem.c

execute: 
	./p0

valgrind: clean executable
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose --log-file=valgrind-report.txt ./p0

clean:
	rm -f *.o *.txt p0
