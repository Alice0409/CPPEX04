double getVolumeSurface(double x, double y, double z, double* px1, double* px2) {

	*px1 = x * z * y;
	*px2 = (x * z + x * y + z * y) * 2;
	return 0;
}