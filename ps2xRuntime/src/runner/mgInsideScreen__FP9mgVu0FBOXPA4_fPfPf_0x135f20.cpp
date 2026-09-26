#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgInsideScreen__FP9mgVu0FBOXPA4_fPfPf
// Address: 0x135f20 - 0x135f80
void mgInsideScreen__FP9mgVu0FBOXPA4_fPfPf_0x135f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgInsideScreen__FP9mgVu0FBOXPA4_fPfPf_0x135f20");
#endif

    switch (ctx->pc) {
        case 0x135f54u: goto label_135f54;
        case 0x135f68u: goto label_135f68;
        default: break;
    }

    ctx->pc = 0x135f20u;

    // 0x135f20: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x135f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x135f24: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x135f24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135f28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x135f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x135f2c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x135f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x135f30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x135f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x135f34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x135f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x135f38: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x135f38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135f3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x135f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x135f40: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x135f40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135f44: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x135f44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135f48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x135f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135f4c: 0xc04bc74  jal         func_12F1D0
    ctx->pc = 0x135F4Cu;
    SET_GPR_U32(ctx, 31, 0x135F54u);
    ctx->pc = 0x135F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135F4Cu;
            // 0x135f50: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F1D0u;
    if (runtime->hasFunction(0x12F1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135F54u; }
        if (ctx->pc != 0x135F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCreateBox8__FPA4_fPfPf_0x12f1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135F54u; }
        if (ctx->pc != 0x135F54u) { return; }
    }
    ctx->pc = 0x135F54u;
label_135f54:
    // 0x135f54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x135f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135f58: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x135f58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135f5c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x135f5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135f60: 0xc04d7e8  jal         func_135FA0
    ctx->pc = 0x135F60u;
    SET_GPR_U32(ctx, 31, 0x135F68u);
    ctx->pc = 0x135F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135F60u;
            // 0x135f64: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135FA0u;
    if (runtime->hasFunction(0x135FA0u)) {
        auto targetFn = runtime->lookupFunction(0x135FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135F68u; }
        if (ctx->pc != 0x135F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInsideScreen__FPA4_fPA4_fPfPf_0x135fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135F68u; }
        if (ctx->pc != 0x135F68u) { return; }
    }
    ctx->pc = 0x135F68u;
label_135f68:
    // 0x135f68: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x135f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135f6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x135f6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135f70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x135f70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135f74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x135f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135f78: 0x3e00008  jr          $ra
    ctx->pc = 0x135F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135F78u;
            // 0x135f7c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x135F80u;
}
