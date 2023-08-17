#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int bytes) {
    unsigned char *ptr = (unsigned char *)print_opcodes;
    int i;
    
    for (i = 0; i < bytes; i++) {
        printf("%02x ", *ptr);
        ptr++;
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }
    
    int bytes = atoi(argv[1]);
    
    if (bytes <= 0) {
        printf("Error\n");
        return 2;
    }
    
    print_opcodes(bytes);
    
    return 0;
}

