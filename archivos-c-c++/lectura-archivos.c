#include <stdio.h>
#include <stdlib.h>
int main(){

    FILE *f = fopen("datos.txt", "rb");

    if(f == NULL){
        perror("Error en la apertura del archivo");
        return 1;
    }

    //int numeros; char cadena[10];
    fseek(f, 0, SEEK_END);
    int num_elementos = ftell(f);
    rewind(f);

    char * cadena = (char *) calloc(sizeof(char), num_elementos);

    if(cadena == NULL){
        printf("Error en reserva de memoria");
        return 2;
    }

    int num_elementos_leidos = fread(cadena, sizeof(char), num_elementos, f);

    if(num_elementos_leidos != num_elementos){
        perror("Error leyendo el archivo");
        return 3;
    }

    printf("%s", cadena);

    /* while(!feof(f)){
        //caracter = fgetc(f);
        //fscanf(f, "%d%s", &numeros, &cadena);
        printf("%d %s\n", numeros, cadena);
    }*/

    free(cadena);
    fclose(f);
    printf("\n\nEl archivo se ha leido correctamente...");

    return 0;
}
