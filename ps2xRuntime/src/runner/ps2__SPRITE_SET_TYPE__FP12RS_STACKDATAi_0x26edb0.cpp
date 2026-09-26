#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPRITE_SET_TYPE__FP12RS_STACKDATAi
// Address: 0x26edb0 - 0x26ee08
void ps2__SPRITE_SET_TYPE__FP12RS_STACKDATAi_0x26edb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPRITE_SET_TYPE__FP12RS_STACKDATAi_0x26edb0");
#endif

    switch (ctx->pc) {
        case 0x26edc4u: goto label_26edc4;
        case 0x26edd0u: goto label_26edd0;
        case 0x26eddcu: goto label_26eddc;
        case 0x26edf4u: goto label_26edf4;
        default: break;
    }

    ctx->pc = 0x26edb0u;

    // 0x26edb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26edb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26edb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26edb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26edb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26edb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26edbc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26EDBCu;
    SET_GPR_U32(ctx, 31, 0x26EDC4u);
    ctx->pc = 0x26EDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EDBCu;
            // 0x26edc0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EDC4u; }
        if (ctx->pc != 0x26EDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EDC4u; }
        if (ctx->pc != 0x26EDC4u) { return; }
    }
    ctx->pc = 0x26EDC4u;
label_26edc4:
    // 0x26edc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26edc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26edc8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26EDC8u;
    SET_GPR_U32(ctx, 31, 0x26EDD0u);
    ctx->pc = 0x26EDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EDC8u;
            // 0x26edcc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EDD0u; }
        if (ctx->pc != 0x26EDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EDD0u; }
        if (ctx->pc != 0x26EDD0u) { return; }
    }
    ctx->pc = 0x26EDD0u;
label_26edd0:
    // 0x26edd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26edd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26edd4: 0xc09bb34  jal         func_26ECD0
    ctx->pc = 0x26EDD4u;
    SET_GPR_U32(ctx, 31, 0x26EDDCu);
    ctx->pc = 0x26EDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EDD4u;
            // 0x26edd8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26ECD0u;
    if (runtime->hasFunction(0x26ECD0u)) {
        auto targetFn = runtime->lookupFunction(0x26ECD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EDDCu; }
        if (ctx->pc != 0x26EDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEventSprite__Fi_0x26ecd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EDDCu; }
        if (ctx->pc != 0x26EDDCu) { return; }
    }
    ctx->pc = 0x26EDDCu;
label_26eddc:
    // 0x26eddc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26EDDCu;
    {
        const bool branch_taken_0x26eddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EDDCu;
            // 0x26ede0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eddc) {
            ctx->pc = 0x26EDECu;
            goto label_26edec;
        }
    }
    ctx->pc = 0x26EDE4u;
    // 0x26ede4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26EDE4u;
    {
        const bool branch_taken_0x26ede4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EDE4u;
            // 0x26ede8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ede4) {
            ctx->pc = 0x26EDF8u;
            goto label_26edf8;
        }
    }
    ctx->pc = 0x26EDECu;
label_26edec:
    // 0x26edec: 0xc0a42dc  jal         func_290B70
    ctx->pc = 0x26EDECu;
    SET_GPR_U32(ctx, 31, 0x26EDF4u);
    ctx->pc = 0x290B70u;
    if (runtime->hasFunction(0x290B70u)) {
        auto targetFn = runtime->lookupFunction(0x290B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EDF4u; }
        if (ctx->pc != 0x26EDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteType__13CEventSprite2Fi_0x290b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EDF4u; }
        if (ctx->pc != 0x26EDF4u) { return; }
    }
    ctx->pc = 0x26EDF4u;
label_26edf4:
    // 0x26edf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26edf8:
    // 0x26edf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26edf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26edfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26edfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ee00: 0x3e00008  jr          $ra
    ctx->pc = 0x26EE00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EE00u;
            // 0x26ee04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26EE08u;
}
