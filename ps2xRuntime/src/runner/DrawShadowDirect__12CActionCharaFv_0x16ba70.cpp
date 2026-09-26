#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawShadowDirect__12CActionCharaFv
// Address: 0x16ba70 - 0x16bab8
void DrawShadowDirect__12CActionCharaFv_0x16ba70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawShadowDirect__12CActionCharaFv_0x16ba70");
#endif

    switch (ctx->pc) {
        case 0x16ba84u: goto label_16ba84;
        case 0x16ba8cu: goto label_16ba8c;
        default: break;
    }

    ctx->pc = 0x16ba70u;

    // 0x16ba70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16ba70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16ba74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16ba74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16ba78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16ba78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16ba7c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16BA7Cu;
    {
        const bool branch_taken_0x16ba7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BA7Cu;
            // 0x16ba80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba7c) {
            ctx->pc = 0x16BAA4u;
            goto label_16baa4;
        }
    }
    ctx->pc = 0x16BA84u;
label_16ba84:
    // 0x16ba84: 0xc05cd84  jal         func_173610
    ctx->pc = 0x16BA84u;
    SET_GPR_U32(ctx, 31, 0x16BA8Cu);
    ctx->pc = 0x16BA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BA84u;
            // 0x16ba88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173610u;
    if (runtime->hasFunction(0x173610u)) {
        auto targetFn = runtime->lookupFunction(0x173610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BA8Cu; }
        if (ctx->pc != 0x16BA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawShadowDirect__11CCharacter2Fv_0x173610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BA8Cu; }
        if (ctx->pc != 0x16BA8Cu) { return; }
    }
    ctx->pc = 0x16BA8Cu;
label_16ba8c:
    // 0x16ba8c: 0x8e100678  lw          $s0, 0x678($s0)
    ctx->pc = 0x16ba8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
    // 0x16ba90: 0x0  nop
    ctx->pc = 0x16ba90u;
    // NOP
    // 0x16ba94: 0x0  nop
    ctx->pc = 0x16ba94u;
    // NOP
    // 0x16ba98: 0x0  nop
    ctx->pc = 0x16ba98u;
    // NOP
    // 0x16ba9c: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16BA9Cu;
    {
        const bool branch_taken_0x16ba9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ba9c) {
            ctx->pc = 0x16BA84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16ba84;
        }
    }
    ctx->pc = 0x16BAA4u;
label_16baa4:
    // 0x16baa4: 0x0  nop
    ctx->pc = 0x16baa4u;
    // NOP
    // 0x16baa8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16baa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16baac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16baacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bab0: 0x3e00008  jr          $ra
    ctx->pc = 0x16BAB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BAB0u;
            // 0x16bab4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16BAB8u;
}
