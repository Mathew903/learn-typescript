#include <stdio.h>

typedef struct {
    char codDeporte[5];
    int tiempo;
} competidor;

typedef struct {
    char codDeporte[5];
    char nomDeporte[20];
    int tiempo;
} record;

void resultadosCompeticion(FILE *c, record *rec){
    c = fopen("COMPETIDORES.txt", "r");
    while(!feof(c)){
        fscanf(c, "%s %d", &rec->codDeporte, &rec->tiempo);
        rec++;
    }

    fclose(c);
    printf("Exito\n");
}


int main(){
    FILE *competidores;
    FILE *records;
    record r[10];
    int cont = 0;

    resultadosCompeticion(competidores, r);
    //tiempoRecords();
    for(int j = 0; j < sizeof(record); j++){
        printf("%s %d\n", r[j].codDeporte, r[j].tiempo);
    }

    //printf("%s %d\n", r[0].codDeporte, r[0].tiempo);
    return 0;
}
