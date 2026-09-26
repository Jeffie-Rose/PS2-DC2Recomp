#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__11CMenuInventFv
// Address: 0x2006f0 - 0x200e08
void ps2___ct__11CMenuInventFv_0x2006f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__11CMenuInventFv_0x2006f0");
#endif

    switch (ctx->pc) {
        case 0x200704u: goto label_200704;
        case 0x200718u: goto label_200718;
        case 0x200720u: goto label_200720;
        case 0x200728u: goto label_200728;
        case 0x200730u: goto label_200730;
        case 0x2007ecu: goto label_2007ec;
        case 0x200c00u: goto label_200c00;
        case 0x200ca0u: goto label_200ca0;
        case 0x200ce0u: goto label_200ce0;
        case 0x200d0cu: goto label_200d0c;
        case 0x200d54u: goto label_200d54;
        case 0x200dccu: goto label_200dcc;
        case 0x200ddcu: goto label_200ddc;
        case 0x200decu: goto label_200dec;
        case 0x200df4u: goto label_200df4;
        default: break;
    }

    ctx->pc = 0x2006f0u;

    // 0x2006f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2006f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2006f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2006f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2006f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2006f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2006fc: 0xc08dc2c  jal         func_2370B0
    ctx->pc = 0x2006FCu;
    SET_GPR_U32(ctx, 31, 0x200704u);
    ctx->pc = 0x200700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2006FCu;
            // 0x200700: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2370B0u;
    if (runtime->hasFunction(0x2370B0u)) {
        auto targetFn = runtime->lookupFunction(0x2370B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200704u; }
        if (ctx->pc != 0x200704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14CBaseMenuClassFv_0x2370b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200704u; }
        if (ctx->pc != 0x200704u) { return; }
    }
    ctx->pc = 0x200704u;
label_200704:
    // 0x200704: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x200704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x200708: 0x26040168  addiu       $a0, $s0, 0x168
    ctx->pc = 0x200708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 360));
    // 0x20070c: 0x24425d60  addiu       $v0, $v0, 0x5D60
    ctx->pc = 0x20070cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23904));
    // 0x200710: 0xc065c24  jal         func_197090
    ctx->pc = 0x200710u;
    SET_GPR_U32(ctx, 31, 0x200718u);
    ctx->pc = 0x200714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200710u;
            // 0x200714: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200718u; }
        if (ctx->pc != 0x200718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200718u; }
        if (ctx->pc != 0x200718u) { return; }
    }
    ctx->pc = 0x200718u;
label_200718:
    // 0x200718: 0xc04e640  jal         func_139900
    ctx->pc = 0x200718u;
    SET_GPR_U32(ctx, 31, 0x200720u);
    ctx->pc = 0x20071Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200718u;
            // 0x20071c: 0x26040398  addiu       $a0, $s0, 0x398 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200720u; }
        if (ctx->pc != 0x200720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200720u; }
        if (ctx->pc != 0x200720u) { return; }
    }
    ctx->pc = 0x200720u;
label_200720:
    // 0x200720: 0xc04e640  jal         func_139900
    ctx->pc = 0x200720u;
    SET_GPR_U32(ctx, 31, 0x200728u);
    ctx->pc = 0x200724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200720u;
            // 0x200724: 0x2604053c  addiu       $a0, $s0, 0x53C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1340));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200728u; }
        if (ctx->pc != 0x200728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200728u; }
        if (ctx->pc != 0x200728u) { return; }
    }
    ctx->pc = 0x200728u;
label_200728:
    // 0x200728: 0xc04e640  jal         func_139900
    ctx->pc = 0x200728u;
    SET_GPR_U32(ctx, 31, 0x200730u);
    ctx->pc = 0x20072Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200728u;
            // 0x20072c: 0x26040d48  addiu       $a0, $s0, 0xD48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200730u; }
        if (ctx->pc != 0x200730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200730u; }
        if (ctx->pc != 0x200730u) { return; }
    }
    ctx->pc = 0x200730u;
label_200730:
    // 0x200730: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x200730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x200734: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x200734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x200738: 0xae000114  sw          $zero, 0x114($s0)
    ctx->pc = 0x200738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
    // 0x20073c: 0x3c064220  lui         $a2, 0x4220
    ctx->pc = 0x20073cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16928 << 16));
    // 0x200740: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x200740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
    // 0x200744: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x200744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200748: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x200748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
    // 0x20074c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x20074cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200750: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x200750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
    // 0x200754: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x200754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200758: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x200758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
    // 0x20075c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20075cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200760: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x200760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
    // 0x200764: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x200764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x200768: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x200768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
    // 0x20076c: 0xae000138  sw          $zero, 0x138($s0)
    ctx->pc = 0x20076cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
    // 0x200770: 0xa200024c  sb          $zero, 0x24C($s0)
    ctx->pc = 0x200770u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 588), (uint8_t)GPR_U32(ctx, 0));
    // 0x200774: 0xa6000112  sh          $zero, 0x112($s0)
    ctx->pc = 0x200774u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 274), (uint16_t)GPR_U32(ctx, 0));
    // 0x200778: 0xae070610  sw          $a3, 0x610($s0)
    ctx->pc = 0x200778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1552), GPR_U32(ctx, 7));
    // 0x20077c: 0xa207061f  sb          $a3, 0x61F($s0)
    ctx->pc = 0x20077cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1567), (uint8_t)GPR_U32(ctx, 7));
    // 0x200780: 0xa207061c  sb          $a3, 0x61C($s0)
    ctx->pc = 0x200780u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1564), (uint8_t)GPR_U32(ctx, 7));
    // 0x200784: 0xa2000622  sb          $zero, 0x622($s0)
    ctx->pc = 0x200784u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1570), (uint8_t)GPR_U32(ctx, 0));
    // 0x200788: 0xae070614  sw          $a3, 0x614($s0)
    ctx->pc = 0x200788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1556), GPR_U32(ctx, 7));
    // 0x20078c: 0xa2070620  sb          $a3, 0x620($s0)
    ctx->pc = 0x20078cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1568), (uint8_t)GPR_U32(ctx, 7));
    // 0x200790: 0xa207061d  sb          $a3, 0x61D($s0)
    ctx->pc = 0x200790u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1565), (uint8_t)GPR_U32(ctx, 7));
    // 0x200794: 0xa2000623  sb          $zero, 0x623($s0)
    ctx->pc = 0x200794u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1571), (uint8_t)GPR_U32(ctx, 0));
    // 0x200798: 0xae070618  sw          $a3, 0x618($s0)
    ctx->pc = 0x200798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1560), GPR_U32(ctx, 7));
    // 0x20079c: 0xa2070621  sb          $a3, 0x621($s0)
    ctx->pc = 0x20079cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1569), (uint8_t)GPR_U32(ctx, 7));
    // 0x2007a0: 0xa207061e  sb          $a3, 0x61E($s0)
    ctx->pc = 0x2007a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1566), (uint8_t)GPR_U32(ctx, 7));
    // 0x2007a4: 0xa2000624  sb          $zero, 0x624($s0)
    ctx->pc = 0x2007a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1572), (uint8_t)GPR_U32(ctx, 0));
    // 0x2007a8: 0xa600060c  sh          $zero, 0x60C($s0)
    ctx->pc = 0x2007a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1548), (uint16_t)GPR_U32(ctx, 0));
    // 0x2007ac: 0xae00062c  sw          $zero, 0x62C($s0)
    ctx->pc = 0x2007acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1580), GPR_U32(ctx, 0));
    // 0x2007b0: 0xae060628  sw          $a2, 0x628($s0)
    ctx->pc = 0x2007b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1576), GPR_U32(ctx, 6));
    // 0x2007b4: 0xa6000580  sh          $zero, 0x580($s0)
    ctx->pc = 0x2007b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1408), (uint16_t)GPR_U32(ctx, 0));
    // 0x2007b8: 0xa6000582  sh          $zero, 0x582($s0)
    ctx->pc = 0x2007b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1410), (uint16_t)GPR_U32(ctx, 0));
    // 0x2007bc: 0xae070584  sw          $a3, 0x584($s0)
    ctx->pc = 0x2007bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1412), GPR_U32(ctx, 7));
    // 0x2007c0: 0xae000588  sw          $zero, 0x588($s0)
    ctx->pc = 0x2007c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1416), GPR_U32(ctx, 0));
    // 0x2007c4: 0xae00058c  sw          $zero, 0x58C($s0)
    ctx->pc = 0x2007c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1420), GPR_U32(ctx, 0));
    // 0x2007c8: 0xae000590  sw          $zero, 0x590($s0)
    ctx->pc = 0x2007c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1424), GPR_U32(ctx, 0));
    // 0x2007cc: 0xae070594  sw          $a3, 0x594($s0)
    ctx->pc = 0x2007ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1428), GPR_U32(ctx, 7));
    // 0x2007d0: 0xa20005b8  sb          $zero, 0x5B8($s0)
    ctx->pc = 0x2007d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1464), (uint8_t)GPR_U32(ctx, 0));
    // 0x2007d4: 0xae0005bc  sw          $zero, 0x5BC($s0)
    ctx->pc = 0x2007d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1468), GPR_U32(ctx, 0));
    // 0x2007d8: 0xae0005c0  sw          $zero, 0x5C0($s0)
    ctx->pc = 0x2007d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1472), GPR_U32(ctx, 0));
    // 0x2007dc: 0xa6000390  sh          $zero, 0x390($s0)
    ctx->pc = 0x2007dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 912), (uint16_t)GPR_U32(ctx, 0));
    // 0x2007e0: 0xa200024d  sb          $zero, 0x24D($s0)
    ctx->pc = 0x2007e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 589), (uint8_t)GPR_U32(ctx, 0));
    // 0x2007e4: 0xae000254  sw          $zero, 0x254($s0)
    ctx->pc = 0x2007e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 0));
    // 0x2007e8: 0xae000250  sw          $zero, 0x250($s0)
    ctx->pc = 0x2007e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
label_2007ec:
    // 0x2007ec: 0x2033821  addu        $a3, $s0, $v1
    ctx->pc = 0x2007ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2007f0: 0x304b0001  andi        $t3, $v0, 0x1
    ctx->pc = 0x2007f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2007f4: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2007F4u;
    {
        const bool branch_taken_0x2007f4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2007F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2007F4u;
            // 0x2007f8: 0xace003c8  sw          $zero, 0x3C8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 968), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2007f4) {
            ctx->pc = 0x200808u;
            goto label_200808;
        }
    }
    ctx->pc = 0x2007FCu;
    // 0x2007fc: 0x11600003  beqz        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2007FCu;
    {
        const bool branch_taken_0x2007fc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x200800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2007FCu;
            // 0x200800: 0xb4080  sll         $t0, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2007fc) {
            ctx->pc = 0x20080Cu;
            goto label_20080c;
        }
    }
    ctx->pc = 0x200804u;
    // 0x200804: 0x256bfffe  addiu       $t3, $t3, -0x2
    ctx->pc = 0x200804u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967294));
label_200808:
    // 0x200808: 0xb4080  sll         $t0, $t3, 2
    ctx->pc = 0x200808u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_20080c:
    // 0x20080c: 0x2043021  addu        $a2, $s0, $a0
    ctx->pc = 0x20080cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x200810: 0x10b4821  addu        $t1, $t0, $t3
    ctx->pc = 0x200810u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x200814: 0x95040  sll         $t2, $t1, 1
    ctx->pc = 0x200814u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x200818: 0x540c0  sll         $t0, $a1, 3
    ctx->pc = 0x200818u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x20081c: 0x1054821  addu        $t1, $t0, $a1
    ctx->pc = 0x20081cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x200820: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x200820u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x200824: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x200824u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x200828: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x200828u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x20082c: 0xa48c0  sll         $t1, $t2, 3
    ctx->pc = 0x20082cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x200830: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x200830u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x200834: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x200834u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x200838: 0x25080068  addiu       $t0, $t0, 0x68
    ctx->pc = 0x200838u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 104));
    // 0x20083c: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x20083cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x200840: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x200840u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200844: 0x0  nop
    ctx->pc = 0x200844u;
    // NOP
    // 0x200848: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x200848u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20084c: 0x24480001  addiu       $t0, $v0, 0x1
    ctx->pc = 0x20084cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x200850: 0x310b0001  andi        $t3, $t0, 0x1
    ctx->pc = 0x200850u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x200854: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x200854u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x200858: 0xe4c10264  swc1        $f1, 0x264($a2)
    ctx->pc = 0x200858u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 612), bits); }
    // 0x20085c: 0xe4c00268  swc1        $f0, 0x268($a2)
    ctx->pc = 0x20085cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 616), bits); }
    // 0x200860: 0x5010004  bgez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x200860u;
    {
        const bool branch_taken_0x200860 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x200864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200860u;
            // 0x200864: 0xace003cc  sw          $zero, 0x3CC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 972), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200860) {
            ctx->pc = 0x200874u;
            goto label_200874;
        }
    }
    ctx->pc = 0x200868u;
    // 0x200868: 0x11600003  beqz        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x200868u;
    {
        const bool branch_taken_0x200868 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x20086Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200868u;
            // 0x20086c: 0xb4880  sll         $t1, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200868) {
            ctx->pc = 0x200878u;
            goto label_200878;
        }
    }
    ctx->pc = 0x200870u;
    // 0x200870: 0x256bfffe  addiu       $t3, $t3, -0x2
    ctx->pc = 0x200870u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967294));
label_200874:
    // 0x200874: 0xb4880  sll         $t1, $t3, 2
    ctx->pc = 0x200874u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_200878:
    // 0x200878: 0x24480001  addiu       $t0, $v0, 0x1
    ctx->pc = 0x200878u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20087c: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x20087cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x200880: 0x85043  sra         $t2, $t0, 1
    ctx->pc = 0x200880u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 8), 1));
    // 0x200884: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x200884u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x200888: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x200888u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x20088c: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x20088cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x200890: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x200890u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x200894: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x200894u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200898: 0x0  nop
    ctx->pc = 0x200898u;
    // NOP
    // 0x20089c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20089cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2008a0: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2008A0u;
    {
        const bool branch_taken_0x2008a0 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x2008A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2008A0u;
            // 0x2008a4: 0xe4c0026c  swc1        $f0, 0x26C($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 620), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2008a0) {
            ctx->pc = 0x2008B0u;
            goto label_2008b0;
        }
    }
    ctx->pc = 0x2008A8u;
    // 0x2008a8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2008a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2008ac: 0x85043  sra         $t2, $t0, 1
    ctx->pc = 0x2008acu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 8), 1));
label_2008b0:
    // 0x2008b0: 0xa48c0  sll         $t1, $t2, 3
    ctx->pc = 0x2008b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x2008b4: 0x24480002  addiu       $t0, $v0, 0x2
    ctx->pc = 0x2008b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2008b8: 0x12a5021  addu        $t2, $t1, $t2
    ctx->pc = 0x2008b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x2008bc: 0x310b0001  andi        $t3, $t0, 0x1
    ctx->pc = 0x2008bcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x2008c0: 0xa4880  sll         $t1, $t2, 2
    ctx->pc = 0x2008c0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2008c4: 0x12a4823  subu        $t1, $t1, $t2
    ctx->pc = 0x2008c4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x2008c8: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x2008c8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x2008cc: 0x25290068  addiu       $t1, $t1, 0x68
    ctx->pc = 0x2008ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 104));
    // 0x2008d0: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2008d0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2008d4: 0x0  nop
    ctx->pc = 0x2008d4u;
    // NOP
    // 0x2008d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2008d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2008dc: 0xe4c00270  swc1        $f0, 0x270($a2)
    ctx->pc = 0x2008dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 624), bits); }
    // 0x2008e0: 0x5010004  bgez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2008E0u;
    {
        const bool branch_taken_0x2008e0 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x2008E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2008E0u;
            // 0x2008e4: 0xace003d0  sw          $zero, 0x3D0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 976), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2008e0) {
            ctx->pc = 0x2008F4u;
            goto label_2008f4;
        }
    }
    ctx->pc = 0x2008E8u;
    // 0x2008e8: 0x11600003  beqz        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2008E8u;
    {
        const bool branch_taken_0x2008e8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x2008ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2008E8u;
            // 0x2008ec: 0xb4880  sll         $t1, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2008e8) {
            ctx->pc = 0x2008F8u;
            goto label_2008f8;
        }
    }
    ctx->pc = 0x2008F0u;
    // 0x2008f0: 0x256bfffe  addiu       $t3, $t3, -0x2
    ctx->pc = 0x2008f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967294));
label_2008f4:
    // 0x2008f4: 0xb4880  sll         $t1, $t3, 2
    ctx->pc = 0x2008f4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_2008f8:
    // 0x2008f8: 0x24480002  addiu       $t0, $v0, 0x2
    ctx->pc = 0x2008f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2008fc: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x2008fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x200900: 0x85043  sra         $t2, $t0, 1
    ctx->pc = 0x200900u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 8), 1));
    // 0x200904: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x200904u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x200908: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x200908u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x20090c: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x20090cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x200910: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x200910u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x200914: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x200914u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200918: 0x0  nop
    ctx->pc = 0x200918u;
    // NOP
    // 0x20091c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20091cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x200920: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x200920u;
    {
        const bool branch_taken_0x200920 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x200924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200920u;
            // 0x200924: 0xe4c00274  swc1        $f0, 0x274($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 628), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x200920) {
            ctx->pc = 0x200930u;
            goto label_200930;
        }
    }
    ctx->pc = 0x200928u;
    // 0x200928: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x200928u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x20092c: 0x85043  sra         $t2, $t0, 1
    ctx->pc = 0x20092cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 8), 1));
label_200930:
    // 0x200930: 0xa48c0  sll         $t1, $t2, 3
    ctx->pc = 0x200930u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x200934: 0x24480003  addiu       $t0, $v0, 0x3
    ctx->pc = 0x200934u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x200938: 0x12a5021  addu        $t2, $t1, $t2
    ctx->pc = 0x200938u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x20093c: 0x310b0001  andi        $t3, $t0, 0x1
    ctx->pc = 0x20093cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x200940: 0xa4880  sll         $t1, $t2, 2
    ctx->pc = 0x200940u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x200944: 0x12a4823  subu        $t1, $t1, $t2
    ctx->pc = 0x200944u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x200948: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x200948u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x20094c: 0x25290068  addiu       $t1, $t1, 0x68
    ctx->pc = 0x20094cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 104));
    // 0x200950: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x200950u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200954: 0x0  nop
    ctx->pc = 0x200954u;
    // NOP
    // 0x200958: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x200958u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20095c: 0xe4c00278  swc1        $f0, 0x278($a2)
    ctx->pc = 0x20095cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 632), bits); }
    // 0x200960: 0x5010004  bgez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x200960u;
    {
        const bool branch_taken_0x200960 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x200964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200960u;
            // 0x200964: 0xace003d4  sw          $zero, 0x3D4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 980), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200960) {
            ctx->pc = 0x200974u;
            goto label_200974;
        }
    }
    ctx->pc = 0x200968u;
    // 0x200968: 0x11600003  beqz        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x200968u;
    {
        const bool branch_taken_0x200968 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x20096Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200968u;
            // 0x20096c: 0xb4880  sll         $t1, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200968) {
            ctx->pc = 0x200978u;
            goto label_200978;
        }
    }
    ctx->pc = 0x200970u;
    // 0x200970: 0x256bfffe  addiu       $t3, $t3, -0x2
    ctx->pc = 0x200970u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967294));
label_200974:
    // 0x200974: 0xb4880  sll         $t1, $t3, 2
    ctx->pc = 0x200974u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_200978:
    // 0x200978: 0x24480003  addiu       $t0, $v0, 0x3
    ctx->pc = 0x200978u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x20097c: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x20097cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x200980: 0x85043  sra         $t2, $t0, 1
    ctx->pc = 0x200980u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 8), 1));
    // 0x200984: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x200984u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x200988: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x200988u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x20098c: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x20098cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x200990: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x200990u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x200994: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x200994u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200998: 0x0  nop
    ctx->pc = 0x200998u;
    // NOP
    // 0x20099c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20099cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2009a0: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2009A0u;
    {
        const bool branch_taken_0x2009a0 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x2009A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2009A0u;
            // 0x2009a4: 0xe4c0027c  swc1        $f0, 0x27C($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 636), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2009a0) {
            ctx->pc = 0x2009B0u;
            goto label_2009b0;
        }
    }
    ctx->pc = 0x2009A8u;
    // 0x2009a8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2009a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2009ac: 0x85043  sra         $t2, $t0, 1
    ctx->pc = 0x2009acu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 8), 1));
label_2009b0:
    // 0x2009b0: 0xa48c0  sll         $t1, $t2, 3
    ctx->pc = 0x2009b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x2009b4: 0x24480004  addiu       $t0, $v0, 0x4
    ctx->pc = 0x2009b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2009b8: 0x12a5021  addu        $t2, $t1, $t2
    ctx->pc = 0x2009b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x2009bc: 0x310b0001  andi        $t3, $t0, 0x1
    ctx->pc = 0x2009bcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x2009c0: 0xa4880  sll         $t1, $t2, 2
    ctx->pc = 0x2009c0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2009c4: 0x12a4823  subu        $t1, $t1, $t2
    ctx->pc = 0x2009c4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x2009c8: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x2009c8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x2009cc: 0x25290068  addiu       $t1, $t1, 0x68
    ctx->pc = 0x2009ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 104));
    // 0x2009d0: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2009d0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2009d4: 0x0  nop
    ctx->pc = 0x2009d4u;
    // NOP
    // 0x2009d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2009d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2009dc: 0xe4c00280  swc1        $f0, 0x280($a2)
    ctx->pc = 0x2009dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 640), bits); }
    // 0x2009e0: 0x5010004  bgez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2009E0u;
    {
        const bool branch_taken_0x2009e0 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x2009E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2009E0u;
            // 0x2009e4: 0xace003d8  sw          $zero, 0x3D8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 984), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2009e0) {
            ctx->pc = 0x2009F4u;
            goto label_2009f4;
        }
    }
    ctx->pc = 0x2009E8u;
    // 0x2009e8: 0x11600003  beqz        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2009E8u;
    {
        const bool branch_taken_0x2009e8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x2009ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2009E8u;
            // 0x2009ec: 0xb4880  sll         $t1, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2009e8) {
            ctx->pc = 0x2009F8u;
            goto label_2009f8;
        }
    }
    ctx->pc = 0x2009F0u;
    // 0x2009f0: 0x256bfffe  addiu       $t3, $t3, -0x2
    ctx->pc = 0x2009f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967294));
label_2009f4:
    // 0x2009f4: 0xb4880  sll         $t1, $t3, 2
    ctx->pc = 0x2009f4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_2009f8:
    // 0x2009f8: 0x24480004  addiu       $t0, $v0, 0x4
    ctx->pc = 0x2009f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2009fc: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x2009fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x200a00: 0x85043  sra         $t2, $t0, 1
    ctx->pc = 0x200a00u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 8), 1));
    // 0x200a04: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x200a04u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x200a08: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x200a08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x200a0c: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x200a0cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x200a10: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x200a10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x200a14: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x200a14u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200a18: 0x0  nop
    ctx->pc = 0x200a18u;
    // NOP
    // 0x200a1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x200a1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x200a20: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x200A20u;
    {
        const bool branch_taken_0x200a20 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x200A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200A20u;
            // 0x200a24: 0xe4c00284  swc1        $f0, 0x284($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 644), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x200a20) {
            ctx->pc = 0x200A30u;
            goto label_200a30;
        }
    }
    ctx->pc = 0x200A28u;
    // 0x200a28: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x200a28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x200a2c: 0x85043  sra         $t2, $t0, 1
    ctx->pc = 0x200a2cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 8), 1));
label_200a30:
    // 0x200a30: 0xa48c0  sll         $t1, $t2, 3
    ctx->pc = 0x200a30u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x200a34: 0x24480005  addiu       $t0, $v0, 0x5
    ctx->pc = 0x200a34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x200a38: 0x12a5021  addu        $t2, $t1, $t2
    ctx->pc = 0x200a38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x200a3c: 0x310b0001  andi        $t3, $t0, 0x1
    ctx->pc = 0x200a3cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x200a40: 0xa4880  sll         $t1, $t2, 2
    ctx->pc = 0x200a40u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x200a44: 0x12a4823  subu        $t1, $t1, $t2
    ctx->pc = 0x200a44u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x200a48: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x200a48u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x200a4c: 0x25290068  addiu       $t1, $t1, 0x68
    ctx->pc = 0x200a4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 104));
    // 0x200a50: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x200a50u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200a54: 0x0  nop
    ctx->pc = 0x200a54u;
    // NOP
    // 0x200a58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x200a58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x200a5c: 0xe4c00288  swc1        $f0, 0x288($a2)
    ctx->pc = 0x200a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 648), bits); }
    // 0x200a60: 0x5010004  bgez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x200A60u;
    {
        const bool branch_taken_0x200a60 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x200A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200A60u;
            // 0x200a64: 0xace003dc  sw          $zero, 0x3DC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 988), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200a60) {
            ctx->pc = 0x200A74u;
            goto label_200a74;
        }
    }
    ctx->pc = 0x200A68u;
    // 0x200a68: 0x11600003  beqz        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x200A68u;
    {
        const bool branch_taken_0x200a68 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x200A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200A68u;
            // 0x200a6c: 0xb4880  sll         $t1, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200a68) {
            ctx->pc = 0x200A78u;
            goto label_200a78;
        }
    }
    ctx->pc = 0x200A70u;
    // 0x200a70: 0x256bfffe  addiu       $t3, $t3, -0x2
    ctx->pc = 0x200a70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967294));
label_200a74:
    // 0x200a74: 0xb4880  sll         $t1, $t3, 2
    ctx->pc = 0x200a74u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_200a78:
    // 0x200a78: 0x24480005  addiu       $t0, $v0, 0x5
    ctx->pc = 0x200a78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x200a7c: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x200a7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x200a80: 0x85043  sra         $t2, $t0, 1
    ctx->pc = 0x200a80u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 8), 1));
    // 0x200a84: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x200a84u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x200a88: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x200a88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x200a8c: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x200a8cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x200a90: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x200a90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x200a94: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x200a94u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200a98: 0x0  nop
    ctx->pc = 0x200a98u;
    // NOP
    // 0x200a9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x200a9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x200aa0: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x200AA0u;
    {
        const bool branch_taken_0x200aa0 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x200AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200AA0u;
            // 0x200aa4: 0xe4c0028c  swc1        $f0, 0x28C($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 652), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x200aa0) {
            ctx->pc = 0x200AB0u;
            goto label_200ab0;
        }
    }
    ctx->pc = 0x200AA8u;
    // 0x200aa8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x200aa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x200aac: 0x85043  sra         $t2, $t0, 1
    ctx->pc = 0x200aacu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 8), 1));
label_200ab0:
    // 0x200ab0: 0xa48c0  sll         $t1, $t2, 3
    ctx->pc = 0x200ab0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x200ab4: 0x24480006  addiu       $t0, $v0, 0x6
    ctx->pc = 0x200ab4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x200ab8: 0x12a5021  addu        $t2, $t1, $t2
    ctx->pc = 0x200ab8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x200abc: 0x310b0001  andi        $t3, $t0, 0x1
    ctx->pc = 0x200abcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x200ac0: 0xa4880  sll         $t1, $t2, 2
    ctx->pc = 0x200ac0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x200ac4: 0x12a4823  subu        $t1, $t1, $t2
    ctx->pc = 0x200ac4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x200ac8: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x200ac8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x200acc: 0x25290068  addiu       $t1, $t1, 0x68
    ctx->pc = 0x200accu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 104));
    // 0x200ad0: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x200ad0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200ad4: 0x0  nop
    ctx->pc = 0x200ad4u;
    // NOP
    // 0x200ad8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x200ad8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x200adc: 0xe4c00290  swc1        $f0, 0x290($a2)
    ctx->pc = 0x200adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 656), bits); }
    // 0x200ae0: 0x5010004  bgez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x200AE0u;
    {
        const bool branch_taken_0x200ae0 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x200AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200AE0u;
            // 0x200ae4: 0xace003e0  sw          $zero, 0x3E0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 992), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ae0) {
            ctx->pc = 0x200AF4u;
            goto label_200af4;
        }
    }
    ctx->pc = 0x200AE8u;
    // 0x200ae8: 0x11600003  beqz        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x200AE8u;
    {
        const bool branch_taken_0x200ae8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x200AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200AE8u;
            // 0x200aec: 0xb4880  sll         $t1, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ae8) {
            ctx->pc = 0x200AF8u;
            goto label_200af8;
        }
    }
    ctx->pc = 0x200AF0u;
    // 0x200af0: 0x256bfffe  addiu       $t3, $t3, -0x2
    ctx->pc = 0x200af0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967294));
label_200af4:
    // 0x200af4: 0xb4880  sll         $t1, $t3, 2
    ctx->pc = 0x200af4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_200af8:
    // 0x200af8: 0x24480006  addiu       $t0, $v0, 0x6
    ctx->pc = 0x200af8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x200afc: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x200afcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x200b00: 0x85043  sra         $t2, $t0, 1
    ctx->pc = 0x200b00u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 8), 1));
    // 0x200b04: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x200b04u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x200b08: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x200b08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x200b0c: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x200b0cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x200b10: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x200b10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x200b14: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x200b14u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200b18: 0x0  nop
    ctx->pc = 0x200b18u;
    // NOP
    // 0x200b1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x200b1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x200b20: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x200B20u;
    {
        const bool branch_taken_0x200b20 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x200B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200B20u;
            // 0x200b24: 0xe4c00294  swc1        $f0, 0x294($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 660), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x200b20) {
            ctx->pc = 0x200B30u;
            goto label_200b30;
        }
    }
    ctx->pc = 0x200B28u;
    // 0x200b28: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x200b28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x200b2c: 0x85043  sra         $t2, $t0, 1
    ctx->pc = 0x200b2cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 8), 1));
label_200b30:
    // 0x200b30: 0xa48c0  sll         $t1, $t2, 3
    ctx->pc = 0x200b30u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x200b34: 0x24480007  addiu       $t0, $v0, 0x7
    ctx->pc = 0x200b34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x200b38: 0x12a5821  addu        $t3, $t1, $t2
    ctx->pc = 0x200b38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x200b3c: 0xb4880  sll         $t1, $t3, 2
    ctx->pc = 0x200b3cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x200b40: 0x310a0001  andi        $t2, $t0, 0x1
    ctx->pc = 0x200b40u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x200b44: 0x12b4823  subu        $t1, $t1, $t3
    ctx->pc = 0x200b44u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x200b48: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x200b48u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x200b4c: 0x25290068  addiu       $t1, $t1, 0x68
    ctx->pc = 0x200b4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 104));
    // 0x200b50: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x200b50u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200b54: 0x0  nop
    ctx->pc = 0x200b54u;
    // NOP
    // 0x200b58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x200b58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x200b5c: 0xe4c00298  swc1        $f0, 0x298($a2)
    ctx->pc = 0x200b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 664), bits); }
    // 0x200b60: 0x5010004  bgez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x200B60u;
    {
        const bool branch_taken_0x200b60 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x200B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200B60u;
            // 0x200b64: 0xace003e4  sw          $zero, 0x3E4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 996), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200b60) {
            ctx->pc = 0x200B74u;
            goto label_200b74;
        }
    }
    ctx->pc = 0x200B68u;
    // 0x200b68: 0x11400003  beqz        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x200B68u;
    {
        const bool branch_taken_0x200b68 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x200B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200B68u;
            // 0x200b6c: 0xa4080  sll         $t0, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200b68) {
            ctx->pc = 0x200B78u;
            goto label_200b78;
        }
    }
    ctx->pc = 0x200B70u;
    // 0x200b70: 0x254afffe  addiu       $t2, $t2, -0x2
    ctx->pc = 0x200b70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967294));
label_200b74:
    // 0x200b74: 0xa4080  sll         $t0, $t2, 2
    ctx->pc = 0x200b74u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_200b78:
    // 0x200b78: 0x24470007  addiu       $a3, $v0, 0x7
    ctx->pc = 0x200b78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x200b7c: 0x10a4821  addu        $t1, $t0, $t2
    ctx->pc = 0x200b7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x200b80: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x200b80u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x200b84: 0x74043  sra         $t0, $a3, 1
    ctx->pc = 0x200b84u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 7), 1));
    // 0x200b88: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x200b88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x200b8c: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x200b8cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x200b90: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x200b90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x200b94: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x200b94u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200b98: 0x0  nop
    ctx->pc = 0x200b98u;
    // NOP
    // 0x200b9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x200b9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x200ba0: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x200BA0u;
    {
        const bool branch_taken_0x200ba0 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x200BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200BA0u;
            // 0x200ba4: 0xe4c0029c  swc1        $f0, 0x29C($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 668), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ba0) {
            ctx->pc = 0x200BB0u;
            goto label_200bb0;
        }
    }
    ctx->pc = 0x200BA8u;
    // 0x200ba8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x200ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x200bac: 0x74043  sra         $t0, $a3, 1
    ctx->pc = 0x200bacu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 7), 1));
label_200bb0:
    // 0x200bb0: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x200bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x200bb4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x200bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x200bb8: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x200bb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x200bbc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x200bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x200bc0: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x200bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x200bc4: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x200bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x200bc8: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x200bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x200bcc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x200bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x200bd0: 0x74040  sll         $t0, $a3, 1
    ctx->pc = 0x200bd0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x200bd4: 0x25080068  addiu       $t0, $t0, 0x68
    ctx->pc = 0x200bd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 104));
    // 0x200bd8: 0x28470016  slti        $a3, $v0, 0x16
    ctx->pc = 0x200bd8u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x200bdc: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x200bdcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200be0: 0x0  nop
    ctx->pc = 0x200be0u;
    // NOP
    // 0x200be4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x200be4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x200be8: 0x14e0ff00  bnez        $a3, . + 4 + (-0x100 << 2)
    ctx->pc = 0x200BE8u;
    {
        const bool branch_taken_0x200be8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x200BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200BE8u;
            // 0x200bec: 0xe4c002a0  swc1        $f0, 0x2A0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 672), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x200be8) {
            ctx->pc = 0x2007ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2007ec;
        }
    }
    ctx->pc = 0x200BF0u;
    // 0x200bf0: 0x2841001e  slti        $at, $v0, 0x1E
    ctx->pc = 0x200bf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x200bf4: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x200BF4u;
    {
        const bool branch_taken_0x200bf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x200BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200BF4u;
            // 0x200bf8: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200bf4) {
            ctx->pc = 0x200C94u;
            goto label_200c94;
        }
    }
    ctx->pc = 0x200BFCu;
    // 0x200bfc: 0x238c0  sll         $a3, $v0, 3
    ctx->pc = 0x200bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_200c00:
    // 0x200c00: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x200c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x200c04: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x200c04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x200c08: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x200C08u;
    {
        const bool branch_taken_0x200c08 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x200C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200C08u;
            // 0x200c0c: 0xac6003c8  sw          $zero, 0x3C8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 968), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c08) {
            ctx->pc = 0x200C1Cu;
            goto label_200c1c;
        }
    }
    ctx->pc = 0x200C10u;
    // 0x200c10: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x200C10u;
    {
        const bool branch_taken_0x200c10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x200C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200C10u;
            // 0x200c14: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c10) {
            ctx->pc = 0x200C20u;
            goto label_200c20;
        }
    }
    ctx->pc = 0x200C18u;
    // 0x200c18: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x200c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_200c1c:
    // 0x200c1c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x200c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_200c20:
    // 0x200c20: 0x2074021  addu        $t0, $s0, $a3
    ctx->pc = 0x200c20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x200c24: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x200c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x200c28: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x200c28u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
    // 0x200c2c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x200c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x200c30: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x200c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x200c34: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x200c34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x200c38: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x200c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x200c3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x200c3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200c40: 0x0  nop
    ctx->pc = 0x200c40u;
    // NOP
    // 0x200c44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x200c44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x200c48: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x200C48u;
    {
        const bool branch_taken_0x200c48 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x200C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200C48u;
            // 0x200c4c: 0xe5000264  swc1        $f0, 0x264($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 612), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c48) {
            ctx->pc = 0x200C58u;
            goto label_200c58;
        }
    }
    ctx->pc = 0x200C50u;
    // 0x200c50: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x200c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x200c54: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x200c54u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
label_200c58:
    // 0x200c58: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x200c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x200c5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x200c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x200c60: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x200c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x200c64: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x200c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x200c68: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x200c68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x200c6c: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x200c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x200c70: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x200c70u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x200c74: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x200c74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x200c78: 0x2843001e  slti        $v1, $v0, 0x1E
    ctx->pc = 0x200c78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x200c7c: 0x24840068  addiu       $a0, $a0, 0x68
    ctx->pc = 0x200c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    // 0x200c80: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x200c80u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200c84: 0x0  nop
    ctx->pc = 0x200c84u;
    // NOP
    // 0x200c88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x200c88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x200c8c: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x200C8Cu;
    {
        const bool branch_taken_0x200c8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x200C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200C8Cu;
            // 0x200c90: 0xe5000268  swc1        $f0, 0x268($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 616), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c8c) {
            ctx->pc = 0x200C00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_200c00;
        }
    }
    ctx->pc = 0x200C94u;
label_200c94:
    // 0x200c94: 0x0  nop
    ctx->pc = 0x200c94u;
    // NOP
    // 0x200c98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200c9c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x200c9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200ca0:
    // 0x200ca0: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x200ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x200ca4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x200ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x200ca8: 0xac800440  sw          $zero, 0x440($a0)
    ctx->pc = 0x200ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1088), GPR_U32(ctx, 0));
    // 0x200cac: 0x28a2002a  slti        $v0, $a1, 0x2A
    ctx->pc = 0x200cacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)42) ? 1 : 0);
    // 0x200cb0: 0xac800444  sw          $zero, 0x444($a0)
    ctx->pc = 0x200cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1092), GPR_U32(ctx, 0));
    // 0x200cb4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x200cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x200cb8: 0xac800448  sw          $zero, 0x448($a0)
    ctx->pc = 0x200cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1096), GPR_U32(ctx, 0));
    // 0x200cbc: 0xac80044c  sw          $zero, 0x44C($a0)
    ctx->pc = 0x200cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1100), GPR_U32(ctx, 0));
    // 0x200cc0: 0xac800450  sw          $zero, 0x450($a0)
    ctx->pc = 0x200cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1104), GPR_U32(ctx, 0));
    // 0x200cc4: 0xac800454  sw          $zero, 0x454($a0)
    ctx->pc = 0x200cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1108), GPR_U32(ctx, 0));
    // 0x200cc8: 0xac800458  sw          $zero, 0x458($a0)
    ctx->pc = 0x200cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1112), GPR_U32(ctx, 0));
    // 0x200ccc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x200CCCu;
    {
        const bool branch_taken_0x200ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200CCCu;
            // 0x200cd0: 0xac80045c  sw          $zero, 0x45C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ccc) {
            ctx->pc = 0x200CA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_200ca0;
        }
    }
    ctx->pc = 0x200CD4u;
    // 0x200cd4: 0x28a10032  slti        $at, $a1, 0x32
    ctx->pc = 0x200cd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x200cd8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x200CD8u;
    {
        const bool branch_taken_0x200cd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x200CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200CD8u;
            // 0x200cdc: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200cd8) {
            ctx->pc = 0x200D00u;
            goto label_200d00;
        }
    }
    ctx->pc = 0x200CE0u;
label_200ce0:
    // 0x200ce0: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x200ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x200ce4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x200ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x200ce8: 0xac400440  sw          $zero, 0x440($v0)
    ctx->pc = 0x200ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1088), GPR_U32(ctx, 0));
    // 0x200cec: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x200cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x200cf0: 0x28a20032  slti        $v0, $a1, 0x32
    ctx->pc = 0x200cf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x200cf4: 0x0  nop
    ctx->pc = 0x200cf4u;
    // NOP
    // 0x200cf8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x200CF8u;
    {
        const bool branch_taken_0x200cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200cf8) {
            ctx->pc = 0x200CE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_200ce0;
        }
    }
    ctx->pc = 0x200D00u;
label_200d00:
    // 0x200d00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200d04: 0xc080384  jal         func_200E10
    ctx->pc = 0x200D04u;
    SET_GPR_U32(ctx, 31, 0x200D0Cu);
    ctx->pc = 0x200D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200D04u;
            // 0x200d08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200E10u;
    if (runtime->hasFunction(0x200E10u)) {
        auto targetFn = runtime->lookupFunction(0x200E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200D0Cu; }
        if (ctx->pc != 0x200D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitPhotoNetaBoardToAlbum__11CMenuInventFi_0x200e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200D0Cu; }
        if (ctx->pc != 0x200D0Cu) { return; }
    }
    ctx->pc = 0x200D0Cu;
label_200d0c:
    // 0x200d0c: 0xae000394  sw          $zero, 0x394($s0)
    ctx->pc = 0x200d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 916), GPR_U32(ctx, 0));
    // 0x200d10: 0x26040370  addiu       $a0, $s0, 0x370
    ctx->pc = 0x200d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
    // 0x200d14: 0xae00025c  sw          $zero, 0x25C($s0)
    ctx->pc = 0x200d14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 604), GPR_U32(ctx, 0));
    // 0x200d18: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x200d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
    // 0x200d1c: 0xae0005f8  sw          $zero, 0x5F8($s0)
    ctx->pc = 0x200d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1528), GPR_U32(ctx, 0));
    // 0x200d20: 0xa20005f4  sb          $zero, 0x5F4($s0)
    ctx->pc = 0x200d20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1524), (uint8_t)GPR_U32(ctx, 0));
    // 0x200d24: 0xae000360  sw          $zero, 0x360($s0)
    ctx->pc = 0x200d24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
    // 0x200d28: 0xae000630  sw          $zero, 0x630($s0)
    ctx->pc = 0x200d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1584), GPR_U32(ctx, 0));
    // 0x200d2c: 0xa2000634  sb          $zero, 0x634($s0)
    ctx->pc = 0x200d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1588), (uint8_t)GPR_U32(ctx, 0));
    // 0x200d30: 0xae000638  sw          $zero, 0x638($s0)
    ctx->pc = 0x200d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1592), GPR_U32(ctx, 0));
    // 0x200d34: 0xae00063c  sw          $zero, 0x63C($s0)
    ctx->pc = 0x200d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1596), GPR_U32(ctx, 0));
    // 0x200d38: 0xae000574  sw          $zero, 0x574($s0)
    ctx->pc = 0x200d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1396), GPR_U32(ctx, 0));
    // 0x200d3c: 0xa200064c  sb          $zero, 0x64C($s0)
    ctx->pc = 0x200d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1612), (uint8_t)GPR_U32(ctx, 0));
    // 0x200d40: 0xa6000110  sh          $zero, 0x110($s0)
    ctx->pc = 0x200d40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 272), (uint16_t)GPR_U32(ctx, 0));
    // 0x200d44: 0xae000eac  sw          $zero, 0xEAC($s0)
    ctx->pc = 0x200d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3756), GPR_U32(ctx, 0));
    // 0x200d48: 0xae000eb0  sw          $zero, 0xEB0($s0)
    ctx->pc = 0x200d48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3760), GPR_U32(ctx, 0));
    // 0x200d4c: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x200D4Cu;
    SET_GPR_U32(ctx, 31, 0x200D54u);
    ctx->pc = 0x200D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200D4Cu;
            // 0x200d50: 0xae000d78  sw          $zero, 0xD78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3448), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200D54u; }
        if (ctx->pc != 0x200D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200D54u; }
        if (ctx->pc != 0x200D54u) { return; }
    }
    ctx->pc = 0x200D54u;
label_200d54:
    // 0x200d54: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x200d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
    // 0x200d58: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x200d58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x200d5c: 0xae040380  sw          $a0, 0x380($s0)
    ctx->pc = 0x200d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 896), GPR_U32(ctx, 4));
    // 0x200d60: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x200d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x200d64: 0xae040384  sw          $a0, 0x384($s0)
    ctx->pc = 0x200d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 900), GPR_U32(ctx, 4));
    // 0x200d68: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x200d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x200d6c: 0xae040388  sw          $a0, 0x388($s0)
    ctx->pc = 0x200d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 904), GPR_U32(ctx, 4));
    // 0x200d70: 0x3c0941a0  lui         $t1, 0x41A0
    ctx->pc = 0x200d70u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16800 << 16));
    // 0x200d74: 0xae000360  sw          $zero, 0x360($s0)
    ctx->pc = 0x200d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
    // 0x200d78: 0x3c08c1e8  lui         $t0, 0xC1E8
    ctx->pc = 0x200d78u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49640 << 16));
    // 0x200d7c: 0xae030650  sw          $v1, 0x650($s0)
    ctx->pc = 0x200d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1616), GPR_U32(ctx, 3));
    // 0x200d80: 0x3c074160  lui         $a3, 0x4160
    ctx->pc = 0x200d80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16736 << 16));
    // 0x200d84: 0xae020654  sw          $v0, 0x654($s0)
    ctx->pc = 0x200d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1620), GPR_U32(ctx, 2));
    // 0x200d88: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x200d88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x200d8c: 0xae000658  sw          $zero, 0x658($s0)
    ctx->pc = 0x200d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 0));
    // 0x200d90: 0x3c034130  lui         $v1, 0x4130
    ctx->pc = 0x200d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16688 << 16));
    // 0x200d94: 0xae00065c  sw          $zero, 0x65C($s0)
    ctx->pc = 0x200d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1628), GPR_U32(ctx, 0));
    // 0x200d98: 0x3c02c1e0  lui         $v0, 0xC1E0
    ctx->pc = 0x200d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49632 << 16));
    // 0x200d9c: 0xae000660  sw          $zero, 0x660($s0)
    ctx->pc = 0x200d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1632), GPR_U32(ctx, 0));
    // 0x200da0: 0x260401d4  addiu       $a0, $s0, 0x1D4
    ctx->pc = 0x200da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 468));
    // 0x200da4: 0xae090670  sw          $t1, 0x670($s0)
    ctx->pc = 0x200da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1648), GPR_U32(ctx, 9));
    // 0x200da8: 0x24a59098  addiu       $a1, $a1, -0x6F68
    ctx->pc = 0x200da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938776));
    // 0x200dac: 0xae080674  sw          $t0, 0x674($s0)
    ctx->pc = 0x200dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1652), GPR_U32(ctx, 8));
    // 0x200db0: 0xae070678  sw          $a3, 0x678($s0)
    ctx->pc = 0x200db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1656), GPR_U32(ctx, 7));
    // 0x200db4: 0xae06067c  sw          $a2, 0x67C($s0)
    ctx->pc = 0x200db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1660), GPR_U32(ctx, 6));
    // 0x200db8: 0xae030680  sw          $v1, 0x680($s0)
    ctx->pc = 0x200db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 3));
    // 0x200dbc: 0xae020684  sw          $v0, 0x684($s0)
    ctx->pc = 0x200dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1668), GPR_U32(ctx, 2));
    // 0x200dc0: 0xae090688  sw          $t1, 0x688($s0)
    ctx->pc = 0x200dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1672), GPR_U32(ctx, 9));
    // 0x200dc4: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x200DC4u;
    SET_GPR_U32(ctx, 31, 0x200DCCu);
    ctx->pc = 0x200DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200DC4u;
            // 0x200dc8: 0xae06068c  sw          $a2, 0x68C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1676), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200DCCu; }
        if (ctx->pc != 0x200DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200DCCu; }
        if (ctx->pc != 0x200DCCu) { return; }
    }
    ctx->pc = 0x200DCCu;
label_200dcc:
    // 0x200dcc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x200dccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x200dd0: 0x260401fc  addiu       $a0, $s0, 0x1FC
    ctx->pc = 0x200dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 508));
    // 0x200dd4: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x200DD4u;
    SET_GPR_U32(ctx, 31, 0x200DDCu);
    ctx->pc = 0x200DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200DD4u;
            // 0x200dd8: 0x24a590a8  addiu       $a1, $a1, -0x6F58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200DDCu; }
        if (ctx->pc != 0x200DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200DDCu; }
        if (ctx->pc != 0x200DDCu) { return; }
    }
    ctx->pc = 0x200DDCu;
label_200ddc:
    // 0x200ddc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x200ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x200de0: 0x26040224  addiu       $a0, $s0, 0x224
    ctx->pc = 0x200de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 548));
    // 0x200de4: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x200DE4u;
    SET_GPR_U32(ctx, 31, 0x200DECu);
    ctx->pc = 0x200DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200DE4u;
            // 0x200de8: 0x24a590b8  addiu       $a1, $a1, -0x6F48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200DECu; }
        if (ctx->pc != 0x200DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200DECu; }
        if (ctx->pc != 0x200DECu) { return; }
    }
    ctx->pc = 0x200DECu;
label_200dec:
    // 0x200dec: 0xc087d84  jal         func_21F610
    ctx->pc = 0x200DECu;
    SET_GPR_U32(ctx, 31, 0x200DF4u);
    ctx->pc = 0x200DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200DECu;
            // 0x200df0: 0x2604013c  addiu       $a0, $s0, 0x13C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 316));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F610u;
    if (runtime->hasFunction(0x21F610u)) {
        auto targetFn = runtime->lookupFunction(0x21F610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200DF4u; }
        if (ctx->pc != 0x200DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init_MENUFORM_MAKEBRD_INFO__FP21MENUFORM_MAKEBRD_INFO_0x21f610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200DF4u; }
        if (ctx->pc != 0x200DF4u) { return; }
    }
    ctx->pc = 0x200DF4u;
label_200df4:
    // 0x200df4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x200df4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200df8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x200df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200dfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x200dfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200e00: 0x3e00008  jr          $ra
    ctx->pc = 0x200E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200E00u;
            // 0x200e04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x200E08u;
}
