#ifndef MAC_ADDRESS_H
#define MAC_ADDRESS_H

#include <stdint.h>

typedef struct {
    uint8_t address[6];
} MacAddress;

int dummy_mac_address(void);

#endif
