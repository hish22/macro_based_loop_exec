for(int i=0;i<10;i++) {
    #ifdef INNER_LOOP
    printf("i = %d\n",(i));
    #endif

    #ifdef ALL
        printf("result = %d\n",(i * y));
    #endif
}