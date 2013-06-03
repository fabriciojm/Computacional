#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define N 10000
double modulo(double *);
main (){
        int i, j, n;
        double x, y, v, w, A[N], B[N];
        FILE *fp1, *fp2;
        printf("Introduzca la semilla:\n");
        scanf("%d",&i);
        fp1=fopen("ale.dat", "w");
fp2=fopen("log.dat", "w");
srand(i);
// y= (double)rand()/RAND_MAX;
for (n=10;n<N;n++){
        for (i=0;i<N;i++) A[i]=0;
        for (i=0;i<N;i++) B[i]=0;
        for (j=0; j<n; j++) {
                A[j]=(double)rand()/RAND_MAX;
                };
        v = modulo(A);
        fprintf (fp1,"%d %lf\n",n ,v);
        for (j=1; j<=n; j++) {
                B[0]=(double)rand()/RAND_MAX;
                B[j]=4*B[j-1]*(1-B[j-1]);
                };
        w = modulo(B);
        fprintf (fp2,"%d %lf\n",n ,w);
        }
}
double modulo (double *A){
        int i;
        double z=0;
        for (i=0;i<N;i++) {
                z+=A[i]*A[i];
        }
        return (sqrt(z));
}

