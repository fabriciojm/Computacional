#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define N 10

main () {
       int n, i, l, M = 1000;
       FILE *fp1, *fp2;
       double x[N], f[N], y, V[N], g;

       fp1 = fopen ("puntos.dat", "r");
       fp2 = fopen ("salida.dat", "w");



       for (l=0;l<N;++l) fscanf(fp1,"%lf %lf", &x[l], &f[l]);
//       for (l=0;l<N;++l) V[l]=1;
       for (y=0;y<1;y+=0.00101) {
               
               g = 0;
               for (i=0;i<N;i++) {
                       V[i]=1;
                       for (n=0;n<N;n++) if (n!=i) V[i]*=(y-x[n])/(x[i]-x[n]);
                       g += V[i]*f[i];
                       
                       }
               fprintf (fp2,"%lf %lf\n",y,g);
               
               } 
        
        
        
        }

