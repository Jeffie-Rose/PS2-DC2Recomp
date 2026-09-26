#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__18CEventSpriteMotherFv
// Address: 0x2908a0 - 0x2908f8
void Step__18CEventSpriteMotherFv_0x2908a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__18CEventSpriteMotherFv_0x2908a0");
#endif

    switch (ctx->pc) {
        case 0x2908c0u: goto label_2908c0;
        case 0x2908c8u: goto label_2908c8;
        default: break;
    }

    ctx->pc = 0x2908a0u;

    // 0x2908a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2908a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2908a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2908a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2908a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2908a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2908ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2908acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2908b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2908b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2908b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2908b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2908b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2908b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2908bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2908bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2908c0:
    // 0x2908c0: 0xc0a40c8  jal         func_290320
    ctx->pc = 0x2908C0u;
    SET_GPR_U32(ctx, 31, 0x2908C8u);
    ctx->pc = 0x2908C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2908C0u;
            // 0x2908c4: 0x2512021  addu        $a0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290320u;
    if (runtime->hasFunction(0x290320u)) {
        auto targetFn = runtime->lookupFunction(0x290320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2908C8u; }
        if (ctx->pc != 0x2908C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__12CEventSpriteFv_0x290320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2908C8u; }
        if (ctx->pc != 0x2908C8u) { return; }
    }
    ctx->pc = 0x2908C8u;
label_2908c8:
    // 0x2908c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2908c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2908cc: 0x26310088  addiu       $s1, $s1, 0x88
    ctx->pc = 0x2908ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    // 0x2908d0: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x2908d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2908d4: 0x0  nop
    ctx->pc = 0x2908d4u;
    // NOP
    // 0x2908d8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2908D8u;
    {
        const bool branch_taken_0x2908d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2908d8) {
            ctx->pc = 0x2908C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2908c0;
        }
    }
    ctx->pc = 0x2908E0u;
    // 0x2908e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2908e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2908e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2908e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2908e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2908e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2908ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2908ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2908f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2908F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2908F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2908F0u;
            // 0x2908f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2908F8u;
}
