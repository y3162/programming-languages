#ifndef ETHERNET_H
#define ETHERNET_H

#include <stdint.h>
#include <osi/datalink/mac_address.h>

typedef struct {
    MacAddress target_mac;
    MacAddress source_mac;
    uint16_t type_len;
} EthernetHeader;

int dummy_ethernet(void);

#endif
