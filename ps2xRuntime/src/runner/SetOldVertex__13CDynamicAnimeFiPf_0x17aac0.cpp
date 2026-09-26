#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetOldVertex__13CDynamicAnimeFiPf
// Address: 0x17aac0 - 0x17ab18
void SetOldVertex__13CDynamicAnimeFiPf_0x17aac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetOldVertex__13CDynamicAnimeFiPf_0x17aac0");
#endif

    switch (ctx->pc) {
        case 0x17aae4u: goto label_17aae4;
        default: break;
    }

    ctx->pc = 0x17aac0u;

    // 0x17aac0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17aac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17aac4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17aac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17aac8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17aac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17aacc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17aaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17aad0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17aad0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aad4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17aad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17aad8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17aad8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aadc: 0xc05ea5c  jal         func_17A970
    ctx->pc = 0x17AADCu;
    SET_GPR_U32(ctx, 31, 0x17AAE4u);
    ctx->pc = 0x17AAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AADCu;
            // 0x17aae0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A970u;
    if (runtime->hasFunction(0x17A970u)) {
        auto targetFn = runtime->lookupFunction(0x17A970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AAE4u; }
        if (ctx->pc != 0x17AAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckVertexID__13CDynamicAnimeFi_0x17a970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AAE4u; }
        if (ctx->pc != 0x17AAE4u) { return; }
    }
    ctx->pc = 0x17AAE4u;
label_17aae4:
    // 0x17aae4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17AAE4u;
    {
        const bool branch_taken_0x17aae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17aae4) {
            ctx->pc = 0x17AB00u;
            goto label_17ab00;
        }
    }
    ctx->pc = 0x17AAECu;
    // 0x17aaec: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x17aaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x17aaf0: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x17aaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x17aaf4: 0x7a050000  lq          $a1, 0x0($s0)
    ctx->pc = 0x17aaf4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17aaf8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17aaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17aafc: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x17aafcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
label_17ab00:
    // 0x17ab00: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17ab00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ab04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17ab04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ab08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17ab08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ab0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17ab0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ab10: 0x3e00008  jr          $ra
    ctx->pc = 0x17AB10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AB10u;
            // 0x17ab14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17AB18u;
}
