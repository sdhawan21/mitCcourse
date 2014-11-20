CC=mpicc
CFLAGS= -Wall

mpi:mpi.o
	$(CC) -o $@ $^  
mpi.o: mpi.c
	$(CC) -c $<

mpi1:mpi1.o
	$(CC) -o $@ $^
mpi1.o: mpi1.c
	$(CC) -c $<

clean:
	rm -f *.o
