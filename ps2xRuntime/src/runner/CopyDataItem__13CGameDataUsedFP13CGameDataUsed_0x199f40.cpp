#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CopyDataItem__13CGameDataUsedFP13CGameDataUsed
// Address: 0x199f40 - 0x19a034
void CopyDataItem__13CGameDataUsedFP13CGameDataUsed_0x199f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CopyDataItem__13CGameDataUsedFP13CGameDataUsed_0x199f40");
#endif

    switch (ctx->pc) {
        case 0x199f90u: goto label_199f90;
        case 0x199fa0u: goto label_199fa0;
        case 0x199facu: goto label_199fac;
        case 0x199fb8u: goto label_199fb8;
        case 0x199fe4u: goto label_199fe4;
        case 0x199ff4u: goto label_199ff4;
        case 0x199ffcu: goto label_199ffc;
        case 0x19a014u: goto label_19a014;
        default: break;
    }

    ctx->pc = 0x199f40u;

    // 0x199f40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x199f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x199f44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x199f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x199f48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x199f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x199f4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x199f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x199f50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x199f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x199f54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x199f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x199f58: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x199f58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199f5c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199F5Cu;
    {
        const bool branch_taken_0x199f5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x199F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199F5Cu;
            // 0x199f60: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f5c) {
            ctx->pc = 0x199F6Cu;
            goto label_199f6c;
        }
    }
    ctx->pc = 0x199F64u;
    // 0x199f64: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x199F64u;
    {
        const bool branch_taken_0x199f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199F64u;
            // 0x199f68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f64) {
            ctx->pc = 0x19A018u;
            goto label_19a018;
        }
    }
    ctx->pc = 0x199F6Cu;
label_199f6c:
    // 0x199f6c: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x199f6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x199f70: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x199f70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x199f74: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x199F74u;
    {
        const bool branch_taken_0x199f74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x199f74) {
            ctx->pc = 0x19A004u;
            goto label_19a004;
        }
    }
    ctx->pc = 0x199F7Cu;
    // 0x199f7c: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x199f7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x199f80: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x199F80u;
    {
        const bool branch_taken_0x199f80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x199f80) {
            ctx->pc = 0x19A004u;
            goto label_19a004;
        }
    }
    ctx->pc = 0x199F88u;
    // 0x199f88: 0xc065c34  jal         func_1970D0
    ctx->pc = 0x199F88u;
    SET_GPR_U32(ctx, 31, 0x199F90u);
    ctx->pc = 0x1970D0u;
    if (runtime->hasFunction(0x1970D0u)) {
        auto targetFn = runtime->lookupFunction(0x1970D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199F90u; }
        if (ctx->pc != 0x199F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckTypeEnableStack__13CGameDataUsedFv_0x1970d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199F90u; }
        if (ctx->pc != 0x199F90u) { return; }
    }
    ctx->pc = 0x199F90u;
label_199f90:
    // 0x199f90: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x199F90u;
    {
        const bool branch_taken_0x199f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199F90u;
            // 0x199f94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f90) {
            ctx->pc = 0x19A008u;
            goto label_19a008;
        }
    }
    ctx->pc = 0x199F98u;
    // 0x199f98: 0xc065708  jal         func_195C20
    ctx->pc = 0x199F98u;
    SET_GPR_U32(ctx, 31, 0x199FA0u);
    ctx->pc = 0x199F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199F98u;
            // 0x199f9c: 0x86240002  lh          $a0, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C20u;
    if (runtime->hasFunction(0x195C20u)) {
        auto targetFn = runtime->lookupFunction(0x195C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199FA0u; }
        if (ctx->pc != 0x199FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonItemData__Fi_0x195c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199FA0u; }
        if (ctx->pc != 0x199FA0u) { return; }
    }
    ctx->pc = 0x199FA0u;
label_199fa0:
    // 0x199fa0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x199fa0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199fa4: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x199FA4u;
    SET_GPR_U32(ctx, 31, 0x199FACu);
    ctx->pc = 0x199FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199FA4u;
            // 0x199fa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199FACu; }
        if (ctx->pc != 0x199FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199FACu; }
        if (ctx->pc != 0x199FACu) { return; }
    }
    ctx->pc = 0x199FACu;
label_199fac:
    // 0x199fac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x199facu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199fb0: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x199FB0u;
    SET_GPR_U32(ctx, 31, 0x199FB8u);
    ctx->pc = 0x199FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199FB0u;
            // 0x199fb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199FB8u; }
        if (ctx->pc != 0x199FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199FB8u; }
        if (ctx->pc != 0x199FB8u) { return; }
    }
    ctx->pc = 0x199FB8u;
label_199fb8:
    // 0x199fb8: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x199fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x199fbc: 0x8662001e  lh          $v0, 0x1E($s3)
    ctx->pc = 0x199fbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 30)));
    // 0x199fc0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x199fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x199fc4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x199fc4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x199fc8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x199fc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x199fcc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x199FCCu;
    {
        const bool branch_taken_0x199fcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x199FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199FCCu;
            // 0x199fd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199fcc) {
            ctx->pc = 0x199FDCu;
            goto label_199fdc;
        }
    }
    ctx->pc = 0x199FD4u;
    // 0x199fd4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x199FD4u;
    {
        const bool branch_taken_0x199fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199FD4u;
            // 0x199fd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199fd4) {
            ctx->pc = 0x19A018u;
            goto label_19a018;
        }
    }
    ctx->pc = 0x199FDCu;
label_199fdc:
    // 0x199fdc: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x199FDCu;
    SET_GPR_U32(ctx, 31, 0x199FE4u);
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199FE4u; }
        if (ctx->pc != 0x199FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199FE4u; }
        if (ctx->pc != 0x199FE4u) { return; }
    }
    ctx->pc = 0x199FE4u;
label_199fe4:
    // 0x199fe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x199fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199fe8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x199fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199fec: 0xc065cdc  jal         func_197370
    ctx->pc = 0x199FECu;
    SET_GPR_U32(ctx, 31, 0x199FF4u);
    ctx->pc = 0x199FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199FECu;
            // 0x199ff0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197370u;
    if (runtime->hasFunction(0x197370u)) {
        auto targetFn = runtime->lookupFunction(0x197370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199FF4u; }
        if (ctx->pc != 0x199FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddNum__13CGameDataUsedFii_0x197370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199FF4u; }
        if (ctx->pc != 0x199FF4u) { return; }
    }
    ctx->pc = 0x199FF4u;
label_199ff4:
    // 0x199ff4: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x199FF4u;
    SET_GPR_U32(ctx, 31, 0x199FFCu);
    ctx->pc = 0x199FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199FF4u;
            // 0x199ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199FFCu; }
        if (ctx->pc != 0x199FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199FFCu; }
        if (ctx->pc != 0x199FFCu) { return; }
    }
    ctx->pc = 0x199FFCu;
label_199ffc:
    // 0x199ffc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x199FFCu;
    {
        const bool branch_taken_0x199ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199FFCu;
            // 0x19a000: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ffc) {
            ctx->pc = 0x19A018u;
            goto label_19a018;
        }
    }
    ctx->pc = 0x19A004u;
label_19a004:
    // 0x19a004: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19a004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19a008:
    // 0x19a008: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19a008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a00c: 0xc065ba0  jal         func_196E80
    ctx->pc = 0x19A00Cu;
    SET_GPR_U32(ctx, 31, 0x19A014u);
    ctx->pc = 0x19A010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A00Cu;
            // 0x19a010: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196E80u;
    if (runtime->hasFunction(0x196E80u)) {
        auto targetFn = runtime->lookupFunction(0x196E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A014u; }
        if (ctx->pc != 0x19A014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GameDataSwap__FP13CGameDataUsedP13CGameDataUsedi_0x196e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A014u; }
        if (ctx->pc != 0x19A014u) { return; }
    }
    ctx->pc = 0x19A014u;
label_19a014:
    // 0x19a014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19a014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19a018:
    // 0x19a018: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19a018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a01c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19a01cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a020: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19a020u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a024: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19a024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a028: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19a028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a02c: 0x3e00008  jr          $ra
    ctx->pc = 0x19A02Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A02Cu;
            // 0x19a030: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A034u;
}
