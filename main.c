#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv)
{
    if( argc < 2)
    {
        printf("Incorrect Usage.\nUsage:\n\t bit-printer <integer to convert>.\n");
        exit(-1);
    }

    int32_t _value = atoi(argv[1]);
    char _output[33];
    _output[32] = '\0';

    printf(">> %d in binary is: ", _value);
    for(int i = 0; i < 32; i++)
    {
        if(_value % 2 == 0)
            _output[31 - i] = '0';
        else
            _output[31 - i] = '1';

        _value = _value >> 1;
    }
    printf("%s\n", _output);

    return 0;
}