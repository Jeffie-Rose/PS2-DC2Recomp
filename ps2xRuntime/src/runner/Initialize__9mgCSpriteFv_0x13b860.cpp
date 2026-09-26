#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__9mgCSpriteFv
// Address: 0x13b860 - 0x13b8cc
void Initialize__9mgCSpriteFv_0x13b860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__9mgCSpriteFv_0x13b860");
#endif

    switch (ctx->pc) {
        case 0x13b88cu: goto label_13b88c;
        case 0x13b8b0u: goto label_13b8b0;
        default: break;
    }

    ctx->pc = 0x13b860u;

    // 0x13b860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13b860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13b864: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13b864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13b868: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13b868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13b86c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x13b86cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x13b870: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13b870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b874: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x13b874u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x13b878: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x13b878u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x13b87c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x13b87cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x13b880: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x13b880u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x13b884: 0xc04f9ec  jal         func_13E7B0
    ctx->pc = 0x13B884u;
    SET_GPR_U32(ctx, 31, 0x13B88Cu);
    ctx->pc = 0x13B888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B884u;
            // 0x13b888: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E7B0u;
    if (runtime->hasFunction(0x13E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x13E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B88Cu; }
        if (ctx->pc != 0x13B88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13mgCVisualAttrFv_0x13e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B88Cu; }
        if (ctx->pc != 0x13B88Cu) { return; }
    }
    ctx->pc = 0x13B88Cu;
label_13b88c:
    // 0x13b88c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x13b88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13b890: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x13b890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x13b894: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x13b894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x13b898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13b898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b89c: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x13b89cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x13b8a0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x13b8a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b8a4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x13b8a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b8a8: 0xc04ee34  jal         func_13B8D0
    ctx->pc = 0x13B8A8u;
    SET_GPR_U32(ctx, 31, 0x13B8B0u);
    ctx->pc = 0x13B8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B8A8u;
            // 0x13b8ac: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B8D0u;
    if (runtime->hasFunction(0x13B8D0u)) {
        auto targetFn = runtime->lookupFunction(0x13B8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B8B0u; }
        if (ctx->pc != 0x13B8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColor__9mgCSpriteFiiii_0x13b8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B8B0u; }
        if (ctx->pc != 0x13B8B0u) { return; }
    }
    ctx->pc = 0x13B8B0u;
label_13b8b0:
    // 0x13b8b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13b8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13b8b4: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x13b8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x13b8b8: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x13b8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x13b8bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13b8bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b8c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13b8c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b8c4: 0x3e00008  jr          $ra
    ctx->pc = 0x13B8C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B8C4u;
            // 0x13b8c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13B8CCu;
}
