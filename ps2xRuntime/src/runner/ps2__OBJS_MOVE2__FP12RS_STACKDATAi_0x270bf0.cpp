#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_MOVE2__FP12RS_STACKDATAi
// Address: 0x270bf0 - 0x270da0
void ps2__OBJS_MOVE2__FP12RS_STACKDATAi_0x270bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_MOVE2__FP12RS_STACKDATAi_0x270bf0");
#endif

    switch (ctx->pc) {
        case 0x270c2cu: goto label_270c2c;
        case 0x270c50u: goto label_270c50;
        case 0x270cb8u: goto label_270cb8;
        case 0x270cc8u: goto label_270cc8;
        case 0x270cd8u: goto label_270cd8;
        case 0x270ce8u: goto label_270ce8;
        case 0x270cf4u: goto label_270cf4;
        case 0x270d04u: goto label_270d04;
        case 0x270d14u: goto label_270d14;
        case 0x270d24u: goto label_270d24;
        case 0x270d34u: goto label_270d34;
        case 0x270d40u: goto label_270d40;
        case 0x270d5cu: goto label_270d5c;
        case 0x270d80u: goto label_270d80;
        default: break;
    }

    ctx->pc = 0x270bf0u;

    // 0x270bf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x270bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x270bf4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x270bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x270bf8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x270bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x270bfc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x270bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x270c00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x270c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x270c04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x270c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x270c08: 0x10a2003c  beq         $a1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x270C08u;
    {
        const bool branch_taken_0x270c08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x270C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270C08u;
            // 0x270c0c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c08) {
            ctx->pc = 0x270CFCu;
            goto label_270cfc;
        }
    }
    ctx->pc = 0x270C10u;
    // 0x270c10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270c14: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x270C14u;
    {
        const bool branch_taken_0x270c14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x270c14) {
            ctx->pc = 0x270C24u;
            goto label_270c24;
        }
    }
    ctx->pc = 0x270C1Cu;
    // 0x270c1c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x270C1Cu;
    {
        const bool branch_taken_0x270c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270C1Cu;
            // 0x270c20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c1c) {
            ctx->pc = 0x270D48u;
            goto label_270d48;
        }
    }
    ctx->pc = 0x270C24u;
label_270c24:
    // 0x270c24: 0xc097e18  jal         func_25F860
    ctx->pc = 0x270C24u;
    SET_GPR_U32(ctx, 31, 0x270C2Cu);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270C2Cu; }
        if (ctx->pc != 0x270C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270C2Cu; }
        if (ctx->pc != 0x270C2Cu) { return; }
    }
    ctx->pc = 0x270C2Cu;
label_270c2c:
    // 0x270c2c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x270c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x270c30: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x270c30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
    // 0x270c34: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x270C34u;
    {
        const bool branch_taken_0x270c34 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x270C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270C34u;
            // 0x270c38: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c34) {
            ctx->pc = 0x270C44u;
            goto label_270c44;
        }
    }
    ctx->pc = 0x270C3Cu;
    // 0x270c3c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x270C3Cu;
    {
        const bool branch_taken_0x270c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270C3Cu;
            // 0x270c40: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c3c) {
            ctx->pc = 0x270CA0u;
            goto label_270ca0;
        }
    }
    ctx->pc = 0x270C44u;
label_270c44:
    // 0x270c44: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x270c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
    // 0x270c48: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x270C48u;
    {
        const bool branch_taken_0x270c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270C48u;
            // 0x270c4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c48) {
            ctx->pc = 0x270C78u;
            goto label_270c78;
        }
    }
    ctx->pc = 0x270C50u;
label_270c50:
    // 0x270c50: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x270c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x270c54: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x270C54u;
    {
        const bool branch_taken_0x270c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x270c54) {
            ctx->pc = 0x270C84u;
            goto label_270c84;
        }
    }
    ctx->pc = 0x270C5Cu;
    // 0x270c5c: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x270c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x270c60: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x270C60u;
    {
        const bool branch_taken_0x270c60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x270c60) {
            ctx->pc = 0x270C70u;
            goto label_270c70;
        }
    }
    ctx->pc = 0x270C68u;
    // 0x270c68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x270C68u;
    {
        const bool branch_taken_0x270c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270C68u;
            // 0x270c6c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c68) {
            ctx->pc = 0x270C78u;
            goto label_270c78;
        }
    }
    ctx->pc = 0x270C70u;
label_270c70:
    // 0x270c70: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x270C70u;
    {
        const bool branch_taken_0x270c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270C70u;
            // 0x270c74: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c70) {
            ctx->pc = 0x270CA0u;
            goto label_270ca0;
        }
    }
    ctx->pc = 0x270C78u;
label_270c78:
    // 0x270c78: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x270c78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x270c7c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x270C7Cu;
    {
        const bool branch_taken_0x270c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x270c7c) {
            ctx->pc = 0x270C50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_270c50;
        }
    }
    ctx->pc = 0x270C84u;
label_270c84:
    // 0x270c84: 0x0  nop
    ctx->pc = 0x270c84u;
    // NOP
    // 0x270c88: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x270C88u;
    {
        const bool branch_taken_0x270c88 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x270C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270C88u;
            // 0x270c8c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c88) {
            ctx->pc = 0x270C98u;
            goto label_270c98;
        }
    }
    ctx->pc = 0x270C90u;
    // 0x270c90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x270C90u;
    {
        const bool branch_taken_0x270c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270c90) {
            ctx->pc = 0x270CA0u;
            goto label_270ca0;
        }
    }
    ctx->pc = 0x270C98u;
label_270c98:
    // 0x270c98: 0x8cd30004  lw          $s3, 0x4($a2)
    ctx->pc = 0x270c98u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x270c9c: 0x0  nop
    ctx->pc = 0x270c9cu;
    // NOP
label_270ca0:
    // 0x270ca0: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x270CA0u;
    {
        const bool branch_taken_0x270ca0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x270CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270CA0u;
            // 0x270ca4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ca0) {
            ctx->pc = 0x270CB0u;
            goto label_270cb0;
        }
    }
    ctx->pc = 0x270CA8u;
    // 0x270ca8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x270CA8u;
    {
        const bool branch_taken_0x270ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270CA8u;
            // 0x270cac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ca8) {
            ctx->pc = 0x270D84u;
            goto label_270d84;
        }
    }
    ctx->pc = 0x270CB0u;
label_270cb0:
    // 0x270cb0: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x270CB0u;
    SET_GPR_U32(ctx, 31, 0x270CB8u);
    ctx->pc = 0x270CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270CB0u;
            // 0x270cb4: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270CB8u; }
        if (ctx->pc != 0x270CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270CB8u; }
        if (ctx->pc != 0x270CB8u) { return; }
    }
    ctx->pc = 0x270CB8u;
label_270cb8:
    // 0x270cb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x270cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270cbc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x270cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x270cc0: 0xc097fa8  jal         func_25FEA0
    ctx->pc = 0x270CC0u;
    SET_GPR_U32(ctx, 31, 0x270CC8u);
    ctx->pc = 0x270CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270CC0u;
            // 0x270cc4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FEA0u;
    if (runtime->hasFunction(0x25FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x25FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270CC8u; }
        if (ctx->pc != 0x270CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgVector__FPfP8ARG_DATA_0x25fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270CC8u; }
        if (ctx->pc != 0x270CC8u) { return; }
    }
    ctx->pc = 0x270CC8u;
label_270cc8:
    // 0x270cc8: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x270cc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x270ccc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x270cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270cd0: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x270CD0u;
    SET_GPR_U32(ctx, 31, 0x270CD8u);
    ctx->pc = 0x270CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270CD0u;
            // 0x270cd4: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270CD8u; }
        if (ctx->pc != 0x270CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270CD8u; }
        if (ctx->pc != 0x270CD8u) { return; }
    }
    ctx->pc = 0x270CD8u;
label_270cd8:
    // 0x270cd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x270cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270cdc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x270cdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270ce0: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x270CE0u;
    SET_GPR_U32(ctx, 31, 0x270CE8u);
    ctx->pc = 0x270CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270CE0u;
            // 0x270ce4: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270CE8u; }
        if (ctx->pc != 0x270CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270CE8u; }
        if (ctx->pc != 0x270CE8u) { return; }
    }
    ctx->pc = 0x270CE8u;
label_270ce8:
    // 0x270ce8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x270ce8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270cec: 0xc097f84  jal         func_25FE10
    ctx->pc = 0x270CECu;
    SET_GPR_U32(ctx, 31, 0x270CF4u);
    ctx->pc = 0x270CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270CECu;
            // 0x270cf0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE10u;
    if (runtime->hasFunction(0x25FE10u)) {
        auto targetFn = runtime->lookupFunction(0x25FE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270CF4u; }
        if (ctx->pc != 0x270CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgFloat__FP8ARG_DATA_0x25fe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270CF4u; }
        if (ctx->pc != 0x270CF4u) { return; }
    }
    ctx->pc = 0x270CF4u;
label_270cf4:
    // 0x270cf4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x270CF4u;
    {
        const bool branch_taken_0x270cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270CF4u;
            // 0x270cf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270cf4) {
            ctx->pc = 0x270D54u;
            goto label_270d54;
        }
    }
    ctx->pc = 0x270CFCu;
label_270cfc:
    // 0x270cfc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x270CFCu;
    SET_GPR_U32(ctx, 31, 0x270D04u);
    ctx->pc = 0x270D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270CFCu;
            // 0x270d00: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270D04u; }
        if (ctx->pc != 0x270D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270D04u; }
        if (ctx->pc != 0x270D04u) { return; }
    }
    ctx->pc = 0x270D04u;
label_270d04:
    // 0x270d04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x270d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d08: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x270d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x270d0c: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x270D0Cu;
    SET_GPR_U32(ctx, 31, 0x270D14u);
    ctx->pc = 0x270D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270D0Cu;
            // 0x270d10: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270D14u; }
        if (ctx->pc != 0x270D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270D14u; }
        if (ctx->pc != 0x270D14u) { return; }
    }
    ctx->pc = 0x270D14u;
label_270d14:
    // 0x270d14: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x270d14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x270d18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x270d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d1c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x270D1Cu;
    SET_GPR_U32(ctx, 31, 0x270D24u);
    ctx->pc = 0x270D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270D1Cu;
            // 0x270d20: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270D24u; }
        if (ctx->pc != 0x270D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270D24u; }
        if (ctx->pc != 0x270D24u) { return; }
    }
    ctx->pc = 0x270D24u;
label_270d24:
    // 0x270d24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x270d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x270d28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d2c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x270D2Cu;
    SET_GPR_U32(ctx, 31, 0x270D34u);
    ctx->pc = 0x270D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270D2Cu;
            // 0x270d30: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270D34u; }
        if (ctx->pc != 0x270D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270D34u; }
        if (ctx->pc != 0x270D34u) { return; }
    }
    ctx->pc = 0x270D34u;
label_270d34:
    // 0x270d34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x270d34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d38: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x270D38u;
    SET_GPR_U32(ctx, 31, 0x270D40u);
    ctx->pc = 0x270D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270D38u;
            // 0x270d3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270D40u; }
        if (ctx->pc != 0x270D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270D40u; }
        if (ctx->pc != 0x270D40u) { return; }
    }
    ctx->pc = 0x270D40u;
label_270d40:
    // 0x270d40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x270D40u;
    {
        const bool branch_taken_0x270d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270d40) {
            ctx->pc = 0x270D50u;
            goto label_270d50;
        }
    }
    ctx->pc = 0x270D48u;
label_270d48:
    // 0x270d48: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x270D48u;
    {
        const bool branch_taken_0x270d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270D48u;
            // 0x270d4c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d48) {
            ctx->pc = 0x270D88u;
            goto label_270d88;
        }
    }
    ctx->pc = 0x270D50u;
label_270d50:
    // 0x270d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x270d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_270d54:
    // 0x270d54: 0xc098a44  jal         func_262910
    ctx->pc = 0x270D54u;
    SET_GPR_U32(ctx, 31, 0x270D5Cu);
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270D5Cu; }
        if (ctx->pc != 0x270D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270D5Cu; }
        if (ctx->pc != 0x270D5Cu) { return; }
    }
    ctx->pc = 0x270D5Cu;
label_270d5c:
    // 0x270d5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x270D5Cu;
    {
        const bool branch_taken_0x270d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270D5Cu;
            // 0x270d60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d5c) {
            ctx->pc = 0x270D6Cu;
            goto label_270d6c;
        }
    }
    ctx->pc = 0x270D64u;
    // 0x270d64: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x270D64u;
    {
        const bool branch_taken_0x270d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270D64u;
            // 0x270d68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d64) {
            ctx->pc = 0x270D84u;
            goto label_270d84;
        }
    }
    ctx->pc = 0x270D6Cu;
label_270d6c:
    // 0x270d6c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x270d6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d70: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x270d70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d74: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x270d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x270d78: 0xc097280  jal         func_25CA00
    ctx->pc = 0x270D78u;
    SET_GPR_U32(ctx, 31, 0x270D80u);
    ctx->pc = 0x270D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270D78u;
            // 0x270d7c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CA00u;
    if (runtime->hasFunction(0x25CA00u)) {
        auto targetFn = runtime->lookupFunction(0x25CA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270D80u; }
        if (ctx->pc != 0x270D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Move2__12CSceneObjSeqFPfiif_0x25ca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270D80u; }
        if (ctx->pc != 0x270D80u) { return; }
    }
    ctx->pc = 0x270D80u;
label_270d80:
    // 0x270d80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270d84:
    // 0x270d84: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x270d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_270d88:
    // 0x270d88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x270d88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x270d8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x270d8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x270d90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x270d90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270d94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x270d94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270d98: 0x3e00008  jr          $ra
    ctx->pc = 0x270D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270D98u;
            // 0x270d9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x270DA0u;
}
