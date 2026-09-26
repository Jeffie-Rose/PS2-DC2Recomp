#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__12CActionCharaFP9mgCMemory
// Address: 0x1720e0 - 0x172378
void Initialize__12CActionCharaFP9mgCMemory_0x1720e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__12CActionCharaFP9mgCMemory_0x1720e0");
#endif

    switch (ctx->pc) {
        case 0x1720fcu: goto label_1720fc;
        case 0x1721f8u: goto label_1721f8;
        case 0x1722f4u: goto label_1722f4;
        case 0x172338u: goto label_172338;
        case 0x172344u: goto label_172344;
        case 0x172360u: goto label_172360;
        default: break;
    }

    ctx->pc = 0x1720e0u;

    // 0x1720e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1720e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1720e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1720e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1720e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1720e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1720ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1720ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1720f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1720f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1720f4: 0xc05d4d0  jal         func_175340
    ctx->pc = 0x1720F4u;
    SET_GPR_U32(ctx, 31, 0x1720FCu);
    ctx->pc = 0x1720F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1720F4u;
            // 0x1720f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175340u;
    if (runtime->hasFunction(0x175340u)) {
        auto targetFn = runtime->lookupFunction(0x175340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1720FCu; }
        if (ctx->pc != 0x1720FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CCharacter2Fv_0x175340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1720FCu; }
        if (ctx->pc != 0x1720FCu) { return; }
    }
    ctx->pc = 0x1720FCu;
label_1720fc:
    // 0x1720fc: 0xae0007cc  sw          $zero, 0x7CC($s0)
    ctx->pc = 0x1720fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1996), GPR_U32(ctx, 0));
    // 0x172100: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x172100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x172104: 0xae000668  sw          $zero, 0x668($s0)
    ctx->pc = 0x172104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1640), GPR_U32(ctx, 0));
    // 0x172108: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x172108u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x17210c: 0xae000664  sw          $zero, 0x664($s0)
    ctx->pc = 0x17210cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1636), GPR_U32(ctx, 0));
    // 0x172110: 0x3c054080  lui         $a1, 0x4080
    ctx->pc = 0x172110u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16512 << 16));
    // 0x172114: 0xae000660  sw          $zero, 0x660($s0)
    ctx->pc = 0x172114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1632), GPR_U32(ctx, 0));
    // 0x172118: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x172118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
    // 0x17211c: 0xae06066c  sw          $a2, 0x66C($s0)
    ctx->pc = 0x17211cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 6));
    // 0x172120: 0x24633588  addiu       $v1, $v1, 0x3588
    ctx->pc = 0x172120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13704));
    // 0x172124: 0xa600068a  sh          $zero, 0x68A($s0)
    ctx->pc = 0x172124u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1674), (uint16_t)GPR_U32(ctx, 0));
    // 0x172128: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x172128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17212c: 0xae0006b8  sw          $zero, 0x6B8($s0)
    ctx->pc = 0x17212cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1720), GPR_U32(ctx, 0));
    // 0x172130: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x172130u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172134: 0xae0506ac  sw          $a1, 0x6AC($s0)
    ctx->pc = 0x172134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1708), GPR_U32(ctx, 5));
    // 0x172138: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x172138u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17213c: 0xa6000712  sh          $zero, 0x712($s0)
    ctx->pc = 0x17213cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1810), (uint16_t)GPR_U32(ctx, 0));
    // 0x172140: 0xae000714  sw          $zero, 0x714($s0)
    ctx->pc = 0x172140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1812), GPR_U32(ctx, 0));
    // 0x172144: 0xae000674  sw          $zero, 0x674($s0)
    ctx->pc = 0x172144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1652), GPR_U32(ctx, 0));
    // 0x172148: 0xae000678  sw          $zero, 0x678($s0)
    ctx->pc = 0x172148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1656), GPR_U32(ctx, 0));
    // 0x17214c: 0xae000790  sw          $zero, 0x790($s0)
    ctx->pc = 0x17214cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1936), GPR_U32(ctx, 0));
    // 0x172150: 0xae040794  sw          $a0, 0x794($s0)
    ctx->pc = 0x172150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1940), GPR_U32(ctx, 4));
    // 0x172154: 0xae000780  sw          $zero, 0x780($s0)
    ctx->pc = 0x172154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1920), GPR_U32(ctx, 0));
    // 0x172158: 0xae000784  sw          $zero, 0x784($s0)
    ctx->pc = 0x172158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1924), GPR_U32(ctx, 0));
    // 0x17215c: 0xae000788  sw          $zero, 0x788($s0)
    ctx->pc = 0x17215cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1928), GPR_U32(ctx, 0));
    // 0x172160: 0xae00078c  sw          $zero, 0x78C($s0)
    ctx->pc = 0x172160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1932), GPR_U32(ctx, 0));
    // 0x172164: 0xae0007d8  sw          $zero, 0x7D8($s0)
    ctx->pc = 0x172164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2008), GPR_U32(ctx, 0));
    // 0x172168: 0xae00077c  sw          $zero, 0x77C($s0)
    ctx->pc = 0x172168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1916), GPR_U32(ctx, 0));
    // 0x17216c: 0xae000bec  sw          $zero, 0xBEC($s0)
    ctx->pc = 0x17216cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3052), GPR_U32(ctx, 0));
    // 0x172170: 0xa600075e  sh          $zero, 0x75E($s0)
    ctx->pc = 0x172170u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1886), (uint16_t)GPR_U32(ctx, 0));
    // 0x172174: 0xae000760  sw          $zero, 0x760($s0)
    ctx->pc = 0x172174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1888), GPR_U32(ctx, 0));
    // 0x172178: 0xae000768  sw          $zero, 0x768($s0)
    ctx->pc = 0x172178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1896), GPR_U32(ctx, 0));
    // 0x17217c: 0xae000bf0  sw          $zero, 0xBF0($s0)
    ctx->pc = 0x17217cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3056), GPR_U32(ctx, 0));
    // 0x172180: 0xa200076c  sb          $zero, 0x76C($s0)
    ctx->pc = 0x172180u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1900), (uint8_t)GPR_U32(ctx, 0));
    // 0x172184: 0xae0007b0  sw          $zero, 0x7B0($s0)
    ctx->pc = 0x172184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1968), GPR_U32(ctx, 0));
    // 0x172188: 0xae0007b8  sw          $zero, 0x7B8($s0)
    ctx->pc = 0x172188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    // 0x17218c: 0xae000f48  sw          $zero, 0xF48($s0)
    ctx->pc = 0x17218cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3912), GPR_U32(ctx, 0));
    // 0x172190: 0xae000f44  sw          $zero, 0xF44($s0)
    ctx->pc = 0x172190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3908), GPR_U32(ctx, 0));
    // 0x172194: 0xae000f40  sw          $zero, 0xF40($s0)
    ctx->pc = 0x172194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3904), GPR_U32(ctx, 0));
    // 0x172198: 0xae060f4c  sw          $a2, 0xF4C($s0)
    ctx->pc = 0x172198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3916), GPR_U32(ctx, 6));
    // 0x17219c: 0xae000f54  sw          $zero, 0xF54($s0)
    ctx->pc = 0x17219cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3924), GPR_U32(ctx, 0));
    // 0x1721a0: 0xae000f5c  sw          $zero, 0xF5C($s0)
    ctx->pc = 0x1721a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3932), GPR_U32(ctx, 0));
    // 0x1721a4: 0xae000be4  sw          $zero, 0xBE4($s0)
    ctx->pc = 0x1721a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3044), GPR_U32(ctx, 0));
    // 0x1721a8: 0xae000be8  sw          $zero, 0xBE8($s0)
    ctx->pc = 0x1721a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3048), GPR_U32(ctx, 0));
    // 0x1721ac: 0xa2000bf4  sb          $zero, 0xBF4($s0)
    ctx->pc = 0x1721acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3060), (uint8_t)GPR_U32(ctx, 0));
    // 0x1721b0: 0xa2000bf5  sb          $zero, 0xBF5($s0)
    ctx->pc = 0x1721b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3061), (uint8_t)GPR_U32(ctx, 0));
    // 0x1721b4: 0xae0006a0  sw          $zero, 0x6A0($s0)
    ctx->pc = 0x1721b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1696), GPR_U32(ctx, 0));
    // 0x1721b8: 0xa200076e  sb          $zero, 0x76E($s0)
    ctx->pc = 0x1721b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1902), (uint8_t)GPR_U32(ctx, 0));
    // 0x1721bc: 0xae030718  sw          $v1, 0x718($s0)
    ctx->pc = 0x1721bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1816), GPR_U32(ctx, 3));
    // 0x1721c0: 0xa6000764  sh          $zero, 0x764($s0)
    ctx->pc = 0x1721c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1892), (uint16_t)GPR_U32(ctx, 0));
    // 0x1721c4: 0xae000778  sw          $zero, 0x778($s0)
    ctx->pc = 0x1721c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1912), GPR_U32(ctx, 0));
    // 0x1721c8: 0xae000774  sw          $zero, 0x774($s0)
    ctx->pc = 0x1721c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1908), GPR_U32(ctx, 0));
    // 0x1721cc: 0xa6020770  sh          $v0, 0x770($s0)
    ctx->pc = 0x1721ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1904), (uint16_t)GPR_U32(ctx, 2));
    // 0x1721d0: 0xa6000772  sh          $zero, 0x772($s0)
    ctx->pc = 0x1721d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1906), (uint16_t)GPR_U32(ctx, 0));
    // 0x1721d4: 0xae000bdc  sw          $zero, 0xBDC($s0)
    ctx->pc = 0x1721d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3036), GPR_U32(ctx, 0));
    // 0x1721d8: 0xae00072c  sw          $zero, 0x72C($s0)
    ctx->pc = 0x1721d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1836), GPR_U32(ctx, 0));
    // 0x1721dc: 0xa6000730  sh          $zero, 0x730($s0)
    ctx->pc = 0x1721dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1840), (uint16_t)GPR_U32(ctx, 0));
    // 0x1721e0: 0xa6000732  sh          $zero, 0x732($s0)
    ctx->pc = 0x1721e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1842), (uint16_t)GPR_U32(ctx, 0));
    // 0x1721e4: 0xa6000728  sh          $zero, 0x728($s0)
    ctx->pc = 0x1721e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1832), (uint16_t)GPR_U32(ctx, 0));
    // 0x1721e8: 0xae000720  sw          $zero, 0x720($s0)
    ctx->pc = 0x1721e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1824), GPR_U32(ctx, 0));
    // 0x1721ec: 0xae000724  sw          $zero, 0x724($s0)
    ctx->pc = 0x1721ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1828), GPR_U32(ctx, 0));
    // 0x1721f0: 0xa600071c  sh          $zero, 0x71C($s0)
    ctx->pc = 0x1721f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1820), (uint16_t)GPR_U32(ctx, 0));
    // 0x1721f4: 0xa602072a  sh          $v0, 0x72A($s0)
    ctx->pc = 0x1721f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1834), (uint16_t)GPR_U32(ctx, 2));
label_1721f8:
    // 0x1721f8: 0x2081021  addu        $v0, $s0, $t0
    ctx->pc = 0x1721f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x1721fc: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1721fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x172200: 0xa44007e4  sh          $zero, 0x7E4($v0)
    ctx->pc = 0x172200u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2020), (uint16_t)GPR_U32(ctx, 0));
    // 0x172204: 0x25080100  addiu       $t0, $t0, 0x100
    ctx->pc = 0x172204u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 256));
    // 0x172208: 0xac4007f8  sw          $zero, 0x7F8($v0)
    ctx->pc = 0x172208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2040), GPR_U32(ctx, 0));
    // 0x17220c: 0xac4007fc  sw          $zero, 0x7FC($v0)
    ctx->pc = 0x17220cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2044), GPR_U32(ctx, 0));
    // 0x172210: 0xac4007e8  sw          $zero, 0x7E8($v0)
    ctx->pc = 0x172210u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2024), GPR_U32(ctx, 0));
    // 0x172214: 0xac4007ec  sw          $zero, 0x7EC($v0)
    ctx->pc = 0x172214u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2028), GPR_U32(ctx, 0));
    // 0x172218: 0xa0400803  sb          $zero, 0x803($v0)
    ctx->pc = 0x172218u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2051), (uint8_t)GPR_U32(ctx, 0));
    // 0x17221c: 0xa2000904  sb          $zero, 0x904($s0)
    ctx->pc = 0x17221cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2308), (uint8_t)GPR_U32(ctx, 0));
    // 0x172220: 0xa4400804  sh          $zero, 0x804($v0)
    ctx->pc = 0x172220u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2052), (uint16_t)GPR_U32(ctx, 0));
    // 0x172224: 0xac400818  sw          $zero, 0x818($v0)
    ctx->pc = 0x172224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2072), GPR_U32(ctx, 0));
    // 0x172228: 0xac40081c  sw          $zero, 0x81C($v0)
    ctx->pc = 0x172228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2076), GPR_U32(ctx, 0));
    // 0x17222c: 0xac400808  sw          $zero, 0x808($v0)
    ctx->pc = 0x17222cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2056), GPR_U32(ctx, 0));
    // 0x172230: 0xac40080c  sw          $zero, 0x80C($v0)
    ctx->pc = 0x172230u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2060), GPR_U32(ctx, 0));
    // 0x172234: 0xa0400823  sb          $zero, 0x823($v0)
    ctx->pc = 0x172234u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2083), (uint8_t)GPR_U32(ctx, 0));
    // 0x172238: 0xa2000904  sb          $zero, 0x904($s0)
    ctx->pc = 0x172238u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2308), (uint8_t)GPR_U32(ctx, 0));
    // 0x17223c: 0xa4400824  sh          $zero, 0x824($v0)
    ctx->pc = 0x17223cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2084), (uint16_t)GPR_U32(ctx, 0));
    // 0x172240: 0xac400838  sw          $zero, 0x838($v0)
    ctx->pc = 0x172240u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2104), GPR_U32(ctx, 0));
    // 0x172244: 0xac40083c  sw          $zero, 0x83C($v0)
    ctx->pc = 0x172244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2108), GPR_U32(ctx, 0));
    // 0x172248: 0xac400828  sw          $zero, 0x828($v0)
    ctx->pc = 0x172248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2088), GPR_U32(ctx, 0));
    // 0x17224c: 0xac40082c  sw          $zero, 0x82C($v0)
    ctx->pc = 0x17224cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2092), GPR_U32(ctx, 0));
    // 0x172250: 0xa0400843  sb          $zero, 0x843($v0)
    ctx->pc = 0x172250u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2115), (uint8_t)GPR_U32(ctx, 0));
    // 0x172254: 0xa2000904  sb          $zero, 0x904($s0)
    ctx->pc = 0x172254u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2308), (uint8_t)GPR_U32(ctx, 0));
    // 0x172258: 0xa4400844  sh          $zero, 0x844($v0)
    ctx->pc = 0x172258u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2116), (uint16_t)GPR_U32(ctx, 0));
    // 0x17225c: 0xac400858  sw          $zero, 0x858($v0)
    ctx->pc = 0x17225cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2136), GPR_U32(ctx, 0));
    // 0x172260: 0xac40085c  sw          $zero, 0x85C($v0)
    ctx->pc = 0x172260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2140), GPR_U32(ctx, 0));
    // 0x172264: 0xac400848  sw          $zero, 0x848($v0)
    ctx->pc = 0x172264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2120), GPR_U32(ctx, 0));
    // 0x172268: 0xac40084c  sw          $zero, 0x84C($v0)
    ctx->pc = 0x172268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2124), GPR_U32(ctx, 0));
    // 0x17226c: 0xa0400863  sb          $zero, 0x863($v0)
    ctx->pc = 0x17226cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2147), (uint8_t)GPR_U32(ctx, 0));
    // 0x172270: 0xa2000904  sb          $zero, 0x904($s0)
    ctx->pc = 0x172270u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2308), (uint8_t)GPR_U32(ctx, 0));
    // 0x172274: 0xa4400864  sh          $zero, 0x864($v0)
    ctx->pc = 0x172274u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2148), (uint16_t)GPR_U32(ctx, 0));
    // 0x172278: 0xac400878  sw          $zero, 0x878($v0)
    ctx->pc = 0x172278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2168), GPR_U32(ctx, 0));
    // 0x17227c: 0xac40087c  sw          $zero, 0x87C($v0)
    ctx->pc = 0x17227cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2172), GPR_U32(ctx, 0));
    // 0x172280: 0xac400868  sw          $zero, 0x868($v0)
    ctx->pc = 0x172280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2152), GPR_U32(ctx, 0));
    // 0x172284: 0xac40086c  sw          $zero, 0x86C($v0)
    ctx->pc = 0x172284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2156), GPR_U32(ctx, 0));
    // 0x172288: 0xa0400883  sb          $zero, 0x883($v0)
    ctx->pc = 0x172288u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2179), (uint8_t)GPR_U32(ctx, 0));
    // 0x17228c: 0xa2000904  sb          $zero, 0x904($s0)
    ctx->pc = 0x17228cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2308), (uint8_t)GPR_U32(ctx, 0));
    // 0x172290: 0xa4400884  sh          $zero, 0x884($v0)
    ctx->pc = 0x172290u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2180), (uint16_t)GPR_U32(ctx, 0));
    // 0x172294: 0xac400898  sw          $zero, 0x898($v0)
    ctx->pc = 0x172294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2200), GPR_U32(ctx, 0));
    // 0x172298: 0xac40089c  sw          $zero, 0x89C($v0)
    ctx->pc = 0x172298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2204), GPR_U32(ctx, 0));
    // 0x17229c: 0xac400888  sw          $zero, 0x888($v0)
    ctx->pc = 0x17229cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2184), GPR_U32(ctx, 0));
    // 0x1722a0: 0xac40088c  sw          $zero, 0x88C($v0)
    ctx->pc = 0x1722a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2188), GPR_U32(ctx, 0));
    // 0x1722a4: 0xa04008a3  sb          $zero, 0x8A3($v0)
    ctx->pc = 0x1722a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2211), (uint8_t)GPR_U32(ctx, 0));
    // 0x1722a8: 0xa2000904  sb          $zero, 0x904($s0)
    ctx->pc = 0x1722a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2308), (uint8_t)GPR_U32(ctx, 0));
    // 0x1722ac: 0xa44008a4  sh          $zero, 0x8A4($v0)
    ctx->pc = 0x1722acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2212), (uint16_t)GPR_U32(ctx, 0));
    // 0x1722b0: 0xac4008b8  sw          $zero, 0x8B8($v0)
    ctx->pc = 0x1722b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2232), GPR_U32(ctx, 0));
    // 0x1722b4: 0xac4008bc  sw          $zero, 0x8BC($v0)
    ctx->pc = 0x1722b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2236), GPR_U32(ctx, 0));
    // 0x1722b8: 0xac4008a8  sw          $zero, 0x8A8($v0)
    ctx->pc = 0x1722b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2216), GPR_U32(ctx, 0));
    // 0x1722bc: 0xac4008ac  sw          $zero, 0x8AC($v0)
    ctx->pc = 0x1722bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2220), GPR_U32(ctx, 0));
    // 0x1722c0: 0xa04008c3  sb          $zero, 0x8C3($v0)
    ctx->pc = 0x1722c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2243), (uint8_t)GPR_U32(ctx, 0));
    // 0x1722c4: 0xa2000904  sb          $zero, 0x904($s0)
    ctx->pc = 0x1722c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2308), (uint8_t)GPR_U32(ctx, 0));
    // 0x1722c8: 0xa44008c4  sh          $zero, 0x8C4($v0)
    ctx->pc = 0x1722c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2244), (uint16_t)GPR_U32(ctx, 0));
    // 0x1722cc: 0xac4008d8  sw          $zero, 0x8D8($v0)
    ctx->pc = 0x1722ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2264), GPR_U32(ctx, 0));
    // 0x1722d0: 0xac4008dc  sw          $zero, 0x8DC($v0)
    ctx->pc = 0x1722d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2268), GPR_U32(ctx, 0));
    // 0x1722d4: 0xac4008c8  sw          $zero, 0x8C8($v0)
    ctx->pc = 0x1722d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2248), GPR_U32(ctx, 0));
    // 0x1722d8: 0xac4008cc  sw          $zero, 0x8CC($v0)
    ctx->pc = 0x1722d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2252), GPR_U32(ctx, 0));
    // 0x1722dc: 0xa04008e3  sb          $zero, 0x8E3($v0)
    ctx->pc = 0x1722dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2275), (uint8_t)GPR_U32(ctx, 0));
    // 0x1722e0: 0x18e0ffc5  blez        $a3, . + 4 + (-0x3B << 2)
    ctx->pc = 0x1722E0u;
    {
        const bool branch_taken_0x1722e0 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1722E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1722E0u;
            // 0x1722e4: 0xa2000904  sb          $zero, 0x904($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2308), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1722e0) {
            ctx->pc = 0x1721F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1721f8;
        }
    }
    ctx->pc = 0x1722E8u;
    // 0x1722e8: 0x28e10009  slti        $at, $a3, 0x9
    ctx->pc = 0x1722e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1722ec: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1722ECu;
    {
        const bool branch_taken_0x1722ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1722F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1722ECu;
            // 0x1722f0: 0x71940  sll         $v1, $a3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1722ec) {
            ctx->pc = 0x172324u;
            goto label_172324;
        }
    }
    ctx->pc = 0x1722F4u;
label_1722f4:
    // 0x1722f4: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x1722f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1722f8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1722f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1722fc: 0xa48007e4  sh          $zero, 0x7E4($a0)
    ctx->pc = 0x1722fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2020), (uint16_t)GPR_U32(ctx, 0));
    // 0x172300: 0x28e20009  slti        $v0, $a3, 0x9
    ctx->pc = 0x172300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x172304: 0xac8007f8  sw          $zero, 0x7F8($a0)
    ctx->pc = 0x172304u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2040), GPR_U32(ctx, 0));
    // 0x172308: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x172308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x17230c: 0xac8007fc  sw          $zero, 0x7FC($a0)
    ctx->pc = 0x17230cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2044), GPR_U32(ctx, 0));
    // 0x172310: 0xac8007e8  sw          $zero, 0x7E8($a0)
    ctx->pc = 0x172310u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2024), GPR_U32(ctx, 0));
    // 0x172314: 0xac8007ec  sw          $zero, 0x7EC($a0)
    ctx->pc = 0x172314u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 0));
    // 0x172318: 0xa0800803  sb          $zero, 0x803($a0)
    ctx->pc = 0x172318u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2051), (uint8_t)GPR_U32(ctx, 0));
    // 0x17231c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17231Cu;
    {
        const bool branch_taken_0x17231c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17231Cu;
            // 0x172320: 0xa2000904  sb          $zero, 0x904($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2308), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17231c) {
            ctx->pc = 0x1722F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1722f4;
        }
    }
    ctx->pc = 0x172324u;
label_172324:
    // 0x172324: 0x0  nop
    ctx->pc = 0x172324u;
    // NOP
    // 0x172328: 0xae0007dc  sw          $zero, 0x7DC($s0)
    ctx->pc = 0x172328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2012), GPR_U32(ctx, 0));
    // 0x17232c: 0xa6000bf8  sh          $zero, 0xBF8($s0)
    ctx->pc = 0x17232cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 3064), (uint16_t)GPR_U32(ctx, 0));
    // 0x172330: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x172330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172334: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x172334u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172338:
    // 0x172338: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x172338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x17233c: 0xc0704f8  jal         func_1C13E0
    ctx->pc = 0x17233Cu;
    SET_GPR_U32(ctx, 31, 0x172344u);
    ctx->pc = 0x172340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17233Cu;
            // 0x172340: 0x24440734  addiu       $a0, $v0, 0x734 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1844));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C13E0u;
    if (runtime->hasFunction(0x1C13E0u)) {
        auto targetFn = runtime->lookupFunction(0x1C13E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172344u; }
        if (ctx->pc != 0x172344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12CPalletAnimeFv_0x1c13e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172344u; }
        if (ctx->pc != 0x172344u) { return; }
    }
    ctx->pc = 0x172344u;
label_172344:
    // 0x172344: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x172344u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x172348: 0x2652000e  addiu       $s2, $s2, 0xE
    ctx->pc = 0x172348u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 14));
    // 0x17234c: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x17234cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x172350: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x172350u;
    {
        const bool branch_taken_0x172350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x172350) {
            ctx->pc = 0x172338u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_172338;
        }
    }
    ctx->pc = 0x172358u;
    // 0x172358: 0xc05a888  jal         func_16A220
    ctx->pc = 0x172358u;
    SET_GPR_U32(ctx, 31, 0x172360u);
    ctx->pc = 0x17235Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172358u;
            // 0x17235c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (runtime->hasFunction(0x16A220u)) {
        auto targetFn = runtime->lookupFunction(0x16A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172360u; }
        if (ctx->pc != 0x172360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetScript__12CActionCharaFv_0x16a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172360u; }
        if (ctx->pc != 0x172360u) { return; }
    }
    ctx->pc = 0x172360u;
label_172360:
    // 0x172360: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x172360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x172364: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x172364u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172368: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x172368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17236c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17236cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172370: 0x3e00008  jr          $ra
    ctx->pc = 0x172370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172370u;
            // 0x172374: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172378u;
}
