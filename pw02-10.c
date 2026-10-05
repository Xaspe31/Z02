#include <stdio.h>
#include <stdint.h>

int main(void) {
    int id;
    unsigned int status;
    float volt;
    scanf("%x %o %f", &id, &status, &volt);
    uint8_t code = status;
    uint16_t checksum = id + code;
    printf("PACKET_ID: %d\n", id);
    printf("STATUS_CODE: %u\n", code);
    printf("STATUS_CHAR: %c\n", code);
    printf("VOLTAGE: %.2f\n", volt);
    printf("CHECKSUM: %u\n", checksum);
    return 0;
}
