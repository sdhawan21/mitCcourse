#include<stdlib.h>
#include<stdio.h>
#include<mpi.h>
#include<math.h>

void lam_darwin_malloc_linker_hack(){};
int main(argc, argv)
int argc;
char *argv[];
{
	int myid, numprocs;	// define proc id and number of processors	
	FILE *fl;
	int i;

	MPI_Init(&argc, & argv);
	MPI_Comm_size(MPI_COMM_WORLD, &numprocs);
	MPI_Comm_rank(MPI_COMM_WORLD, &myid);

	printf("Hello from %d\n", myid);
	printf("Numprocs is %d \n", numprocs);
	
	MPI_Finalize();
}






