#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PresetInfoAll__11CMenuEffectFi
// Address: 0x22fea0 - 0x22ff1c
void PresetInfoAll__11CMenuEffectFi_0x22fea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PresetInfoAll__11CMenuEffectFi_0x22fea0");
#endif

    switch (ctx->pc) {
        case 0x22feccu: goto label_22fecc;
        case 0x22fee4u: goto label_22fee4;
        default: break;
    }

    ctx->pc = 0x22fea0u;

    // 0x22fea0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22fea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22fea4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22fea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22fea8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22fea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22feac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22feacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22feb0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22feb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22feb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22feb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22feb8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22feb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22febc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22febcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22fec0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22fec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fec4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22FEC4u;
    {
        const bool branch_taken_0x22fec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FEC4u;
            // 0x22fec8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fec4) {
            ctx->pc = 0x22FEECu;
            goto label_22feec;
        }
    }
    ctx->pc = 0x22FECCu;
label_22fecc:
    // 0x22fecc: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x22feccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x22fed0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22fed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fed4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22fed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fed8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x22fed8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fedc: 0xc08bfc8  jal         func_22FF20
    ctx->pc = 0x22FEDCu;
    SET_GPR_U32(ctx, 31, 0x22FEE4u);
    ctx->pc = 0x22FEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FEDCu;
            // 0x22fee0: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FF20u;
    if (runtime->hasFunction(0x22FF20u)) {
        auto targetFn = runtime->lookupFunction(0x22FF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FEE4u; }
        if (ctx->pc != 0x22FEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PresetInfo__11CMenuEffectFP16MENU_EFFECT_INFOii_0x22ff20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FEE4u; }
        if (ctx->pc != 0x22FEE4u) { return; }
    }
    ctx->pc = 0x22FEE4u;
label_22fee4:
    // 0x22fee4: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x22fee4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x22fee8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22fee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_22feec:
    // 0x22feec: 0x0  nop
    ctx->pc = 0x22feecu;
    // NOP
    // 0x22fef0: 0x8663000c  lh          $v1, 0xC($s3)
    ctx->pc = 0x22fef0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x22fef4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x22fef4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22fef8: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x22FEF8u;
    {
        const bool branch_taken_0x22fef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fef8) {
            ctx->pc = 0x22FECCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22fecc;
        }
    }
    ctx->pc = 0x22FF00u;
    // 0x22ff00: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22ff00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22ff04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22ff04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22ff08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22ff08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ff0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22ff0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ff10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22ff10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ff14: 0x3e00008  jr          $ra
    ctx->pc = 0x22FF14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FF14u;
            // 0x22ff18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22FF1Cu;
}
