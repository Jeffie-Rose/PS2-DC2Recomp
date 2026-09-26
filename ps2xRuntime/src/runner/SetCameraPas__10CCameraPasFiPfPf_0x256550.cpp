#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetCameraPas__10CCameraPasFiPfPf
// Address: 0x256550 - 0x2565ac
void SetCameraPas__10CCameraPasFiPfPf_0x256550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCameraPas__10CCameraPasFiPfPf_0x256550");
#endif

    switch (ctx->pc) {
        case 0x256588u: goto label_256588;
        case 0x256594u: goto label_256594;
        default: break;
    }

    ctx->pc = 0x256550u;

    // 0x256550: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x256550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x256554: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x256554u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x256558: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x256558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25655c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25655cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x256560: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x256560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x256564: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x256564u;
    {
        const bool branch_taken_0x256564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256564u;
            // 0x256568: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256564) {
            ctx->pc = 0x256574u;
            goto label_256574;
        }
    }
    ctx->pc = 0x25656Cu;
    // 0x25656c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25656Cu;
    {
        const bool branch_taken_0x25656c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25656Cu;
            // 0x256570: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25656c) {
            ctx->pc = 0x256598u;
            goto label_256598;
        }
    }
    ctx->pc = 0x256574u;
label_256574:
    // 0x256574: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x256574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x256578: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x256578u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25657c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x25657cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256580: 0xc041c5c  jal         func_107170
    ctx->pc = 0x256580u;
    SET_GPR_U32(ctx, 31, 0x256588u);
    ctx->pc = 0x256584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256580u;
            // 0x256584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256588u; }
        if (ctx->pc != 0x256588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256588u; }
        if (ctx->pc != 0x256588u) { return; }
    }
    ctx->pc = 0x256588u;
label_256588:
    // 0x256588: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x256588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x25658c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25658Cu;
    SET_GPR_U32(ctx, 31, 0x256594u);
    ctx->pc = 0x256590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25658Cu;
            // 0x256590: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256594u; }
        if (ctx->pc != 0x256594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256594u; }
        if (ctx->pc != 0x256594u) { return; }
    }
    ctx->pc = 0x256594u;
label_256594:
    // 0x256594: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x256594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256598:
    // 0x256598: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x256598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25659c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25659cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2565a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2565a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2565a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2565A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2565A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2565A4u;
            // 0x2565a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2565ACu;
}
