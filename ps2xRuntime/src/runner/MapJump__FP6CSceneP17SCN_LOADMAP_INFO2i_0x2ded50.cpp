#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MapJump__FP6CSceneP17SCN_LOADMAP_INFO2i
// Address: 0x2ded50 - 0x2def34
void MapJump__FP6CSceneP17SCN_LOADMAP_INFO2i_0x2ded50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MapJump__FP6CSceneP17SCN_LOADMAP_INFO2i_0x2ded50");
#endif

    switch (ctx->pc) {
        case 0x2ded84u: goto label_2ded84;
        case 0x2deda0u: goto label_2deda0;
        case 0x2dedb0u: goto label_2dedb0;
        case 0x2dedb8u: goto label_2dedb8;
        case 0x2dedc0u: goto label_2dedc0;
        case 0x2dedd0u: goto label_2dedd0;
        case 0x2dedd8u: goto label_2dedd8;
        case 0x2dedecu: goto label_2dedec;
        case 0x2dee00u: goto label_2dee00;
        case 0x2dee10u: goto label_2dee10;
        case 0x2dee1cu: goto label_2dee1c;
        case 0x2dee3cu: goto label_2dee3c;
        case 0x2dee44u: goto label_2dee44;
        case 0x2dee54u: goto label_2dee54;
        case 0x2dee70u: goto label_2dee70;
        case 0x2dee9cu: goto label_2dee9c;
        case 0x2deebcu: goto label_2deebc;
        case 0x2deed4u: goto label_2deed4;
        case 0x2deeecu: goto label_2deeec;
        case 0x2deef4u: goto label_2deef4;
        case 0x2def04u: goto label_2def04;
        case 0x2def10u: goto label_2def10;
        default: break;
    }

    ctx->pc = 0x2ded50u;

    // 0x2ded50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ded50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ded54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2ded54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2ded58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ded58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ded5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ded5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ded60: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2ded60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ded64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ded64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ded68: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2ded68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ded6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ded6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ded70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ded70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ded74: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2ded74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ded78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ded78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ded7c: 0xc0b49e8  jal         func_2D27A0
    ctx->pc = 0x2DED7Cu;
    SET_GPR_U32(ctx, 31, 0x2DED84u);
    ctx->pc = 0x2DED80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DED7Cu;
            // 0x2ded80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27A0u;
    if (runtime->hasFunction(0x2D27A0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DED84u; }
        if (ctx->pc != 0x2DED84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapName__FiPPc_0x2d27a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DED84u; }
        if (ctx->pc != 0x2DED84u) { return; }
    }
    ctx->pc = 0x2DED84u;
label_2ded84:
    // 0x2ded84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ded84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ded88: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DED88u;
    {
        const bool branch_taken_0x2ded88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DED8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DED88u;
            // 0x2ded8c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ded88) {
            ctx->pc = 0x2DEDA8u;
            goto label_2deda8;
        }
    }
    ctx->pc = 0x2DED90u;
    // 0x2ded90: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2ded90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2ded94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ded94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ded98: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2DED98u;
    SET_GPR_U32(ctx, 31, 0x2DEDA0u);
    ctx->pc = 0x2DED9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DED98u;
            // 0x2ded9c: 0x24840f10  addiu       $a0, $a0, 0xF10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEDA0u; }
        if (ctx->pc != 0x2DEDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEDA0u; }
        if (ctx->pc != 0x2DEDA0u) { return; }
    }
    ctx->pc = 0x2DEDA0u;
label_2deda0:
    // 0x2deda0: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x2DEDA0u;
    {
        const bool branch_taken_0x2deda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEDA0u;
            // 0x2deda4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deda0) {
            ctx->pc = 0x2DEF14u;
            goto label_2def14;
        }
    }
    ctx->pc = 0x2DEDA8u;
label_2deda8:
    // 0x2deda8: 0xc0a9fc0  jal         func_2A7F00
    ctx->pc = 0x2DEDA8u;
    SET_GPR_U32(ctx, 31, 0x2DEDB0u);
    ctx->pc = 0x2A7F00u;
    if (runtime->hasFunction(0x2A7F00u)) {
        auto targetFn = runtime->lookupFunction(0x2A7F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEDB0u; }
        if (ctx->pc != 0x2DEDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopSeSrc__6CSceneFv_0x2a7f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEDB0u; }
        if (ctx->pc != 0x2DEDB0u) { return; }
    }
    ctx->pc = 0x2DEDB0u;
label_2dedb0:
    // 0x2dedb0: 0xc0635f0  jal         func_18D7C0
    ctx->pc = 0x2DEDB0u;
    SET_GPR_U32(ctx, 31, 0x2DEDB8u);
    ctx->pc = 0x2DEDB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEDB0u;
            // 0x2dedb4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D7C0u;
    if (runtime->hasFunction(0x18D7C0u)) {
        auto targetFn = runtime->lookupFunction(0x18D7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEDB8u; }
        if (ctx->pc != 0x2DEDB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeAllStop__Fi_0x18d7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEDB8u; }
        if (ctx->pc != 0x2DEDB8u) { return; }
    }
    ctx->pc = 0x2DEDB8u;
label_2dedb8:
    // 0x2dedb8: 0xc064220  jal         func_190880
    ctx->pc = 0x2DEDB8u;
    SET_GPR_U32(ctx, 31, 0x2DEDC0u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEDC0u; }
        if (ctx->pc != 0x2DEDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEDC0u; }
        if (ctx->pc != 0x2DEDC0u) { return; }
    }
    ctx->pc = 0x2DEDC0u;
label_2dedc0:
    // 0x2dedc0: 0x87839eac  lh          $v1, -0x6154($gp)
    ctx->pc = 0x2dedc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294942380)));
    // 0x2dedc4: 0x24521a18  addiu       $s2, $v0, 0x1A18
    ctx->pc = 0x2dedc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 6680));
    // 0x2dedc8: 0xc050bd0  jal         func_142F40
    ctx->pc = 0x2DEDC8u;
    SET_GPR_U32(ctx, 31, 0x2DEDD0u);
    ctx->pc = 0x2DEDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEDC8u;
            // 0x2dedcc: 0xa4431a1c  sh          $v1, 0x1A1C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 6684), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142F40u;
    if (runtime->hasFunction(0x142F40u)) {
        auto targetFn = runtime->lookupFunction(0x142F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEDD0u; }
        if (ctx->pc != 0x2DEDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgWaitFrame__Fv_0x142f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEDD0u; }
        if (ctx->pc != 0x2DEDD0u) { return; }
    }
    ctx->pc = 0x2DEDD0u;
label_2dedd0:
    // 0x2dedd0: 0xc050db0  jal         func_1436C0
    ctx->pc = 0x2DEDD0u;
    SET_GPR_U32(ctx, 31, 0x2DEDD8u);
    ctx->pc = 0x1436C0u;
    if (runtime->hasFunction(0x1436C0u)) {
        auto targetFn = runtime->lookupFunction(0x1436C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEDD8u; }
        if (ctx->pc != 0x2DEDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInitLighting__Fv_0x1436c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEDD8u; }
        if (ctx->pc != 0x2DEDD8u) { return; }
    }
    ctx->pc = 0x2DEDD8u;
label_2dedd8:
    // 0x2dedd8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dedd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2deddc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2deddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dede0: 0x8c258d70  lw          $a1, -0x7290($at)
    ctx->pc = 0x2dede0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937968)));
    // 0x2dede4: 0xc0a179c  jal         func_285E70
    ctx->pc = 0x2DEDE4u;
    SET_GPR_U32(ctx, 31, 0x2DEDECu);
    ctx->pc = 0x2DEDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEDE4u;
            // 0x2dede8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285E70u;
    if (runtime->hasFunction(0x285E70u)) {
        auto targetFn = runtime->lookupFunction(0x285E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEDECu; }
        if (ctx->pc != 0x2DEDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteMap__6CSceneFii_0x285e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEDECu; }
        if (ctx->pc != 0x2DEDECu) { return; }
    }
    ctx->pc = 0x2DEDECu;
label_2dedec:
    // 0x2dedec: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dedecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2dedf0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2dedf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dedf4: 0x8c258d50  lw          $a1, -0x72B0($at)
    ctx->pc = 0x2dedf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937936)));
    // 0x2dedf8: 0xc0a179c  jal         func_285E70
    ctx->pc = 0x2DEDF8u;
    SET_GPR_U32(ctx, 31, 0x2DEE00u);
    ctx->pc = 0x2DEDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEDF8u;
            // 0x2dedfc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285E70u;
    if (runtime->hasFunction(0x285E70u)) {
        auto targetFn = runtime->lookupFunction(0x285E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEE00u; }
        if (ctx->pc != 0x2DEE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteMap__6CSceneFii_0x285e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEE00u; }
        if (ctx->pc != 0x2DEE00u) { return; }
    }
    ctx->pc = 0x2DEE00u;
label_2dee00:
    // 0x2dee00: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2dee00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dee04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2dee04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dee08: 0xaf829eac  sw          $v0, -0x6154($gp)
    ctx->pc = 0x2dee08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942380), GPR_U32(ctx, 2));
    // 0x2dee0c: 0xaf829eb0  sw          $v0, -0x6150($gp)
    ctx->pc = 0x2dee0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942384), GPR_U32(ctx, 2));
label_2dee10:
    // 0x2dee10: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x2dee10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2dee14: 0xc0a14ec  jal         func_2853B0
    ctx->pc = 0x2DEE14u;
    SET_GPR_U32(ctx, 31, 0x2DEE1Cu);
    ctx->pc = 0x2DEE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEE14u;
            // 0x2dee18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2853B0u;
    if (runtime->hasFunction(0x2853B0u)) {
        auto targetFn = runtime->lookupFunction(0x2853B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEE1Cu; }
        if (ctx->pc != 0x2DEE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteChara__6CSceneFi_0x2853b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEE1Cu; }
        if (ctx->pc != 0x2DEE1Cu) { return; }
    }
    ctx->pc = 0x2DEE1Cu;
label_2dee1c:
    // 0x2dee1c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2dee1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2dee20: 0x2a220038  slti        $v0, $s1, 0x38
    ctx->pc = 0x2dee20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)56) ? 1 : 0);
    // 0x2dee24: 0x0  nop
    ctx->pc = 0x2dee24u;
    // NOP
    // 0x2dee28: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2DEE28u;
    {
        const bool branch_taken_0x2dee28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dee28) {
            ctx->pc = 0x2DEE10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dee10;
        }
    }
    ctx->pc = 0x2DEE30u;
    // 0x2dee30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2dee30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dee34: 0xc0a0c74  jal         func_2831D0
    ctx->pc = 0x2DEE34u;
    SET_GPR_U32(ctx, 31, 0x2DEE3Cu);
    ctx->pc = 0x2DEE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEE34u;
            // 0x2dee38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2831D0u;
    if (runtime->hasFunction(0x2831D0u)) {
        auto targetFn = runtime->lookupFunction(0x2831D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEE3Cu; }
        if (ctx->pc != 0x2DEE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearStack__6CSceneFi_0x2831d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEE3Cu; }
        if (ctx->pc != 0x2DEE3Cu) { return; }
    }
    ctx->pc = 0x2DEE3Cu;
label_2dee3c:
    // 0x2dee3c: 0xc0b49fc  jal         func_2D27F0
    ctx->pc = 0x2DEE3Cu;
    SET_GPR_U32(ctx, 31, 0x2DEE44u);
    ctx->pc = 0x2DEE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEE3Cu;
            // 0x2dee40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEE44u; }
        if (ctx->pc != 0x2DEE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEE44u; }
        if (ctx->pc != 0x2DEE44u) { return; }
    }
    ctx->pc = 0x2DEE44u;
label_2dee44:
    // 0x2dee44: 0xaf829eac  sw          $v0, -0x6154($gp)
    ctx->pc = 0x2dee44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942380), GPR_U32(ctx, 2));
    // 0x2dee48: 0x8f859eac  lw          $a1, -0x6154($gp)
    ctx->pc = 0x2dee48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942380)));
    // 0x2dee4c: 0xc0a12d8  jal         func_284B60
    ctx->pc = 0x2DEE4Cu;
    SET_GPR_U32(ctx, 31, 0x2DEE54u);
    ctx->pc = 0x2DEE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEE4Cu;
            // 0x2dee50: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284B60u;
    if (runtime->hasFunction(0x284B60u)) {
        auto targetFn = runtime->lookupFunction(0x284B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEE54u; }
        if (ctx->pc != 0x2DEE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNowMapNo__6CSceneFi_0x284b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEE54u; }
        if (ctx->pc != 0x2DEE54u) { return; }
    }
    ctx->pc = 0x2DEE54u;
label_2dee54:
    // 0x2dee54: 0x87839eac  lh          $v1, -0x6154($gp)
    ctx->pc = 0x2dee54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294942380)));
    // 0x2dee58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2dee58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dee5c: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x2dee5cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dee60: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x2dee60u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dee64: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x2dee64u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dee68: 0xc0b49c4  jal         func_2D2710
    ctx->pc = 0x2DEE68u;
    SET_GPR_U32(ctx, 31, 0x2DEE70u);
    ctx->pc = 0x2DEE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEE68u;
            // 0x2dee6c: 0x8f849eac  lw          $a0, -0x6154($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942380)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2710u;
    if (runtime->hasFunction(0x2D2710u)) {
        auto targetFn = runtime->lookupFunction(0x2D2710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEE70u; }
        if (ctx->pc != 0x2DEE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapAreaNo__Fi_0x2d2710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEE70u; }
        if (ctx->pc != 0x2DEE70u) { return; }
    }
    ctx->pc = 0x2DEE70u;
label_2dee70:
    // 0x2dee70: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DEE70u;
    {
        const bool branch_taken_0x2dee70 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2dee70) {
            ctx->pc = 0x2DEE7Cu;
            goto label_2dee7c;
        }
    }
    ctx->pc = 0x2DEE78u;
    // 0x2dee78: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x2dee78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2dee7c:
    // 0x2dee7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dee80: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dee80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2dee84: 0xae62018c  sw          $v0, 0x18C($s3)
    ctx->pc = 0x2dee84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 396), GPR_U32(ctx, 2));
    // 0x2dee88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2dee88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dee8c: 0x8c258d50  lw          $a1, -0x72B0($at)
    ctx->pc = 0x2dee8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937936)));
    // 0x2dee90: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2dee90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dee94: 0xc0a1738  jal         func_285CE0
    ctx->pc = 0x2DEE94u;
    SET_GPR_U32(ctx, 31, 0x2DEE9Cu);
    ctx->pc = 0x2DEE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEE94u;
            // 0x2dee98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285CE0u;
    if (runtime->hasFunction(0x285CE0u)) {
        auto targetFn = runtime->lookupFunction(0x285CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEE9Cu; }
        if (ctx->pc != 0x2DEE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadMap__6CSceneFiP17SCN_LOADMAP_INFO2i_0x285ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEE9Cu; }
        if (ctx->pc != 0x2DEE9Cu) { return; }
    }
    ctx->pc = 0x2DEE9Cu;
label_2dee9c:
    // 0x2dee9c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DEE9Cu;
    {
        const bool branch_taken_0x2dee9c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2DEEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEE9Cu;
            // 0x2deea0: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dee9c) {
            ctx->pc = 0x2DEEACu;
            goto label_2deeac;
        }
    }
    ctx->pc = 0x2DEEA4u;
    // 0x2deea4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2DEEA4u;
    {
        const bool branch_taken_0x2deea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEEA4u;
            // 0x2deea8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deea4) {
            ctx->pc = 0x2DEF14u;
            goto label_2def14;
        }
    }
    ctx->pc = 0x2DEEACu;
label_2deeac:
    // 0x2deeac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2deeacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2deeb0: 0x8c268d50  lw          $a2, -0x72B0($at)
    ctx->pc = 0x2deeb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937936)));
    // 0x2deeb4: 0xc0a11b4  jal         func_2846D0
    ctx->pc = 0x2DEEB4u;
    SET_GPR_U32(ctx, 31, 0x2DEEBCu);
    ctx->pc = 0x2DEEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEEB4u;
            // 0x2deeb8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEEBCu; }
        if (ctx->pc != 0x2DEEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEEBCu; }
        if (ctx->pc != 0x2DEEBCu) { return; }
    }
    ctx->pc = 0x2DEEBCu;
label_2deebc:
    // 0x2deebc: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2deebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2deec0: 0x8c228d50  lw          $v0, -0x72B0($at)
    ctx->pc = 0x2deec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937936)));
    // 0x2deec4: 0xae822e5c  sw          $v0, 0x2E5C($s4)
    ctx->pc = 0x2deec4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 11868), GPR_U32(ctx, 2));
    // 0x2deec8: 0x8e852e5c  lw          $a1, 0x2E5C($s4)
    ctx->pc = 0x2deec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11868)));
    // 0x2deecc: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x2DEECCu;
    SET_GPR_U32(ctx, 31, 0x2DEED4u);
    ctx->pc = 0x2DEED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEECCu;
            // 0x2deed0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEED4u; }
        if (ctx->pc != 0x2DEED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEED4u; }
        if (ctx->pc != 0x2DEED4u) { return; }
    }
    ctx->pc = 0x2DEED4u;
label_2deed4:
    // 0x2deed4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DEED4u;
    {
        const bool branch_taken_0x2deed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEED4u;
            // 0x2deed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deed4) {
            ctx->pc = 0x2DEEE4u;
            goto label_2deee4;
        }
    }
    ctx->pc = 0x2DEEDCu;
    // 0x2deedc: 0xc6802f6c  lwc1        $f0, 0x2F6C($s4)
    ctx->pc = 0x2deedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2deee0: 0xe4400c88  swc1        $f0, 0xC88($v0)
    ctx->pc = 0x2deee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3208), bits); }
label_2deee4:
    // 0x2deee4: 0xc0b7cdc  jal         func_2DF370
    ctx->pc = 0x2DEEE4u;
    SET_GPR_U32(ctx, 31, 0x2DEEECu);
    ctx->pc = 0x2DF370u;
    if (runtime->hasFunction(0x2DF370u)) {
        auto targetFn = runtime->lookupFunction(0x2DF370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEEECu; }
        if (ctx->pc != 0x2DEEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadMapScript__FPc_0x2df370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEEECu; }
        if (ctx->pc != 0x2DEEECu) { return; }
    }
    ctx->pc = 0x2DEEECu;
label_2deeec:
    // 0x2deeec: 0xc0b7d74  jal         func_2DF5D0
    ctx->pc = 0x2DEEECu;
    SET_GPR_U32(ctx, 31, 0x2DEEF4u);
    ctx->pc = 0x2DF5D0u;
    if (runtime->hasFunction(0x2DF5D0u)) {
        auto targetFn = runtime->lookupFunction(0x2DF5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEEF4u; }
        if (ctx->pc != 0x2DEEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitInterior__Fv_0x2df5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEEF4u; }
        if (ctx->pc != 0x2DEEF4u) { return; }
    }
    ctx->pc = 0x2DEEF4u;
label_2deef4:
    // 0x2deef4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2deef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2deef8: 0xaf829eb4  sw          $v0, -0x614C($gp)
    ctx->pc = 0x2deef8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942388), GPR_U32(ctx, 2));
    // 0x2deefc: 0xc064220  jal         func_190880
    ctx->pc = 0x2DEEFCu;
    SET_GPR_U32(ctx, 31, 0x2DEF04u);
    ctx->pc = 0x2DEF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEEFCu;
            // 0x2def00: 0xaf829eb8  sw          $v0, -0x6148($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942392), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEF04u; }
        if (ctx->pc != 0x2DEF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEF04u; }
        if (ctx->pc != 0x2DEF04u) { return; }
    }
    ctx->pc = 0x2DEF04u;
label_2def04:
    // 0x2def04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2def04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2def08: 0xc0bd9f4  jal         func_2F67D0
    ctx->pc = 0x2DEF08u;
    SET_GPR_U32(ctx, 31, 0x2DEF10u);
    ctx->pc = 0x2DEF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEF08u;
            // 0x2def0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F67D0u;
    if (runtime->hasFunction(0x2F67D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F67D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEF10u; }
        if (ctx->pc != 0x2DEF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetBitCtrl__9CSaveDataFi_0x2f67d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEF10u; }
        if (ctx->pc != 0x2DEF10u) { return; }
    }
    ctx->pc = 0x2DEF10u;
label_2def10:
    // 0x2def10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2def10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2def14:
    // 0x2def14: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2def14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2def18: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2def18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2def1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2def1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2def20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2def20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2def24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2def24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2def28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2def28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2def2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DEF2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DEF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEF2Cu;
            // 0x2def30: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DEF34u;
}
