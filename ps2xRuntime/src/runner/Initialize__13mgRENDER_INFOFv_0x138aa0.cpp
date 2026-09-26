#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__13mgRENDER_INFOFv
// Address: 0x138aa0 - 0x138af4
void Initialize__13mgRENDER_INFOFv_0x138aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__13mgRENDER_INFOFv_0x138aa0");
#endif

    switch (ctx->pc) {
        case 0x138abcu: goto label_138abc;
        case 0x138ac8u: goto label_138ac8;
        default: break;
    }

    ctx->pc = 0x138aa0u;

    // 0x138aa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x138aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x138aa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138aa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x138aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x138aac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x138aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x138ab0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x138ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138ab4: 0xc04e22c  jal         func_1388B0
    ctx->pc = 0x138AB4u;
    SET_GPR_U32(ctx, 31, 0x138ABCu);
    ctx->pc = 0x138AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138AB4u;
            // 0x138ab8: 0x26040f20  addiu       $a0, $s0, 0xF20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1388B0u;
    if (runtime->hasFunction(0x1388B0u)) {
        auto targetFn = runtime->lookupFunction(0x1388B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138ABCu; }
        if (ctx->pc != 0x138ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10mgCDrawEnvFi_0x1388b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138ABCu; }
        if (ctx->pc != 0x138ABCu) { return; }
    }
    ctx->pc = 0x138ABCu;
label_138abc:
    // 0x138abc: 0x26040f60  addiu       $a0, $s0, 0xF60
    ctx->pc = 0x138abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3936));
    // 0x138ac0: 0xc04e22c  jal         func_1388B0
    ctx->pc = 0x138AC0u;
    SET_GPR_U32(ctx, 31, 0x138AC8u);
    ctx->pc = 0x138AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138AC0u;
            // 0x138ac4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1388B0u;
    if (runtime->hasFunction(0x1388B0u)) {
        auto targetFn = runtime->lookupFunction(0x1388B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138AC8u; }
        if (ctx->pc != 0x138AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10mgCDrawEnvFi_0x1388b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138AC8u; }
        if (ctx->pc != 0x138AC8u) { return; }
    }
    ctx->pc = 0x138AC8u;
label_138ac8:
    // 0x138ac8: 0xae000fa4  sw          $zero, 0xFA4($s0)
    ctx->pc = 0x138ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4004), GPR_U32(ctx, 0));
    // 0x138acc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x138accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138ad0: 0xae000fa8  sw          $zero, 0xFA8($s0)
    ctx->pc = 0x138ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4008), GPR_U32(ctx, 0));
    // 0x138ad4: 0xae030fac  sw          $v1, 0xFAC($s0)
    ctx->pc = 0x138ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4012), GPR_U32(ctx, 3));
    // 0x138ad8: 0xae001010  sw          $zero, 0x1010($s0)
    ctx->pc = 0x138ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4112), GPR_U32(ctx, 0));
    // 0x138adc: 0xae000fa0  sw          $zero, 0xFA0($s0)
    ctx->pc = 0x138adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4000), GPR_U32(ctx, 0));
    // 0x138ae0: 0xae0303f0  sw          $v1, 0x3F0($s0)
    ctx->pc = 0x138ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1008), GPR_U32(ctx, 3));
    // 0x138ae4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x138ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138ae8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x138ae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138aec: 0x3e00008  jr          $ra
    ctx->pc = 0x138AECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138AECu;
            // 0x138af0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x138AF4u;
}
