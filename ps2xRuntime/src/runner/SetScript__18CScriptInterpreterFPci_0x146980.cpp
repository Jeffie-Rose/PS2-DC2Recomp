#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetScript__18CScriptInterpreterFPci
// Address: 0x146980 - 0x1469f0
void SetScript__18CScriptInterpreterFPci_0x146980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetScript__18CScriptInterpreterFPci_0x146980");
#endif

    switch (ctx->pc) {
        case 0x1469b8u: goto label_1469b8;
        case 0x1469e0u: goto label_1469e0;
        default: break;
    }

    ctx->pc = 0x146980u;

    // 0x146980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x146984: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x146984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x146988: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x146988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14698c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x14698cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x146990: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x146990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146994: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x146994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x146998: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x146998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x14699c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x14699cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1469a0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1469a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1469a4: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1469a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1469a8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1469a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1469ac: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1469acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1469b0: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x1469B0u;
    SET_GPR_U32(ctx, 31, 0x1469B8u);
    ctx->pc = 0x1469B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1469B0u;
            // 0x1469b4: 0x24a52718  addiu       $a1, $a1, 0x2718 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1469B8u; }
        if (ctx->pc != 0x1469B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1469B8u; }
        if (ctx->pc != 0x1469B8u) { return; }
    }
    ctx->pc = 0x1469B8u;
label_1469b8:
    // 0x1469b8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1469B8u;
    {
        const bool branch_taken_0x1469b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1469BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1469B8u;
            // 0x1469bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1469b8) {
            ctx->pc = 0x1469D8u;
            goto label_1469d8;
        }
    }
    ctx->pc = 0x1469C0u;
    // 0x1469c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1469c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1469c4: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1469c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x1469c8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1469c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1469cc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1469ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1469d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1469D0u;
    {
        const bool branch_taken_0x1469d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1469D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1469D0u;
            // 0x1469d4: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1469d0) {
            ctx->pc = 0x1469E0u;
            goto label_1469e0;
        }
    }
    ctx->pc = 0x1469D8u;
label_1469d8:
    // 0x1469d8: 0xc051cd4  jal         func_147350
    ctx->pc = 0x1469D8u;
    SET_GPR_U32(ctx, 31, 0x1469E0u);
    ctx->pc = 0x147350u;
    if (runtime->hasFunction(0x147350u)) {
        auto targetFn = runtime->lookupFunction(0x147350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1469E0u; }
        if (ctx->pc != 0x1469E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PreProcess__FR9input_str_0x147350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1469E0u; }
        if (ctx->pc != 0x1469E0u) { return; }
    }
    ctx->pc = 0x1469E0u;
label_1469e0:
    // 0x1469e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1469e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1469e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1469e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1469e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1469E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1469ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1469E8u;
            // 0x1469ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1469F0u;
}
