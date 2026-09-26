#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: gcGEO_COMPLETE__FP9SPI_STACKi
// Address: 0x193a40 - 0x193ae0
void gcGEO_COMPLETE__FP9SPI_STACKi_0x193a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gcGEO_COMPLETE__FP9SPI_STACKi_0x193a40");
#endif

    switch (ctx->pc) {
        case 0x193a7cu: goto label_193a7c;
        case 0x193a84u: goto label_193a84;
        case 0x193a8cu: goto label_193a8c;
        case 0x193a98u: goto label_193a98;
        case 0x193aacu: goto label_193aac;
        default: break;
    }

    ctx->pc = 0x193a40u;

    // 0x193a40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x193a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x193a44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x193a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193a48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x193a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x193a4c: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x193a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
    // 0x193a50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x193a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x193a54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x193a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x193a58: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x193a58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x193a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x193a60: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x193a60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x193a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x193a68: 0xac228078  sw          $v0, -0x7F88($at)
    ctx->pc = 0x193a68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294934648), GPR_U32(ctx, 2));
    // 0x193a6c: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x193a6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x193a70: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x193A70u;
    {
        const bool branch_taken_0x193a70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x193A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193A70u;
            // 0x193a74: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193a70) {
            ctx->pc = 0x193AC0u;
            goto label_193ac0;
        }
    }
    ctx->pc = 0x193A78u;
    // 0x193a78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x193a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_193a7c:
    // 0x193a7c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x193A7Cu;
    SET_GPR_U32(ctx, 31, 0x193A84u);
    ctx->pc = 0x193A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193A7Cu;
            // 0x193a80: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A84u; }
        if (ctx->pc != 0x193A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A84u; }
        if (ctx->pc != 0x193A84u) { return; }
    }
    ctx->pc = 0x193A84u;
label_193a84:
    // 0x193a84: 0xc064220  jal         func_190880
    ctx->pc = 0x193A84u;
    SET_GPR_U32(ctx, 31, 0x193A8Cu);
    ctx->pc = 0x193A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193A84u;
            // 0x193a88: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A8Cu; }
        if (ctx->pc != 0x193A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A8Cu; }
        if (ctx->pc != 0x193A8Cu) { return; }
    }
    ctx->pc = 0x193A8Cu;
label_193a8c:
    // 0x193a8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x193a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a90: 0xc0bd9a4  jal         func_2F6690
    ctx->pc = 0x193A90u;
    SET_GPR_U32(ctx, 31, 0x193A98u);
    ctx->pc = 0x193A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193A90u;
            // 0x193a94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6690u;
    if (runtime->hasFunction(0x2F6690u)) {
        auto targetFn = runtime->lookupFunction(0x2F6690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A98u; }
        if (ctx->pc != 0x193A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEditData__9CSaveDataFi_0x2f6690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A98u; }
        if (ctx->pc != 0x193A98u) { return; }
    }
    ctx->pc = 0x193A98u;
label_193a98:
    // 0x193a98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x193A98u;
    {
        const bool branch_taken_0x193a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193A98u;
            // 0x193a9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193a98) {
            ctx->pc = 0x193AACu;
            goto label_193aac;
        }
    }
    ctx->pc = 0x193AA0u;
    // 0x193aa0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x193aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193aa4: 0xc0aa8cc  jal         func_2AA330
    ctx->pc = 0x193AA4u;
    SET_GPR_U32(ctx, 31, 0x193AACu);
    ctx->pc = 0x193AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193AA4u;
            // 0x193aa8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA330u;
    if (runtime->hasFunction(0x2AA330u)) {
        auto targetFn = runtime->lookupFunction(0x2AA330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193AACu; }
        if (ctx->pc != 0x193AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dbgSetAllContintionFlag__9CEditDataFii_0x2aa330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193AACu; }
        if (ctx->pc != 0x193AACu) { return; }
    }
    ctx->pc = 0x193AACu;
label_193aac:
    // 0x193aac: 0x0  nop
    ctx->pc = 0x193aacu;
    // NOP
    // 0x193ab0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x193ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x193ab4: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x193ab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x193ab8: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x193AB8u;
    {
        const bool branch_taken_0x193ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193AB8u;
            // 0x193abc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193ab8) {
            ctx->pc = 0x193A7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_193a7c;
        }
    }
    ctx->pc = 0x193AC0u;
label_193ac0:
    // 0x193ac0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x193ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x193ac4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x193ac4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193ac8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x193ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193acc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x193accu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193ad0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x193ad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193ad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x193ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x193AD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193AD8u;
            // 0x193adc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193AE0u;
}
