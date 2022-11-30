#include <stdio.h>


int main(){

    FILE *f = fopen("datos.txt", "a");

    if(f == NULL){
        perror("Error en la creacion del archivo");
        return 1;
    }

    /* Metodos de escritura
        fputc - escribe un caracter
        fputs - escribe un text
        fprintf - equivalente a printf
     */
    for(int i = 0; i < 5; i++ ){
        //for(int j = 0; j < 5; i++ ) fprintf(f, "%d  ", j);
        //fputc('\n', f);
        fprintf(f, "%d  ", i);
    }

    fflush(f);
    fclose(f);
    printf("Archivo escrito exitosamente");

   return 0;
}
