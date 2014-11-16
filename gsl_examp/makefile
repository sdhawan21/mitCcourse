CC=gcc

incpath=-I/usr/local/Cellar/gsl/1.16/include/

libpath=-I/usr/local/Cellar/gsl/1.16/lib/
suffix=-fnested-functions
libs= -lgsl -lm -lcblas


bessel:bessel.o		
	$(CC) $(libpath) -o $@ $^ $(libs)
bessel.o:bessel.c
	$(CC) (incpath) -c $< $(suffix)

clean:
	rm *.o
