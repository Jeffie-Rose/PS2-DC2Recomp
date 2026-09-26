#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __negdf2
// Address: 0x288760 - 0x288798
void ps2___negdf2_0x288760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___negdf2_0x288760");
#endif

    switch (ctx->pc) {
        case 0x288778u: goto label_288778;
        case 0x28878cu: goto label_28878c;
        default: break;
    }

    ctx->pc = 0x288760u;

    // 0x288760: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x288760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x288764: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x288764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x288768: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x288768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28876c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28876cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x288770: 0xc0a1f16  jal         func_287C58
    ctx->pc = 0x288770u;
    SET_GPR_U32(ctx, 31, 0x288778u);
    ctx->pc = 0x288774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288770u;
            // 0x288774: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287C58u;
    if (runtime->hasFunction(0x287C58u)) {
        auto targetFn = runtime->lookupFunction(0x287C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288778u; }
        if (ctx->pc != 0x288778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x287c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288778u; }
        if (ctx->pc != 0x288778u) { return; }
    }
    ctx->pc = 0x288778u;
label_288778:
    // 0x288778: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x288778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x28877c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28877cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288780: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x288780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x288784: 0xc0a1eca  jal         func_287B28
    ctx->pc = 0x288784u;
    SET_GPR_U32(ctx, 31, 0x28878Cu);
    ctx->pc = 0x288788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288784u;
            // 0x288788: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287B28u;
    if (runtime->hasFunction(0x287B28u)) {
        auto targetFn = runtime->lookupFunction(0x287B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28878Cu; }
        if (ctx->pc != 0x28878Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_d_0x287b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28878Cu; }
        if (ctx->pc != 0x28878Cu) { return; }
    }
    ctx->pc = 0x28878Cu;
label_28878c:
    // 0x28878c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28878cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288790: 0x3e00008  jr          $ra
    ctx->pc = 0x288790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288790u;
            // 0x288794: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x288798u;
}
