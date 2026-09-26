#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: push_ptr__10CRunScriptFP12RS_STACKDATA
// Address: 0x186e70 - 0x186ebc
void push_ptr__10CRunScriptFP12RS_STACKDATA_0x186e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("push_ptr__10CRunScriptFP12RS_STACKDATA_0x186e70");
#endif

    switch (ctx->pc) {
        case 0x186e8cu: goto label_186e8c;
        default: break;
    }

    ctx->pc = 0x186e70u;

    // 0x186e70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x186e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x186e74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x186e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x186e78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x186e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x186e7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x186e80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x186e80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186e84: 0xc061b54  jal         func_186D50
    ctx->pc = 0x186E84u;
    SET_GPR_U32(ctx, 31, 0x186E8Cu);
    ctx->pc = 0x186E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186E84u;
            // 0x186e88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186D50u;
    if (runtime->hasFunction(0x186D50u)) {
        auto targetFn = runtime->lookupFunction(0x186D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E8Cu; }
        if (ctx->pc != 0x186E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        check_stack__10CRunScriptFv_0x186d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E8Cu; }
        if (ctx->pc != 0x186E8Cu) { return; }
    }
    ctx->pc = 0x186E8Cu;
label_186e8c:
    // 0x186e8c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x186e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x186e90: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x186e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x186e94: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x186e94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x186e98: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x186e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x186e9c: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x186e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x186ea0: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x186ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x186ea4: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x186ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x186ea8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x186ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186eac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x186eacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186eb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186eb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x186EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186EB4u;
            // 0x186eb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186EBCu;
}
