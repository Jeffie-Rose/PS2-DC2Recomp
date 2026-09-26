#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuMemoryDivide__FP9mgCMemoryPP9mgCMemoryi
// Address: 0x2afed0 - 0x2b0094
void MenuMemoryDivide__FP9mgCMemoryPP9mgCMemoryi_0x2afed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuMemoryDivide__FP9mgCMemoryPP9mgCMemoryi_0x2afed0");
#endif

    switch (ctx->pc) {
        case 0x2aff0cu: goto label_2aff0c;
        case 0x2aff7cu: goto label_2aff7c;
        case 0x2affc4u: goto label_2affc4;
        case 0x2affd4u: goto label_2affd4;
        case 0x2affe8u: goto label_2affe8;
        case 0x2afff8u: goto label_2afff8;
        case 0x2b0044u: goto label_2b0044;
        case 0x2b005cu: goto label_2b005c;
        default: break;
    }

    ctx->pc = 0x2afed0u;

    // 0x2afed0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2afed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2afed4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2afed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2afed8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2afed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2afedc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2afedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2afee0: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2afee0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afee4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2afee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2afee8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2afee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2afeec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2afeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2afef0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2afef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2afef4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2afef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2afef8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2afef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2afefc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2afefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2aff00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2aff00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aff04: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2AFF04u;
    SET_GPR_U32(ctx, 31, 0x2AFF0Cu);
    ctx->pc = 0x2AFF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFF04u;
            // 0x2aff08: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFF0Cu; }
        if (ctx->pc != 0x2AFF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFF0Cu; }
        if (ctx->pc != 0x2AFF0Cu) { return; }
    }
    ctx->pc = 0x2AFF0Cu;
label_2aff0c:
    // 0x2aff0c: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x2aff0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2aff10: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2aff10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2aff14: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x2aff14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2aff18: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2aff18u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aff1c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2aff1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2aff20: 0x12020044  beq         $s0, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2AFF20u;
    {
        const bool branch_taken_0x2aff20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AFF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFF20u;
            // 0x2aff24: 0x648821  addu        $s1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aff20) {
            ctx->pc = 0x2B0034u;
            goto label_2b0034;
        }
    }
    ctx->pc = 0x2AFF28u;
    // 0x2aff28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2aff28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aff2c: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AFF2Cu;
    {
        const bool branch_taken_0x2aff2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2aff2c) {
            ctx->pc = 0x2AFF50u;
            goto label_2aff50;
        }
    }
    ctx->pc = 0x2AFF34u;
    // 0x2aff34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aff34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aff38: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AFF38u;
    {
        const bool branch_taken_0x2aff38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2aff38) {
            ctx->pc = 0x2AFF50u;
            goto label_2aff50;
        }
    }
    ctx->pc = 0x2AFF40u;
    // 0x2aff40: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AFF40u;
    {
        const bool branch_taken_0x2aff40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aff40) {
            ctx->pc = 0x2AFF50u;
            goto label_2aff50;
        }
    }
    ctx->pc = 0x2AFF48u;
    // 0x2aff48: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2AFF48u;
    {
        const bool branch_taken_0x2aff48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFF48u;
            // 0x2aff4c: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aff48) {
            ctx->pc = 0x2B0064u;
            goto label_2b0064;
        }
    }
    ctx->pc = 0x2AFF50u;
label_2aff50:
    // 0x2aff50: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2aff50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2aff54: 0x24424738  addiu       $v0, $v0, 0x4738
    ctx->pc = 0x2aff54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18232));
    // 0x2aff58: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2aff58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x2aff5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2aff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aff60: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AFF60u;
    {
        const bool branch_taken_0x2aff60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AFF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFF60u;
            // 0x2aff64: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aff60) {
            ctx->pc = 0x2AFF74u;
            goto label_2aff74;
        }
    }
    ctx->pc = 0x2AFF68u;
    // 0x2aff68: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2aff68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2aff6c: 0x24424728  addiu       $v0, $v0, 0x4728
    ctx->pc = 0x2aff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18216));
    // 0x2aff70: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2aff70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_2aff74:
    // 0x2aff74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2aff74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aff78: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2aff78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aff7c:
    // 0x2aff7c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2aff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2aff80: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2aff80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2aff84: 0x94540000  lhu         $s4, 0x0($v0)
    ctx->pc = 0x2aff84u;
    SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aff88: 0x6810004  bgez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AFF88u;
    {
        const bool branch_taken_0x2aff88 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x2AFF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFF88u;
            // 0x2aff8c: 0x3283003f  andi        $v1, $s4, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aff88) {
            ctx->pc = 0x2AFF9Cu;
            goto label_2aff9c;
        }
    }
    ctx->pc = 0x2AFF90u;
    // 0x2aff90: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AFF90u;
    {
        const bool branch_taken_0x2aff90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aff90) {
            ctx->pc = 0x2AFF9Cu;
            goto label_2aff9c;
        }
    }
    ctx->pc = 0x2AFF98u;
    // 0x2aff98: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x2aff98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_2aff9c:
    // 0x2aff9c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AFF9Cu;
    {
        const bool branch_taken_0x2aff9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFF9Cu;
            // 0x2affa0: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aff9c) {
            ctx->pc = 0x2AFFACu;
            goto label_2affac;
        }
    }
    ctx->pc = 0x2AFFA4u;
    // 0x2affa4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2affa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2affa8: 0x54a021  addu        $s4, $v0, $s4
    ctx->pc = 0x2affa8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2affac:
    // 0x2affac: 0x0  nop
    ctx->pc = 0x2affacu;
    // NOP
    // 0x2affb0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2affb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2affb4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2affb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2affb8: 0x24a5e9f0  addiu       $a1, $a1, -0x1610
    ctx->pc = 0x2affb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961648));
    // 0x2affbc: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2AFFBCu;
    SET_GPR_U32(ctx, 31, 0x2AFFC4u);
    ctx->pc = 0x2AFFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFFBCu;
            // 0x2affc0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFFC4u; }
        if (ctx->pc != 0x2AFFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFFC4u; }
        if (ctx->pc != 0x2AFFC4u) { return; }
    }
    ctx->pc = 0x2AFFC4u;
label_2affc4:
    // 0x2affc4: 0x3d3a821  addu        $s5, $fp, $s3
    ctx->pc = 0x2affc4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    // 0x2affc8: 0x8eb70000  lw          $s7, 0x0($s5)
    ctx->pc = 0x2affc8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2affcc: 0xc04a422  jal         func_129088
    ctx->pc = 0x2AFFCCu;
    SET_GPR_U32(ctx, 31, 0x2AFFD4u);
    ctx->pc = 0x2AFFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFFCCu;
            // 0x2affd0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFFD4u; }
        if (ctx->pc != 0x2AFFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFFD4u; }
        if (ctx->pc != 0x2AFFD4u) { return; }
    }
    ctx->pc = 0x2AFFD4u;
label_2affd4:
    // 0x2affd4: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x2affd4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2affd8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AFFD8u;
    {
        const bool branch_taken_0x2affd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFFD8u;
            // 0x2affdc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2affd8) {
            ctx->pc = 0x2AFFE8u;
            goto label_2affe8;
        }
    }
    ctx->pc = 0x2AFFE0u;
    // 0x2affe0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2AFFE0u;
    SET_GPR_U32(ctx, 31, 0x2AFFE8u);
    ctx->pc = 0x2AFFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFFE0u;
            // 0x2affe4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFFE8u; }
        if (ctx->pc != 0x2AFFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFFE8u; }
        if (ctx->pc != 0x2AFFE8u) { return; }
    }
    ctx->pc = 0x2AFFE8u;
label_2affe8:
    // 0x2affe8: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2affe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2affec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2affecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afff0: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2AFFF0u;
    SET_GPR_U32(ctx, 31, 0x2AFFF8u);
    ctx->pc = 0x2AFFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFFF0u;
            // 0x2afff4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFFF8u; }
        if (ctx->pc != 0x2AFFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFFF8u; }
        if (ctx->pc != 0x2AFFF8u) { return; }
    }
    ctx->pc = 0x2AFFF8u;
label_2afff8:
    // 0x2afff8: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2afff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2afffc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2afffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b0000: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x2b0000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x2b0004: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x2b0004u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2b0008: 0x2d4b021  addu        $s6, $s6, $s4
    ctx->pc = 0x2b0008u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x2b000c: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x2b000cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x2b0010: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2b0010u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2b0014: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x2b0014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2b0018: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x2b0018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2b001c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2b001cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2b0020: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2b0020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2b0024: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x2B0024u;
    {
        const bool branch_taken_0x2b0024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0024u;
            // 0x2b0028: 0x838821  addu        $s1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0024) {
            ctx->pc = 0x2AFF7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2aff7c;
        }
    }
    ctx->pc = 0x2B002Cu;
    // 0x2b002c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B002Cu;
    {
        const bool branch_taken_0x2b002c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b002c) {
            ctx->pc = 0x2B0060u;
            goto label_2b0060;
        }
    }
    ctx->pc = 0x2B0034u;
label_2b0034:
    // 0x2b0034: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x2b0034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2b0038: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b0038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b003c: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2B003Cu;
    SET_GPR_U32(ctx, 31, 0x2B0044u);
    ctx->pc = 0x2B0040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B003Cu;
            // 0x2b0040: 0x24066400  addiu       $a2, $zero, 0x6400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0044u; }
        if (ctx->pc != 0x2B0044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0044u; }
        if (ctx->pc != 0x2B0044u) { return; }
    }
    ctx->pc = 0x2B0044u;
label_2b0044:
    // 0x2b0044: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x2b0044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2b0048: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2b0048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2b004c: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x2b004cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x2b0050: 0x240603c0  addiu       $a2, $zero, 0x3C0
    ctx->pc = 0x2b0050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x2b0054: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2B0054u;
    SET_GPR_U32(ctx, 31, 0x2B005Cu);
    ctx->pc = 0x2B0058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0054u;
            // 0x2b0058: 0x2212821  addu        $a1, $s1, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B005Cu; }
        if (ctx->pc != 0x2B005Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B005Cu; }
        if (ctx->pc != 0x2B005Cu) { return; }
    }
    ctx->pc = 0x2B005Cu;
label_2b005c:
    // 0x2b005c: 0x241667c0  addiu       $s6, $zero, 0x67C0
    ctx->pc = 0x2b005cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 26560));
label_2b0060:
    // 0x2b0060: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x2b0060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2b0064:
    // 0x2b0064: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2b0064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b0068: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2b0068u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b006c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2b006cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b0070: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2b0070u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b0074: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2b0074u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b0078: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2b0078u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b007c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b007cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0080: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b0080u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0084: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b0084u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0088: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b0088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b008c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B008Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B008Cu;
            // 0x2b0090: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B0094u;
}
