#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Generate__14CRepairManagerFii
// Address: 0x22de50 - 0x22df58
void Generate__14CRepairManagerFii_0x22de50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Generate__14CRepairManagerFii_0x22de50");
#endif

    switch (ctx->pc) {
        case 0x22de84u: goto label_22de84;
        case 0x22dee4u: goto label_22dee4;
        case 0x22def0u: goto label_22def0;
        case 0x22df10u: goto label_22df10;
        case 0x22df38u: goto label_22df38;
        default: break;
    }

    ctx->pc = 0x22de50u;

    // 0x22de50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22de50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22de54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22de54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x22de58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22de58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x22de5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22de5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22de60: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x22de60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22de64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22de64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22de68: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22de68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22de6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22de6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22de70: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22de70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22de74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22de74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22de78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22de78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22de7c: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x22de7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22de80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22de80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22de84:
    // 0x22de84: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x22de84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x22de88: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x22de88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x22de8c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22DE8Cu;
    {
        const bool branch_taken_0x22de8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22de8c) {
            ctx->pc = 0x22DE9Cu;
            goto label_22de9c;
        }
    }
    ctx->pc = 0x22DE94u;
    // 0x22de94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22DE94u;
    {
        const bool branch_taken_0x22de94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DE94u;
            // 0x22de98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22de94) {
            ctx->pc = 0x22DEACu;
            goto label_22deac;
        }
    }
    ctx->pc = 0x22DE9Cu;
label_22de9c:
    // 0x22de9c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x22de9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x22dea0: 0x28830008  slti        $v1, $a0, 0x8
    ctx->pc = 0x22dea0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x22dea4: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x22DEA4u;
    {
        const bool branch_taken_0x22dea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DEA4u;
            // 0x22dea8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dea4) {
            ctx->pc = 0x22DE84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22de84;
        }
    }
    ctx->pc = 0x22DEACu;
label_22deac:
    // 0x22deac: 0x0  nop
    ctx->pc = 0x22deacu;
    // NOP
    // 0x22deb0: 0x200082a  slt         $at, $s0, $zero
    ctx->pc = 0x22deb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x22deb4: 0x14200020  bnez        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x22DEB4u;
    {
        const bool branch_taken_0x22deb4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x22deb4) {
            ctx->pc = 0x22DF38u;
            goto label_22df38;
        }
    }
    ctx->pc = 0x22DEBCu;
    // 0x22debc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x22debcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x22dec0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x22dec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22dec4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x22dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x22dec8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x22dec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x22decc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x22deccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x22ded0: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x22ded0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x22ded4: 0x24510024  addiu       $s1, $v0, 0x24
    ctx->pc = 0x22ded4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x22ded8: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x22ded8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x22dedc: 0xc04e748  jal         func_139D20
    ctx->pc = 0x22DEDCu;
    SET_GPR_U32(ctx, 31, 0x22DEE4u);
    ctx->pc = 0x22DEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DEDCu;
            // 0x22dee0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DEE4u; }
        if (ctx->pc != 0x22DEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DEE4u; }
        if (ctx->pc != 0x22DEE4u) { return; }
    }
    ctx->pc = 0x22DEE4u;
label_22dee4:
    // 0x22dee4: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x22dee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x22dee8: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x22DEE8u;
    SET_GPR_U32(ctx, 31, 0x22DEF0u);
    ctx->pc = 0x22DEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DEE8u;
            // 0x22deec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DEF0u; }
        if (ctx->pc != 0x22DEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DEF0u; }
        if (ctx->pc != 0x22DEF0u) { return; }
    }
    ctx->pc = 0x22DEF0u;
label_22def0:
    // 0x22def0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x22def0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x22def4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x22def4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x22def8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x22def8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x22defc: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x22defcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x22df00: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x22DF00u;
    {
        const bool branch_taken_0x22df00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DF00u;
            // 0x22df04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22df00) {
            ctx->pc = 0x22DF38u;
            goto label_22df38;
        }
    }
    ctx->pc = 0x22DF08u;
    // 0x22df08: 0xc08b4ec  jal         func_22D3B0
    ctx->pc = 0x22DF08u;
    SET_GPR_U32(ctx, 31, 0x22DF10u);
    ctx->pc = 0x22D3B0u;
    if (runtime->hasFunction(0x22D3B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DF10u; }
        if (ctx->pc != 0x22DF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CRepairEffectFv_0x22d3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DF10u; }
        if (ctx->pc != 0x22DF10u) { return; }
    }
    ctx->pc = 0x22DF10u;
label_22df10:
    // 0x22df10: 0xae13000c  sw          $s3, 0xC($s0)
    ctx->pc = 0x22df10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
    // 0x22df14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22df14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22df18: 0xae120010  sw          $s2, 0x10($s0)
    ctx->pc = 0x22df18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    // 0x22df1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22df1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22df20: 0x8e8201a4  lw          $v0, 0x1A4($s4)
    ctx->pc = 0x22df20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 420)));
    // 0x22df24: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x22df24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x22df28: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x22df28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x22df2c: 0x8e8201a8  lw          $v0, 0x1A8($s4)
    ctx->pc = 0x22df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 424)));
    // 0x22df30: 0xc08b4f4  jal         func_22D3D0
    ctx->pc = 0x22DF30u;
    SET_GPR_U32(ctx, 31, 0x22DF38u);
    ctx->pc = 0x22DF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DF30u;
            // 0x22df34: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3D0u;
    if (runtime->hasFunction(0x22D3D0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DF38u; }
        if (ctx->pc != 0x22DF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Generate__13CRepairEffectFP9mgCMemoryi_0x22d3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DF38u; }
        if (ctx->pc != 0x22DF38u) { return; }
    }
    ctx->pc = 0x22DF38u;
label_22df38:
    // 0x22df38: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22df38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22df3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22df3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22df40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22df40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22df44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22df44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22df48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22df48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22df4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22df4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22df50: 0x3e00008  jr          $ra
    ctx->pc = 0x22DF50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DF50u;
            // 0x22df54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22DF58u;
}
