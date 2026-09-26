#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetCharNo__5CRainFi
// Address: 0x282180 - 0x2821e8
void SetCharNo__5CRainFi_0x282180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCharNo__5CRainFi_0x282180");
#endif

    switch (ctx->pc) {
        case 0x2821acu: goto label_2821ac;
        case 0x2821b8u: goto label_2821b8;
        default: break;
    }

    ctx->pc = 0x282180u;

    // 0x282180: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x282180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x282184: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x282184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x282188: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x282188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28218c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28218cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x282190: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x282190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x282194: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x282194u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282198: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x282198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28219c: 0x14a3000b  bne         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x28219Cu;
    {
        const bool branch_taken_0x28219c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2821A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28219Cu;
            // 0x2821a0: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28219c) {
            ctx->pc = 0x2821CCu;
            goto label_2821cc;
        }
    }
    ctx->pc = 0x2821A4u;
    // 0x2821a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2821a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2821a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2821a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2821ac:
    // 0x2821ac: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x2821acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x2821b0: 0xc0a0738  jal         func_281CE0
    ctx->pc = 0x2821B0u;
    SET_GPR_U32(ctx, 31, 0x2821B8u);
    ctx->pc = 0x2821B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2821B0u;
            // 0x2821b4: 0x24446730  addiu       $a0, $v0, 0x6730 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281CE0u;
    if (runtime->hasFunction(0x281CE0u)) {
        auto targetFn = runtime->lookupFunction(0x281CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2821B8u; }
        if (ctx->pc != 0x2821B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9CParticleFv_0x281ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2821B8u; }
        if (ctx->pc != 0x2821B8u) { return; }
    }
    ctx->pc = 0x2821B8u;
label_2821b8:
    // 0x2821b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2821b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2821bc: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x2821bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x2821c0: 0x2a030064  slti        $v1, $s0, 0x64
    ctx->pc = 0x2821c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x2821c4: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2821C4u;
    {
        const bool branch_taken_0x2821c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2821c4) {
            ctx->pc = 0x2821ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2821ac;
        }
    }
    ctx->pc = 0x2821CCu;
label_2821cc:
    // 0x2821cc: 0x0  nop
    ctx->pc = 0x2821ccu;
    // NOP
    // 0x2821d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2821d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2821d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2821d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2821d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2821d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2821dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2821dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2821e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2821E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2821E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2821E0u;
            // 0x2821e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2821E8u;
}
