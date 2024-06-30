#include <stdio.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h> // Para sleep()

/*------------ Text ------------ */
#define GREEN_COLOR   "\x1b[32m"
#define RED_COLOR     "\x1b[31m"
#define YELLOW_COLOR  "\x1b[33m"
#define NO_COLOR      "\x1b[0m"
#define BLUE_COLOR    "\033[34m"
#define CYAN_COLOR    "\x1b[36m"
#define MAGENTA_COLOR "\x1b[35m"
#define BLACK_COLOR   "\x1b[30m"
#define WHITE_COLOR   "\x1b[37m"

/*------- Background ----------*/
#define BLACK_COLORB   "\x1b[40m" 
#define RED_COLORB     "\x1b[41m" 
#define GREEN_COLORB   "\x1b[42m" 
#define YELLOW_COLORB  "\x1b[43m" 
#define BLUE_COLORB    "\x1b[44m" 
#define MAGENTA_COLORB "\x1b[45m" 
#define CYAN_COLORB    "\x1b[46m" 
#define WHITE_COLORB   "\x1b[47m" 

/*--------- Style ---------*/
#define BF      "\x1b[1m"
#define UL      "\x1b[4m"
#define UUL     "\x1b[9m"

#define BF_WEAK "\x1b[2m" //Ocuro Débil (puede no ser soportado)
#define CURSIVE "\x1b[3m" //Cursiva (puede no ser soportado)
#define BLINK   "\x1b[5m" //Parpadeo (puede no ser soportado)
#define SHIFT   "\x1b[7m" //Reverso (intercambia el fondo y el texto)
#define LABELED "\x1b[9m" //Tachado (puede no ser soportado)

/* Clear scream*/
#define clear_line "\r\x1b[K"


void DDEBUG(const char *format, ...);
void DERROR(char *msg);
void waiting(int times);
void loading(int times);


