#include <stdio.h>

main(){
    FILE *fptr;
    fptr = fopen("a", "a");
    for (int i = 0; i < 1000; i++){
	fprintf(fptr, "bib\n");   
    }
    fclose(fptr);
    return 0;
}
