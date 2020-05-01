#include <idc.idc>

static main(){
    auto addr = 0x405018;
    auto i;
    for(i = 0x100; i <= 0x1f0; ++i){
        PatchByte(addr + i, Byte(addr + i) ^ 0x20);
    }
}