#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgApplyMatrix__FPfPfPA4_fPfPf
// Address: 0x1309e0 - 0x130a44
void mgApplyMatrix__FPfPfPA4_fPfPf_0x1309e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgApplyMatrix__FPfPfPA4_fPfPf_0x1309e0");
#endif

    switch (ctx->pc) {
        case 0x130a10u: goto label_130a10;
        case 0x130a2cu: goto label_130a2c;
        default: break;
    }

    ctx->pc = 0x1309e0u;

    // 0x1309e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1309e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1309e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1309e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1309e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1309e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1309ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1309ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1309f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1309f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1309f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1309f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1309f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1309f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1309fc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1309fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a00: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x130a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a04: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x130a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a08: 0xc04bc74  jal         func_12F1D0
    ctx->pc = 0x130A08u;
    SET_GPR_U32(ctx, 31, 0x130A10u);
    ctx->pc = 0x130A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130A08u;
            // 0x130a0c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F1D0u;
    if (runtime->hasFunction(0x12F1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130A10u; }
        if (ctx->pc != 0x130A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCreateBox8__FPA4_fPfPf_0x12f1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130A10u; }
        if (ctx->pc != 0x130A10u) { return; }
    }
    ctx->pc = 0x130A10u;
label_130a10:
    // 0x130a10: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x130a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x130a14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x130a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a18: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x130a18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a1c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x130a1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a20: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x130a20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a24: 0xc04c23c  jal         func_1308F0
    ctx->pc = 0x130A24u;
    SET_GPR_U32(ctx, 31, 0x130A2Cu);
    ctx->pc = 0x130A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130A24u;
            // 0x130a28: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1308F0u;
    if (runtime->hasFunction(0x1308F0u)) {
        auto targetFn = runtime->lookupFunction(0x1308F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130A2Cu; }
        if (ctx->pc != 0x130A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgApplyMatrixN_MaxMin__FPA4_fPA4_fPA4_fiPfPf_0x1308f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130A2Cu; }
        if (ctx->pc != 0x130A2Cu) { return; }
    }
    ctx->pc = 0x130A2Cu;
label_130a2c:
    // 0x130a2c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x130a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x130a30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x130a30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130a34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x130a34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130a38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x130a38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x130A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130A3Cu;
            // 0x130a40: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x130A44u;
}
