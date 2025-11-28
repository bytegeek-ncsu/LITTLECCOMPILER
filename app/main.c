#include<stdio.h>
#include "dummy.h"
#include "vector.h"
#include "compiler.h"


int main(){

    // printf("Hello World Little Compiler\n");
    // struct vector *vec = vector_create(sizeof(int));
    // int x = 50;
    // vector_push(vec, &x);
    // vector_set_peek_pointer(vec, 0);
    // int *ptr = vector_peek(vec);
    // printf("%i\n", *ptr);
    int res = compile_file("./test.c", "./test", 0);
    if (res == COMPILER_FILE_COMPILED_OK)
    {
        printf("everything compiled OK\n");
    }
    else if(res == COMPILER_FAILED_WITH_ERRORS)
    {
        printf("Compile failed\n");
    }
    else
    {
        printf("Unknown response for compile time\n");
    }
    return 0;
}

