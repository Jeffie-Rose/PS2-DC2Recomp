#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CommandStreamOpen__FiPc
// Address: 0x272f60 - 0x272fcc
void CommandStreamOpen__FiPc_0x272f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CommandStreamOpen__FiPc_0x272f60");
#endif

    switch (ctx->pc) {
        case 0x272f88u: goto label_272f88;
        case 0x272f94u: goto label_272f94;
        case 0x272fa4u: goto label_272fa4;
        case 0x272fb4u: goto label_272fb4;
        default: break;
    }

    ctx->pc = 0x272f60u;

    // 0x272f60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x272f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x272f64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x272f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x272f68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x272f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x272f6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x272f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x272f70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x272f70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f74: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x272f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f78: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x272f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x272f7c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x272f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x272f80: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x272F80u;
    SET_GPR_U32(ctx, 31, 0x272F88u);
    ctx->pc = 0x272F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272F80u;
            // 0x272f84: 0x24a5caa0  addiu       $a1, $a1, -0x3560 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272F88u; }
        if (ctx->pc != 0x272F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272F88u; }
        if (ctx->pc != 0x272F88u) { return; }
    }
    ctx->pc = 0x272F88u;
label_272f88:
    // 0x272f88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x272f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f8c: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x272F8Cu;
    SET_GPR_U32(ctx, 31, 0x272F94u);
    ctx->pc = 0x272F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272F8Cu;
            // 0x272f90: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272F94u; }
        if (ctx->pc != 0x272F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272F94u; }
        if (ctx->pc != 0x272F94u) { return; }
    }
    ctx->pc = 0x272F94u;
label_272f94:
    // 0x272f94: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x272f94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x272f98: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x272f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x272f9c: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x272F9Cu;
    SET_GPR_U32(ctx, 31, 0x272FA4u);
    ctx->pc = 0x272FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272F9Cu;
            // 0x272fa0: 0x24a5cab0  addiu       $a1, $a1, -0x3550 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272FA4u; }
        if (ctx->pc != 0x272FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272FA4u; }
        if (ctx->pc != 0x272FA4u) { return; }
    }
    ctx->pc = 0x272FA4u;
label_272fa4:
    // 0x272fa4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x272fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272fa8: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x272fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x272fac: 0xc062bbc  jal         func_18AEF0
    ctx->pc = 0x272FACu;
    SET_GPR_U32(ctx, 31, 0x272FB4u);
    ctx->pc = 0x272FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272FACu;
            // 0x272fb0: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AEF0u;
    if (runtime->hasFunction(0x18AEF0u)) {
        auto targetFn = runtime->lookupFunction(0x18AEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272FB4u; }
        if (ctx->pc != 0x272FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamOpenFast__6CSoundFiPc_0x18aef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272FB4u; }
        if (ctx->pc != 0x272FB4u) { return; }
    }
    ctx->pc = 0x272FB4u;
label_272fb4:
    // 0x272fb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x272fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x272fb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272fbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x272fbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x272fc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x272fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x272FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272FC4u;
            // 0x272fc8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272FCCu;
}
