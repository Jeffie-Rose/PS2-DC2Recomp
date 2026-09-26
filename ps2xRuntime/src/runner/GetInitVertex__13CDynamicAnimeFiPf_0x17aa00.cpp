#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetInitVertex__13CDynamicAnimeFiPf
// Address: 0x17aa00 - 0x17aa58
void GetInitVertex__13CDynamicAnimeFiPf_0x17aa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetInitVertex__13CDynamicAnimeFiPf_0x17aa00");
#endif

    switch (ctx->pc) {
        case 0x17aa24u: goto label_17aa24;
        default: break;
    }

    ctx->pc = 0x17aa00u;

    // 0x17aa00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17aa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17aa04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17aa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17aa08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17aa08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17aa0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17aa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17aa10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17aa10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aa14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17aa14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17aa18: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17aa18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aa1c: 0xc05ea5c  jal         func_17A970
    ctx->pc = 0x17AA1Cu;
    SET_GPR_U32(ctx, 31, 0x17AA24u);
    ctx->pc = 0x17AA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AA1Cu;
            // 0x17aa20: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A970u;
    if (runtime->hasFunction(0x17A970u)) {
        auto targetFn = runtime->lookupFunction(0x17A970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AA24u; }
        if (ctx->pc != 0x17AA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckVertexID__13CDynamicAnimeFi_0x17a970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AA24u; }
        if (ctx->pc != 0x17AA24u) { return; }
    }
    ctx->pc = 0x17AA24u;
label_17aa24:
    // 0x17aa24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17AA24u;
    {
        const bool branch_taken_0x17aa24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17aa24) {
            ctx->pc = 0x17AA40u;
            goto label_17aa40;
        }
    }
    ctx->pc = 0x17AA2Cu;
    // 0x17aa2c: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x17aa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x17aa30: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x17aa30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x17aa34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17aa34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17aa38: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x17aa38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17aa3c: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x17aa3cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
label_17aa40:
    // 0x17aa40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17aa40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17aa44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17aa44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17aa48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17aa48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17aa4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17aa4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17aa50: 0x3e00008  jr          $ra
    ctx->pc = 0x17AA50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AA50u;
            // 0x17aa54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17AA58u;
}
