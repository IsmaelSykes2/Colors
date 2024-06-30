#include "colors.h"

void DDEBUG(const char *format, ...) {
    va_list args;
    va_start(args, format);
    //printf(CYAN_COLOR "DDEBUG " NO_COLOR);
    printf(CYAN_COLOR "" NO_COLOR);

    while (*format) {
        //printf(CYAN_COLOR);
        if (*format == '%') {
            format++;
            switch (*format) {
                case 'd':
                    printf(BLUE_COLOR "%d" NO_COLOR, va_arg(args, int));
                    break;
                case 'f':
                    printf(YELLOW_COLOR "%.8f" NO_COLOR, va_arg(args, double));
                    break;
                case 'l':
                    printf(YELLOW_COLOR "%.8lf" NO_COLOR, va_arg(args, double));
                    break;
                case 'x':
                    printf(GREEN_COLOR "0x%08x" NO_COLOR, va_arg(args, int));
                    break;
                case 'X':
                    printf(GREEN_COLOR "0x%08X" NO_COLOR, va_arg(args, int));
                    break;
                case 's':
                    printf(MAGENTA_COLOR "%s" NO_COLOR, va_arg(args, char*));
                    break;
                case 'c':
                    printf(MAGENTA_COLOR "%c" NO_COLOR, va_arg(args, char*));
                    break;
                default:
                    printf(NO_COLOR);
                    //putchar(*format);
            }
        } else {
            putchar(*format);
        }

        format++;
    }

    va_end(args);
}


void DERROR(char *msg)
{
    printf(NO_COLOR "path: %s, line:%d " RED_COLOR "(%s): %s \n\r", __FILE__,__LINE__,__func__, msg);
}




void loading(int times)
{
    //int num_frames = 5;  // Número de frames en la animación
    for (int i = 0; i < 1; ++i) {  // Repetir la animación tres veces
        for (int frame = 0; frame < times; ++frame) {
            printf("Loading");
            for (int dot = 0; dot < frame; ++dot) {
                printf(".");
            }
            fflush(stdout);  // Limpiar el búfer y mostrar la salida
            // Esperar un breve momento (en segundos)
            usleep(200 * 1000);
            // Limpiar la línea anterior antes de imprimir la siguiente
            printf(clear_line);
        }
    }
    printf("Loading complete!\n\r");
}

void waiting(int times)
{
    //int num_frames = 5;  // Número de frames en la animación
    for (int i = 0; i < 1; ++i) {  // Repetir la animación tres veces
        for (int frame = 0; frame < times; ++frame) {
            printf("Waiting");
            for (int dot = 0; dot < frame; ++dot) {
                printf(".");
            }
            fflush(stdout);  // Limpiar el búfer y mostrar la salida
            // Esperar un breve momento (en segundos)
            usleep(200 * 1000);
            // Limpiar la línea anterior antes de imprimir la siguiente
            printf(clear_line);
        }
    }
    printf("Ready!\n\r");
}








