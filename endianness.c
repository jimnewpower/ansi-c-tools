#include <assert.h>
#include <stdio.h>

#include "endianness.h"
#include "bool.h"

/*
 * Returns TRUE if the machine is little-endian, FALSE otherwise.
 */
int is_little_endian() {
    unsigned int num = 0x12345678;
    char *p = (char*)&num;

    if (*p == 0x78) {
        return TRUE;
    } else if (*p == 0x12) {
        return FALSE;
    }

    assert(FALSE && "Endianness not detected.");
}

/*
 * Returns TRUE if the machine is big-endian, FALSE otherwise.
 */
int is_big_endian() {
    return !is_little_endian();
}

/*
 * Prints the endianness of the machine.
 */
void display_endianness() {
    if (is_little_endian()) {
        printf("Little-endian\n");
    } else {
        printf("Big-endian\n");
    }
}