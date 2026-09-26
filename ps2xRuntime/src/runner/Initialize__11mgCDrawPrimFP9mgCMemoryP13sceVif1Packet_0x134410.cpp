#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet
// Address: 0x134410 - 0x13449c
void Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410");
#endif

    switch (ctx->pc) {
        case 0x134444u: goto label_134444;
        case 0x13447cu: goto label_13447c;
        case 0x134488u: goto label_134488;
        default: break;
    }

    ctx->pc = 0x134410u;

    // 0x134410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x134410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x134414: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x134414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x134418: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x134418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13441c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13441cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x134420: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x134420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134424: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x134424u;
    {
        const bool branch_taken_0x134424 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x134428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134424u;
            // 0x134428: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134424) {
            ctx->pc = 0x134434u;
            goto label_134434;
        }
    }
    ctx->pc = 0x13442Cu;
    // 0x13442c: 0x8f908774  lw          $s0, -0x788C($gp)
    ctx->pc = 0x13442cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
    // 0x134430: 0x0  nop
    ctx->pc = 0x134430u;
    // NOP
label_134434:
    // 0x134434: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x134434u;
    {
        const bool branch_taken_0x134434 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x134434) {
            ctx->pc = 0x134448u;
            goto label_134448;
        }
    }
    ctx->pc = 0x13443Cu;
    // 0x13443c: 0xc050840  jal         func_142100
    ctx->pc = 0x13443Cu;
    SET_GPR_U32(ctx, 31, 0x134444u);
    ctx->pc = 0x142100u;
    if (runtime->hasFunction(0x142100u)) {
        auto targetFn = runtime->lookupFunction(0x142100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134444u; }
        if (ctx->pc != 0x134444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetDataBuffer__Fv_0x142100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134444u; }
        if (ctx->pc != 0x134444u) { return; }
    }
    ctx->pc = 0x134444u;
label_134444:
    // 0x134444: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x134444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_134448:
    // 0x134448: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x134448u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x13444c: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x13444cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x134450: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x134450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x134454: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x134454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x134458: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x134458u;
    {
        const bool branch_taken_0x134458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13445Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134458u;
            // 0x13445c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134458) {
            ctx->pc = 0x134470u;
            goto label_134470;
        }
    }
    ctx->pc = 0x134460u;
    // 0x134460: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x134460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x134464: 0x244220e0  addiu       $v0, $v0, 0x20E0
    ctx->pc = 0x134464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8416));
    // 0x134468: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x134468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x13446c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13446cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_134470:
    // 0x134470: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x134470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x134474: 0xc04b12c  jal         func_12C4B0
    ctx->pc = 0x134474u;
    SET_GPR_U32(ctx, 31, 0x13447Cu);
    ctx->pc = 0x134478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134474u;
            // 0x134478: 0xae2200d0  sw          $v0, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C4B0u;
    if (runtime->hasFunction(0x12C4B0u)) {
        auto targetFn = runtime->lookupFunction(0x12C4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13447Cu; }
        if (ctx->pc != 0x13447Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10mgCTextureFv_0x12c4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13447Cu; }
        if (ctx->pc != 0x13447Cu) { return; }
    }
    ctx->pc = 0x13447Cu;
label_13447c:
    // 0x13447c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x13447cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x134480: 0xc04e22c  jal         func_1388B0
    ctx->pc = 0x134480u;
    SET_GPR_U32(ctx, 31, 0x134488u);
    ctx->pc = 0x134484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134480u;
            // 0x134484: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1388B0u;
    if (runtime->hasFunction(0x1388B0u)) {
        auto targetFn = runtime->lookupFunction(0x1388B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134488u; }
        if (ctx->pc != 0x134488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10mgCDrawEnvFi_0x1388b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134488u; }
        if (ctx->pc != 0x134488u) { return; }
    }
    ctx->pc = 0x134488u;
label_134488:
    // 0x134488: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x134488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13448c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13448cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134490: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x134490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134494: 0x3e00008  jr          $ra
    ctx->pc = 0x134494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134494u;
            // 0x134498: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13449Cu;
}
