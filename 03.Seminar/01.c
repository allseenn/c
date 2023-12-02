#include <stdio.h>
#include <inttypes.h>

int main() {
    printf("+---------------------------------------------------------------------+\n");
    printf("|   Type        | Byte(s)  |                  |                       |\n");
    printf("|               \\of memory/                Min|                    Max|\n");
    printf("|                 \\     /                     |                       |\n"); 
    printf("+------------------+-+------------------------+-----------------------+\n"); printf("|%18s|%d|                    %"PRId8"|                   %"PRId8"|\n","int8_t", sizeof(int8_t),INT8_MIN,INT8_MAX); 
    printf("|%18s|%d|                       %"PRIu8"|                   %"PRIu8"|\n","uint8_t",    sizeof(uint8_t),0,UINT8_MAX);
    printf("|%18s|%d|                  %"PRId16"|                 %"PRId16"|\n","int16_t", sizeof(int16_t),INT16_MIN,INT16_MAX); 
    printf("|%18s|%d|                       %"PRIu16"|                 %"PRIu16"|\n","uint16_t",    sizeof(uint16_t),0,UINT16_MAX);
    printf("|%18s|%d|                       %"PRIu32"|                 %"PRIu32"|\n","uint32_t",    sizeof(uint32_t),0,UINT32_MAX);
    printf("|%18s|%d|                       %"PRIu64"|                 %"PRIu64"|\n","uint64_t",    sizeof(uint64_t),0,UINT64_MAX);

}