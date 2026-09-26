#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CopyMDTData__12mgCVisualMDTFP10MDT_HEADERP9mgCMemory
// Address: 0x13eba0 - 0x13ee18
void CopyMDTData__12mgCVisualMDTFP10MDT_HEADERP9mgCMemory_0x13eba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CopyMDTData__12mgCVisualMDTFP10MDT_HEADERP9mgCMemory_0x13eba0");
#endif

    switch (ctx->pc) {
        case 0x13ebdcu: goto label_13ebdc;
        case 0x13ec3cu: goto label_13ec3c;
        case 0x13ec4cu: goto label_13ec4c;
        case 0x13ec5cu: goto label_13ec5c;
        case 0x13ec6cu: goto label_13ec6c;
        case 0x13ec9cu: goto label_13ec9c;
        case 0x13ecb4u: goto label_13ecb4;
        case 0x13ecc4u: goto label_13ecc4;
        case 0x13ecf4u: goto label_13ecf4;
        case 0x13ed04u: goto label_13ed04;
        case 0x13ed34u: goto label_13ed34;
        case 0x13ed44u: goto label_13ed44;
        case 0x13ed74u: goto label_13ed74;
        case 0x13ed84u: goto label_13ed84;
        case 0x13edb8u: goto label_13edb8;
        case 0x13edccu: goto label_13edcc;
        default: break;
    }

    ctx->pc = 0x13eba0u;

    // 0x13eba0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x13eba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x13eba4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x13eba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x13eba8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x13eba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x13ebac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x13ebacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x13ebb0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13ebb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x13ebb4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13ebb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13ebb8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x13ebb8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ebbc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13ebbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13ebc0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x13ebc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ebc4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13ebc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13ebc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13ebc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13ebcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13ebccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13ebd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13ebd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13ebd4: 0xc04fa08  jal         func_13E820
    ctx->pc = 0x13EBD4u;
    SET_GPR_U32(ctx, 31, 0x13EBDCu);
    ctx->pc = 0x13EBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EBD4u;
            // 0x13ebd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E820u;
    if (runtime->hasFunction(0x13E820u)) {
        auto targetFn = runtime->lookupFunction(0x13E820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EBDCu; }
        if (ctx->pc != 0x13EBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTextureManager__9mgCVisualFv_0x13e820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EBDCu; }
        if (ctx->pc != 0x13EBDCu) { return; }
    }
    ctx->pc = 0x13EBDCu;
label_13ebdc:
    // 0x13ebdc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x13ebdcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ebe0: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x13ebe0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13ebe4: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x13ebe4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x13ebe8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x13ebe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ebec: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x13ebecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x13ebf0: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x13ebf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x13ebf4: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x13ebf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x13ebf8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x13ebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13ebfc: 0x208b821  addu        $s7, $s0, $t0
    ctx->pc = 0x13ebfcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x13ec00: 0x2078821  addu        $s1, $s0, $a3
    ctx->pc = 0x13ec00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x13ec04: 0x2069021  addu        $s2, $s0, $a2
    ctx->pc = 0x13ec04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x13ec08: 0x2059821  addu        $s3, $s0, $a1
    ctx->pc = 0x13ec08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x13ec0c: 0xaec20020  sw          $v0, 0x20($s6)
    ctx->pc = 0x13ec0cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 32), GPR_U32(ctx, 2));
    // 0x13ec10: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x13ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x13ec14: 0xaec20024  sw          $v0, 0x24($s6)
    ctx->pc = 0x13ec14u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 36), GPR_U32(ctx, 2));
    // 0x13ec18: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x13ec18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13ec1c: 0xaec20028  sw          $v0, 0x28($s6)
    ctx->pc = 0x13ec1cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 40), GPR_U32(ctx, 2));
    // 0x13ec20: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x13ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x13ec24: 0xaec2002c  sw          $v0, 0x2C($s6)
    ctx->pc = 0x13ec24u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 44), GPR_U32(ctx, 2));
    // 0x13ec28: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x13ec28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x13ec2c: 0xaec20040  sw          $v0, 0x40($s6)
    ctx->pc = 0x13ec2cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 64), GPR_U32(ctx, 2));
    // 0x13ec30: 0x8ec50020  lw          $a1, 0x20($s6)
    ctx->pc = 0x13ec30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x13ec34: 0xc04e748  jal         func_139D20
    ctx->pc = 0x13EC34u;
    SET_GPR_U32(ctx, 31, 0x13EC3Cu);
    ctx->pc = 0x13EC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EC34u;
            // 0x13ec38: 0x203a021  addu        $s4, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EC3Cu; }
        if (ctx->pc != 0x13EC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EC3Cu; }
        if (ctx->pc != 0x13EC3Cu) { return; }
    }
    ctx->pc = 0x13EC3Cu;
label_13ec3c:
    // 0x13ec3c: 0xaec20030  sw          $v0, 0x30($s6)
    ctx->pc = 0x13ec3cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 48), GPR_U32(ctx, 2));
    // 0x13ec40: 0x8ec50024  lw          $a1, 0x24($s6)
    ctx->pc = 0x13ec40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
    // 0x13ec44: 0xc04e748  jal         func_139D20
    ctx->pc = 0x13EC44u;
    SET_GPR_U32(ctx, 31, 0x13EC4Cu);
    ctx->pc = 0x13EC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EC44u;
            // 0x13ec48: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EC4Cu; }
        if (ctx->pc != 0x13EC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EC4Cu; }
        if (ctx->pc != 0x13EC4Cu) { return; }
    }
    ctx->pc = 0x13EC4Cu;
label_13ec4c:
    // 0x13ec4c: 0xaec20034  sw          $v0, 0x34($s6)
    ctx->pc = 0x13ec4cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 52), GPR_U32(ctx, 2));
    // 0x13ec50: 0x8ec5002c  lw          $a1, 0x2C($s6)
    ctx->pc = 0x13ec50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x13ec54: 0xc04e748  jal         func_139D20
    ctx->pc = 0x13EC54u;
    SET_GPR_U32(ctx, 31, 0x13EC5Cu);
    ctx->pc = 0x13EC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EC54u;
            // 0x13ec58: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EC5Cu; }
        if (ctx->pc != 0x13EC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EC5Cu; }
        if (ctx->pc != 0x13EC5Cu) { return; }
    }
    ctx->pc = 0x13EC5Cu;
label_13ec5c:
    // 0x13ec5c: 0xaec2003c  sw          $v0, 0x3C($s6)
    ctx->pc = 0x13ec5cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
    // 0x13ec60: 0x8ec50028  lw          $a1, 0x28($s6)
    ctx->pc = 0x13ec60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x13ec64: 0xc04e748  jal         func_139D20
    ctx->pc = 0x13EC64u;
    SET_GPR_U32(ctx, 31, 0x13EC6Cu);
    ctx->pc = 0x13EC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EC64u;
            // 0x13ec68: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EC6Cu; }
        if (ctx->pc != 0x13EC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EC6Cu; }
        if (ctx->pc != 0x13EC6Cu) { return; }
    }
    ctx->pc = 0x13EC6Cu;
label_13ec6c:
    // 0x13ec6c: 0xaec20038  sw          $v0, 0x38($s6)
    ctx->pc = 0x13ec6cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 56), GPR_U32(ctx, 2));
    // 0x13ec70: 0x8ec30040  lw          $v1, 0x40($s6)
    ctx->pc = 0x13ec70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
    // 0x13ec74: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x13ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x13ec78: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x13ec78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13ec7c: 0x3293c  dsll32      $a1, $v1, 4
    ctx->pc = 0x13ec7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 4));
    // 0x13ec80: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x13ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13ec84: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EC84u;
    {
        const bool branch_taken_0x13ec84 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x13EC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EC84u;
            // 0x13ec88: 0x5293f  dsra32      $a1, $a1, 4 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ec84) {
            ctx->pc = 0x13EC94u;
            goto label_13ec94;
        }
    }
    ctx->pc = 0x13EC8Cu;
    // 0x13ec8c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x13ec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x13ec90: 0x22903  sra         $a1, $v0, 4
    ctx->pc = 0x13ec90u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
label_13ec94:
    // 0x13ec94: 0xc04e748  jal         func_139D20
    ctx->pc = 0x13EC94u;
    SET_GPR_U32(ctx, 31, 0x13EC9Cu);
    ctx->pc = 0x13EC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EC94u;
            // 0x13ec98: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EC9Cu; }
        if (ctx->pc != 0x13EC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EC9Cu; }
        if (ctx->pc != 0x13EC9Cu) { return; }
    }
    ctx->pc = 0x13EC9Cu;
label_13ec9c:
    // 0x13ec9c: 0xaec20044  sw          $v0, 0x44($s6)
    ctx->pc = 0x13ec9cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 68), GPR_U32(ctx, 2));
    // 0x13eca0: 0x8ec30030  lw          $v1, 0x30($s6)
    ctx->pc = 0x13eca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x13eca4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x13ECA4u;
    {
        const bool branch_taken_0x13eca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ECA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13ECA4u;
            // 0x13eca8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eca4) {
            ctx->pc = 0x13ECE0u;
            goto label_13ece0;
        }
    }
    ctx->pc = 0x13ECACu;
    // 0x13ecac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13ECACu;
    {
        const bool branch_taken_0x13ecac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ECB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13ECACu;
            // 0x13ecb0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ecac) {
            ctx->pc = 0x13ECCCu;
            goto label_13eccc;
        }
    }
    ctx->pc = 0x13ECB4u;
label_13ecb4:
    // 0x13ecb4: 0x8ec20030  lw          $v0, 0x30($s6)
    ctx->pc = 0x13ecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x13ecb8: 0x2f52821  addu        $a1, $s7, $s5
    ctx->pc = 0x13ecb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 21)));
    // 0x13ecbc: 0xc041c5c  jal         func_107170
    ctx->pc = 0x13ECBCu;
    SET_GPR_U32(ctx, 31, 0x13ECC4u);
    ctx->pc = 0x13ECC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13ECBCu;
            // 0x13ecc0: 0x552021  addu        $a0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ECC4u; }
        if (ctx->pc != 0x13ECC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ECC4u; }
        if (ctx->pc != 0x13ECC4u) { return; }
    }
    ctx->pc = 0x13ECC4u;
label_13ecc4:
    // 0x13ecc4: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x13ecc4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x13ecc8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13ecc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_13eccc:
    // 0x13eccc: 0x0  nop
    ctx->pc = 0x13ecccu;
    // NOP
    // 0x13ecd0: 0x8ec30020  lw          $v1, 0x20($s6)
    ctx->pc = 0x13ecd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x13ecd4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x13ecd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13ecd8: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x13ECD8u;
    {
        const bool branch_taken_0x13ecd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ecd8) {
            ctx->pc = 0x13ECB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13ecb4;
        }
    }
    ctx->pc = 0x13ECE0u;
label_13ece0:
    // 0x13ece0: 0x8ec30034  lw          $v1, 0x34($s6)
    ctx->pc = 0x13ece0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x13ece4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x13ECE4u;
    {
        const bool branch_taken_0x13ece4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ECE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13ECE4u;
            // 0x13ece8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ece4) {
            ctx->pc = 0x13ED20u;
            goto label_13ed20;
        }
    }
    ctx->pc = 0x13ECECu;
    // 0x13ecec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13ECECu;
    {
        const bool branch_taken_0x13ecec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ECF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13ECECu;
            // 0x13ecf0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ecec) {
            ctx->pc = 0x13ED0Cu;
            goto label_13ed0c;
        }
    }
    ctx->pc = 0x13ECF4u;
label_13ecf4:
    // 0x13ecf4: 0x8ec20034  lw          $v0, 0x34($s6)
    ctx->pc = 0x13ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x13ecf8: 0x2302821  addu        $a1, $s1, $s0
    ctx->pc = 0x13ecf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x13ecfc: 0xc041c5c  jal         func_107170
    ctx->pc = 0x13ECFCu;
    SET_GPR_U32(ctx, 31, 0x13ED04u);
    ctx->pc = 0x13ED00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13ECFCu;
            // 0x13ed00: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ED04u; }
        if (ctx->pc != 0x13ED04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ED04u; }
        if (ctx->pc != 0x13ED04u) { return; }
    }
    ctx->pc = 0x13ED04u;
label_13ed04:
    // 0x13ed04: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x13ed04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x13ed08: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x13ed08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_13ed0c:
    // 0x13ed0c: 0x0  nop
    ctx->pc = 0x13ed0cu;
    // NOP
    // 0x13ed10: 0x8ec30024  lw          $v1, 0x24($s6)
    ctx->pc = 0x13ed10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
    // 0x13ed14: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x13ed14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13ed18: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x13ED18u;
    {
        const bool branch_taken_0x13ed18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ed18) {
            ctx->pc = 0x13ECF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13ecf4;
        }
    }
    ctx->pc = 0x13ED20u;
label_13ed20:
    // 0x13ed20: 0x8ec30038  lw          $v1, 0x38($s6)
    ctx->pc = 0x13ed20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 56)));
    // 0x13ed24: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x13ED24u;
    {
        const bool branch_taken_0x13ed24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ED28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13ED24u;
            // 0x13ed28: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ed24) {
            ctx->pc = 0x13ED60u;
            goto label_13ed60;
        }
    }
    ctx->pc = 0x13ED2Cu;
    // 0x13ed2c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13ED2Cu;
    {
        const bool branch_taken_0x13ed2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ED30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13ED2Cu;
            // 0x13ed30: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ed2c) {
            ctx->pc = 0x13ED4Cu;
            goto label_13ed4c;
        }
    }
    ctx->pc = 0x13ED34u;
label_13ed34:
    // 0x13ed34: 0x8ec20038  lw          $v0, 0x38($s6)
    ctx->pc = 0x13ed34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 56)));
    // 0x13ed38: 0x2502821  addu        $a1, $s2, $s0
    ctx->pc = 0x13ed38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x13ed3c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x13ED3Cu;
    SET_GPR_U32(ctx, 31, 0x13ED44u);
    ctx->pc = 0x13ED40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13ED3Cu;
            // 0x13ed40: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ED44u; }
        if (ctx->pc != 0x13ED44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ED44u; }
        if (ctx->pc != 0x13ED44u) { return; }
    }
    ctx->pc = 0x13ED44u;
label_13ed44:
    // 0x13ed44: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x13ed44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x13ed48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13ed48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_13ed4c:
    // 0x13ed4c: 0x0  nop
    ctx->pc = 0x13ed4cu;
    // NOP
    // 0x13ed50: 0x8ec30028  lw          $v1, 0x28($s6)
    ctx->pc = 0x13ed50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x13ed54: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x13ed54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13ed58: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x13ED58u;
    {
        const bool branch_taken_0x13ed58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ed58) {
            ctx->pc = 0x13ED34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13ed34;
        }
    }
    ctx->pc = 0x13ED60u;
label_13ed60:
    // 0x13ed60: 0x8ec3003c  lw          $v1, 0x3C($s6)
    ctx->pc = 0x13ed60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 60)));
    // 0x13ed64: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x13ED64u;
    {
        const bool branch_taken_0x13ed64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ED68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13ED64u;
            // 0x13ed68: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ed64) {
            ctx->pc = 0x13EDA0u;
            goto label_13eda0;
        }
    }
    ctx->pc = 0x13ED6Cu;
    // 0x13ed6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13ED6Cu;
    {
        const bool branch_taken_0x13ed6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ED70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13ED6Cu;
            // 0x13ed70: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ed6c) {
            ctx->pc = 0x13ED8Cu;
            goto label_13ed8c;
        }
    }
    ctx->pc = 0x13ED74u;
label_13ed74:
    // 0x13ed74: 0x8ec2003c  lw          $v0, 0x3C($s6)
    ctx->pc = 0x13ed74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 60)));
    // 0x13ed78: 0x2702821  addu        $a1, $s3, $s0
    ctx->pc = 0x13ed78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x13ed7c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x13ED7Cu;
    SET_GPR_U32(ctx, 31, 0x13ED84u);
    ctx->pc = 0x13ED80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13ED7Cu;
            // 0x13ed80: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ED84u; }
        if (ctx->pc != 0x13ED84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ED84u; }
        if (ctx->pc != 0x13ED84u) { return; }
    }
    ctx->pc = 0x13ED84u;
label_13ed84:
    // 0x13ed84: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x13ed84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x13ed88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13ed88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_13ed8c:
    // 0x13ed8c: 0x0  nop
    ctx->pc = 0x13ed8cu;
    // NOP
    // 0x13ed90: 0x8ec3002c  lw          $v1, 0x2C($s6)
    ctx->pc = 0x13ed90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x13ed94: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x13ed94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13ed98: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x13ED98u;
    {
        const bool branch_taken_0x13ed98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ed98) {
            ctx->pc = 0x13ED74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13ed74;
        }
    }
    ctx->pc = 0x13EDA0u;
label_13eda0:
    // 0x13eda0: 0x8ec30044  lw          $v1, 0x44($s6)
    ctx->pc = 0x13eda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 68)));
    // 0x13eda4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x13EDA4u;
    {
        const bool branch_taken_0x13eda4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EDA4u;
            // 0x13eda8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eda4) {
            ctx->pc = 0x13EDE8u;
            goto label_13ede8;
        }
    }
    ctx->pc = 0x13EDACu;
    // 0x13edac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13edacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13edb0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13EDB0u;
    {
        const bool branch_taken_0x13edb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EDB0u;
            // 0x13edb4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13edb0) {
            ctx->pc = 0x13EDD8u;
            goto label_13edd8;
        }
    }
    ctx->pc = 0x13EDB8u;
label_13edb8:
    // 0x13edb8: 0x8ec20044  lw          $v0, 0x44($s6)
    ctx->pc = 0x13edb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 68)));
    // 0x13edbc: 0x2902821  addu        $a1, $s4, $s0
    ctx->pc = 0x13edbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x13edc0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x13edc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13edc4: 0xc04fac8  jal         func_13EB20
    ctx->pc = 0x13EDC4u;
    SET_GPR_U32(ctx, 31, 0x13EDCCu);
    ctx->pc = 0x13EDC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EDC4u;
            // 0x13edc8: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13EB20u;
    if (runtime->hasFunction(0x13EB20u)) {
        auto targetFn = runtime->lookupFunction(0x13EB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EDCCu; }
        if (ctx->pc != 0x13EDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyMaterial__FP10mgMaterialP13MDT_MATERIAL_P17mgCTextureManager_0x13eb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EDCCu; }
        if (ctx->pc != 0x13EDCCu) { return; }
    }
    ctx->pc = 0x13EDCCu;
label_13edcc:
    // 0x13edcc: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x13edccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x13edd0: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x13edd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x13edd4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x13edd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_13edd8:
    // 0x13edd8: 0x8ec30040  lw          $v1, 0x40($s6)
    ctx->pc = 0x13edd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
    // 0x13eddc: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x13eddcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13ede0: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x13EDE0u;
    {
        const bool branch_taken_0x13ede0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ede0) {
            ctx->pc = 0x13EDB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13edb8;
        }
    }
    ctx->pc = 0x13EDE8u;
label_13ede8:
    // 0x13ede8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x13ede8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13edec: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x13edecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13edf0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x13edf0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13edf4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13edf4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13edf8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13edf8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13edfc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13edfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13ee00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13ee00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13ee04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13ee04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ee08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13ee08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ee0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13ee0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ee10: 0x3e00008  jr          $ra
    ctx->pc = 0x13EE10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EE10u;
            // 0x13ee14: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13EE18u;
}
