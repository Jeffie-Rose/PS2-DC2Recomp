#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__13CDynamicAnimeFv
// Address: 0x17a2a0 - 0x17a358
void Initialize__13CDynamicAnimeFv_0x17a2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__13CDynamicAnimeFv_0x17a2a0");
#endif

    switch (ctx->pc) {
        case 0x17a304u: goto label_17a304;
        case 0x17a320u: goto label_17a320;
        default: break;
    }

    ctx->pc = 0x17a2a0u;

    // 0x17a2a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17a2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17a2a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17a2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17a2a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a2ac: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x17a2acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x17a2b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17a2b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a2b4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x17a2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x17a2b8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x17a2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x17a2bc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x17a2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x17a2c0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x17a2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x17a2c4: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x17a2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x17a2c8: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x17a2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x17a2cc: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x17a2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x17a2d0: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x17a2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x17a2d4: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x17a2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x17a2d8: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x17a2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x17a2dc: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x17a2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x17a2e0: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x17a2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x17a2e4: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x17a2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x17a2e8: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x17a2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x17a2ec: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x17a2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x17a2f0: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x17a2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x17a2f4: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x17a2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x17a2f8: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x17a2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x17a2fc: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x17A2FCu;
    SET_GPR_U32(ctx, 31, 0x17A304u);
    ctx->pc = 0x17A300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A2FCu;
            // 0x17a300: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A304u; }
        if (ctx->pc != 0x17A304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A304u; }
        if (ctx->pc != 0x17A304u) { return; }
    }
    ctx->pc = 0x17A304u;
label_17a304:
    // 0x17a304: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x17a304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
    // 0x17a308: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x17a308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x17a30c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x17a30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x17a310: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x17a310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x17a314: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x17a314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x17a318: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x17A318u;
    SET_GPR_U32(ctx, 31, 0x17A320u);
    ctx->pc = 0x17A31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A318u;
            // 0x17a31c: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A320u; }
        if (ctx->pc != 0x17A320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A320u; }
        if (ctx->pc != 0x17A320u) { return; }
    }
    ctx->pc = 0x17A320u;
label_17a320:
    // 0x17a320: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x17a320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x17a324: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x17a324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x17a328: 0x3465e69d  ori         $a1, $v1, 0xE69D
    ctx->pc = 0x17a328u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)59037);
    // 0x17a32c: 0xae050080  sw          $a1, 0x80($s0)
    ctx->pc = 0x17a32cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 5));
    // 0x17a330: 0x3c03c7c3  lui         $v1, 0xC7C3
    ctx->pc = 0x17a330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51139 << 16));
    // 0x17a334: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x17a334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x17a338: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x17a338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x17a33c: 0xae040064  sw          $a0, 0x64($s0)
    ctx->pc = 0x17a33cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
    // 0x17a340: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x17a340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x17a344: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x17a344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
    // 0x17a348: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17a348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a34c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a34cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a350: 0x3e00008  jr          $ra
    ctx->pc = 0x17A350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A350u;
            // 0x17a354: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A358u;
}
