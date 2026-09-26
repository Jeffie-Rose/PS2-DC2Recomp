#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ReturnMenuIntern__Fi
// Address: 0x234880 - 0x2348d0
void ReturnMenuIntern__Fi_0x234880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReturnMenuIntern__Fi_0x234880");
#endif

    switch (ctx->pc) {
        case 0x2348acu: goto label_2348ac;
        case 0x2348c0u: goto label_2348c0;
        default: break;
    }

    ctx->pc = 0x234880u;

    // 0x234880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x234880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x234884: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x234884u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x234888: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x234888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23488c: 0x27838320  addiu       $v1, $gp, -0x7CE0
    ctx->pc = 0x23488cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935328));
    // 0x234890: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x234890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x234894: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x234894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x234898: 0x8f8494dc  lw          $a0, -0x6B24($gp)
    ctx->pc = 0x234898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939868)));
    // 0x23489c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23489Cu;
    {
        const bool branch_taken_0x23489c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2348A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23489Cu;
            // 0x2348a0: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23489c) {
            ctx->pc = 0x2348ACu;
            goto label_2348ac;
        }
    }
    ctx->pc = 0x2348A4u;
    // 0x2348a4: 0xc08a240  jal         func_228900
    ctx->pc = 0x2348A4u;
    SET_GPR_U32(ctx, 31, 0x2348ACu);
    ctx->pc = 0x2348A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2348A4u;
            // 0x2348a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228900u;
    if (runtime->hasFunction(0x228900u)) {
        auto targetFn = runtime->lookupFunction(0x228900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2348ACu; }
        if (ctx->pc != 0x2348ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAction__16CMenuPosDataFormFPc_0x228900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2348ACu; }
        if (ctx->pc != 0x2348ACu) { return; }
    }
    ctx->pc = 0x2348ACu;
label_2348ac:
    // 0x2348ac: 0x8f8494e0  lw          $a0, -0x6B20($gp)
    ctx->pc = 0x2348acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939872)));
    // 0x2348b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2348B0u;
    {
        const bool branch_taken_0x2348b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2348B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2348B0u;
            // 0x2348b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2348b0) {
            ctx->pc = 0x2348C0u;
            goto label_2348c0;
        }
    }
    ctx->pc = 0x2348B8u;
    // 0x2348b8: 0xc08a240  jal         func_228900
    ctx->pc = 0x2348B8u;
    SET_GPR_U32(ctx, 31, 0x2348C0u);
    ctx->pc = 0x228900u;
    if (runtime->hasFunction(0x228900u)) {
        auto targetFn = runtime->lookupFunction(0x228900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2348C0u; }
        if (ctx->pc != 0x2348C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAction__16CMenuPosDataFormFPc_0x228900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2348C0u; }
        if (ctx->pc != 0x2348C0u) { return; }
    }
    ctx->pc = 0x2348C0u;
label_2348c0:
    // 0x2348c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2348c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2348c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2348c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2348c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2348C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2348CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2348C8u;
            // 0x2348cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2348D0u;
}
