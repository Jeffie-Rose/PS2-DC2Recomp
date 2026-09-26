#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgInsideScreen__FP9mgVu0FBOXPA4_f
// Address: 0x135ee0 - 0x135f20
void mgInsideScreen__FP9mgVu0FBOXPA4_f_0x135ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgInsideScreen__FP9mgVu0FBOXPA4_f_0x135ee0");
#endif

    switch (ctx->pc) {
        case 0x135f04u: goto label_135f04;
        case 0x135f10u: goto label_135f10;
        default: break;
    }

    ctx->pc = 0x135ee0u;

    // 0x135ee0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x135ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x135ee4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x135ee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135ee8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x135ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x135eec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x135eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x135ef0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x135ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x135ef4: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x135ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x135ef8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x135ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135efc: 0xc04bc74  jal         func_12F1D0
    ctx->pc = 0x135EFCu;
    SET_GPR_U32(ctx, 31, 0x135F04u);
    ctx->pc = 0x135F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135EFCu;
            // 0x135f00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F1D0u;
    if (runtime->hasFunction(0x12F1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135F04u; }
        if (ctx->pc != 0x135F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCreateBox8__FPA4_fPfPf_0x12f1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135F04u; }
        if (ctx->pc != 0x135F04u) { return; }
    }
    ctx->pc = 0x135F04u;
label_135f04:
    // 0x135f04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x135f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135f08: 0xc04d7e0  jal         func_135F80
    ctx->pc = 0x135F08u;
    SET_GPR_U32(ctx, 31, 0x135F10u);
    ctx->pc = 0x135F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135F08u;
            // 0x135f0c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135F80u;
    if (runtime->hasFunction(0x135F80u)) {
        auto targetFn = runtime->lookupFunction(0x135F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135F10u; }
        if (ctx->pc != 0x135F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInsideScreen__FPA4_fPA4_f_0x135f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135F10u; }
        if (ctx->pc != 0x135F10u) { return; }
    }
    ctx->pc = 0x135F10u;
label_135f10:
    // 0x135f10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x135f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135f14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x135f14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135f18: 0x3e00008  jr          $ra
    ctx->pc = 0x135F18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135F18u;
            // 0x135f1c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x135F20u;
}
