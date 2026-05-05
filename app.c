#include <stdio.h>
// Case of whole flow
#define ALL

// Case of inner_loop only
// #define INNER_LOOP

// Cas of outer_loop only
// #define OUTER_LOOP

int main() {

    #ifdef INNER_LOOP
        #include "app.b.c"
    #endif

    #ifdef OUTER_LOOP
        #include "app.a.c"
    #endif

    #ifdef ALL
        #include "app.a.c"
    #endif

    return 0;
}