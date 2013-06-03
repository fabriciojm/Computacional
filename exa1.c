#include<stdio.h>
#include<math.h>

main (){
        
        int i = 1;
        long int j = 2;
        float pi = M_PI;
        double m = 5.2131231231231;
        char nombre[10];


        printf ("Cuento los primeros: %d, %ld, %0.12f, %lf \nInserte su nombre\n", i, j, pi, m);
        scanf  ("%s", &nombre);
        printf ("Su nombre es: %s\n", nombre);
        }
