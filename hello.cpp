#include <cstdio>
#include <zstd.h>

int main()
{
    printf_s("zstd version: %s\r\n", ZSTD_versionString());
    return 0;
}
