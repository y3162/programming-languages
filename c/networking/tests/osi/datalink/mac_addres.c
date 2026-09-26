#include <osi/datalink/mac_address.h>

static int test_mac_address(void)
{
    return dummy_mac_address();
}

int main(void)
{
    return test_mac_address();
}
