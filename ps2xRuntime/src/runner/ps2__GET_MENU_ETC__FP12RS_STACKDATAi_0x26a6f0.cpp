#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_MENU_ETC__FP12RS_STACKDATAi
// Address: 0x26a6f0 - 0x26a940
void ps2__GET_MENU_ETC__FP12RS_STACKDATAi_0x26a6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_MENU_ETC__FP12RS_STACKDATAi_0x26a6f0");
#endif

    switch (ctx->pc) {
        case 0x26a708u: goto label_26a708;
        case 0x26a71cu: goto label_26a71c;
        case 0x26a728u: goto label_26a728;
        case 0x26a740u: goto label_26a740;
        case 0x26a74cu: goto label_26a74c;
        case 0x26a764u: goto label_26a764;
        case 0x26a794u: goto label_26a794;
        case 0x26a7a8u: goto label_26a7a8;
        case 0x26a7b4u: goto label_26a7b4;
        case 0x26a7d8u: goto label_26a7d8;
        case 0x26a834u: goto label_26a834;
        case 0x26a840u: goto label_26a840;
        case 0x26a858u: goto label_26a858;
        case 0x26a864u: goto label_26a864;
        case 0x26a87cu: goto label_26a87c;
        case 0x26a88cu: goto label_26a88c;
        case 0x26a898u: goto label_26a898;
        case 0x26a8b8u: goto label_26a8b8;
        case 0x26a8c8u: goto label_26a8c8;
        case 0x26a8d4u: goto label_26a8d4;
        case 0x26a8f0u: goto label_26a8f0;
        case 0x26a8f8u: goto label_26a8f8;
        case 0x26a904u: goto label_26a904;
        case 0x26a91cu: goto label_26a91c;
        case 0x26a928u: goto label_26a928;
        default: break;
    }

    ctx->pc = 0x26a6f0u;

    // 0x26a6f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26a6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26a6f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26a6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26a6f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26a6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26a6fc: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x26a6fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26a700: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26A700u;
    SET_GPR_U32(ctx, 31, 0x26A708u);
    ctx->pc = 0x26A704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A700u;
            // 0x26a704: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A708u; }
        if (ctx->pc != 0x26A708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A708u; }
        if (ctx->pc != 0x26A708u) { return; }
    }
    ctx->pc = 0x26A708u;
label_26a708:
    // 0x26a708: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26a708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a70c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26A70Cu;
    {
        const bool branch_taken_0x26a70c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A70Cu;
            // 0x26a710: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a70c) {
            ctx->pc = 0x26A730u;
            goto label_26a730;
        }
    }
    ctx->pc = 0x26A714u;
    // 0x26a714: 0xc0bea08  jal         func_2FA820
    ctx->pc = 0x26A714u;
    SET_GPR_U32(ctx, 31, 0x26A71Cu);
    ctx->pc = 0x2FA820u;
    if (runtime->hasFunction(0x2FA820u)) {
        auto targetFn = runtime->lookupFunction(0x2FA820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A71Cu; }
        if (ctx->pc != 0x26A71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCountSphedaClear__Fv_0x2fa820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A71Cu; }
        if (ctx->pc != 0x26A71Cu) { return; }
    }
    ctx->pc = 0x26A71Cu;
label_26a71c:
    // 0x26a71c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26a71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a720: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26A720u;
    SET_GPR_U32(ctx, 31, 0x26A728u);
    ctx->pc = 0x26A724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A720u;
            // 0x26a724: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A728u; }
        if (ctx->pc != 0x26A728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A728u; }
        if (ctx->pc != 0x26A728u) { return; }
    }
    ctx->pc = 0x26A728u;
label_26a728:
    // 0x26a728: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x26A728u;
    {
        const bool branch_taken_0x26a728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A728u;
            // 0x26a72c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a728) {
            ctx->pc = 0x26A92Cu;
            goto label_26a92c;
        }
    }
    ctx->pc = 0x26A730u;
label_26a730:
    // 0x26a730: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26A730u;
    {
        const bool branch_taken_0x26a730 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x26A734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A730u;
            // 0x26a734: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a730) {
            ctx->pc = 0x26A754u;
            goto label_26a754;
        }
    }
    ctx->pc = 0x26A738u;
    // 0x26a738: 0xc0953e0  jal         func_254F80
    ctx->pc = 0x26A738u;
    SET_GPR_U32(ctx, 31, 0x26A740u);
    ctx->pc = 0x254F80u;
    if (runtime->hasFunction(0x254F80u)) {
        auto targetFn = runtime->lookupFunction(0x254F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A740u; }
        if (ctx->pc != 0x26A740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSquareEvent__Fv_0x254f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A740u; }
        if (ctx->pc != 0x26A740u) { return; }
    }
    ctx->pc = 0x26A740u;
label_26a740:
    // 0x26a740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26a740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a744: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26A744u;
    SET_GPR_U32(ctx, 31, 0x26A74Cu);
    ctx->pc = 0x26A748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A744u;
            // 0x26a748: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A74Cu; }
        if (ctx->pc != 0x26A74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A74Cu; }
        if (ctx->pc != 0x26A74Cu) { return; }
    }
    ctx->pc = 0x26A74Cu;
label_26a74c:
    // 0x26a74c: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x26A74Cu;
    {
        const bool branch_taken_0x26a74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A74Cu;
            // 0x26a750: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a74c) {
            ctx->pc = 0x26A92Cu;
            goto label_26a92c;
        }
    }
    ctx->pc = 0x26A754u;
label_26a754:
    // 0x26a754: 0x16020019  bne         $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x26A754u;
    {
        const bool branch_taken_0x26a754 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x26A758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A754u;
            // 0x26a758: 0x2602fffd  addiu       $v0, $s0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a754) {
            ctx->pc = 0x26A7BCu;
            goto label_26a7bc;
        }
    }
    ctx->pc = 0x26A75Cu;
    // 0x26a75c: 0xc064220  jal         func_190880
    ctx->pc = 0x26A75Cu;
    SET_GPR_U32(ctx, 31, 0x26A764u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A764u; }
        if (ctx->pc != 0x26A764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A764u; }
        if (ctx->pc != 0x26A764u) { return; }
    }
    ctx->pc = 0x26A764u;
label_26a764:
    // 0x26a764: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A764u;
    {
        const bool branch_taken_0x26a764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A764u;
            // 0x26a768: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a764) {
            ctx->pc = 0x26A774u;
            goto label_26a774;
        }
    }
    ctx->pc = 0x26A76Cu;
    // 0x26a76c: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x26A76Cu;
    {
        const bool branch_taken_0x26a76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A76Cu;
            // 0x26a770: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a76c) {
            ctx->pc = 0x26A92Cu;
            goto label_26a92c;
        }
    }
    ctx->pc = 0x26A774u;
label_26a774:
    // 0x26a774: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x26a774u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x26a778: 0x418021  addu        $s0, $v0, $at
    ctx->pc = 0x26a778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x26a77c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A77Cu;
    {
        const bool branch_taken_0x26a77c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A77Cu;
            // 0x26a780: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a77c) {
            ctx->pc = 0x26A78Cu;
            goto label_26a78c;
        }
    }
    ctx->pc = 0x26A784u;
    // 0x26a784: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x26A784u;
    {
        const bool branch_taken_0x26a784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A784u;
            // 0x26a788: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a784) {
            ctx->pc = 0x26A92Cu;
            goto label_26a92c;
        }
    }
    ctx->pc = 0x26A78Cu;
label_26a78c:
    // 0x26a78c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26A78Cu;
    SET_GPR_U32(ctx, 31, 0x26A794u);
    ctx->pc = 0x26A790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A78Cu;
            // 0x26a790: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A794u; }
        if (ctx->pc != 0x26A794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A794u; }
        if (ctx->pc != 0x26A794u) { return; }
    }
    ctx->pc = 0x26A794u;
label_26a794:
    // 0x26a794: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a798: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26a798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a79c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x26a79cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26a7a0: 0xc067480  jal         func_19D200
    ctx->pc = 0x26A7A0u;
    SET_GPR_U32(ctx, 31, 0x26A7A8u);
    ctx->pc = 0x26A7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A7A0u;
            // 0x26a7a4: 0x27a70034  addiu       $a3, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D200u;
    if (runtime->hasFunction(0x19D200u)) {
        auto targetFn = runtime->lookupFunction(0x19D200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A7A8u; }
        if (ctx->pc != 0x26A7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishRecord__16CUserDataManagerFiPfPf_0x19d200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A7A8u; }
        if (ctx->pc != 0x26A7A8u) { return; }
    }
    ctx->pc = 0x26A7A8u;
label_26a7a8:
    // 0x26a7a8: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x26a7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26a7ac: 0xc097e54  jal         func_25F950
    ctx->pc = 0x26A7ACu;
    SET_GPR_U32(ctx, 31, 0x26A7B4u);
    ctx->pc = 0x26A7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A7ACu;
            // 0x26a7b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A7B4u; }
        if (ctx->pc != 0x26A7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A7B4u; }
        if (ctx->pc != 0x26A7B4u) { return; }
    }
    ctx->pc = 0x26A7B4u;
label_26a7b4:
    // 0x26a7b4: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x26A7B4u;
    {
        const bool branch_taken_0x26a7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A7B4u;
            // 0x26a7b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a7b4) {
            ctx->pc = 0x26A92Cu;
            goto label_26a92c;
        }
    }
    ctx->pc = 0x26A7BCu;
label_26a7bc:
    // 0x26a7bc: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x26a7bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x26a7c0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A7C0u;
    {
        const bool branch_taken_0x26a7c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A7C0u;
            // 0x26a7c4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a7c0) {
            ctx->pc = 0x26A7D0u;
            goto label_26a7d0;
        }
    }
    ctx->pc = 0x26A7C8u;
    // 0x26a7c8: 0x16020036  bne         $s0, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x26A7C8u;
    {
        const bool branch_taken_0x26a7c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x26A7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A7C8u;
            // 0x26a7cc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a7c8) {
            ctx->pc = 0x26A8A4u;
            goto label_26a8a4;
        }
    }
    ctx->pc = 0x26A7D0u;
label_26a7d0:
    // 0x26a7d0: 0xc064220  jal         func_190880
    ctx->pc = 0x26A7D0u;
    SET_GPR_U32(ctx, 31, 0x26A7D8u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A7D8u; }
        if (ctx->pc != 0x26A7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A7D8u; }
        if (ctx->pc != 0x26A7D8u) { return; }
    }
    ctx->pc = 0x26A7D8u;
label_26a7d8:
    // 0x26a7d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A7D8u;
    {
        const bool branch_taken_0x26a7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A7D8u;
            // 0x26a7dc: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a7d8) {
            ctx->pc = 0x26A7E8u;
            goto label_26a7e8;
        }
    }
    ctx->pc = 0x26A7E0u;
    // 0x26a7e0: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x26A7E0u;
    {
        const bool branch_taken_0x26a7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A7E0u;
            // 0x26a7e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a7e0) {
            ctx->pc = 0x26A92Cu;
            goto label_26a92c;
        }
    }
    ctx->pc = 0x26A7E8u;
label_26a7e8:
    // 0x26a7e8: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x26a7e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x26a7ec: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x26a7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x26a7f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A7F0u;
    {
        const bool branch_taken_0x26a7f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a7f0) {
            ctx->pc = 0x26A800u;
            goto label_26a800;
        }
    }
    ctx->pc = 0x26A7F8u;
    // 0x26a7f8: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x26A7F8u;
    {
        const bool branch_taken_0x26a7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A7F8u;
            // 0x26a7fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a7f8) {
            ctx->pc = 0x26A92Cu;
            goto label_26a92c;
        }
    }
    ctx->pc = 0x26A800u;
label_26a800:
    // 0x26a800: 0x24427f30  addiu       $v0, $v0, 0x7F30
    ctx->pc = 0x26a800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32560));
    // 0x26a804: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A804u;
    {
        const bool branch_taken_0x26a804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A804u;
            // 0x26a808: 0x24440ad8  addiu       $a0, $v0, 0xAD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a804) {
            ctx->pc = 0x26A814u;
            goto label_26a814;
        }
    }
    ctx->pc = 0x26A80Cu;
    // 0x26a80c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x26A80Cu;
    {
        const bool branch_taken_0x26a80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A80Cu;
            // 0x26a810: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a80c) {
            ctx->pc = 0x26A92Cu;
            goto label_26a92c;
        }
    }
    ctx->pc = 0x26A814u;
label_26a814:
    // 0x26a814: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A814u;
    {
        const bool branch_taken_0x26a814 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A814u;
            // 0x26a818: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a814) {
            ctx->pc = 0x26A824u;
            goto label_26a824;
        }
    }
    ctx->pc = 0x26A81Cu;
    // 0x26a81c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x26A81Cu;
    {
        const bool branch_taken_0x26a81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A81Cu;
            // 0x26a820: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a81c) {
            ctx->pc = 0x26A92Cu;
            goto label_26a92c;
        }
    }
    ctx->pc = 0x26A824u;
label_26a824:
    // 0x26a824: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26A824u;
    {
        const bool branch_taken_0x26a824 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x26A828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A824u;
            // 0x26a828: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a824) {
            ctx->pc = 0x26A848u;
            goto label_26a848;
        }
    }
    ctx->pc = 0x26A82Cu;
    // 0x26a82c: 0xc07fd4c  jal         func_1FF530
    ctx->pc = 0x26A82Cu;
    SET_GPR_U32(ctx, 31, 0x26A834u);
    ctx->pc = 0x1FF530u;
    if (runtime->hasFunction(0x1FF530u)) {
        auto targetFn = runtime->lookupFunction(0x1FF530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A834u; }
        if (ctx->pc != 0x26A834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KnowScoop__17CScoopDataManagerFv_0x1ff530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A834u; }
        if (ctx->pc != 0x26A834u) { return; }
    }
    ctx->pc = 0x26A834u;
label_26a834:
    // 0x26a834: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26a834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a838: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26A838u;
    SET_GPR_U32(ctx, 31, 0x26A840u);
    ctx->pc = 0x26A83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A838u;
            // 0x26a83c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A840u; }
        if (ctx->pc != 0x26A840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A840u; }
        if (ctx->pc != 0x26A840u) { return; }
    }
    ctx->pc = 0x26A840u;
label_26a840:
    // 0x26a840: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x26A840u;
    {
        const bool branch_taken_0x26a840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A840u;
            // 0x26a844: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a840) {
            ctx->pc = 0x26A92Cu;
            goto label_26a92c;
        }
    }
    ctx->pc = 0x26A848u;
label_26a848:
    // 0x26a848: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26A848u;
    {
        const bool branch_taken_0x26a848 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x26A84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A848u;
            // 0x26a84c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a848) {
            ctx->pc = 0x26A86Cu;
            goto label_26a86c;
        }
    }
    ctx->pc = 0x26A850u;
    // 0x26a850: 0xc07fd7c  jal         func_1FF5F0
    ctx->pc = 0x26A850u;
    SET_GPR_U32(ctx, 31, 0x26A858u);
    ctx->pc = 0x1FF5F0u;
    if (runtime->hasFunction(0x1FF5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1FF5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A858u; }
        if (ctx->pc != 0x26A858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckScoop__17CScoopDataManagerFv_0x1ff5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A858u; }
        if (ctx->pc != 0x26A858u) { return; }
    }
    ctx->pc = 0x26A858u;
label_26a858:
    // 0x26a858: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26a858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a85c: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26A85Cu;
    SET_GPR_U32(ctx, 31, 0x26A864u);
    ctx->pc = 0x26A860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A85Cu;
            // 0x26a860: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A864u; }
        if (ctx->pc != 0x26A864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A864u; }
        if (ctx->pc != 0x26A864u) { return; }
    }
    ctx->pc = 0x26A864u;
label_26a864:
    // 0x26a864: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x26A864u;
    {
        const bool branch_taken_0x26a864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A864u;
            // 0x26a868: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a864) {
            ctx->pc = 0x26A92Cu;
            goto label_26a92c;
        }
    }
    ctx->pc = 0x26A86Cu;
label_26a86c:
    // 0x26a86c: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26A86Cu;
    {
        const bool branch_taken_0x26a86c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x26A870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A86Cu;
            // 0x26a870: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a86c) {
            ctx->pc = 0x26A8A0u;
            goto label_26a8a0;
        }
    }
    ctx->pc = 0x26A874u;
    // 0x26a874: 0xc07fdc0  jal         func_1FF700
    ctx->pc = 0x26A874u;
    SET_GPR_U32(ctx, 31, 0x26A87Cu);
    ctx->pc = 0x1FF700u;
    if (runtime->hasFunction(0x1FF700u)) {
        auto targetFn = runtime->lookupFunction(0x1FF700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A87Cu; }
        if (ctx->pc != 0x26A87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScoopTotal__17CScoopDataManagerFPi_0x1ff700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A87Cu; }
        if (ctx->pc != 0x26A87Cu) { return; }
    }
    ctx->pc = 0x26A87Cu;
label_26a87c:
    // 0x26a87c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26a87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a880: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26a880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a884: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26A884u;
    SET_GPR_U32(ctx, 31, 0x26A88Cu);
    ctx->pc = 0x26A888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A884u;
            // 0x26a888: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A88Cu; }
        if (ctx->pc != 0x26A88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A88Cu; }
        if (ctx->pc != 0x26A88Cu) { return; }
    }
    ctx->pc = 0x26A88Cu;
label_26a88c:
    // 0x26a88c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x26a88cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26a890: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26A890u;
    SET_GPR_U32(ctx, 31, 0x26A898u);
    ctx->pc = 0x26A894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A890u;
            // 0x26a894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A898u; }
        if (ctx->pc != 0x26A898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A898u; }
        if (ctx->pc != 0x26A898u) { return; }
    }
    ctx->pc = 0x26A898u;
label_26a898:
    // 0x26a898: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x26A898u;
    {
        const bool branch_taken_0x26a898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A898u;
            // 0x26a89c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a898) {
            ctx->pc = 0x26A92Cu;
            goto label_26a92c;
        }
    }
    ctx->pc = 0x26A8A0u;
label_26a8a0:
    // 0x26a8a0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x26a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_26a8a4:
    // 0x26a8a4: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x26A8A4u;
    {
        const bool branch_taken_0x26a8a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x26A8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A8A4u;
            // 0x26a8a8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a8a4) {
            ctx->pc = 0x26A8DCu;
            goto label_26a8dc;
        }
    }
    ctx->pc = 0x26A8ACu;
    // 0x26a8ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26a8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a8b0: 0xc0a44bc  jal         func_2912F0
    ctx->pc = 0x26A8B0u;
    SET_GPR_U32(ctx, 31, 0x26A8B8u);
    ctx->pc = 0x26A8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A8B0u;
            // 0x26a8b4: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2912F0u;
    if (runtime->hasFunction(0x2912F0u)) {
        auto targetFn = runtime->lookupFunction(0x2912F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A8B8u; }
        if (ctx->pc != 0x26A8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDonyShopLineUp__FPiPi_0x2912f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A8B8u; }
        if (ctx->pc != 0x26A8B8u) { return; }
    }
    ctx->pc = 0x26A8B8u;
label_26a8b8:
    // 0x26a8b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26a8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a8bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26a8bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a8c0: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26A8C0u;
    SET_GPR_U32(ctx, 31, 0x26A8C8u);
    ctx->pc = 0x26A8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A8C0u;
            // 0x26a8c4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A8C8u; }
        if (ctx->pc != 0x26A8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A8C8u; }
        if (ctx->pc != 0x26A8C8u) { return; }
    }
    ctx->pc = 0x26A8C8u;
label_26a8c8:
    // 0x26a8c8: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x26a8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x26a8cc: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26A8CCu;
    SET_GPR_U32(ctx, 31, 0x26A8D4u);
    ctx->pc = 0x26A8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A8CCu;
            // 0x26a8d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A8D4u; }
        if (ctx->pc != 0x26A8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A8D4u; }
        if (ctx->pc != 0x26A8D4u) { return; }
    }
    ctx->pc = 0x26A8D4u;
label_26a8d4:
    // 0x26a8d4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x26A8D4u;
    {
        const bool branch_taken_0x26a8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A8D4u;
            // 0x26a8d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a8d4) {
            ctx->pc = 0x26A92Cu;
            goto label_26a92c;
        }
    }
    ctx->pc = 0x26A8DCu;
label_26a8dc:
    // 0x26a8dc: 0x1602000b  bne         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26A8DCu;
    {
        const bool branch_taken_0x26a8dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x26A8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A8DCu;
            // 0x26a8e0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a8dc) {
            ctx->pc = 0x26A90Cu;
            goto label_26a90c;
        }
    }
    ctx->pc = 0x26A8E4u;
    // 0x26a8e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26a8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a8e8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26A8E8u;
    SET_GPR_U32(ctx, 31, 0x26A8F0u);
    ctx->pc = 0x26A8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A8E8u;
            // 0x26a8ec: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A8F0u; }
        if (ctx->pc != 0x26A8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A8F0u; }
        if (ctx->pc != 0x26A8F0u) { return; }
    }
    ctx->pc = 0x26A8F0u;
label_26a8f0:
    // 0x26a8f0: 0xc07d580  jal         func_1F5600
    ctx->pc = 0x26A8F0u;
    SET_GPR_U32(ctx, 31, 0x26A8F8u);
    ctx->pc = 0x26A8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A8F0u;
            // 0x26a8f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5600u;
    if (runtime->hasFunction(0x1F5600u)) {
        auto targetFn = runtime->lookupFunction(0x1F5600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A8F8u; }
        if (ctx->pc != 0x26A8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepDownLoadAnaunce__Fi_0x1f5600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A8F8u; }
        if (ctx->pc != 0x26A8F8u) { return; }
    }
    ctx->pc = 0x26A8F8u;
label_26a8f8:
    // 0x26a8f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26a8f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a8fc: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26A8FCu;
    SET_GPR_U32(ctx, 31, 0x26A904u);
    ctx->pc = 0x26A900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A8FCu;
            // 0x26a900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A904u; }
        if (ctx->pc != 0x26A904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A904u; }
        if (ctx->pc != 0x26A904u) { return; }
    }
    ctx->pc = 0x26A904u;
label_26a904:
    // 0x26a904: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26A904u;
    {
        const bool branch_taken_0x26a904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A904u;
            // 0x26a908: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a904) {
            ctx->pc = 0x26A92Cu;
            goto label_26a92c;
        }
    }
    ctx->pc = 0x26A90Cu;
label_26a90c:
    // 0x26a90c: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26A90Cu;
    {
        const bool branch_taken_0x26a90c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x26A910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A90Cu;
            // 0x26a910: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a90c) {
            ctx->pc = 0x26A92Cu;
            goto label_26a92c;
        }
    }
    ctx->pc = 0x26A914u;
    // 0x26a914: 0xc07da9c  jal         func_1F6A70
    ctx->pc = 0x26A914u;
    SET_GPR_U32(ctx, 31, 0x26A91Cu);
    ctx->pc = 0x1F6A70u;
    if (runtime->hasFunction(0x1F6A70u)) {
        auto targetFn = runtime->lookupFunction(0x1F6A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A91Cu; }
        if (ctx->pc != 0x26A91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMenuDl3__Fv_0x1f6a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A91Cu; }
        if (ctx->pc != 0x26A91Cu) { return; }
    }
    ctx->pc = 0x26A91Cu;
label_26a91c:
    // 0x26a91c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26a91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a920: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26A920u;
    SET_GPR_U32(ctx, 31, 0x26A928u);
    ctx->pc = 0x26A924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A920u;
            // 0x26a924: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A928u; }
        if (ctx->pc != 0x26A928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A928u; }
        if (ctx->pc != 0x26A928u) { return; }
    }
    ctx->pc = 0x26A928u;
label_26a928:
    // 0x26a928: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26a928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26a92c:
    // 0x26a92c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26a92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26a930: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26a930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a934: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26a934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a938: 0x3e00008  jr          $ra
    ctx->pc = 0x26A938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A938u;
            // 0x26a93c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26A940u;
}
