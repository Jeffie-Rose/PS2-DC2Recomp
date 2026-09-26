#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadNPCFaceData__15CMenuChrCngMenuFP9mgCMemoryi
// Address: 0x2b0c70 - 0x2b0d64
void LoadNPCFaceData__15CMenuChrCngMenuFP9mgCMemoryi_0x2b0c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadNPCFaceData__15CMenuChrCngMenuFP9mgCMemoryi_0x2b0c70");
#endif

    switch (ctx->pc) {
        case 0x2b0ca8u: goto label_2b0ca8;
        case 0x2b0d04u: goto label_2b0d04;
        case 0x2b0d0cu: goto label_2b0d0c;
        case 0x2b0d30u: goto label_2b0d30;
        case 0x2b0d4cu: goto label_2b0d4c;
        default: break;
    }

    ctx->pc = 0x2b0c70u;

    // 0x2b0c70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2b0c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2b0c74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b0c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b0c78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b0c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b0c7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b0c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b0c80: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b0c80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0c84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b0c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b0c88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b0c88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0c8c: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x2b0c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x2b0c90: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x2b0c90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x2b0c94: 0xa0860201  sb          $a2, 0x201($a0)
    ctx->pc = 0x2b0c94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 513), (uint8_t)GPR_U32(ctx, 6));
    // 0x2b0c98: 0xac800204  sw          $zero, 0x204($a0)
    ctx->pc = 0x2b0c98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 516), GPR_U32(ctx, 0));
    // 0x2b0c9c: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b0c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x2b0ca0: 0xc06724c  jal         func_19C930
    ctx->pc = 0x2B0CA0u;
    SET_GPR_U32(ctx, 31, 0x2B0CA8u);
    ctx->pc = 0x2B0CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0CA0u;
            // 0x2b0ca4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C930u;
    if (runtime->hasFunction(0x19C930u)) {
        auto targetFn = runtime->lookupFunction(0x19C930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0CA8u; }
        if (ctx->pc != 0x2B0CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowPartyCharaID__16CUserDataManagerFv_0x19c930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0CA8u; }
        if (ctx->pc != 0x2B0CA8u) { return; }
    }
    ctx->pc = 0x2B0CA8u;
label_2b0ca8:
    // 0x2b0ca8: 0xa6420202  sh          $v0, 0x202($s2)
    ctx->pc = 0x2b0ca8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 514), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0cac: 0x86430202  lh          $v1, 0x202($s2)
    ctx->pc = 0x2b0cacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 514)));
    // 0x2b0cb0: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B0CB0u;
    {
        const bool branch_taken_0x2b0cb0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2B0CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0CB0u;
            // 0x2b0cb4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0cb0) {
            ctx->pc = 0x2B0CC8u;
            goto label_2b0cc8;
        }
    }
    ctx->pc = 0x2B0CB8u;
    // 0x2b0cb8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b0cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b0cbc: 0xa2440201  sb          $a0, 0x201($s2)
    ctx->pc = 0x2b0cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 513), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b0cc0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2B0CC0u;
    {
        const bool branch_taken_0x2b0cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0CC0u;
            // 0x2b0cc4: 0xa2430200  sb          $v1, 0x200($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 512), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0cc0) {
            ctx->pc = 0x2B0D4Cu;
            goto label_2b0d4c;
        }
    }
    ctx->pc = 0x2B0CC8u;
label_2b0cc8:
    // 0x2b0cc8: 0xa2400200  sb          $zero, 0x200($s2)
    ctx->pc = 0x2b0cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 512), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b0ccc: 0x86420202  lh          $v0, 0x202($s2)
    ctx->pc = 0x2b0cccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 514)));
    // 0x2b0cd0: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B0CD0u;
    {
        const bool branch_taken_0x2b0cd0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B0CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0CD0u;
            // 0x2b0cd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0cd0) {
            ctx->pc = 0x2B0CDCu;
            goto label_2b0cdc;
        }
    }
    ctx->pc = 0x2B0CD8u;
    // 0x2b0cd8: 0xa6420202  sh          $v0, 0x202($s2)
    ctx->pc = 0x2b0cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 514), (uint16_t)GPR_U32(ctx, 2));
label_2b0cdc:
    // 0x2b0cdc: 0x86420202  lh          $v0, 0x202($s2)
    ctx->pc = 0x2b0cdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 514)));
    // 0x2b0ce0: 0x2841001b  slti        $at, $v0, 0x1B
    ctx->pc = 0x2b0ce0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x2b0ce4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B0CE4u;
    {
        const bool branch_taken_0x2b0ce4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0CE4u;
            // 0x2b0ce8: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0ce4) {
            ctx->pc = 0x2B0CF0u;
            goto label_2b0cf0;
        }
    }
    ctx->pc = 0x2B0CECu;
    // 0x2b0cec: 0xa6420202  sh          $v0, 0x202($s2)
    ctx->pc = 0x2b0cecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 514), (uint16_t)GPR_U32(ctx, 2));
label_2b0cf0:
    // 0x2b0cf0: 0x86460202  lh          $a2, 0x202($s2)
    ctx->pc = 0x2b0cf0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 514)));
    // 0x2b0cf4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b0cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b0cf8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2b0cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b0cfc: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2B0CFCu;
    SET_GPR_U32(ctx, 31, 0x2B0D04u);
    ctx->pc = 0x2B0D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0CFCu;
            // 0x2b0d00: 0x24a5eb48  addiu       $a1, $a1, -0x14B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0D04u; }
        if (ctx->pc != 0x2B0D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0D04u; }
        if (ctx->pc != 0x2B0D04u) { return; }
    }
    ctx->pc = 0x2B0D04u;
label_2b0d04:
    // 0x2b0d04: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2B0D04u;
    SET_GPR_U32(ctx, 31, 0x2B0D0Cu);
    ctx->pc = 0x2B0D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0D04u;
            // 0x2b0d08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0D0Cu; }
        if (ctx->pc != 0x2B0D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0D0Cu; }
        if (ctx->pc != 0x2B0D0Cu) { return; }
    }
    ctx->pc = 0x2B0D0Cu;
label_2b0d0c:
    // 0x2b0d0c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2b0d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2b0d10: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b0d10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0d14: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2b0d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2b0d18: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2b0d18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2b0d1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b0d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0d20: 0xae420204  sw          $v0, 0x204($s2)
    ctx->pc = 0x2b0d20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 516), GPR_U32(ctx, 2));
    // 0x2b0d24: 0x8e450204  lw          $a1, 0x204($s2)
    ctx->pc = 0x2b0d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 516)));
    // 0x2b0d28: 0xc094440  jal         func_251100
    ctx->pc = 0x2B0D28u;
    SET_GPR_U32(ctx, 31, 0x2B0D30u);
    ctx->pc = 0x2B0D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0D28u;
            // 0x2b0d2c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251100u;
    if (runtime->hasFunction(0x251100u)) {
        auto targetFn = runtime->lookupFunction(0x251100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0D30u; }
        if (ctx->pc != 0x2B0D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileMenu__FPcP1i_0x251100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0D30u; }
        if (ctx->pc != 0x2B0D30u) { return; }
    }
    ctx->pc = 0x2B0D30u;
label_2b0d30:
    // 0x2b0d30: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2b0d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2b0d34: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B0D34u;
    {
        const bool branch_taken_0x2b0d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0D34u;
            // 0x2b0d38: 0x22902  srl         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0d34) {
            ctx->pc = 0x2B0D44u;
            goto label_2b0d44;
        }
    }
    ctx->pc = 0x2B0D3Cu;
    // 0x2b0d3c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x2b0d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x2b0d40: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2b0d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b0d44:
    // 0x2b0d44: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2B0D44u;
    SET_GPR_U32(ctx, 31, 0x2B0D4Cu);
    ctx->pc = 0x2B0D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0D44u;
            // 0x2b0d48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0D4Cu; }
        if (ctx->pc != 0x2B0D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0D4Cu; }
        if (ctx->pc != 0x2B0D4Cu) { return; }
    }
    ctx->pc = 0x2B0D4Cu;
label_2b0d4c:
    // 0x2b0d4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b0d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0d50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b0d50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0d54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b0d54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0d58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b0d58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0D5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0D5Cu;
            // 0x2b0d60: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B0D64u;
}
