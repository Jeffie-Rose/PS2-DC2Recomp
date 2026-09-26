#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CountPartsType__FiP8CEditMapPii
// Address: 0x316a80 - 0x316b34
void CountPartsType__FiP8CEditMapPii_0x316a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CountPartsType__FiP8CEditMapPii_0x316a80");
#endif

    switch (ctx->pc) {
        case 0x316ac8u: goto label_316ac8;
        case 0x316ad8u: goto label_316ad8;
        case 0x316ae8u: goto label_316ae8;
        default: break;
    }

    ctx->pc = 0x316a80u;

    // 0x316a80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x316a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x316a84: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x316a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x316a88: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x316a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x316a8c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x316a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x316a90: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x316a90u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316a94: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x316a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x316a98: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x316a98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316a9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x316a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x316aa0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x316aa0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316aa4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x316aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x316aa8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x316aa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316aac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x316aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x316ab0: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x316ab0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x316ab4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x316ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x316ab8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x316ab8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316abc: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x316ABCu;
    {
        const bool branch_taken_0x316abc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x316AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316ABCu;
            // 0x316ac0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316abc) {
            ctx->pc = 0x316B08u;
            goto label_316b08;
        }
    }
    ctx->pc = 0x316AC4u;
    // 0x316ac4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x316ac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_316ac8:
    // 0x316ac8: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x316ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x316acc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x316accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x316ad0: 0xc06c310  jal         func_1B0C40
    ctx->pc = 0x316AD0u;
    SET_GPR_U32(ctx, 31, 0x316AD8u);
    ctx->pc = 0x316AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316AD0u;
            // 0x316ad4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316AD8u; }
        if (ctx->pc != 0x316AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316AD8u; }
        if (ctx->pc != 0x316AD8u) { return; }
    }
    ctx->pc = 0x316AD8u;
label_316ad8:
    // 0x316ad8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x316AD8u;
    {
        const bool branch_taken_0x316ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x316ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316AD8u;
            // 0x316adc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ad8) {
            ctx->pc = 0x316AF4u;
            goto label_316af4;
        }
    }
    ctx->pc = 0x316AE0u;
    // 0x316ae0: 0xc06d778  jal         func_1B5DE0
    ctx->pc = 0x316AE0u;
    SET_GPR_U32(ctx, 31, 0x316AE8u);
    ctx->pc = 0x1B5DE0u;
    if (runtime->hasFunction(0x1B5DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316AE8u; }
        if (ctx->pc != 0x316AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartsType__10CEditPartsFv_0x1b5de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316AE8u; }
        if (ctx->pc != 0x316AE8u) { return; }
    }
    ctx->pc = 0x316AE8u;
label_316ae8:
    // 0x316ae8: 0x16c20002  bne         $s6, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x316AE8u;
    {
        const bool branch_taken_0x316ae8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x316ae8) {
            ctx->pc = 0x316AF4u;
            goto label_316af4;
        }
    }
    ctx->pc = 0x316AF0u;
    // 0x316af0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x316af0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_316af4:
    // 0x316af4: 0x0  nop
    ctx->pc = 0x316af4u;
    // NOP
    // 0x316af8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x316af8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x316afc: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x316afcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x316b00: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x316B00u;
    {
        const bool branch_taken_0x316b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x316B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316B00u;
            // 0x316b04: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316b00) {
            ctx->pc = 0x316AC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_316ac8;
        }
    }
    ctx->pc = 0x316B08u;
label_316b08:
    // 0x316b08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x316b08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316b0c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x316b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x316b10: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x316b10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x316b14: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x316b14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x316b18: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x316b18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x316b1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x316b1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x316b20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x316b20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x316b24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x316b24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316b28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x316b28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x316B2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316B2Cu;
            // 0x316b30: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x316B34u;
}
