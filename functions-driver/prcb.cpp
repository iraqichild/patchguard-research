#include <intrin.h>

PKPRCB KeGetCurrentPrcb()
{
    return (PKPRCB)__readgsqword(0x20);
}
