#include<stdio.h>
#include<stdlib.h>
#include<mpi.h>
#include<math.h>


int main(argc, argv)
int argc;
char *argv[];
{
	int myid, numprocs;
	int tag, source, destination, count;
	int buffer;
	MPI_Status status;
	
	MPI_Init(&argc, &argv);
	MPI_Comm_size(MPI_COMM_WORLD, &numprocs);
	MPI_Comm_rank(MPI_COMM_WORLD, &myid);
	
	tag=0;
	source=0;
	destination =0 ;
	count = 0;
	
	if (myid == source)
	{
		buffer=0;

		MPI_Send (&buffer, count, MPI_INT, destination, tag, MPI_COMM_WORLD);
	
		printf("processor %d sent %d \n", myid, buffer);
		
	}
	if (myid == destination)
	{
		MPI_Recv(&buffer, count, MPI_INT, source, tag, MPI_COMM_WORLD, &status);
		printf("processor %d got %d \n", myid, buffer);

	}

	MPI_Finalize();
}


