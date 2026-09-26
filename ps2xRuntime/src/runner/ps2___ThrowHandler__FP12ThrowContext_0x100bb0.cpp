#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ThrowHandler__FP12ThrowContext
// Address: 0x100bb0 - 0x100d40
void ps2___ThrowHandler__FP12ThrowContext_0x100bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ThrowHandler__FP12ThrowContext_0x100bb0");
#endif

    switch (ctx->pc) {
        case 0x100bd8u: goto label_100bd8;
        case 0x100becu: goto label_100bec;
        case 0x100bf8u: goto label_100bf8;
        case 0x100c0cu: goto label_100c0c;
        case 0x100c28u: goto label_100c28;
        case 0x100c84u: goto label_100c84;
        case 0x100c94u: goto label_100c94;
        case 0x100ca4u: goto label_100ca4;
        case 0x100d24u: goto label_100d24;
        default: break;
    }

    ctx->pc = 0x100bb0u;

    // 0x100bb0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x100bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x100bb4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x100bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x100bb8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x100bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x100bbc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x100bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x100bc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x100bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x100bc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x100bc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100bc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x100bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x100bcc: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x100bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x100bd0: 0xc0407f0  jal         func_101FC0
    ctx->pc = 0x100BD0u;
    SET_GPR_U32(ctx, 31, 0x100BD8u);
    ctx->pc = 0x100BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100BD0u;
            // 0x100bd4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FC0u;
    if (runtime->hasFunction(0x101FC0u)) {
        auto targetFn = runtime->lookupFunction(0x101FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100BD8u; }
        if (ctx->pc != 0x100BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FindExceptionRecord__FPcP13ExceptionInfo_0x101fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100BD8u; }
        if (ctx->pc != 0x100BD8u) { return; }
    }
    ctx->pc = 0x100BD8u;
label_100bd8:
    // 0x100bd8: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x100bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x100bdc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x100BDCu;
    {
        const bool branch_taken_0x100bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100BDCu;
            // 0x100be0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100bdc) {
            ctx->pc = 0x100BF0u;
            goto label_100bf0;
        }
    }
    ctx->pc = 0x100BE4u;
    // 0x100be4: 0xc040248  jal         func_100920
    ctx->pc = 0x100BE4u;
    SET_GPR_U32(ctx, 31, 0x100BECu);
    ctx->pc = 0x100920u;
    if (runtime->hasFunction(0x100920u)) {
        auto targetFn = runtime->lookupFunction(0x100920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100BECu; }
        if (ctx->pc != 0x100BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        terminate__3stdFv_0x100920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100BECu; }
        if (ctx->pc != 0x100BECu) { return; }
    }
    ctx->pc = 0x100BECu;
label_100bec:
    // 0x100bec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x100becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_100bf0:
    // 0x100bf0: 0xc0408bc  jal         func_1022F0
    ctx->pc = 0x100BF0u;
    SET_GPR_U32(ctx, 31, 0x100BF8u);
    ctx->pc = 0x100BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100BF0u;
            // 0x100bf4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1022F0u;
    if (runtime->hasFunction(0x1022F0u)) {
        auto targetFn = runtime->lookupFunction(0x1022F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100BF8u; }
        if (ctx->pc != 0x100BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___SetupFrameInfo__FP12ThrowContextP13ExceptionInfo_0x1022f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100BF8u; }
        if (ctx->pc != 0x100BF8u) { return; }
    }
    ctx->pc = 0x100BF8u;
label_100bf8:
    // 0x100bf8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x100bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x100bfc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x100BFCu;
    {
        const bool branch_taken_0x100bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100BFCu;
            // 0x100c00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100bfc) {
            ctx->pc = 0x100C14u;
            goto label_100c14;
        }
    }
    ctx->pc = 0x100C04u;
    // 0x100c04: 0xc0404ac  jal         func_1012B0
    ctx->pc = 0x100C04u;
    SET_GPR_U32(ctx, 31, 0x100C0Cu);
    ctx->pc = 0x100C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100C04u;
            // 0x100c08: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1012B0u;
    if (runtime->hasFunction(0x1012B0u)) {
        auto targetFn = runtime->lookupFunction(0x1012B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100C0Cu; }
        if (ctx->pc != 0x100C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FindMostRecentException__FP12ThrowContextP13ExceptionInfo_0x1012b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100C0Cu; }
        if (ctx->pc != 0x100C0Cu) { return; }
    }
    ctx->pc = 0x100C0Cu;
label_100c0c:
    // 0x100c0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x100C0Cu;
    {
        const bool branch_taken_0x100c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100C0Cu;
            // 0x100c10: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100c0c) {
            ctx->pc = 0x100C18u;
            goto label_100c18;
        }
    }
    ctx->pc = 0x100C14u;
label_100c14:
    // 0x100c14: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x100c14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_100c18:
    // 0x100c18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x100c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100c1c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x100c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x100c20: 0xc040350  jal         func_100D40
    ctx->pc = 0x100C20u;
    SET_GPR_U32(ctx, 31, 0x100C28u);
    ctx->pc = 0x100C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100C20u;
            // 0x100c24: 0x27a60078  addiu       $a2, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100D40u;
    if (runtime->hasFunction(0x100D40u)) {
        auto targetFn = runtime->lookupFunction(0x100D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100C28u; }
        if (ctx->pc != 0x100C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FindExceptionHandler__FP12ThrowContextP13ExceptionInfoPl_0x100d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100C28u; }
        if (ctx->pc != 0x100C28u) { return; }
    }
    ctx->pc = 0x100C28u;
label_100c28:
    // 0x100c28: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x100c28u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x100c2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x100c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100c30: 0x90450003  lbu         $a1, 0x3($v0)
    ctx->pc = 0x100c30u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x100c34: 0x27a30068  addiu       $v1, $sp, 0x68
    ctx->pc = 0x100c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x100c38: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x100c38u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x100c3c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x100c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x100c40: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x100c40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x100c44: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x100c44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x100c48: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x100c48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x100c4c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x100c4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x100c50: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x100c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x100c54: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x100c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x100c58: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x100c58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x100c5c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x100c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x100c60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100C60u;
    {
        const bool branch_taken_0x100c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100C60u;
            // 0x100c64: 0x26040005  addiu       $a0, $s0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100c60) {
            ctx->pc = 0x100C70u;
            goto label_100c70;
        }
    }
    ctx->pc = 0x100C68u;
    // 0x100c68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x100C68u;
    {
        const bool branch_taken_0x100c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100C68u;
            // 0x100c6c: 0x27b1006c  addiu       $s1, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100c68) {
            ctx->pc = 0x100C78u;
            goto label_100c78;
        }
    }
    ctx->pc = 0x100C70u;
label_100c70:
    // 0x100c70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x100c70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100c74: 0x27b1006c  addiu       $s1, $sp, 0x6C
    ctx->pc = 0x100c74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_100c78:
    // 0x100c78: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x100c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x100c7c: 0xc04028c  jal         func_100A30
    ctx->pc = 0x100C7Cu;
    SET_GPR_U32(ctx, 31, 0x100C84u);
    ctx->pc = 0x100C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100C7Cu;
            // 0x100c80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A30u;
    if (runtime->hasFunction(0x100A30u)) {
        auto targetFn = runtime->lookupFunction(0x100A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100C84u; }
        if (ctx->pc != 0x100C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeUnsignedNumber__FPcPUi_0x100a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100C84u; }
        if (ctx->pc != 0x100C84u) { return; }
    }
    ctx->pc = 0x100C84u;
label_100c84:
    // 0x100c84: 0x27b30070  addiu       $s3, $sp, 0x70
    ctx->pc = 0x100c84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x100c88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x100c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100c8c: 0xc0402b4  jal         func_100AD0
    ctx->pc = 0x100C8Cu;
    SET_GPR_U32(ctx, 31, 0x100C94u);
    ctx->pc = 0x100C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100C8Cu;
            // 0x100c90: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100C94u; }
        if (ctx->pc != 0x100C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100C94u; }
        if (ctx->pc != 0x100C94u) { return; }
    }
    ctx->pc = 0x100C94u;
label_100c94:
    // 0x100c94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x100c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100c98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x100c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100c9c: 0xc04050c  jal         func_101430
    ctx->pc = 0x100C9Cu;
    SET_GPR_U32(ctx, 31, 0x100CA4u);
    ctx->pc = 0x100CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100C9Cu;
            // 0x100ca0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101430u;
    if (runtime->hasFunction(0x101430u)) {
        auto targetFn = runtime->lookupFunction(0x101430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100CA4u; }
        if (ctx->pc != 0x100CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnwindStack__FP12ThrowContextP13ExceptionInfoPc_0x101430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100CA4u; }
        if (ctx->pc != 0x100CA4u) { return; }
    }
    ctx->pc = 0x100CA4u;
label_100ca4:
    // 0x100ca4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x100ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x100ca8: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x100ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x100cac: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x100cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x100cb0: 0xdfa60078  ld          $a2, 0x78($sp)
    ctx->pc = 0x100cb0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x100cb4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x100cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x100cb8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x100cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x100cbc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x100cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x100cc0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x100cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x100cc4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x100cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x100cc8: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x100cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x100ccc: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x100cccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x100cd0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x100cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x100cd4: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x100cd4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x100cd8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x100CD8u;
    {
        const bool branch_taken_0x100cd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x100CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100CD8u;
            // 0x100cdc: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100cd8) {
            ctx->pc = 0x100CF8u;
            goto label_100cf8;
        }
    }
    ctx->pc = 0x100CE0u;
    // 0x100ce0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x100ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x100ce4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x100ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x100ce8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x100ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100cec: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x100cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x100cf0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x100CF0u;
    {
        const bool branch_taken_0x100cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100CF0u;
            // 0x100cf4: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100cf0) {
            ctx->pc = 0x100D0Cu;
            goto label_100d0c;
        }
    }
    ctx->pc = 0x100CF8u;
label_100cf8:
    // 0x100cf8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x100cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x100cfc: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x100cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x100d00: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x100d00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x100d04: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x100d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x100d08: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x100d08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_100d0c:
    // 0x100d0c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x100d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x100d10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x100d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100d14: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x100d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x100d18: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x100d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x100d1c: 0xc040864  jal         func_102190
    ctx->pc = 0x100D1Cu;
    SET_GPR_U32(ctx, 31, 0x100D24u);
    ctx->pc = 0x100D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100D1Cu;
            // 0x100d20: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102190u;
    if (runtime->hasFunction(0x102190u)) {
        auto targetFn = runtime->lookupFunction(0x102190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100D24u; }
        if (ctx->pc != 0x100D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___TransferControl__FP12ThrowContextP13ExceptionInfoPc_0x102190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100D24u; }
        if (ctx->pc != 0x100D24u) { return; }
    }
    ctx->pc = 0x100D24u;
label_100d24:
    // 0x100d24: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x100d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x100d28: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x100d28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x100d2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x100d2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100d30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x100d30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100d34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x100d34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100d38: 0x3e00008  jr          $ra
    ctx->pc = 0x100D38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100D38u;
            // 0x100d3c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x100D40u;
}
