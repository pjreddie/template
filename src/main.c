#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "test.h"
#include "args.h"

int main(int argc, char **argv)
{
    if (argc < 2) {
        fprintf(stderr, "usage: %s [test|]\n", argv[0]);
    } else if (0 == strcmp(argv[1], "test")){
        test();
    } else {
        fprintf(stderr, "unrecognized option: %s\n", argv[1]);
    }
    return 0;
}
