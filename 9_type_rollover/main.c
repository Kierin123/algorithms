#include <stdio.h>
#include <stdint.h>
#include <limits.h>

#define MAX(a, b) (((a) > (b)) ? (a) : (b))

void main(void)
{
    int8_t Int8;
    uint8_t Uint8;
    int16_t Int16;
    uint16_t Uint16;
    int32_t Int32;
    uint32_t Uint32;

    printf("uint32_t max: %ld \n", UINT32_MAX);
    printf("uint16_t max: %ld \n", UINT16_MAX);
    printf("uint8_t max: %ld \n", UINT8_MAX);
    printf("int32_t max: %ld \n", INT32_MAX);
    printf("int16_t max: %ld \n", INT16_MAX);
    printf("int8_t max: %ld \n", INT8_MAX);
    printf("int32_t min: -%ld \n", INT32_MIN);
    printf("int16_t min: -%ld \n", INT16_MIN);
    printf("int8_t min: -%ld \n\n\n", INT8_MIN);

    Uint32 = UINT32_MAX;
    printf("uint32_t przed inkrementacja: %ld \n", Uint32);
    Uint32 += 1;
    printf("uint32_t po inkrementacja: %+ld \n\n", Uint32);

    Int32 = INT32_MAX;
    printf("int32_t przed inkrementacja: %-ld \n", Int32);
    Int32 += Int32 + 2;
    printf("int32_t po inkrementacja: %-ld \n", Int32);

    if (1)
    {
        int a = 2;
    }

    a = 5;
    printf("%d", a);
}
