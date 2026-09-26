#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: push_str__10CRunScriptFPc
// Address: 0x186e20 - 0x186e6c
void push_str__10CRunScriptFPc_0x186e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("push_str__10CRunScriptFPc_0x186e20");
#endif

    switch (ctx->pc) {
        case 0x186e3cu: goto label_186e3c;
        default: break;
    }

    ctx->pc = 0x186e20u;

    // 0x186e20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x186e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x186e24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x186e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x186e28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x186e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x186e2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x186e30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x186e30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186e34: 0xc061b54  jal         func_186D50
    ctx->pc = 0x186E34u;
    SET_GPR_U32(ctx, 31, 0x186E3Cu);
    ctx->pc = 0x186E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186E34u;
            // 0x186e38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186D50u;
    if (runtime->hasFunction(0x186D50u)) {
        auto targetFn = runtime->lookupFunction(0x186D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E3Cu; }
        if (ctx->pc != 0x186E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        check_stack__10CRunScriptFv_0x186d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E3Cu; }
        if (ctx->pc != 0x186E3Cu) { return; }
    }
    ctx->pc = 0x186E3Cu;
label_186e3c:
    // 0x186e3c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x186e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x186e40: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x186e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x186e44: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x186e44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x186e48: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x186e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x186e4c: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x186e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x186e50: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x186e50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x186e54: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x186e54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x186e58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x186e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186e5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x186e5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186e60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186e60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186e64: 0x3e00008  jr          $ra
    ctx->pc = 0x186E64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186E64u;
            // 0x186e68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186E6Cu;
}
