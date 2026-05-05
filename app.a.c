for(int y=0;y<10;y++) {
    #ifdef OUTER_LOOP
        printf("y: %d\n",y);
    #endif
    
    #ifdef ALL
        #include "app.b.c"
    #endif
}