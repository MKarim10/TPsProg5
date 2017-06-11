#include <stdio.h>
#include <stdarg.h>

double min_flt(int nombre, ...)
{	
	double min, courant;
	int i;

	va_list ap;
	va_start(ap, nombre);
	min = va_arg(ap, double);
	for(i=1; i<nombre; i++){
		courant = va_arg(ap, double);
		if( courant < min)
			min = courant;
	}

	va_end(ap);
return min;

}

int main(int argc, char** argv)
{
	printf("Le min de 4, 5, 9, 25, 2 est: %lg\n", min_flt(4, (double)5, (double)9, (double)25, (double)2));
return 0;
}
