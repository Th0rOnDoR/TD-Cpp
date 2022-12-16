#include <iostream>
#include <math.h>


double fact(double x) {
	if (x <= 0) {
		return 1;
	}
	return (x * fact(x - 1));
}

double fun(double x, int k, double *val) {
	if (k <= 0) {
		std::cout << round(x) << "\n";
		return round(x);
	}
	if (val[k] != -1) {
		return val[k];
	}
	double L = 0; 
	for (int i = 0; i < k; i++) {
		L += fun(x, i,val) / fact(i);
	}
	double tmp = (fact(k + 1) * (x - L));
	std::cout << tmp << " , " << k << "\n";
	val[k] = tmp;
	return tmp;
}



int main() {
	int size = 1000;
	double* val = new double[size] { };
	for (int i = 0; i < 1000; i++) {
		val[i] = -1;
	}
	std::cout << fun(3.0/8.0, 5,val);
	return 1;
}
