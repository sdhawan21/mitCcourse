CC=mpicc
CFLAGS= -Wall

mpi:mpi.o
	$(CC) -o $@ $^  
mpi.o: mpi.c
	$(CC) -c $<

clean:
	rm -f *.o
