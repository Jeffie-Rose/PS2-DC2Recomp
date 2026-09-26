#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_GET_PRIZE__FP12RS_STACKDATAi
// Address: 0x276440 - 0x2764c8
void ps2__SPHIDA_GET_PRIZE__FP12RS_STACKDATAi_0x276440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_GET_PRIZE__FP12RS_STACKDATAi_0x276440");
#endif

    switch (ctx->pc) {
        case 0x276480u: goto label_276480;
        case 0x276494u: goto label_276494;
        case 0x2764a4u: goto label_2764a4;
        case 0x2764b0u: goto label_2764b0;
        default: break;
    }

    ctx->pc = 0x276440u;

    // 0x276440: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x276440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x276444: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x276444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x276448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x276448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27644c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27644cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x276450: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x276450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x276454: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x276454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x276458: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x276458u;
    {
        const bool branch_taken_0x276458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27645Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276458u;
            // 0x27645c: 0x24500014  addiu       $s0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276458) {
            ctx->pc = 0x276468u;
            goto label_276468;
        }
    }
    ctx->pc = 0x276460u;
    // 0x276460: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x276460u;
    {
        const bool branch_taken_0x276460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276460u;
            // 0x276464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276460) {
            ctx->pc = 0x2764B4u;
            goto label_2764b4;
        }
    }
    ctx->pc = 0x276468u;
label_276468:
    // 0x276468: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x276468u;
    {
        const bool branch_taken_0x276468 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x27646Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276468u;
            // 0x27646c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276468) {
            ctx->pc = 0x276478u;
            goto label_276478;
        }
    }
    ctx->pc = 0x276470u;
    // 0x276470: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x276470u;
    {
        const bool branch_taken_0x276470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276470u;
            // 0x276474: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276470) {
            ctx->pc = 0x2764B4u;
            goto label_2764b4;
        }
    }
    ctx->pc = 0x276478u;
label_276478:
    // 0x276478: 0xc097e18  jal         func_25F860
    ctx->pc = 0x276478u;
    SET_GPR_U32(ctx, 31, 0x276480u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276480u; }
        if (ctx->pc != 0x276480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276480u; }
        if (ctx->pc != 0x276480u) { return; }
    }
    ctx->pc = 0x276480u;
label_276480:
    // 0x276480: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276484: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x276484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276488: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x276488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x27648c: 0xc0be5d8  jal         func_2F9760
    ctx->pc = 0x27648Cu;
    SET_GPR_U32(ctx, 31, 0x276494u);
    ctx->pc = 0x276490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27648Cu;
            // 0x276490: 0x27a7003c  addiu       $a3, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9760u;
    if (runtime->hasFunction(0x2F9760u)) {
        auto targetFn = runtime->lookupFunction(0x2F9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276494u; }
        if (ctx->pc != 0x276494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSphedaPrize__16CDngFloorManagerFiPiPi_0x2f9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276494u; }
        if (ctx->pc != 0x276494u) { return; }
    }
    ctx->pc = 0x276494u;
label_276494:
    // 0x276494: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x276494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x276498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x276498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27649c: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27649Cu;
    SET_GPR_U32(ctx, 31, 0x2764A4u);
    ctx->pc = 0x2764A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27649Cu;
            // 0x2764a0: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2764A4u; }
        if (ctx->pc != 0x2764A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2764A4u; }
        if (ctx->pc != 0x2764A4u) { return; }
    }
    ctx->pc = 0x2764A4u;
label_2764a4:
    // 0x2764a4: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x2764a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2764a8: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x2764A8u;
    SET_GPR_U32(ctx, 31, 0x2764B0u);
    ctx->pc = 0x2764ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2764A8u;
            // 0x2764ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2764B0u; }
        if (ctx->pc != 0x2764B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2764B0u; }
        if (ctx->pc != 0x2764B0u) { return; }
    }
    ctx->pc = 0x2764B0u;
label_2764b0:
    // 0x2764b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2764b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2764b4:
    // 0x2764b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2764b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2764b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2764b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2764bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2764bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2764c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2764C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2764C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2764C0u;
            // 0x2764c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2764C8u;
}
