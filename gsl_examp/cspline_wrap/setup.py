from distutils.core import setup, Extension

extmod = Extension('_cubic_spline_interp_1d',
                   include_dirs = ['/usr/local/Cellar/gsl/1.16/include'], # e.g.
                   libraries = ['gsl'],
                   library_dirs = ['/usr/local/Cellar/gsl/1.16/lib'], # e.g.
                   sources = ['_cubic_spline_interp_1d.c'])

setup (ext_modules = [extmod])
