// armando_split.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char line[1000];
    printf("Digite os ingredientes separados por vírgula:\n");
    if(!fgets(line, sizeof(line), stdin)) return 0;
    size_t len = strlen(line);
    if(len && line[len-1]=='\n') line[len-1]=0;

    char *tokens[200];
    int tcount = 0;
    char buffer[1000];
    int bi = 0;
    for(size_t i=0; ; ++i) {
        char c = line[i];
        if(c==',' || c==0) {
            buffer[bi]=0;
            /* trim possiveis espacos */
            char *start = buffer;
            while(*start==' ') start++;
            char *end = buffer + strlen(buffer) - 1;
            while(end>=start && *end==' ') { *end = 0; end--; }
            tokens[tcount] = malloc(strlen(start)+1);
            strcpy(tokens[tcount], start);
            tcount++;
            bi=0;
            if(c==0) break;
        } else {
            buffer[bi++] = c;
        }
    }

    printf("Ingredientes separados (%d):\n", tcount);
    for(int i=0;i<tcount;i++){
        printf("%d: %s\n", i+1, tokens[i]);
        free(tokens[i]);
    }
    return 0;
}
