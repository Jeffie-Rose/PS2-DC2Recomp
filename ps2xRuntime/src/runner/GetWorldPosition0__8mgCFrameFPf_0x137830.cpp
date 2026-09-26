#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetWorldPosition0__8mgCFrameFPf
// Address: 0x137830 - 0x137864
void GetWorldPosition0__8mgCFrameFPf_0x137830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetWorldPosition0__8mgCFrameFPf_0x137830");
#endif

    switch (ctx->pc) {
        case 0x137848u: goto label_137848;
        default: break;
    }

    ctx->pc = 0x137830u;

    // 0x137830: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x137830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x137834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x137834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x137838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x137838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13783c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13783cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137840: 0xc04dc0c  jal         func_137030
    ctx->pc = 0x137840u;
    SET_GPR_U32(ctx, 31, 0x137848u);
    ctx->pc = 0x137844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137840u;
            // 0x137844: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137848u; }
        if (ctx->pc != 0x137848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137848u; }
        if (ctx->pc != 0x137848u) { return; }
    }
    ctx->pc = 0x137848u;
label_137848:
    // 0x137848: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x137848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13784c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x13784cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x137850: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x137850u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x137854: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x137854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137858: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x137858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13785c: 0x3e00008  jr          $ra
    ctx->pc = 0x13785Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13785Cu;
            // 0x137860: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x137864u;
}
