#include <stdio.h>
#include <string.h>
#include "colors.h"

/*

#ifdef __has_include
  #if __has_include("colors.h")
    #include "colors.h"
    #define COLORS 1
  #else
    #define COLORS 0
  #endif
#else
  #include "colors.h"
  #define COLORS 1
#endif
*/

int main() {


    int intValue = 42;
    float floatValue = 3.14;
    double a_egy = 4.14151619;
    double r_egy = 5.14151619;
    uint32_t reg = 0xAABB;
    char nombre[10] = "Ismael";
    DDEBUG("Active energy %f, Reactive energy %f, register %X \n",a_egy,r_egy, reg);
    DERROR("Error No attach");
    DDEBUG("Nombre: %s \n\r",nombre);
    
    waiting(7);
    printf("Nombre: ");
    for ( int i = 0; i < strlen(nombre); i++)
        DDEBUG("%c",nombre[i]);
    printf("\n\r");
    loading(10);


    return 0;
}


/* 
compiler command

gcc line.c -o line.out
gcc -o line.out line.c -DMESSAGE
./line.out

*/




/*
     FILE *fp;
    char ch;

    // Abre el archivo git_status.txt en modo lectura
    fp = fopen("git_status.txt", "r");
    if (fp == NULL) {
        perror(RED_COLOR "Error al abrir el archivo \n" NO_COLOR);
        return 1;
    }

    // Lee y muestra el contenido del archivo
       printf(CIAN_COLOR "Contenido de git_status.txt:\n" NO_COLOR);
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    // Cierra el archivo
    fclose(fp);

    DEBUG("ADE9000 Starts");
    ALERT("ADE9000 ALERT");


    printf("\x1b[2J");
    DDEBUG("Hola Ismael");
    DWARN("Voltage is below");
    printf(BLUE_COLORB "");
    puts("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    return 0;
}*/


