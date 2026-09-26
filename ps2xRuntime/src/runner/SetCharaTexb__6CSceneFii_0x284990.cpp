#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetCharaTexb__6CSceneFii
// Address: 0x284990 - 0x2849c0
void SetCharaTexb__6CSceneFii_0x284990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCharaTexb__6CSceneFii_0x284990");
#endif

    switch (ctx->pc) {
        case 0x2849a4u: goto label_2849a4;
        default: break;
    }

    ctx->pc = 0x284990u;

    // 0x284990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x284990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x284994: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x284994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x284998: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x284998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28499c: 0xc0a0cd0  jal         func_283340
    ctx->pc = 0x28499Cu;
    SET_GPR_U32(ctx, 31, 0x2849A4u);
    ctx->pc = 0x2849A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28499Cu;
            // 0x2849a0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283340u;
    if (runtime->hasFunction(0x283340u)) {
        auto targetFn = runtime->lookupFunction(0x283340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2849A4u; }
        if (ctx->pc != 0x2849A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneCharacter__6CSceneFi_0x283340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2849A4u; }
        if (ctx->pc != 0x2849A4u) { return; }
    }
    ctx->pc = 0x2849A4u;
label_2849a4:
    // 0x2849a4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2849A4u;
    {
        const bool branch_taken_0x2849a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2849a4) {
            ctx->pc = 0x2849B0u;
            goto label_2849b0;
        }
    }
    ctx->pc = 0x2849ACu;
    // 0x2849ac: 0xac500038  sw          $s0, 0x38($v0)
    ctx->pc = 0x2849acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 16));
label_2849b0:
    // 0x2849b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2849b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2849b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2849b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2849b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2849B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2849BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2849B8u;
            // 0x2849bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2849C0u;
}
