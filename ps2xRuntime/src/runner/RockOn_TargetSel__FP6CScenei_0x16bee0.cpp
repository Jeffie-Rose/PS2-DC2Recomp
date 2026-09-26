#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RockOn_TargetSel__FP6CScenei
// Address: 0x16bee0 - 0x16c018
void RockOn_TargetSel__FP6CScenei_0x16bee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RockOn_TargetSel__FP6CScenei_0x16bee0");
#endif

    switch (ctx->pc) {
        case 0x16bf0cu: goto label_16bf0c;
        case 0x16bf2cu: goto label_16bf2c;
        case 0x16bf98u: goto label_16bf98;
        case 0x16bfa0u: goto label_16bfa0;
        default: break;
    }

    ctx->pc = 0x16bee0u;

    // 0x16bee0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16bee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16bee4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16bee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16bee8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16bee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16beec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16beecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16bef0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16bef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16bef4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16bef4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bef8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16bef8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16befc: 0x12220024  beq         $s1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x16BEFCu;
    {
        const bool branch_taken_0x16befc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x16BF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BEFCu;
            // 0x16bf00: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16befc) {
            ctx->pc = 0x16BF90u;
            goto label_16bf90;
        }
    }
    ctx->pc = 0x16BF04u;
    // 0x16bf04: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x16bf04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x16bf08: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16bf08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16bf0c:
    // 0x16bf0c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16bf0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x16bf10: 0x2a220030  slti        $v0, $s1, 0x30
    ctx->pc = 0x16bf10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x16bf14: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16BF14u;
    {
        const bool branch_taken_0x16bf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16bf14) {
            ctx->pc = 0x16BF20u;
            goto label_16bf20;
        }
    }
    ctx->pc = 0x16BF1Cu;
    // 0x16bf1c: 0x24110018  addiu       $s1, $zero, 0x18
    ctx->pc = 0x16bf1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_16bf20:
    // 0x16bf20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16bf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bf24: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x16BF24u;
    SET_GPR_U32(ctx, 31, 0x16BF2Cu);
    ctx->pc = 0x16BF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BF24u;
            // 0x16bf28: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BF2Cu; }
        if (ctx->pc != 0x16BF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BF2Cu; }
        if (ctx->pc != 0x16BF2Cu) { return; }
    }
    ctx->pc = 0x16BF2Cu;
label_16bf2c:
    // 0x16bf2c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x16BF2Cu;
    {
        const bool branch_taken_0x16bf2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bf2c) {
            ctx->pc = 0x16BF78u;
            goto label_16bf78;
        }
    }
    ctx->pc = 0x16BF34u;
    // 0x16bf34: 0x8444068a  lh          $a0, 0x68A($v0)
    ctx->pc = 0x16bf34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1674)));
    // 0x16bf38: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16bf38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16bf3c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x16BF3Cu;
    {
        const bool branch_taken_0x16bf3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16bf3c) {
            ctx->pc = 0x16BF78u;
            goto label_16bf78;
        }
    }
    ctx->pc = 0x16BF44u;
    // 0x16bf44: 0x8c431330  lw          $v1, 0x1330($v0)
    ctx->pc = 0x16bf44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4912)));
    // 0x16bf48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16bf48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16bf4c: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x16BF4Cu;
    {
        const bool branch_taken_0x16bf4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x16bf4c) {
            ctx->pc = 0x16BF78u;
            goto label_16bf78;
        }
    }
    ctx->pc = 0x16BF54u;
    // 0x16bf54: 0x84430730  lh          $v1, 0x730($v0)
    ctx->pc = 0x16bf54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1840)));
    // 0x16bf58: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16BF58u;
    {
        const bool branch_taken_0x16bf58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x16bf58) {
            ctx->pc = 0x16BF78u;
            goto label_16bf78;
        }
    }
    ctx->pc = 0x16BF60u;
    // 0x16bf60: 0x8c421348  lw          $v0, 0x1348($v0)
    ctx->pc = 0x16bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4936)));
    // 0x16bf64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16bf64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x16bf68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16BF68u;
    {
        const bool branch_taken_0x16bf68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BF68u;
            // 0x16bf6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bf68) {
            ctx->pc = 0x16BF78u;
            goto label_16bf78;
        }
    }
    ctx->pc = 0x16BF70u;
    // 0x16bf70: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x16BF70u;
    {
        const bool branch_taken_0x16bf70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BF70u;
            // 0x16bf74: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bf70) {
            ctx->pc = 0x16C004u;
            goto label_16c004;
        }
    }
    ctx->pc = 0x16BF78u;
label_16bf78:
    // 0x16bf78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16bf78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16bf7c: 0x2a020018  slti        $v0, $s0, 0x18
    ctx->pc = 0x16bf7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x16bf80: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x16BF80u;
    {
        const bool branch_taken_0x16bf80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BF80u;
            // 0x16bf84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bf80) {
            ctx->pc = 0x16BF0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16bf0c;
        }
    }
    ctx->pc = 0x16BF88u;
    // 0x16bf88: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x16BF88u;
    {
        const bool branch_taken_0x16bf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bf88) {
            ctx->pc = 0x16C000u;
            goto label_16c000;
        }
    }
    ctx->pc = 0x16BF90u;
label_16bf90:
    // 0x16bf90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16bf90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bf94: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x16bf94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_16bf98:
    // 0x16bf98: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x16BF98u;
    SET_GPR_U32(ctx, 31, 0x16BFA0u);
    ctx->pc = 0x16BF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BF98u;
            // 0x16bf9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BFA0u; }
        if (ctx->pc != 0x16BFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BFA0u; }
        if (ctx->pc != 0x16BFA0u) { return; }
    }
    ctx->pc = 0x16BFA0u;
label_16bfa0:
    // 0x16bfa0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x16BFA0u;
    {
        const bool branch_taken_0x16bfa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bfa0) {
            ctx->pc = 0x16BFECu;
            goto label_16bfec;
        }
    }
    ctx->pc = 0x16BFA8u;
    // 0x16bfa8: 0x8444068a  lh          $a0, 0x68A($v0)
    ctx->pc = 0x16bfa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1674)));
    // 0x16bfac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16bfacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16bfb0: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x16BFB0u;
    {
        const bool branch_taken_0x16bfb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16bfb0) {
            ctx->pc = 0x16BFECu;
            goto label_16bfec;
        }
    }
    ctx->pc = 0x16BFB8u;
    // 0x16bfb8: 0x8c431330  lw          $v1, 0x1330($v0)
    ctx->pc = 0x16bfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4912)));
    // 0x16bfbc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16bfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16bfc0: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x16BFC0u;
    {
        const bool branch_taken_0x16bfc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x16bfc0) {
            ctx->pc = 0x16BFECu;
            goto label_16bfec;
        }
    }
    ctx->pc = 0x16BFC8u;
    // 0x16bfc8: 0x84430730  lh          $v1, 0x730($v0)
    ctx->pc = 0x16bfc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1840)));
    // 0x16bfcc: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16BFCCu;
    {
        const bool branch_taken_0x16bfcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x16bfcc) {
            ctx->pc = 0x16BFECu;
            goto label_16bfec;
        }
    }
    ctx->pc = 0x16BFD4u;
    // 0x16bfd4: 0x8c421348  lw          $v0, 0x1348($v0)
    ctx->pc = 0x16bfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4936)));
    // 0x16bfd8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16bfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x16bfdc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16BFDCu;
    {
        const bool branch_taken_0x16bfdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BFDCu;
            // 0x16bfe0: 0x26020018  addiu       $v0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bfdc) {
            ctx->pc = 0x16BFECu;
            goto label_16bfec;
        }
    }
    ctx->pc = 0x16BFE4u;
    // 0x16bfe4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16BFE4u;
    {
        const bool branch_taken_0x16bfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bfe4) {
            ctx->pc = 0x16C000u;
            goto label_16c000;
        }
    }
    ctx->pc = 0x16BFECu;
label_16bfec:
    // 0x16bfec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16bfecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16bff0: 0x2a020018  slti        $v0, $s0, 0x18
    ctx->pc = 0x16bff0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x16bff4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x16BFF4u;
    {
        const bool branch_taken_0x16bff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BFF4u;
            // 0x16bff8: 0x26050018  addiu       $a1, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bff4) {
            ctx->pc = 0x16BF98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16bf98;
        }
    }
    ctx->pc = 0x16BFFCu;
    // 0x16bffc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16bffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16c000:
    // 0x16c000: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16c000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16c004:
    // 0x16c004: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16c004u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c008: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16c008u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c00c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16c00cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c010: 0x3e00008  jr          $ra
    ctx->pc = 0x16C010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C010u;
            // 0x16c014: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16C018u;
}
