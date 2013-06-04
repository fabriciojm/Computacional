#include<stdio.h>
#include<math.h>
#include<stdlib.h>

main (){
        
        int l, k, i = 1;
        long int j = 2;
        float pi = M_PI;
        double m = 5.2131231231231;
        char nombre[10];
        
        FILE *fp2; //*fp1
        double s = M_PI/5, x, y[100];

        printf ("Cuento los primeros: %d, %ld, %0.12f, %lf \nInserte su nombre\n", i, j, pi, m);
        scanf  ("%s", nombre); // Si nombre no fuera un arreglo, sino una variable,
                               // entonces pondria &nombre. nombre es un apuntador al arreglo.
        printf ("Su nombre es: %s\n\n Ahora voy a abrir un archivo que contendra dos columnas de cien datos: una con los numeros naturales y otra con numeros aleatorios entre cero y uno, escoja la modalidad (1 o 2):\n", nombre);
        scanf ("%d",&k);

//        fp1 = fopen ("in.dat", "r");
        fp2 = fopen ("out.dat", "w");

//        srand (s);

        if ((k==1)) {
                for (l=0;l<100;l++) {
                        srand (s+l);
                        x = (double) rand()/RAND_MAX;
                        fprintf (fp2, "%d %lf \n", l, x);
                        }
                }

        else if ((k==2)) {
                for (l=0;l<100;l++){
                        srand (s+l);
                        y[l] = (double) rand()/RAND_MAX;
                        }
                for (l=0;l<100;l++) fprintf (fp2, "%d %lf \n", l, y[l]);
                }
        else printf ("Eso no fue ni 1 ni 2\n");

}
