#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: gcGET_ITEM__FP9SPI_STACKi
// Address: 0x193b40 - 0x193bd0
void gcGET_ITEM__FP9SPI_STACKi_0x193b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gcGET_ITEM__FP9SPI_STACKi_0x193b40");
#endif

    switch (ctx->pc) {
        case 0x193b6cu: goto label_193b6c;
        case 0x193b74u: goto label_193b74;
        case 0x193b8cu: goto label_193b8c;
        case 0x193b9cu: goto label_193b9c;
        default: break;
    }

    ctx->pc = 0x193b40u;

    // 0x193b40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x193b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x193b44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x193b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x193b48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x193b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x193b4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x193b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x193b50: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x193b50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x193b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x193b58: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x193b58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x193b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x193b60: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x193b60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x193b64: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x193B64u;
    {
        const bool branch_taken_0x193b64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x193B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193B64u;
            // 0x193b68: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193b64) {
            ctx->pc = 0x193BACu;
            goto label_193bac;
        }
    }
    ctx->pc = 0x193B6Cu;
label_193b6c:
    // 0x193b6c: 0xc064220  jal         func_190880
    ctx->pc = 0x193B6Cu;
    SET_GPR_U32(ctx, 31, 0x193B74u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B74u; }
        if (ctx->pc != 0x193B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B74u; }
        if (ctx->pc != 0x193B74u) { return; }
    }
    ctx->pc = 0x193B74u;
label_193b74:
    // 0x193b74: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x193b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x193b78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x193b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b7c: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x193b7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x193b80: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x193b80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x193b84: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x193B84u;
    SET_GPR_U32(ctx, 31, 0x193B8Cu);
    ctx->pc = 0x193B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193B84u;
            // 0x193b88: 0x418821  addu        $s1, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B8Cu; }
        if (ctx->pc != 0x193B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B8Cu; }
        if (ctx->pc != 0x193B8Cu) { return; }
    }
    ctx->pc = 0x193B8Cu;
label_193b8c:
    // 0x193b8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x193b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x193b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b94: 0xc0677fc  jal         func_19DFF0
    ctx->pc = 0x193B94u;
    SET_GPR_U32(ctx, 31, 0x193B9Cu);
    ctx->pc = 0x193B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193B94u;
            // 0x193b98: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DFF0u;
    if (runtime->hasFunction(0x19DFF0u)) {
        auto targetFn = runtime->lookupFunction(0x19DFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B9Cu; }
        if (ctx->pc != 0x193B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItem__16CUserDataManagerFii_0x19dff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B9Cu; }
        if (ctx->pc != 0x193B9Cu) { return; }
    }
    ctx->pc = 0x193B9Cu;
label_193b9c:
    // 0x193b9c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x193b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x193ba0: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x193ba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x193ba4: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x193BA4u;
    {
        const bool branch_taken_0x193ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193ba4) {
            ctx->pc = 0x193B6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_193b6c;
        }
    }
    ctx->pc = 0x193BACu;
label_193bac:
    // 0x193bac: 0x0  nop
    ctx->pc = 0x193bacu;
    // NOP
    // 0x193bb0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x193bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x193bb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x193bb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193bb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x193bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193bbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x193bbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193bc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x193bc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193bc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x193bc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x193BC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193BC8u;
            // 0x193bcc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193BD0u;
}
