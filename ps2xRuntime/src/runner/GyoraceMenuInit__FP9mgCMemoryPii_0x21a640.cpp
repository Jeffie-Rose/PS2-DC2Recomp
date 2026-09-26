#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GyoraceMenuInit__FP9mgCMemoryPii
// Address: 0x21a640 - 0x21aa04
void GyoraceMenuInit__FP9mgCMemoryPii_0x21a640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GyoraceMenuInit__FP9mgCMemoryPii_0x21a640");
#endif

    switch (ctx->pc) {
        case 0x21a67cu: goto label_21a67c;
        case 0x21a68cu: goto label_21a68c;
        case 0x21a6f4u: goto label_21a6f4;
        case 0x21a700u: goto label_21a700;
        case 0x21a718u: goto label_21a718;
        case 0x21a744u: goto label_21a744;
        case 0x21a760u: goto label_21a760;
        case 0x21a768u: goto label_21a768;
        case 0x21a770u: goto label_21a770;
        case 0x21a788u: goto label_21a788;
        case 0x21a794u: goto label_21a794;
        case 0x21a7a4u: goto label_21a7a4;
        case 0x21a7b8u: goto label_21a7b8;
        case 0x21a7c8u: goto label_21a7c8;
        case 0x21a7e0u: goto label_21a7e0;
        case 0x21a800u: goto label_21a800;
        case 0x21a80cu: goto label_21a80c;
        case 0x21a818u: goto label_21a818;
        case 0x21a830u: goto label_21a830;
        case 0x21a83cu: goto label_21a83c;
        case 0x21a84cu: goto label_21a84c;
        case 0x21a860u: goto label_21a860;
        case 0x21a870u: goto label_21a870;
        case 0x21a888u: goto label_21a888;
        case 0x21a894u: goto label_21a894;
        case 0x21a8a4u: goto label_21a8a4;
        case 0x21a8b0u: goto label_21a8b0;
        case 0x21a8c0u: goto label_21a8c0;
        case 0x21a8d4u: goto label_21a8d4;
        case 0x21a8e4u: goto label_21a8e4;
        case 0x21a8f0u: goto label_21a8f0;
        case 0x21a910u: goto label_21a910;
        case 0x21a920u: goto label_21a920;
        case 0x21a92cu: goto label_21a92c;
        case 0x21a95cu: goto label_21a95c;
        case 0x21a980u: goto label_21a980;
        case 0x21a988u: goto label_21a988;
        case 0x21a9a0u: goto label_21a9a0;
        case 0x21a9c8u: goto label_21a9c8;
        case 0x21a9ecu: goto label_21a9ec;
        default: break;
    }

    ctx->pc = 0x21a640u;

    // 0x21a640: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21a640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21a644: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21a644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21a648: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21a648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21a64c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21a64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21a650: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21a650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21a654: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21a654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a658: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x21a658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x21a65c: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x21a65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x21a660: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x21a660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x21a664: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x21a664u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21a668: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x21a668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x21a66c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x21a66cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x21a670: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x21a670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21a674: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x21A674u;
    SET_GPR_U32(ctx, 31, 0x21A67Cu);
    ctx->pc = 0x21A678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A674u;
            // 0x21a678: 0x2484c990  addiu       $a0, $a0, -0x3670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A67Cu; }
        if (ctx->pc != 0x21A67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A67Cu; }
        if (ctx->pc != 0x21A67Cu) { return; }
    }
    ctx->pc = 0x21A67Cu;
label_21a67c:
    // 0x21a67c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21a67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a680: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21a680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a684: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x21a684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x21a688: 0x2484c9c0  addiu       $a0, $a0, -0x3640
    ctx->pc = 0x21a688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953408));
label_21a68c:
    // 0x21a68c: 0x2063821  addu        $a3, $s0, $a2
    ctx->pc = 0x21a68cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x21a690: 0x864021  addu        $t0, $a0, $a2
    ctx->pc = 0x21a690u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x21a694: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x21a694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21a698: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x21a698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x21a69c: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x21a69cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x21a6a0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x21a6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x21a6a4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x21a6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x21a6a8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x21a6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x21a6ac: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x21a6acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x21a6b0: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x21a6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x21a6b4: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x21a6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x21a6b8: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x21a6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x21a6bc: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x21a6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
    // 0x21a6c0: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x21a6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x21a6c4: 0xad030010  sw          $v1, 0x10($t0)
    ctx->pc = 0x21a6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 3));
    // 0x21a6c8: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x21a6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x21a6cc: 0xad030014  sw          $v1, 0x14($t0)
    ctx->pc = 0x21a6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 3));
    // 0x21a6d0: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x21a6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x21a6d4: 0xad030018  sw          $v1, 0x18($t0)
    ctx->pc = 0x21a6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 3));
    // 0x21a6d8: 0x8ce3001c  lw          $v1, 0x1C($a3)
    ctx->pc = 0x21a6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x21a6dc: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x21A6DCu;
    {
        const bool branch_taken_0x21a6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A6DCu;
            // 0x21a6e0: 0xad03001c  sw          $v1, 0x1C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a6dc) {
            ctx->pc = 0x21A68Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21a68c;
        }
    }
    ctx->pc = 0x21A6E4u;
    // 0x21a6e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21a6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21a6e8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x21a6e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x21a6ec: 0xc0944a4  jal         func_251290
    ctx->pc = 0x21A6ECu;
    SET_GPR_U32(ctx, 31, 0x21A6F4u);
    ctx->pc = 0x21A6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A6ECu;
            // 0x21a6f0: 0xac22c9fc  sw          $v0, -0x3604($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294953468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251290u;
    if (runtime->hasFunction(0x251290u)) {
        auto targetFn = runtime->lookupFunction(0x251290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A6F4u; }
        if (ctx->pc != 0x21A6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuDeleteTextureBlock__FPi_0x251290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A6F4u; }
        if (ctx->pc != 0x21A6F4u) { return; }
    }
    ctx->pc = 0x21A6F4u;
label_21a6f4:
    // 0x21a6f4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x21a6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x21a6f8: 0xc064224  jal         func_190890
    ctx->pc = 0x21A6F8u;
    SET_GPR_U32(ctx, 31, 0x21A700u);
    ctx->pc = 0x21A6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A6F8u;
            // 0x21a6fc: 0xac20d630  sw          $zero, -0x29D0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190890u;
    if (runtime->hasFunction(0x190890u)) {
        auto targetFn = runtime->lookupFunction(0x190890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A700u; }
        if (ctx->pc != 0x21A700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSubGameSaveData__Fv_0x190890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A700u; }
        if (ctx->pc != 0x21A700u) { return; }
    }
    ctx->pc = 0x21A700u;
label_21a700:
    // 0x21a700: 0xaf82928c  sw          $v0, -0x6D74($gp)
    ctx->pc = 0x21a700u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939276), GPR_U32(ctx, 2));
    // 0x21a704: 0x8f84928c  lw          $a0, -0x6D74($gp)
    ctx->pc = 0x21a704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939276)));
    // 0x21a708: 0x108000b8  beqz        $a0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x21A708u;
    {
        const bool branch_taken_0x21a708 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a708) {
            ctx->pc = 0x21A9ECu;
            goto label_21a9ec;
        }
    }
    ctx->pc = 0x21A710u;
    // 0x21a710: 0xc0bdc78  jal         func_2F71E0
    ctx->pc = 0x21A710u;
    SET_GPR_U32(ctx, 31, 0x21A718u);
    ctx->pc = 0x2F71E0u;
    if (runtime->hasFunction(0x2F71E0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A718u; }
        if (ctx->pc != 0x21A718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGyoRaceData__12CSubGameDataFv_0x2f71e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A718u; }
        if (ctx->pc != 0x21A718u) { return; }
    }
    ctx->pc = 0x21A718u;
label_21a718:
    // 0x21a718: 0xaf829290  sw          $v0, -0x6D70($gp)
    ctx->pc = 0x21a718u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939280), GPR_U32(ctx, 2));
    // 0x21a71c: 0x8f839290  lw          $v1, -0x6D70($gp)
    ctx->pc = 0x21a71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
    // 0x21a720: 0x106000b2  beqz        $v1, . + 4 + (0xB2 << 2)
    ctx->pc = 0x21A720u;
    {
        const bool branch_taken_0x21a720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a720) {
            ctx->pc = 0x21A9ECu;
            goto label_21a9ec;
        }
    }
    ctx->pc = 0x21A728u;
    // 0x21a728: 0xaf809294  sw          $zero, -0x6D6C($gp)
    ctx->pc = 0x21a728u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939284), GPR_U32(ctx, 0));
    // 0x21a72c: 0xaf8092c4  sw          $zero, -0x6D3C($gp)
    ctx->pc = 0x21a72cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939332), GPR_U32(ctx, 0));
    // 0x21a730: 0xaf809310  sw          $zero, -0x6CF0($gp)
    ctx->pc = 0x21a730u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939408), GPR_U32(ctx, 0));
    // 0x21a734: 0xaf8092e8  sw          $zero, -0x6D18($gp)
    ctx->pc = 0x21a734u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939368), GPR_U32(ctx, 0));
    // 0x21a738: 0xaf8092ec  sw          $zero, -0x6D14($gp)
    ctx->pc = 0x21a738u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939372), GPR_U32(ctx, 0));
    // 0x21a73c: 0xc064220  jal         func_190880
    ctx->pc = 0x21A73Cu;
    SET_GPR_U32(ctx, 31, 0x21A744u);
    ctx->pc = 0x21A740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A73Cu;
            // 0x21a740: 0xa38092d0  sb          $zero, -0x6D30($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939344), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A744u; }
        if (ctx->pc != 0x21A744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A744u; }
        if (ctx->pc != 0x21A744u) { return; }
    }
    ctx->pc = 0x21A744u;
label_21a744:
    // 0x21a744: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x21a744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x21a748: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x21a748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x21a74c: 0x3421c574  ori         $at, $at, 0xC574
    ctx->pc = 0x21a74cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50548);
    // 0x21a750: 0x2484ca00  addiu       $a0, $a0, -0x3600
    ctx->pc = 0x21a750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953472));
    // 0x21a754: 0x412821  addu        $a1, $v0, $at
    ctx->pc = 0x21a754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x21a758: 0xc049c18  jal         func_127060
    ctx->pc = 0x21A758u;
    SET_GPR_U32(ctx, 31, 0x21A760u);
    ctx->pc = 0x21A75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A758u;
            // 0x21a75c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A760u; }
        if (ctx->pc != 0x21A760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A760u; }
        if (ctx->pc != 0x21A760u) { return; }
    }
    ctx->pc = 0x21A760u;
label_21a760:
    // 0x21a760: 0xc065a18  jal         func_196860
    ctx->pc = 0x21A760u;
    SET_GPR_U32(ctx, 31, 0x21A768u);
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A768u; }
        if (ctx->pc != 0x21A768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A768u; }
        if (ctx->pc != 0x21A768u) { return; }
    }
    ctx->pc = 0x21A768u;
label_21a768:
    // 0x21a768: 0xc08d1bc  jal         func_2346F0
    ctx->pc = 0x21A768u;
    SET_GPR_U32(ctx, 31, 0x21A770u);
    ctx->pc = 0x21A76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A768u;
            // 0x21a76c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2346F0u;
    if (runtime->hasFunction(0x2346F0u)) {
        auto targetFn = runtime->lookupFunction(0x2346F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A770u; }
        if (ctx->pc != 0x21A770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainMessageBuffer__Fv_0x2346f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A770u; }
        if (ctx->pc != 0x21A770u) { return; }
    }
    ctx->pc = 0x21A770u;
label_21a770:
    // 0x21a770: 0x8f928ad0  lw          $s2, -0x7530($gp)
    ctx->pc = 0x21a770u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x21a774: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x21a774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x21a778: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21a778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a77c: 0x2484c990  addiu       $a0, $a0, -0x3670
    ctx->pc = 0x21a77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953360));
    // 0x21a780: 0xc04e748  jal         func_139D20
    ctx->pc = 0x21A780u;
    SET_GPR_U32(ctx, 31, 0x21A788u);
    ctx->pc = 0x21A784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A780u;
            // 0x21a784: 0x2405022f  addiu       $a1, $zero, 0x22F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A788u; }
        if (ctx->pc != 0x21A788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A788u; }
        if (ctx->pc != 0x21A788u) { return; }
    }
    ctx->pc = 0x21A788u;
label_21a788:
    // 0x21a788: 0x240422d0  addiu       $a0, $zero, 0x22D0
    ctx->pc = 0x21a788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8912));
    // 0x21a78c: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x21A78Cu;
    SET_GPR_U32(ctx, 31, 0x21A794u);
    ctx->pc = 0x21A790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A78Cu;
            // 0x21a790: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A794u; }
        if (ctx->pc != 0x21A794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A794u; }
        if (ctx->pc != 0x21A794u) { return; }
    }
    ctx->pc = 0x21A794u;
label_21a794:
    // 0x21a794: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A794u;
    {
        const bool branch_taken_0x21a794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A794u;
            // 0x21a798: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a794) {
            ctx->pc = 0x21A7A4u;
            goto label_21a7a4;
        }
    }
    ctx->pc = 0x21A79Cu;
    // 0x21a79c: 0xc0874b4  jal         func_21D2D0
    ctx->pc = 0x21A79Cu;
    SET_GPR_U32(ctx, 31, 0x21A7A4u);
    ctx->pc = 0x21D2D0u;
    if (runtime->hasFunction(0x21D2D0u)) {
        auto targetFn = runtime->lookupFunction(0x21D2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A7A4u; }
        if (ctx->pc != 0x21A7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__7CDC2MesFv_0x21d2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A7A4u; }
        if (ctx->pc != 0x21A7A4u) { return; }
    }
    ctx->pc = 0x21A7A4u;
label_21a7a4:
    // 0x21a7a4: 0xaf829298  sw          $v0, -0x6D68($gp)
    ctx->pc = 0x21a7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939288), GPR_U32(ctx, 2));
    // 0x21a7a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21a7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a7ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21a7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a7b0: 0xc0874d8  jal         func_21D360
    ctx->pc = 0x21A7B0u;
    SET_GPR_U32(ctx, 31, 0x21A7B8u);
    ctx->pc = 0x21A7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A7B0u;
            // 0x21a7b4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A7B8u; }
        if (ctx->pc != 0x21A7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A7B8u; }
        if (ctx->pc != 0x21A7B8u) { return; }
    }
    ctx->pc = 0x21A7B8u;
label_21a7b8:
    // 0x21a7b8: 0x8f849298  lw          $a0, -0x6D68($gp)
    ctx->pc = 0x21a7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939288)));
    // 0x21a7bc: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x21a7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x21a7c0: 0xc0875a0  jal         func_21D680
    ctx->pc = 0x21A7C0u;
    SET_GPR_U32(ctx, 31, 0x21A7C8u);
    ctx->pc = 0x21A7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A7C0u;
            // 0x21a7c4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (runtime->hasFunction(0x21D680u)) {
        auto targetFn = runtime->lookupFunction(0x21D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A7C8u; }
        if (ctx->pc != 0x21A7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFii_0x21d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A7C8u; }
        if (ctx->pc != 0x21A7C8u) { return; }
    }
    ctx->pc = 0x21A7C8u;
label_21a7c8:
    // 0x21a7c8: 0x8f849298  lw          $a0, -0x6D68($gp)
    ctx->pc = 0x21a7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939288)));
    // 0x21a7cc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x21a7ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21a7d0: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x21a7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x21a7d4: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x21a7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x21a7d8: 0xc0876a0  jal         func_21DA80
    ctx->pc = 0x21A7D8u;
    SET_GPR_U32(ctx, 31, 0x21A7E0u);
    ctx->pc = 0x21A7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A7D8u;
            // 0x21a7dc: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DA80u;
    if (runtime->hasFunction(0x21DA80u)) {
        auto targetFn = runtime->lookupFunction(0x21DA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A7E0u; }
        if (ctx->pc != 0x21A7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPutPos__7CDC2MesFiiii_0x21da80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A7E0u; }
        if (ctx->pc != 0x21A7E0u) { return; }
    }
    ctx->pc = 0x21A7E0u;
label_21a7e0:
    // 0x21a7e0: 0x1a400007  blez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x21A7E0u;
    {
        const bool branch_taken_0x21a7e0 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x21a7e0) {
            ctx->pc = 0x21A800u;
            goto label_21a800;
        }
    }
    ctx->pc = 0x21A7E8u;
    // 0x21a7e8: 0x8f849298  lw          $a0, -0x6D68($gp)
    ctx->pc = 0x21a7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939288)));
    // 0x21a7ec: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x21a7ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21a7f0: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x21a7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x21a7f4: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x21a7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x21a7f8: 0xc0876a0  jal         func_21DA80
    ctx->pc = 0x21A7F8u;
    SET_GPR_U32(ctx, 31, 0x21A800u);
    ctx->pc = 0x21A7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A7F8u;
            // 0x21a7fc: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DA80u;
    if (runtime->hasFunction(0x21DA80u)) {
        auto targetFn = runtime->lookupFunction(0x21DA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A800u; }
        if (ctx->pc != 0x21A800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPutPos__7CDC2MesFiiii_0x21da80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A800u; }
        if (ctx->pc != 0x21A800u) { return; }
    }
    ctx->pc = 0x21A800u;
label_21a800:
    // 0x21a800: 0x8f849298  lw          $a0, -0x6D68($gp)
    ctx->pc = 0x21a800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939288)));
    // 0x21a804: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x21A804u;
    SET_GPR_U32(ctx, 31, 0x21A80Cu);
    ctx->pc = 0x21A808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A804u;
            // 0x21a808: 0x240513a6  addiu       $a1, $zero, 0x13A6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5030));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A80Cu; }
        if (ctx->pc != 0x21A80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A80Cu; }
        if (ctx->pc != 0x21A80Cu) { return; }
    }
    ctx->pc = 0x21A80Cu;
label_21a80c:
    // 0x21a80c: 0x8f849298  lw          $a0, -0x6D68($gp)
    ctx->pc = 0x21a80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939288)));
    // 0x21a810: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x21A810u;
    SET_GPR_U32(ctx, 31, 0x21A818u);
    ctx->pc = 0x21A814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A810u;
            // 0x21a814: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A818u; }
        if (ctx->pc != 0x21A818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A818u; }
        if (ctx->pc != 0x21A818u) { return; }
    }
    ctx->pc = 0x21A818u;
label_21a818:
    // 0x21a818: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a81c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x21a81cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x21a820: 0x2484c990  addiu       $a0, $a0, -0x3670
    ctx->pc = 0x21a820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953360));
    // 0x21a824: 0xa382929c  sb          $v0, -0x6D64($gp)
    ctx->pc = 0x21a824u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939292), (uint8_t)GPR_U32(ctx, 2));
    // 0x21a828: 0xc04e748  jal         func_139D20
    ctx->pc = 0x21A828u;
    SET_GPR_U32(ctx, 31, 0x21A830u);
    ctx->pc = 0x21A82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A828u;
            // 0x21a82c: 0x2405022f  addiu       $a1, $zero, 0x22F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A830u; }
        if (ctx->pc != 0x21A830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A830u; }
        if (ctx->pc != 0x21A830u) { return; }
    }
    ctx->pc = 0x21A830u;
label_21a830:
    // 0x21a830: 0x240422d0  addiu       $a0, $zero, 0x22D0
    ctx->pc = 0x21a830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8912));
    // 0x21a834: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x21A834u;
    SET_GPR_U32(ctx, 31, 0x21A83Cu);
    ctx->pc = 0x21A838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A834u;
            // 0x21a838: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A83Cu; }
        if (ctx->pc != 0x21A83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A83Cu; }
        if (ctx->pc != 0x21A83Cu) { return; }
    }
    ctx->pc = 0x21A83Cu;
label_21a83c:
    // 0x21a83c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A83Cu;
    {
        const bool branch_taken_0x21a83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A83Cu;
            // 0x21a840: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a83c) {
            ctx->pc = 0x21A84Cu;
            goto label_21a84c;
        }
    }
    ctx->pc = 0x21A844u;
    // 0x21a844: 0xc0874b4  jal         func_21D2D0
    ctx->pc = 0x21A844u;
    SET_GPR_U32(ctx, 31, 0x21A84Cu);
    ctx->pc = 0x21D2D0u;
    if (runtime->hasFunction(0x21D2D0u)) {
        auto targetFn = runtime->lookupFunction(0x21D2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A84Cu; }
        if (ctx->pc != 0x21A84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__7CDC2MesFv_0x21d2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A84Cu; }
        if (ctx->pc != 0x21A84Cu) { return; }
    }
    ctx->pc = 0x21A84Cu;
label_21a84c:
    // 0x21a84c: 0xaf8292a4  sw          $v0, -0x6D5C($gp)
    ctx->pc = 0x21a84cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939300), GPR_U32(ctx, 2));
    // 0x21a850: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21a850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a854: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21a854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a858: 0xc0874d8  jal         func_21D360
    ctx->pc = 0x21A858u;
    SET_GPR_U32(ctx, 31, 0x21A860u);
    ctx->pc = 0x21A85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A858u;
            // 0x21a85c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A860u; }
        if (ctx->pc != 0x21A860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A860u; }
        if (ctx->pc != 0x21A860u) { return; }
    }
    ctx->pc = 0x21A860u;
label_21a860:
    // 0x21a860: 0x8f8492a4  lw          $a0, -0x6D5C($gp)
    ctx->pc = 0x21a860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939300)));
    // 0x21a864: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x21a864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x21a868: 0xc0875a0  jal         func_21D680
    ctx->pc = 0x21A868u;
    SET_GPR_U32(ctx, 31, 0x21A870u);
    ctx->pc = 0x21A86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A868u;
            // 0x21a86c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (runtime->hasFunction(0x21D680u)) {
        auto targetFn = runtime->lookupFunction(0x21D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A870u; }
        if (ctx->pc != 0x21A870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFii_0x21d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A870u; }
        if (ctx->pc != 0x21A870u) { return; }
    }
    ctx->pc = 0x21A870u;
label_21a870:
    // 0x21a870: 0x8f8492a4  lw          $a0, -0x6D5C($gp)
    ctx->pc = 0x21a870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939300)));
    // 0x21a874: 0x24050116  addiu       $a1, $zero, 0x116
    ctx->pc = 0x21a874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x21a878: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x21a878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x21a87c: 0x240700f0  addiu       $a3, $zero, 0xF0
    ctx->pc = 0x21a87cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x21a880: 0xc0876a0  jal         func_21DA80
    ctx->pc = 0x21A880u;
    SET_GPR_U32(ctx, 31, 0x21A888u);
    ctx->pc = 0x21A884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A880u;
            // 0x21a884: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DA80u;
    if (runtime->hasFunction(0x21DA80u)) {
        auto targetFn = runtime->lookupFunction(0x21DA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A888u; }
        if (ctx->pc != 0x21A888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPutPos__7CDC2MesFiiii_0x21da80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A888u; }
        if (ctx->pc != 0x21A888u) { return; }
    }
    ctx->pc = 0x21A888u;
label_21a888:
    // 0x21a888: 0x8f8492a4  lw          $a0, -0x6D5C($gp)
    ctx->pc = 0x21a888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939300)));
    // 0x21a88c: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x21A88Cu;
    SET_GPR_U32(ctx, 31, 0x21A894u);
    ctx->pc = 0x21A890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A88Cu;
            // 0x21a890: 0x24051389  addiu       $a1, $zero, 0x1389 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5001));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A894u; }
        if (ctx->pc != 0x21A894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A894u; }
        if (ctx->pc != 0x21A894u) { return; }
    }
    ctx->pc = 0x21A894u;
label_21a894:
    // 0x21a894: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x21a894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x21a898: 0x2405022f  addiu       $a1, $zero, 0x22F
    ctx->pc = 0x21a898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
    // 0x21a89c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x21A89Cu;
    SET_GPR_U32(ctx, 31, 0x21A8A4u);
    ctx->pc = 0x21A8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A89Cu;
            // 0x21a8a0: 0x2484c990  addiu       $a0, $a0, -0x3670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A8A4u; }
        if (ctx->pc != 0x21A8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A8A4u; }
        if (ctx->pc != 0x21A8A4u) { return; }
    }
    ctx->pc = 0x21A8A4u;
label_21a8a4:
    // 0x21a8a4: 0x240422d0  addiu       $a0, $zero, 0x22D0
    ctx->pc = 0x21a8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8912));
    // 0x21a8a8: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x21A8A8u;
    SET_GPR_U32(ctx, 31, 0x21A8B0u);
    ctx->pc = 0x21A8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A8A8u;
            // 0x21a8ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A8B0u; }
        if (ctx->pc != 0x21A8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A8B0u; }
        if (ctx->pc != 0x21A8B0u) { return; }
    }
    ctx->pc = 0x21A8B0u;
label_21a8b0:
    // 0x21a8b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A8B0u;
    {
        const bool branch_taken_0x21a8b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A8B0u;
            // 0x21a8b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a8b0) {
            ctx->pc = 0x21A8C4u;
            goto label_21a8c4;
        }
    }
    ctx->pc = 0x21A8B8u;
    // 0x21a8b8: 0xc0874b4  jal         func_21D2D0
    ctx->pc = 0x21A8B8u;
    SET_GPR_U32(ctx, 31, 0x21A8C0u);
    ctx->pc = 0x21A8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A8B8u;
            // 0x21a8bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D2D0u;
    if (runtime->hasFunction(0x21D2D0u)) {
        auto targetFn = runtime->lookupFunction(0x21D2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A8C0u; }
        if (ctx->pc != 0x21A8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__7CDC2MesFv_0x21d2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A8C0u; }
        if (ctx->pc != 0x21A8C0u) { return; }
    }
    ctx->pc = 0x21A8C0u;
label_21a8c0:
    // 0x21a8c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21a8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21a8c4:
    // 0x21a8c4: 0xaf8292a8  sw          $v0, -0x6D58($gp)
    ctx->pc = 0x21a8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 2));
    // 0x21a8c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21a8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a8cc: 0xc0874d8  jal         func_21D360
    ctx->pc = 0x21A8CCu;
    SET_GPR_U32(ctx, 31, 0x21A8D4u);
    ctx->pc = 0x21A8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A8CCu;
            // 0x21a8d0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A8D4u; }
        if (ctx->pc != 0x21A8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A8D4u; }
        if (ctx->pc != 0x21A8D4u) { return; }
    }
    ctx->pc = 0x21A8D4u;
label_21a8d4:
    // 0x21a8d4: 0x8f8492a8  lw          $a0, -0x6D58($gp)
    ctx->pc = 0x21a8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
    // 0x21a8d8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x21a8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x21a8dc: 0xc0875a0  jal         func_21D680
    ctx->pc = 0x21A8DCu;
    SET_GPR_U32(ctx, 31, 0x21A8E4u);
    ctx->pc = 0x21A8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A8DCu;
            // 0x21a8e0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (runtime->hasFunction(0x21D680u)) {
        auto targetFn = runtime->lookupFunction(0x21D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A8E4u; }
        if (ctx->pc != 0x21A8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFii_0x21d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A8E4u; }
        if (ctx->pc != 0x21A8E4u) { return; }
    }
    ctx->pc = 0x21A8E4u;
label_21a8e4:
    // 0x21a8e4: 0x8f8492a8  lw          $a0, -0x6D58($gp)
    ctx->pc = 0x21a8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
    // 0x21a8e8: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x21A8E8u;
    SET_GPR_U32(ctx, 31, 0x21A8F0u);
    ctx->pc = 0x21A8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A8E8u;
            // 0x21a8ec: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A8F0u; }
        if (ctx->pc != 0x21A8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A8F0u; }
        if (ctx->pc != 0x21A8F0u) { return; }
    }
    ctx->pc = 0x21A8F0u;
label_21a8f0:
    // 0x21a8f0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x21a8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x21a8f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21a8f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a8f8: 0x8c22ca44  lw          $v0, -0x35BC($at)
    ctx->pc = 0x21a8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953540)));
    // 0x21a8fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x21a8fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a900: 0xaf8292b0  sw          $v0, -0x6D50($gp)
    ctx->pc = 0x21a900u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939312), GPR_U32(ctx, 2));
    // 0x21a904: 0x8f8492b0  lw          $a0, -0x6D50($gp)
    ctx->pc = 0x21a904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939312)));
    // 0x21a908: 0xc0874d8  jal         func_21D360
    ctx->pc = 0x21A908u;
    SET_GPR_U32(ctx, 31, 0x21A910u);
    ctx->pc = 0x21A90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A908u;
            // 0x21a90c: 0xa38092ac  sb          $zero, -0x6D54($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939308), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A910u; }
        if (ctx->pc != 0x21A910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A910u; }
        if (ctx->pc != 0x21A910u) { return; }
    }
    ctx->pc = 0x21A910u;
label_21a910:
    // 0x21a910: 0x8f8492b0  lw          $a0, -0x6D50($gp)
    ctx->pc = 0x21a910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939312)));
    // 0x21a914: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x21a914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a918: 0xc0875a0  jal         func_21D680
    ctx->pc = 0x21A918u;
    SET_GPR_U32(ctx, 31, 0x21A920u);
    ctx->pc = 0x21A91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A918u;
            // 0x21a91c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (runtime->hasFunction(0x21D680u)) {
        auto targetFn = runtime->lookupFunction(0x21D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A920u; }
        if (ctx->pc != 0x21A920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFii_0x21d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A920u; }
        if (ctx->pc != 0x21A920u) { return; }
    }
    ctx->pc = 0x21A920u;
label_21a920:
    // 0x21a920: 0x8f8492b0  lw          $a0, -0x6D50($gp)
    ctx->pc = 0x21a920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939312)));
    // 0x21a924: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x21A924u;
    SET_GPR_U32(ctx, 31, 0x21A92Cu);
    ctx->pc = 0x21A928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A924u;
            // 0x21a928: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A92Cu; }
        if (ctx->pc != 0x21A92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A92Cu; }
        if (ctx->pc != 0x21A92Cu) { return; }
    }
    ctx->pc = 0x21A92Cu;
label_21a92c:
    // 0x21a92c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x21a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x21a930: 0xaf8092b8  sw          $zero, -0x6D48($gp)
    ctx->pc = 0x21a930u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939320), GPR_U32(ctx, 0));
    // 0x21a934: 0xaf8292f4  sw          $v0, -0x6D0C($gp)
    ctx->pc = 0x21a934u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939380), GPR_U32(ctx, 2));
    // 0x21a938: 0xa38092b4  sb          $zero, -0x6D4C($gp)
    ctx->pc = 0x21a938u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939316), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a93c: 0xa38092a0  sb          $zero, -0x6D60($gp)
    ctx->pc = 0x21a93cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939296), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a940: 0xaf809294  sw          $zero, -0x6D6C($gp)
    ctx->pc = 0x21a940u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939284), GPR_U32(ctx, 0));
    // 0x21a944: 0xa78092f0  sh          $zero, -0x6D10($gp)
    ctx->pc = 0x21a944u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939376), (uint16_t)GPR_U32(ctx, 0));
    // 0x21a948: 0xaf8092bc  sw          $zero, -0x6D44($gp)
    ctx->pc = 0x21a948u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939324), GPR_U32(ctx, 0));
    // 0x21a94c: 0xaf8092dc  sw          $zero, -0x6D24($gp)
    ctx->pc = 0x21a94cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939356), GPR_U32(ctx, 0));
    // 0x21a950: 0xa38092d4  sb          $zero, -0x6D2C($gp)
    ctx->pc = 0x21a950u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939348), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a954: 0xc086934  jal         func_21A4D0
    ctx->pc = 0x21A954u;
    SET_GPR_U32(ctx, 31, 0x21A95Cu);
    ctx->pc = 0x21A958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A954u;
            // 0x21a958: 0xaf8092d8  sw          $zero, -0x6D28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A4D0u;
    if (runtime->hasFunction(0x21A4D0u)) {
        auto targetFn = runtime->lookupFunction(0x21A4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A95Cu; }
        if (ctx->pc != 0x21A95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GyoracerListUpdate__Fv_0x21a4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A95Cu; }
        if (ctx->pc != 0x21A95Cu) { return; }
    }
    ctx->pc = 0x21A95Cu;
label_21a95c:
    // 0x21a95c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x21a95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x21a960: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x21a960u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x21a964: 0x8c22c9c0  lw          $v0, -0x3640($at)
    ctx->pc = 0x21a964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953408)));
    // 0x21a968: 0x24a5c990  addiu       $a1, $a1, -0x3670
    ctx->pc = 0x21a968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953360));
    // 0x21a96c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21a96cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a970: 0xaf828304  sw          $v0, -0x7CFC($gp)
    ctx->pc = 0x21a970u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935300), GPR_U32(ctx, 2));
    // 0x21a974: 0x8f848304  lw          $a0, -0x7CFC($gp)
    ctx->pc = 0x21a974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
    // 0x21a978: 0xc08b2e8  jal         func_22CBA0
    ctx->pc = 0x21A978u;
    SET_GPR_U32(ctx, 31, 0x21A980u);
    ctx->pc = 0x21A97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A978u;
            // 0x21a97c: 0xaf8092fc  sw          $zero, -0x6D04($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939388), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22CBA0u;
    if (runtime->hasFunction(0x22CBA0u)) {
        auto targetFn = runtime->lookupFunction(0x22CBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A980u; }
        if (ctx->pc != 0x21A980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCapture__FiP9mgCMemoryi_0x22cba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A980u; }
        if (ctx->pc != 0x21A980u) { return; }
    }
    ctx->pc = 0x21A980u;
label_21a980:
    // 0x21a980: 0xc08ad38  jal         func_22B4E0
    ctx->pc = 0x21A980u;
    SET_GPR_U32(ctx, 31, 0x21A988u);
    ctx->pc = 0x21A984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A980u;
            // 0x21a984: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B4E0u;
    if (runtime->hasFunction(0x22B4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22B4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A988u; }
        if (ctx->pc != 0x21A988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachCommonTexInfo__18CMenuPosDataManageFv_0x22b4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A988u; }
        if (ctx->pc != 0x21A988u) { return; }
    }
    ctx->pc = 0x21A988u;
label_21a988:
    // 0x21a988: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x21a988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x21a98c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21a98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a990: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x21a990u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x21a994: 0xa78092c8  sh          $zero, -0x6D38($gp)
    ctx->pc = 0x21a994u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939336), (uint16_t)GPR_U32(ctx, 0));
    // 0x21a998: 0xc052330  jal         func_148CC0
    ctx->pc = 0x21A998u;
    SET_GPR_U32(ctx, 31, 0x21A9A0u);
    ctx->pc = 0x21A99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A998u;
            // 0x21a99c: 0xa78092cc  sh          $zero, -0x6D34($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294939340), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A9A0u; }
        if (ctx->pc != 0x21A9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A9A0u; }
        if (ctx->pc != 0x21A9A0u) { return; }
    }
    ctx->pc = 0x21A9A0u;
label_21a9a0:
    // 0x21a9a0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x21a9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x21a9a4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x21a9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x21a9a8: 0x8c23c9b4  lw          $v1, -0x364C($at)
    ctx->pc = 0x21a9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953396)));
    // 0x21a9ac: 0x2484a398  addiu       $a0, $a0, -0x5C68
    ctx->pc = 0x21a9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943640));
    // 0x21a9b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21a9b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a9b4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x21a9b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x21a9b8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x21a9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x21a9bc: 0x8c22c9b0  lw          $v0, -0x3650($at)
    ctx->pc = 0x21a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953392)));
    // 0x21a9c0: 0xc094440  jal         func_251100
    ctx->pc = 0x21A9C0u;
    SET_GPR_U32(ctx, 31, 0x21A9C8u);
    ctx->pc = 0x21A9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A9C0u;
            // 0x21a9c4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251100u;
    if (runtime->hasFunction(0x251100u)) {
        auto targetFn = runtime->lookupFunction(0x251100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A9C8u; }
        if (ctx->pc != 0x21A9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileMenu__FPcP1i_0x251100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A9C8u; }
        if (ctx->pc != 0x21A9C8u) { return; }
    }
    ctx->pc = 0x21A9C8u;
label_21a9c8:
    // 0x21a9c8: 0x24430c00  addiu       $v1, $v0, 0xC00
    ctx->pc = 0x21a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
    // 0x21a9cc: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x21a9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x21a9d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A9D0u;
    {
        const bool branch_taken_0x21a9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A9D0u;
            // 0x21a9d4: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a9d0) {
            ctx->pc = 0x21A9E0u;
            goto label_21a9e0;
        }
    }
    ctx->pc = 0x21A9D8u;
    // 0x21a9d8: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x21a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x21a9dc: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x21a9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_21a9e0:
    // 0x21a9e0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x21a9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x21a9e4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x21A9E4u;
    SET_GPR_U32(ctx, 31, 0x21A9ECu);
    ctx->pc = 0x21A9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A9E4u;
            // 0x21a9e8: 0x2484c990  addiu       $a0, $a0, -0x3670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A9ECu; }
        if (ctx->pc != 0x21A9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A9ECu; }
        if (ctx->pc != 0x21A9ECu) { return; }
    }
    ctx->pc = 0x21A9ECu;
label_21a9ec:
    // 0x21a9ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21a9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21a9f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21a9f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a9f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21a9f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a9f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21a9f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a9fc: 0x3e00008  jr          $ra
    ctx->pc = 0x21A9FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A9FCu;
            // 0x21aa00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21AA04u;
}
