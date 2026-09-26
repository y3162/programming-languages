#include <osi/datalink/ethernet.h>

static int test_ethernet(void)
{
    return dummy_ethernet();
}

int main(void)
{
    return test_ethernet();
}
