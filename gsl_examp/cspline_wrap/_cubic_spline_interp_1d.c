//Using gsl interpolation libraries for a faster spline fit than from scipy

//#include<stdlib.h>
#include<stdio.h>
#include<gsl/gsl_spline.h>


void cubic_spline_interp_1d ( long Nref, long Nout, double *ref_x, double *ref_y, double *out_x, double *out_y, int32_t *mask)
{
	long ii;
	gsl_interp_accel *acc = gsl_interp_accel_alloc();
	
	gsl_spline *spline = gsl_spline_alloc(gsl_interp_cspline, Nref);

	gsl_spline_init(spline, ref_x, ref_y, Nref);

	for (ii=0; ii< Nout; ii++)
	{
		if (out_x[ii] < ref_x[0])
		{
		mask[ii] =1 ;
		}
		else if (out_x[ii] > ref_x[Nref-1])
		{	mask[ii] =1;
		}
	
		else {
		out_y[ii]=gsl_spline_eval (spline, out_x[ii], acc);	}
	}
	gsl_spline_free(spline);
	gsl_interp_accel_free(acc);
}



