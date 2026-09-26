#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddPoint__9ROBO_DATAFf
// Address: 0x19a830 - 0x19a860
void AddPoint__9ROBO_DATAFf_0x19a830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddPoint__9ROBO_DATAFf_0x19a830");
#endif

    switch (ctx->pc) {
        case 0x19a848u: goto label_19a848;
        case 0x19a850u: goto label_19a850;
        default: break;
    }

    ctx->pc = 0x19a830u;

    // 0x19a830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19a830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19a834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19a834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19a838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19a838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19a83c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19a83cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a840: 0xc065b44  jal         func_196D10
    ctx->pc = 0x19A840u;
    SET_GPR_U32(ctx, 31, 0x19A848u);
    ctx->pc = 0x19A844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A840u;
            // 0x19a844: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D10u;
    if (runtime->hasFunction(0x196D10u)) {
        auto targetFn = runtime->lookupFunction(0x196D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A848u; }
        if (ctx->pc != 0x19A848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPoint__11COMMON_GAGEFf_0x196d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A848u; }
        if (ctx->pc != 0x19A848u) { return; }
    }
    ctx->pc = 0x19A848u;
label_19a848:
    // 0x19a848: 0xc065b30  jal         func_196CC0
    ctx->pc = 0x19A848u;
    SET_GPR_U32(ctx, 31, 0x19A850u);
    ctx->pc = 0x19A84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A848u;
            // 0x19a84c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196CC0u;
    if (runtime->hasFunction(0x196CC0u)) {
        auto targetFn = runtime->lookupFunction(0x196CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A850u; }
        if (ctx->pc != 0x19A850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRate__11COMMON_GAGEFv_0x196cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A850u; }
        if (ctx->pc != 0x19A850u) { return; }
    }
    ctx->pc = 0x19A850u;
label_19a850:
    // 0x19a850: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19a850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a854: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19a854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a858: 0x3e00008  jr          $ra
    ctx->pc = 0x19A858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A858u;
            // 0x19a85c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A860u;
}
