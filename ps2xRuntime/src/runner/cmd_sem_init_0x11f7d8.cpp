#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: cmd_sem_init
// Address: 0x11f7d8 - 0x11f86c
void cmd_sem_init_0x11f7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cmd_sem_init_0x11f7d8");
#endif

    switch (ctx->pc) {
        case 0x11f82cu: goto label_11f82c;
        case 0x11f838u: goto label_11f838;
        case 0x11f848u: goto label_11f848;
        default: break;
    }

    ctx->pc = 0x11f7d8u;

    // 0x11f7d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11f7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11f7dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11f7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11f7e0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x11f7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x11f7e4: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x11f7e4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x11f7e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11f7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11f7ec: 0x8e221de8  lw          $v0, 0x1DE8($s1)
    ctx->pc = 0x11f7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7656)));
    // 0x11f7f0: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11F7F0u;
    {
        const bool branch_taken_0x11f7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11F7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F7F0u;
            // 0x11f7f4: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f7f0) {
            ctx->pc = 0x11F810u;
            goto label_11f810;
        }
    }
    ctx->pc = 0x11F7F8u;
    // 0x11f7f8: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x11f7f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x11f7fc: 0x8e021dec  lw          $v0, 0x1DEC($s0)
    ctx->pc = 0x11f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7660)));
    // 0x11f800: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x11F800u;
    {
        const bool branch_taken_0x11f800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11F804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F800u;
            // 0x11f804: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f800) {
            ctx->pc = 0x11F85Cu;
            goto label_11f85c;
        }
    }
    ctx->pc = 0x11F808u;
    // 0x11f808: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11F808u;
    {
        const bool branch_taken_0x11f808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F808u;
            // 0x11f80c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f808) {
            ctx->pc = 0x11F818u;
            goto label_11f818;
        }
    }
    ctx->pc = 0x11F810u;
label_11f810:
    // 0x11f810: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x11f810u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x11f814: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11f814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f818:
    // 0x11f818: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x11f818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x11f81c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x11f81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x11f820: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11f820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f824: 0xc044038  jal         func_1100E0
    ctx->pc = 0x11F824u;
    SET_GPR_U32(ctx, 31, 0x11F82Cu);
    ctx->pc = 0x11F828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F824u;
            // 0x11f828: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1100E0u;
    if (runtime->hasFunction(0x1100E0u)) {
        auto targetFn = runtime->lookupFunction(0x1100E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F82Cu; }
        if (ctx->pc != 0x11F82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x1100e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F82Cu; }
        if (ctx->pc != 0x11F82Cu) { return; }
    }
    ctx->pc = 0x11F82Cu;
label_11f82c:
    // 0x11f82c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11f82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f830: 0xc044038  jal         func_1100E0
    ctx->pc = 0x11F830u;
    SET_GPR_U32(ctx, 31, 0x11F838u);
    ctx->pc = 0x11F834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F830u;
            // 0x11f834: 0xae221de8  sw          $v0, 0x1DE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 7656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1100E0u;
    if (runtime->hasFunction(0x1100E0u)) {
        auto targetFn = runtime->lookupFunction(0x1100E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F838u; }
        if (ctx->pc != 0x11F838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x1100e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F838u; }
        if (ctx->pc != 0x11F838u) { return; }
    }
    ctx->pc = 0x11F838u;
label_11f838:
    // 0x11f838: 0xae021dec  sw          $v0, 0x1DEC($s0)
    ctx->pc = 0x11f838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7660), GPR_U32(ctx, 2));
    // 0x11f83c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11f83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f840: 0xc044038  jal         func_1100E0
    ctx->pc = 0x11F840u;
    SET_GPR_U32(ctx, 31, 0x11F848u);
    ctx->pc = 0x11F844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F840u;
            // 0x11f844: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1100E0u;
    if (runtime->hasFunction(0x1100E0u)) {
        auto targetFn = runtime->lookupFunction(0x1100E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F848u; }
        if (ctx->pc != 0x11F848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x1100e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F848u; }
        if (ctx->pc != 0x11F848u) { return; }
    }
    ctx->pc = 0x11F848u;
label_11f848:
    // 0x11f848: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x11f848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x11f84c: 0xac621de0  sw          $v0, 0x1DE0($v1)
    ctx->pc = 0x11f84cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7648), GPR_U32(ctx, 2));
    // 0x11f850: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11f850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x11f854: 0xac401df0  sw          $zero, 0x1DF0($v0)
    ctx->pc = 0x11f854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7664), GPR_U32(ctx, 0));
    // 0x11f858: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11f858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_11f85c:
    // 0x11f85c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x11f85cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f860: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x11f860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f864: 0x3e00008  jr          $ra
    ctx->pc = 0x11F864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F864u;
            // 0x11f868: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11F86Cu;
}
