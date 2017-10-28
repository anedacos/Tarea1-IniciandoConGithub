# Tarea1-IniciandoConGithub

1) "HOLA MUNDO EN C"
#include <stdio.h>
main()
{
printf("hello, world\n");
}

2) CALCULO Y CONVERSION DE GRADOS FARETNHEI A CELCIUS
#include <stdio.h>
/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version */
main()
{
float fahr, celsius;
float lower, upper, step;
lower = 0; /* lower limit of temperatuire scale */
upper = 300; /* upper limit */
step = 20; /* step size */
fahr = lower;
while (fahr <= upper) {
celsius = (5.0/9.0) * (fahr-32.0);
printf("%3.0f %6.1f\n", fahr, celsius);
fahr = fahr + step;
}
}

#include <stdio.h>
#define LOWER 0 /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size */
/* print Fahrenheit-Celsius table */
main()
{
int fahr;
for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}

3) CONTANDO CARACTERES
#include <stdio.h>
/* count characters in input; 2nd version */
main()
{
double nc;
for (nc = 0; gechar() != EOF; ++nc)
;
printf("%.0f\n", nc);
}
