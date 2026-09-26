#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: VSync
// Address: 0x110570 - 0x110600
void VSync_0x110570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("VSync_0x110570");
#endif

    switch (ctx->pc) {
        case 0x110580u: goto label_110580;
        case 0x1105a4u: goto label_1105a4;
        case 0x1105b0u: goto label_1105b0;
        case 0x1105d4u: goto label_1105d4;
        default: break;
    }

    ctx->pc = 0x110570u;

    // 0x110570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110578: 0xc0462f8  jal         func_118BE0
    ctx->pc = 0x110578u;
    SET_GPR_U32(ctx, 31, 0x110580u);
    ctx->pc = 0x118BE0u;
    if (runtime->hasFunction(0x118BE0u)) {
        auto targetFn = runtime->lookupFunction(0x118BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110580u; }
        if (ctx->pc != 0x110580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x118be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110580u; }
        if (ctx->pc != 0x110580u) { return; }
    }
    ctx->pc = 0x110580u;
label_110580:
    // 0x110580: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x110580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x110584: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x110584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x110588: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x110588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x11058c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x11058cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x110590: 0xf  sync
    ctx->pc = 0x110590u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x110594: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x110594u;
    {
        const bool branch_taken_0x110594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110594u;
            // 0x110598: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110594) {
            ctx->pc = 0x1105A8u;
            goto label_1105a8;
        }
    }
    ctx->pc = 0x11059Cu;
    // 0x11059c: 0xc04630a  jal         func_118C28
    ctx->pc = 0x11059Cu;
    SET_GPR_U32(ctx, 31, 0x1105A4u);
    ctx->pc = 0x118C28u;
    if (runtime->hasFunction(0x118C28u)) {
        auto targetFn = runtime->lookupFunction(0x118C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1105A4u; }
        if (ctx->pc != 0x1105A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x118c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1105A4u; }
        if (ctx->pc != 0x1105A4u) { return; }
    }
    ctx->pc = 0x1105A4u;
label_1105a4:
    // 0x1105a4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1105a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1105a8:
    // 0x1105a8: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x1105a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x1105ac: 0x0  nop
    ctx->pc = 0x1105acu;
    // NOP
label_1105b0:
    // 0x1105b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1105b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1105b4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1105b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1105b8: 0x0  nop
    ctx->pc = 0x1105b8u;
    // NOP
    // 0x1105bc: 0x0  nop
    ctx->pc = 0x1105bcu;
    // NOP
    // 0x1105c0: 0x0  nop
    ctx->pc = 0x1105c0u;
    // NOP
    // 0x1105c4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1105C4u;
    {
        const bool branch_taken_0x1105c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1105c4) {
            ctx->pc = 0x1105B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1105b0;
        }
    }
    ctx->pc = 0x1105CCu;
    // 0x1105cc: 0xc0462f8  jal         func_118BE0
    ctx->pc = 0x1105CCu;
    SET_GPR_U32(ctx, 31, 0x1105D4u);
    ctx->pc = 0x118BE0u;
    if (runtime->hasFunction(0x118BE0u)) {
        auto targetFn = runtime->lookupFunction(0x118BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1105D4u; }
        if (ctx->pc != 0x1105D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x118be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1105D4u; }
        if (ctx->pc != 0x1105D4u) { return; }
    }
    ctx->pc = 0x1105D4u;
label_1105d4:
    // 0x1105d4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1105d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1105d8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1105d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1105dc: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x1105dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x1105e0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1105e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1105e4: 0xf  sync
    ctx->pc = 0x1105e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1105e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1105E8u;
    {
        const bool branch_taken_0x1105e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1105ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1105E8u;
            // 0x1105ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1105e8) {
            ctx->pc = 0x1105F8u;
            goto label_1105f8;
        }
    }
    ctx->pc = 0x1105F0u;
    // 0x1105f0: 0x804630a  j           func_118C28
    ctx->pc = 0x1105F0u;
    ctx->pc = 0x1105F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1105F0u;
            // 0x1105f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118C28u;
    if (runtime->hasFunction(0x118C28u)) {
        auto targetFn = runtime->lookupFunction(0x118C28u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        EIntr_0x118c28(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1105F8u;
label_1105f8:
    // 0x1105f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1105F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1105FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1105F8u;
            // 0x1105fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110600u;
}
