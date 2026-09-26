#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__15CMenuChrCngMenuFv
// Address: 0x2b0350 - 0x2b04d8
void ps2___ct__15CMenuChrCngMenuFv_0x2b0350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__15CMenuChrCngMenuFv_0x2b0350");
#endif

    switch (ctx->pc) {
        case 0x2b0364u: goto label_2b0364;
        case 0x2b0378u: goto label_2b0378;
        case 0x2b0380u: goto label_2b0380;
        case 0x2b0480u: goto label_2b0480;
        case 0x2b04a4u: goto label_2b04a4;
        case 0x2b04b4u: goto label_2b04b4;
        case 0x2b04c4u: goto label_2b04c4;
        default: break;
    }

    ctx->pc = 0x2b0350u;

    // 0x2b0350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b0350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b0354: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b0354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b0358: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b0358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b035c: 0xc08dc2c  jal         func_2370B0
    ctx->pc = 0x2B035Cu;
    SET_GPR_U32(ctx, 31, 0x2B0364u);
    ctx->pc = 0x2B0360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B035Cu;
            // 0x2b0360: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2370B0u;
    if (runtime->hasFunction(0x2370B0u)) {
        auto targetFn = runtime->lookupFunction(0x2370B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0364u; }
        if (ctx->pc != 0x2B0364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14CBaseMenuClassFv_0x2370b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0364u; }
        if (ctx->pc != 0x2B0364u) { return; }
    }
    ctx->pc = 0x2B0364u;
label_2b0364:
    // 0x2b0364: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2b0364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2b0368: 0x26040194  addiu       $a0, $s0, 0x194
    ctx->pc = 0x2b0368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 404));
    // 0x2b036c: 0x244262b0  addiu       $v0, $v0, 0x62B0
    ctx->pc = 0x2b036cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25264));
    // 0x2b0370: 0xc04e640  jal         func_139900
    ctx->pc = 0x2B0370u;
    SET_GPR_U32(ctx, 31, 0x2B0378u);
    ctx->pc = 0x2B0374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0370u;
            // 0x2b0374: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0378u; }
        if (ctx->pc != 0x2B0378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0378u; }
        if (ctx->pc != 0x2B0378u) { return; }
    }
    ctx->pc = 0x2B0378u;
label_2b0378:
    // 0x2b0378: 0xc04e640  jal         func_139900
    ctx->pc = 0x2B0378u;
    SET_GPR_U32(ctx, 31, 0x2B0380u);
    ctx->pc = 0x2B037Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0378u;
            // 0x2b037c: 0x260401c4  addiu       $a0, $s0, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 452));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0380u; }
        if (ctx->pc != 0x2B0380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0380u; }
        if (ctx->pc != 0x2B0380u) { return; }
    }
    ctx->pc = 0x2B0380u;
label_2b0380:
    // 0x2b0380: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x2b0380u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b0384: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b0384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b0388: 0xa6030122  sh          $v1, 0x122($s0)
    ctx->pc = 0x2b0388u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 290), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b038c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b038cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0390: 0xa200011f  sb          $zero, 0x11F($s0)
    ctx->pc = 0x2b0390u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 287), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b0394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b0394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0398: 0xaf809b88  sw          $zero, -0x6478($gp)
    ctx->pc = 0x2b0398u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941576), GPR_U32(ctx, 0));
    // 0x2b039c: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x2b039cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x2b03a0: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x2b03a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x2b03a4: 0xae000114  sw          $zero, 0x114($s0)
    ctx->pc = 0x2b03a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
    // 0x2b03a8: 0xa6000256  sh          $zero, 0x256($s0)
    ctx->pc = 0x2b03a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 598), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b03ac: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x2b03acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
    // 0x2b03b0: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x2b03b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
    // 0x2b03b4: 0xae000138  sw          $zero, 0x138($s0)
    ctx->pc = 0x2b03b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
    // 0x2b03b8: 0xae00013c  sw          $zero, 0x13C($s0)
    ctx->pc = 0x2b03b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 0));
    // 0x2b03bc: 0xa603011c  sh          $v1, 0x11C($s0)
    ctx->pc = 0x2b03bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b03c0: 0xa202011e  sb          $v0, 0x11E($s0)
    ctx->pc = 0x2b03c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 286), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b03c4: 0xae000240  sw          $zero, 0x240($s0)
    ctx->pc = 0x2b03c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
    // 0x2b03c8: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x2b03c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
    // 0x2b03cc: 0xae00017c  sw          $zero, 0x17C($s0)
    ctx->pc = 0x2b03ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 0));
    // 0x2b03d0: 0xae000178  sw          $zero, 0x178($s0)
    ctx->pc = 0x2b03d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 0));
    // 0x2b03d4: 0xae000174  sw          $zero, 0x174($s0)
    ctx->pc = 0x2b03d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 0));
    // 0x2b03d8: 0xae000170  sw          $zero, 0x170($s0)
    ctx->pc = 0x2b03d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 0));
    // 0x2b03dc: 0xae00015c  sw          $zero, 0x15C($s0)
    ctx->pc = 0x2b03dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 0));
    // 0x2b03e0: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x2b03e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
    // 0x2b03e4: 0xae000164  sw          $zero, 0x164($s0)
    ctx->pc = 0x2b03e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
    // 0x2b03e8: 0xae000168  sw          $zero, 0x168($s0)
    ctx->pc = 0x2b03e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
    // 0x2b03ec: 0xae00016c  sw          $zero, 0x16C($s0)
    ctx->pc = 0x2b03ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 0));
    // 0x2b03f0: 0xae00022c  sw          $zero, 0x22C($s0)
    ctx->pc = 0x2b03f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
    // 0x2b03f4: 0xae000230  sw          $zero, 0x230($s0)
    ctx->pc = 0x2b03f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
    // 0x2b03f8: 0xae000234  sw          $zero, 0x234($s0)
    ctx->pc = 0x2b03f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 0));
    // 0x2b03fc: 0xae000238  sw          $zero, 0x238($s0)
    ctx->pc = 0x2b03fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 0));
    // 0x2b0400: 0xae00023c  sw          $zero, 0x23C($s0)
    ctx->pc = 0x2b0400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 0));
    // 0x2b0404: 0xae000180  sw          $zero, 0x180($s0)
    ctx->pc = 0x2b0404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 0));
    // 0x2b0408: 0xae000184  sw          $zero, 0x184($s0)
    ctx->pc = 0x2b0408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 0));
    // 0x2b040c: 0xae000188  sw          $zero, 0x188($s0)
    ctx->pc = 0x2b040cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 0));
    // 0x2b0410: 0xae00018c  sw          $zero, 0x18C($s0)
    ctx->pc = 0x2b0410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
    // 0x2b0414: 0xae000190  sw          $zero, 0x190($s0)
    ctx->pc = 0x2b0414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
    // 0x2b0418: 0xa200011e  sb          $zero, 0x11E($s0)
    ctx->pc = 0x2b0418u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 286), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b041c: 0xae000144  sw          $zero, 0x144($s0)
    ctx->pc = 0x2b041cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
    // 0x2b0420: 0xae000148  sw          $zero, 0x148($s0)
    ctx->pc = 0x2b0420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 0));
    // 0x2b0424: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x2b0424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
    // 0x2b0428: 0xae000150  sw          $zero, 0x150($s0)
    ctx->pc = 0x2b0428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
    // 0x2b042c: 0xae000154  sw          $zero, 0x154($s0)
    ctx->pc = 0x2b042cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
    // 0x2b0430: 0xae000158  sw          $zero, 0x158($s0)
    ctx->pc = 0x2b0430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 0));
    // 0x2b0434: 0xae0001fc  sw          $zero, 0x1FC($s0)
    ctx->pc = 0x2b0434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 508), GPR_U32(ctx, 0));
    // 0x2b0438: 0xae0001f4  sw          $zero, 0x1F4($s0)
    ctx->pc = 0x2b0438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 0));
    // 0x2b043c: 0xae0001f8  sw          $zero, 0x1F8($s0)
    ctx->pc = 0x2b043cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 0));
    // 0x2b0440: 0xae000248  sw          $zero, 0x248($s0)
    ctx->pc = 0x2b0440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 0));
    // 0x2b0444: 0xae000244  sw          $zero, 0x244($s0)
    ctx->pc = 0x2b0444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 0));
    // 0x2b0448: 0xae00021c  sw          $zero, 0x21C($s0)
    ctx->pc = 0x2b0448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 0));
    // 0x2b044c: 0xa603024c  sh          $v1, 0x24C($s0)
    ctx->pc = 0x2b044cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 588), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b0450: 0xa603024e  sh          $v1, 0x24E($s0)
    ctx->pc = 0x2b0450u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 590), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b0454: 0xa2030200  sb          $v1, 0x200($s0)
    ctx->pc = 0x2b0454u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 512), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b0458: 0xa6030202  sh          $v1, 0x202($s0)
    ctx->pc = 0x2b0458u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 514), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b045c: 0xa2000201  sb          $zero, 0x201($s0)
    ctx->pc = 0x2b045cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 513), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b0460: 0xae000204  sw          $zero, 0x204($s0)
    ctx->pc = 0x2b0460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
    // 0x2b0464: 0xae00020c  sw          $zero, 0x20C($s0)
    ctx->pc = 0x2b0464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 0));
    // 0x2b0468: 0xa2000208  sb          $zero, 0x208($s0)
    ctx->pc = 0x2b0468u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 520), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b046c: 0xa2000209  sb          $zero, 0x209($s0)
    ctx->pc = 0x2b046cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 521), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b0470: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x2b0470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x2b0474: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x2b0474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
    // 0x2b0478: 0xc0ad158  jal         func_2B4560
    ctx->pc = 0x2B0478u;
    SET_GPR_U32(ctx, 31, 0x2B0480u);
    ctx->pc = 0x2B047Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0478u;
            // 0x2b047c: 0xae000218  sw          $zero, 0x218($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B4560u;
    if (runtime->hasFunction(0x2B4560u)) {
        auto targetFn = runtime->lookupFunction(0x2B4560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0480u; }
        if (ctx->pc != 0x2B0480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitStarInfo__15CMenuChrCngMenuFv_0x2b4560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0480u; }
        if (ctx->pc != 0x2B0480u) { return; }
    }
    ctx->pc = 0x2B0480u;
label_2b0480:
    // 0x2b0480: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x2b0480u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b0484: 0x26041a80  addiu       $a0, $s0, 0x1A80
    ctx->pc = 0x2b0484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6784));
    // 0x2b0488: 0xa200012c  sb          $zero, 0x12C($s0)
    ctx->pc = 0x2b0488u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 300), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b048c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b048cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0490: 0xa200012d  sb          $zero, 0x12D($s0)
    ctx->pc = 0x2b0490u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 301), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b0494: 0x24060500  addiu       $a2, $zero, 0x500
    ctx->pc = 0x2b0494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x2b0498: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x2b0498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
    // 0x2b049c: 0xc049c86  jal         func_127218
    ctx->pc = 0x2B049Cu;
    SET_GPR_U32(ctx, 31, 0x2B04A4u);
    ctx->pc = 0x2B04A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B049Cu;
            // 0x2b04a0: 0xae000134  sw          $zero, 0x134($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B04A4u; }
        if (ctx->pc != 0x2B04A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B04A4u; }
        if (ctx->pc != 0x2B04A4u) { return; }
    }
    ctx->pc = 0x2B04A4u;
label_2b04a4:
    // 0x2b04a4: 0x26040194  addiu       $a0, $s0, 0x194
    ctx->pc = 0x2b04a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 404));
    // 0x2b04a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b04a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b04ac: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2B04ACu;
    SET_GPR_U32(ctx, 31, 0x2B04B4u);
    ctx->pc = 0x2B04B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B04ACu;
            // 0x2b04b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B04B4u; }
        if (ctx->pc != 0x2B04B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B04B4u; }
        if (ctx->pc != 0x2B04B4u) { return; }
    }
    ctx->pc = 0x2B04B4u;
label_2b04b4:
    // 0x2b04b4: 0x260401c4  addiu       $a0, $s0, 0x1C4
    ctx->pc = 0x2b04b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 452));
    // 0x2b04b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b04b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b04bc: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2B04BCu;
    SET_GPR_U32(ctx, 31, 0x2B04C4u);
    ctx->pc = 0x2B04C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B04BCu;
            // 0x2b04c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B04C4u; }
        if (ctx->pc != 0x2B04C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B04C4u; }
        if (ctx->pc != 0x2B04C4u) { return; }
    }
    ctx->pc = 0x2B04C4u;
label_2b04c4:
    // 0x2b04c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b04c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b04c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b04c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b04cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b04ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b04d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B04D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B04D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B04D0u;
            // 0x2b04d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B04D8u;
}
