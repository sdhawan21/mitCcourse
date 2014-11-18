import ctypes 
import numpy as np

from ctypes import c_double, c_long, c_int, POINTER

def _load_cspline(dll_path, function_name):
	"""
	Compiled interpolation library readin
	"""
	dll =ctypes.CDLL(dll_path, mode=ctypes.RTLD_GLOBAL)

	func=dll.cubic_spline_interp_1d

	func.argtypes = [c_long, c_long, POINTER(c_double), POINTER(c_double), POINTER(c_double), POINTER(c_double), POINTER(c_int)]

	return func


cubic_interp=_load_cspline('./_cubic_spline_interp_1d.so',
                                          'cubic_spline_interp_1d')
