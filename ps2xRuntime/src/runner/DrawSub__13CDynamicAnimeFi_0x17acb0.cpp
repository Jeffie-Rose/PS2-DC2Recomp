#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawSub__13CDynamicAnimeFi
// Address: 0x17acb0 - 0x17ad4c
void DrawSub__13CDynamicAnimeFi_0x17acb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSub__13CDynamicAnimeFi_0x17acb0");
#endif

    switch (ctx->pc) {
        case 0x17acdcu: goto label_17acdc;
        case 0x17acecu: goto label_17acec;
        case 0x17acf4u: goto label_17acf4;
        case 0x17ad0cu: goto label_17ad0c;
        case 0x17ad14u: goto label_17ad14;
        default: break;
    }

    ctx->pc = 0x17acb0u;

    // 0x17acb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17acb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17acb4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17acb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17acb8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17acb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17acbc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17acbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17acc0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17acc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17acc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17acc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17acc8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17acc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17accc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17acccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17acd0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17acd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17acd4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x17ACD4u;
    {
        const bool branch_taken_0x17acd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ACD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ACD4u;
            // 0x17acd8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17acd4) {
            ctx->pc = 0x17AD1Cu;
            goto label_17ad1c;
        }
    }
    ctx->pc = 0x17ACDCu;
label_17acdc:
    // 0x17acdc: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x17ACDCu;
    {
        const bool branch_taken_0x17acdc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ACE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ACDCu;
            // 0x17ace0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17acdc) {
            ctx->pc = 0x17ACFCu;
            goto label_17acfc;
        }
    }
    ctx->pc = 0x17ACE4u;
    // 0x17ace4: 0xc05eae8  jal         func_17ABA0
    ctx->pc = 0x17ACE4u;
    SET_GPR_U32(ctx, 31, 0x17ACECu);
    ctx->pc = 0x17ACE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ACE4u;
            // 0x17ace8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17ABA0u;
    if (runtime->hasFunction(0x17ABA0u)) {
        auto targetFn = runtime->lookupFunction(0x17ABA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ACECu; }
        if (ctx->pc != 0x17ACECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawFrame__13CDynamicAnimeFi_0x17aba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ACECu; }
        if (ctx->pc != 0x17ACECu) { return; }
    }
    ctx->pc = 0x17ACECu;
label_17acec:
    // 0x17acec: 0xc050bf4  jal         func_142FD0
    ctx->pc = 0x17ACECu;
    SET_GPR_U32(ctx, 31, 0x17ACF4u);
    ctx->pc = 0x17ACF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ACECu;
            // 0x17acf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ACF4u; }
        if (ctx->pc != 0x17ACF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ACF4u; }
        if (ctx->pc != 0x17ACF4u) { return; }
    }
    ctx->pc = 0x17ACF4u;
label_17acf4:
    // 0x17acf4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17ACF4u;
    {
        const bool branch_taken_0x17acf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ACF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ACF4u;
            // 0x17acf8: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17acf4) {
            ctx->pc = 0x17AD18u;
            goto label_17ad18;
        }
    }
    ctx->pc = 0x17ACFCu;
label_17acfc:
    // 0x17acfc: 0x0  nop
    ctx->pc = 0x17acfcu;
    // NOP
    // 0x17ad00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17ad00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ad04: 0xc05eae8  jal         func_17ABA0
    ctx->pc = 0x17AD04u;
    SET_GPR_U32(ctx, 31, 0x17AD0Cu);
    ctx->pc = 0x17AD08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AD04u;
            // 0x17ad08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17ABA0u;
    if (runtime->hasFunction(0x17ABA0u)) {
        auto targetFn = runtime->lookupFunction(0x17ABA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AD0Cu; }
        if (ctx->pc != 0x17AD0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawFrame__13CDynamicAnimeFi_0x17aba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AD0Cu; }
        if (ctx->pc != 0x17AD0Cu) { return; }
    }
    ctx->pc = 0x17AD0Cu;
label_17ad0c:
    // 0x17ad0c: 0xc050be4  jal         func_142F90
    ctx->pc = 0x17AD0Cu;
    SET_GPR_U32(ctx, 31, 0x17AD14u);
    ctx->pc = 0x17AD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AD0Cu;
            // 0x17ad10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142F90u;
    if (runtime->hasFunction(0x142F90u)) {
        auto targetFn = runtime->lookupFunction(0x142F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AD14u; }
        if (ctx->pc != 0x17AD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDraw__FP8mgCFrame_0x142f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AD14u; }
        if (ctx->pc != 0x17AD14u) { return; }
    }
    ctx->pc = 0x17AD14u;
label_17ad14:
    // 0x17ad14: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x17ad14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_17ad18:
    // 0x17ad18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17ad18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_17ad1c:
    // 0x17ad1c: 0x0  nop
    ctx->pc = 0x17ad1cu;
    // NOP
    // 0x17ad20: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x17ad20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x17ad24: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x17ad24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17ad28: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x17AD28u;
    {
        const bool branch_taken_0x17ad28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AD28u;
            // 0x17ad2c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ad28) {
            ctx->pc = 0x17ACDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17acdc;
        }
    }
    ctx->pc = 0x17AD30u;
    // 0x17ad30: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17ad30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17ad34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17ad34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ad38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17ad38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ad3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17ad3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ad40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17ad40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ad44: 0x3e00008  jr          $ra
    ctx->pc = 0x17AD44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AD44u;
            // 0x17ad48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17AD4Cu;
}
