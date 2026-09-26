#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: VSync2
// Address: 0x110600 - 0x1106a4
void VSync2_0x110600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("VSync2_0x110600");
#endif

    switch (ctx->pc) {
        case 0x110618u: goto label_110618;
        case 0x110620u: goto label_110620;
        case 0x110644u: goto label_110644;
        case 0x110650u: goto label_110650;
        case 0x110674u: goto label_110674;
        case 0x110694u: goto label_110694;
        default: break;
    }

    ctx->pc = 0x110600u;

    // 0x110600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x110600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x110604: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x110604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x110608: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x110608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11060c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11060cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x110610: 0xc044114  jal         func_110450
    ctx->pc = 0x110610u;
    SET_GPR_U32(ctx, 31, 0x110618u);
    ctx->pc = 0x110614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110610u;
            // 0x110614: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
    ctx->pc = 0x110450u;
    if (runtime->hasFunction(0x110450u)) {
        auto targetFn = runtime->lookupFunction(0x110450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110618u; }
        if (ctx->pc != 0x110618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVSyncFlag_0x110450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110618u; }
        if (ctx->pc != 0x110618u) { return; }
    }
    ctx->pc = 0x110618u;
label_110618:
    // 0x110618: 0xc0462f8  jal         func_118BE0
    ctx->pc = 0x110618u;
    SET_GPR_U32(ctx, 31, 0x110620u);
    ctx->pc = 0x118BE0u;
    if (runtime->hasFunction(0x118BE0u)) {
        auto targetFn = runtime->lookupFunction(0x118BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110620u; }
        if (ctx->pc != 0x110620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x118be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110620u; }
        if (ctx->pc != 0x110620u) { return; }
    }
    ctx->pc = 0x110620u;
label_110620:
    // 0x110620: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x110620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x110624: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x110624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x110628: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x110628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x11062c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x11062cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x110630: 0xf  sync
    ctx->pc = 0x110630u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x110634: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x110634u;
    {
        const bool branch_taken_0x110634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110634u;
            // 0x110638: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110634) {
            ctx->pc = 0x110648u;
            goto label_110648;
        }
    }
    ctx->pc = 0x11063Cu;
    // 0x11063c: 0xc04630a  jal         func_118C28
    ctx->pc = 0x11063Cu;
    SET_GPR_U32(ctx, 31, 0x110644u);
    ctx->pc = 0x118C28u;
    if (runtime->hasFunction(0x118C28u)) {
        auto targetFn = runtime->lookupFunction(0x118C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110644u; }
        if (ctx->pc != 0x110644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x118c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110644u; }
        if (ctx->pc != 0x110644u) { return; }
    }
    ctx->pc = 0x110644u;
label_110644:
    // 0x110644: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x110644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_110648:
    // 0x110648: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x110648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x11064c: 0x0  nop
    ctx->pc = 0x11064cu;
    // NOP
label_110650:
    // 0x110650: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x110650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110654: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x110654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x110658: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x110658u;
    {
        const bool branch_taken_0x110658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110658) {
            ctx->pc = 0x11066Cu;
            goto label_11066c;
        }
    }
    ctx->pc = 0x110660u;
    // 0x110660: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x110660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110664: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x110664u;
    {
        const bool branch_taken_0x110664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x110664) {
            ctx->pc = 0x110650u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_110650;
        }
    }
    ctx->pc = 0x11066Cu;
label_11066c:
    // 0x11066c: 0xc0462f8  jal         func_118BE0
    ctx->pc = 0x11066Cu;
    SET_GPR_U32(ctx, 31, 0x110674u);
    ctx->pc = 0x118BE0u;
    if (runtime->hasFunction(0x118BE0u)) {
        auto targetFn = runtime->lookupFunction(0x118BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110674u; }
        if (ctx->pc != 0x110674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x118be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110674u; }
        if (ctx->pc != 0x110674u) { return; }
    }
    ctx->pc = 0x110674u;
label_110674:
    // 0x110674: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x110674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x110678: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x110678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11067c: 0xac23f000  sw          $v1, -0x1000($at)
    ctx->pc = 0x11067cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963200), GPR_U32(ctx, 3));
    // 0x110680: 0xf  sync
    ctx->pc = 0x110680u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x110684: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x110684u;
    {
        const bool branch_taken_0x110684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x110684) {
            ctx->pc = 0x110694u;
            goto label_110694;
        }
    }
    ctx->pc = 0x11068Cu;
    // 0x11068c: 0xc04630a  jal         func_118C28
    ctx->pc = 0x11068Cu;
    SET_GPR_U32(ctx, 31, 0x110694u);
    ctx->pc = 0x118C28u;
    if (runtime->hasFunction(0x118C28u)) {
        auto targetFn = runtime->lookupFunction(0x118C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110694u; }
        if (ctx->pc != 0x110694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x118c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110694u; }
        if (ctx->pc != 0x110694u) { return; }
    }
    ctx->pc = 0x110694u;
label_110694:
    // 0x110694: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x110694u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x110698: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x110698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11069c: 0x3e00008  jr          $ra
    ctx->pc = 0x11069Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1106A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11069Cu;
            // 0x1106a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1106A4u;
}
