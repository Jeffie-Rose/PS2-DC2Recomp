#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitSV_CONFIG_OPTION__FP16SV_CONFIG_OPTION
// Address: 0x2f61b0 - 0x2f61e8
void InitSV_CONFIG_OPTION__FP16SV_CONFIG_OPTION_0x2f61b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitSV_CONFIG_OPTION__FP16SV_CONFIG_OPTION_0x2f61b0");
#endif

    switch (ctx->pc) {
        case 0x2f61d0u: goto label_2f61d0;
        default: break;
    }

    ctx->pc = 0x2f61b0u;

    // 0x2f61b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f61b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f61b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f61b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f61b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f61b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f61bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f61bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f61c0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F61C0u;
    {
        const bool branch_taken_0x2f61c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F61C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F61C0u;
            // 0x2f61c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f61c0) {
            ctx->pc = 0x2F61D8u;
            goto label_2f61d8;
        }
    }
    ctx->pc = 0x2F61C8u;
    // 0x2f61c8: 0xc049c86  jal         func_127218
    ctx->pc = 0x2F61C8u;
    SET_GPR_U32(ctx, 31, 0x2F61D0u);
    ctx->pc = 0x2F61CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F61C8u;
            // 0x2f61cc: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F61D0u; }
        if (ctx->pc != 0x2F61D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F61D0u; }
        if (ctx->pc != 0x2F61D0u) { return; }
    }
    ctx->pc = 0x2F61D0u;
label_2f61d0:
    // 0x2f61d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f61d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f61d4: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2f61d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_2f61d8:
    // 0x2f61d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f61d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f61dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f61dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f61e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F61E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F61E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F61E0u;
            // 0x2f61e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F61E8u;
}
