#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetTransMatrix__8mgCFrameFPf
// Address: 0x1365a0 - 0x1365e4
void SetTransMatrix__8mgCFrameFPf_0x1365a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTransMatrix__8mgCFrameFPf_0x1365a0");
#endif

    switch (ctx->pc) {
        case 0x1365ccu: goto label_1365cc;
        default: break;
    }

    ctx->pc = 0x1365a0u;

    // 0x1365a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1365a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1365a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1365a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1365a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1365a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1365ac: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1365acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1365b0: 0xac860040  sw          $a2, 0x40($a0)
    ctx->pc = 0x1365b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 6));
    // 0x1365b4: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1365b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1365b8: 0x788400e0  lq          $a0, 0xE0($a0)
    ctx->pc = 0x1365b8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x1365bc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1365bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1365c0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1365c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1365c4: 0xc04d6e4  jal         func_135B90
    ctx->pc = 0x1365C4u;
    SET_GPR_U32(ctx, 31, 0x1365CCu);
    ctx->pc = 0x1365C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1365C4u;
            // 0x1365c8: 0x24e500b0  addiu       $a1, $a3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135B90u;
    if (runtime->hasFunction(0x135B90u)) {
        auto targetFn = runtime->lookupFunction(0x135B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1365CCu; }
        if (ctx->pc != 0x1365CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        QuatToMat__FPfPA4_f_0x135b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1365CCu; }
        if (ctx->pc != 0x1365CCu) { return; }
    }
    ctx->pc = 0x1365CCu;
label_1365cc:
    // 0x1365cc: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1365ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1365d0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1365d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1365d4: 0x7ce300e0  sq          $v1, 0xE0($a3)
    ctx->pc = 0x1365d4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 224), GPR_VEC(ctx, 3));
    // 0x1365d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1365d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1365dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1365DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1365E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1365DCu;
            // 0x1365e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1365E4u;
}
