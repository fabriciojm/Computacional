#include<stdio.h>
#include<stdlib.h>
#include<math.h>


double f(double x), prod (double x1, double x2);

main () {
        int i, N = 100;
        double x1, x2, c, dx;
        printf ("Busco la raiz a la ecuacion exp(x)*log(x)-x*x en un intervalo. Inicio del intervalo:");
        scanf ("%lf",&x1);
        printf ("\nFinal del intervalo:");
        scanf ("%lf",&x2);

        if (( prod(x1,x2) > 0)) printf ("No hay una raiz en el intervalo [%lf,%lf]",x1,x2);
        else {for (i=1; i<N; i++) {
                c = 0.5*(x1+x2);
                if ( prod(x1,c) > 0 ) x1 = c;
                else x2 = c;
                };
        
        c = 0.5*(x1+x2);
        dx = 0.5*(x2-x1);
        printf ("Despues de %d iteraciones, la raiz es %0.10lf con un error de %0.20lf.\n", N, c, dx);
        }
        
}

double f (double x){
        return (exp(x)*log(x)-x*x);
        }

double prod (double x1, double x2){
        return (f(x1)*f(x2));
        }
