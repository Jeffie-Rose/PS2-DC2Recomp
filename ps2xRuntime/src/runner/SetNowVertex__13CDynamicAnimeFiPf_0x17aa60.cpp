#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetNowVertex__13CDynamicAnimeFiPf
// Address: 0x17aa60 - 0x17aab8
void SetNowVertex__13CDynamicAnimeFiPf_0x17aa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetNowVertex__13CDynamicAnimeFiPf_0x17aa60");
#endif

    switch (ctx->pc) {
        case 0x17aa84u: goto label_17aa84;
        default: break;
    }

    ctx->pc = 0x17aa60u;

    // 0x17aa60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17aa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17aa64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17aa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17aa68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17aa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17aa6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17aa6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17aa70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17aa70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aa74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17aa74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17aa78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17aa78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aa7c: 0xc05ea5c  jal         func_17A970
    ctx->pc = 0x17AA7Cu;
    SET_GPR_U32(ctx, 31, 0x17AA84u);
    ctx->pc = 0x17AA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AA7Cu;
            // 0x17aa80: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A970u;
    if (runtime->hasFunction(0x17A970u)) {
        auto targetFn = runtime->lookupFunction(0x17A970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AA84u; }
        if (ctx->pc != 0x17AA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckVertexID__13CDynamicAnimeFi_0x17a970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AA84u; }
        if (ctx->pc != 0x17AA84u) { return; }
    }
    ctx->pc = 0x17AA84u;
label_17aa84:
    // 0x17aa84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17AA84u;
    {
        const bool branch_taken_0x17aa84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17aa84) {
            ctx->pc = 0x17AAA0u;
            goto label_17aaa0;
        }
    }
    ctx->pc = 0x17AA8Cu;
    // 0x17aa8c: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x17aa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x17aa90: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x17aa90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x17aa94: 0x7a050000  lq          $a1, 0x0($s0)
    ctx->pc = 0x17aa94u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17aa98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17aa98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17aa9c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x17aa9cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
label_17aaa0:
    // 0x17aaa0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17aaa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17aaa4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17aaa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17aaa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17aaa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17aaac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17aaacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17aab0: 0x3e00008  jr          $ra
    ctx->pc = 0x17AAB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AAB0u;
            // 0x17aab4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17AAB8u;
}
