#include <stdio.h>
#include <stdlib.h>

void concatenar(FILE *base, FILE *copiado)
{
    char leitor[1000];

    while(fgets(leitor, sizeof leitor, copiado) != NULL)
    {
        fputs(leitor,base);
    }
}


int main(int argc, char*argv[])
{
    FILE *arquivoA;
    FILE *arquivoB;
    FILE *arquivoC;

    

    if ((arquivoA = fopen (argv[1],"r"))== NULL){
        printf("erro ao abrir o primeiro arquivo\n");
    }

    if ((arquivoB = fopen (argv[2],"r"))== NULL){
        printf("erro ao abrir o segundo arquivo\n");
    }

    arquivoC = fopen("resultado.txt","a");


    if (arquivoC == NULL)
        printf("erro ao abrir o terceiro arquivo\n");
    

    concatenar(arquivoC, arquivoA);
    concatenar(arquivoC, arquivoB);

    fclose(arquivoA);
    fclose(arquivoB);
    fclose(arquivoC);

    return 0;

}

