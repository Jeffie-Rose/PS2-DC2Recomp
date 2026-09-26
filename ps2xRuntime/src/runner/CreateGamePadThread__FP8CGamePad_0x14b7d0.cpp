#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateGamePadThread__FP8CGamePad
// Address: 0x14b7d0 - 0x14b840
void CreateGamePadThread__FP8CGamePad_0x14b7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateGamePadThread__FP8CGamePad_0x14b7d0");
#endif

    switch (ctx->pc) {
        case 0x14b81cu: goto label_14b81c;
        case 0x14b830u: goto label_14b830;
        default: break;
    }

    ctx->pc = 0x14b7d0u;

    // 0x14b7d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14b7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14b7d4: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x14b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x14b7d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14b7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14b7dc: 0x2442b770  addiu       $v0, $v0, -0x4890
    ctx->pc = 0x14b7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948720));
    // 0x14b7e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14b7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14b7e4: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x14b7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x14b7e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14b7e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b7ec: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x14b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x14b7f0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x14b7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14b7f4: 0x2442b9c0  addiu       $v0, $v0, -0x4640
    ctx->pc = 0x14b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949312));
    // 0x14b7f8: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x14b7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x14b7fc: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x14b7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x14b800: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x14b800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x14b804: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x14b804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x14b808: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x14b808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14b80c: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x14b80cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x14b810: 0x27820000  addiu       $v0, $gp, 0x0
    ctx->pc = 0x14b810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 0));
    // 0x14b814: 0xc043fb8  jal         func_10FEE0
    ctx->pc = 0x14B814u;
    SET_GPR_U32(ctx, 31, 0x14B81Cu);
    ctx->pc = 0x14B818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B814u;
            // 0x14b818: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FEE0u;
    if (runtime->hasFunction(0x10FEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10FEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B81Cu; }
        if (ctx->pc != 0x14B81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateThread_0x10fee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B81Cu; }
        if (ctx->pc != 0x14B81Cu) { return; }
    }
    ctx->pc = 0x14B81Cu;
label_14b81c:
    // 0x14b81c: 0xaf8288d0  sw          $v0, -0x7730($gp)
    ctx->pc = 0x14b81cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936784), GPR_U32(ctx, 2));
    // 0x14b820: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14b820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b824: 0x8f8488d0  lw          $a0, -0x7730($gp)
    ctx->pc = 0x14b824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936784)));
    // 0x14b828: 0xc043fc0  jal         func_10FF00
    ctx->pc = 0x14B828u;
    SET_GPR_U32(ctx, 31, 0x14B830u);
    ctx->pc = 0x14B82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B828u;
            // 0x14b82c: 0xaf9088d4  sw          $s0, -0x772C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936788), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF00u;
    if (runtime->hasFunction(0x10FF00u)) {
        auto targetFn = runtime->lookupFunction(0x10FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B830u; }
        if (ctx->pc != 0x14B830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartThread_0x10ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B830u; }
        if (ctx->pc != 0x14B830u) { return; }
    }
    ctx->pc = 0x14B830u;
label_14b830:
    // 0x14b830: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14b830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b834: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14b834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b838: 0x3e00008  jr          $ra
    ctx->pc = 0x14B838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B838u;
            // 0x14b83c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B840u;
}
