#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ShadowStep__12CActionCharaFv
// Address: 0x172090 - 0x1720d8
void ShadowStep__12CActionCharaFv_0x172090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ShadowStep__12CActionCharaFv_0x172090");
#endif

    switch (ctx->pc) {
        case 0x1720a4u: goto label_1720a4;
        case 0x1720acu: goto label_1720ac;
        default: break;
    }

    ctx->pc = 0x172090u;

    // 0x172090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x172090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x172094: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x172094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x172098: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x172098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17209c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17209Cu;
    {
        const bool branch_taken_0x17209c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1720A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17209Cu;
            // 0x1720a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17209c) {
            ctx->pc = 0x1720C4u;
            goto label_1720c4;
        }
    }
    ctx->pc = 0x1720A4u;
label_1720a4:
    // 0x1720a4: 0xc05d244  jal         func_174910
    ctx->pc = 0x1720A4u;
    SET_GPR_U32(ctx, 31, 0x1720ACu);
    ctx->pc = 0x1720A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1720A4u;
            // 0x1720a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174910u;
    if (runtime->hasFunction(0x174910u)) {
        auto targetFn = runtime->lookupFunction(0x174910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1720ACu; }
        if (ctx->pc != 0x1720ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShadowStep__11CCharacter2Fv_0x174910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1720ACu; }
        if (ctx->pc != 0x1720ACu) { return; }
    }
    ctx->pc = 0x1720ACu;
label_1720ac:
    // 0x1720ac: 0x8e100678  lw          $s0, 0x678($s0)
    ctx->pc = 0x1720acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
    // 0x1720b0: 0x0  nop
    ctx->pc = 0x1720b0u;
    // NOP
    // 0x1720b4: 0x0  nop
    ctx->pc = 0x1720b4u;
    // NOP
    // 0x1720b8: 0x0  nop
    ctx->pc = 0x1720b8u;
    // NOP
    // 0x1720bc: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1720BCu;
    {
        const bool branch_taken_0x1720bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1720bc) {
            ctx->pc = 0x1720A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1720a4;
        }
    }
    ctx->pc = 0x1720C4u;
label_1720c4:
    // 0x1720c4: 0x0  nop
    ctx->pc = 0x1720c4u;
    // NOP
    // 0x1720c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1720c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1720cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1720ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1720d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1720D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1720D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1720D0u;
            // 0x1720d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1720D8u;
}
