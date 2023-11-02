#include <stdio.h>

main()
{
    int v[10]; int i;

    printf("Sequencia de Inteiros: \n");
    printf("=========================== \n");

    for (i = 0 ; i <= 9 ; i++) {
        printf("Digite um valor: \n"); scanf("%d", &v[ i ]);
    }

    printf("Pares: \n");

    for( i = 0 ; i <= 9 ;  i++) {
        if ((v[i]) % 2 == 0) {
            printf("%d", v[ i ]);
        }
    }

    printf("Impares: \n");

    for(i = 0 ; 9 ; i++) {
        if ((v[i]) % 2 != 0){
            printf("%d", v[ i ]);
        }
    }
}
