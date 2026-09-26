#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetBBox__4CMapFP9mgVu0FBOX
// Address: 0x15d770 - 0x15d7a0
void GetBBox__4CMapFP9mgVu0FBOX_0x15d770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetBBox__4CMapFP9mgVu0FBOX_0x15d770");
#endif

    switch (ctx->pc) {
        case 0x15d78cu: goto label_15d78c;
        default: break;
    }

    ctx->pc = 0x15d770u;

    // 0x15d770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15d770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15d774: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15d774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15d778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15d77c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15d77cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d780: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15d780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d784: 0xc04e624  jal         func_139890
    ctx->pc = 0x15D784u;
    SET_GPR_U32(ctx, 31, 0x15D78Cu);
    ctx->pc = 0x15D788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D784u;
            // 0x15d788: 0x26050340  addiu       $a1, $s0, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139890u;
    if (runtime->hasFunction(0x139890u)) {
        auto targetFn = runtime->lookupFunction(0x139890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D78Cu; }
        if (ctx->pc != 0x15D78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__9mgVu0FBOXFR9mgVu0FBOX_0x139890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D78Cu; }
        if (ctx->pc != 0x15D78Cu) { return; }
    }
    ctx->pc = 0x15D78Cu;
label_15d78c:
    // 0x15d78c: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x15d78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x15d790: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15d790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d794: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d798: 0x3e00008  jr          $ra
    ctx->pc = 0x15D798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D798u;
            // 0x15d79c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15D7A0u;
}
