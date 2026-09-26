#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteFile__18CMemoryCardManagerFi
// Address: 0x2f4a70 - 0x2f4b98
void DeleteFile__18CMemoryCardManagerFi_0x2f4a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteFile__18CMemoryCardManagerFi_0x2f4a70");
#endif

    switch (ctx->pc) {
        case 0x2f4aacu: goto label_2f4aac;
        case 0x2f4ae8u: goto label_2f4ae8;
        case 0x2f4af8u: goto label_2f4af8;
        case 0x2f4b1cu: goto label_2f4b1c;
        case 0x2f4b30u: goto label_2f4b30;
        default: break;
    }

    ctx->pc = 0x2f4a70u;

    // 0x2f4a70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2f4a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2f4a74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f4a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f4a78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f4a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f4a7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f4a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f4a80: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x2f4a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2f4a84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f4a84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4a88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f4a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4a8c: 0x10440025  beq         $v0, $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2F4A8Cu;
    {
        const bool branch_taken_0x2f4a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2F4A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4A8Cu;
            // 0x2f4a90: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4a8c) {
            ctx->pc = 0x2F4B24u;
            goto label_2f4b24;
        }
    }
    ctx->pc = 0x2F4A94u;
    // 0x2f4a94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4A94u;
    {
        const bool branch_taken_0x2f4a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4A94u;
            // 0x2f4a98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4a94) {
            ctx->pc = 0x2F4AA4u;
            goto label_2f4aa4;
        }
    }
    ctx->pc = 0x2F4A9Cu;
    // 0x2f4a9c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2F4A9Cu;
    {
        const bool branch_taken_0x2f4a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4A9Cu;
            // 0x2f4aa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4a9c) {
            ctx->pc = 0x2F4B84u;
            goto label_2f4b84;
        }
    }
    ctx->pc = 0x2F4AA4u;
label_2f4aa4:
    // 0x2f4aa4: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F4AA4u;
    SET_GPR_U32(ctx, 31, 0x2F4AACu);
    ctx->pc = 0x2F4AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4AA4u;
            // 0x2f4aa8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4AACu; }
        if (ctx->pc != 0x2F4AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4AACu; }
        if (ctx->pc != 0x2F4AACu) { return; }
    }
    ctx->pc = 0x2F4AACu;
label_2f4aac:
    // 0x2f4aac: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2F4AACu;
    {
        const bool branch_taken_0x2f4aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4AACu;
            // 0x2f4ab0: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4aac) {
            ctx->pc = 0x2F4B80u;
            goto label_2f4b80;
        }
    }
    ctx->pc = 0x2F4AB4u;
    // 0x2f4ab4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2f4ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f4ab8: 0x2442ce10  addiu       $v0, $v0, -0x31F0
    ctx->pc = 0x2f4ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954512));
    // 0x2f4abc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f4abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4ac0: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x2f4ac0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f4ac4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f4ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4ac8: 0x78470010  lq          $a3, 0x10($v0)
    ctx->pc = 0x2f4ac8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2f4acc: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x2f4accu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2f4ad0: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x2f4ad0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2f4ad4: 0x7c880000  sq          $t0, 0x0($a0)
    ctx->pc = 0x2f4ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 8));
    // 0x2f4ad8: 0x7c870010  sq          $a3, 0x10($a0)
    ctx->pc = 0x2f4ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 7));
    // 0x2f4adc: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x2f4adcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x2f4ae0: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2F4AE0u;
    SET_GPR_U32(ctx, 31, 0x2F4AE8u);
    ctx->pc = 0x2F4AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4AE0u;
            // 0x2f4ae4: 0x7c820030  sq          $v0, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4AE8u; }
        if (ctx->pc != 0x2F4AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4AE8u; }
        if (ctx->pc != 0x2F4AE8u) { return; }
    }
    ctx->pc = 0x2F4AE8u;
label_2f4ae8:
    // 0x2f4ae8: 0x8e0404c8  lw          $a0, 0x4C8($s0)
    ctx->pc = 0x2f4ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1224)));
    // 0x2f4aec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f4aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4af0: 0xc048d44  jal         func_123510
    ctx->pc = 0x2F4AF0u;
    SET_GPR_U32(ctx, 31, 0x2F4AF8u);
    ctx->pc = 0x2F4AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4AF0u;
            // 0x2f4af4: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123510u;
    if (runtime->hasFunction(0x123510u)) {
        auto targetFn = runtime->lookupFunction(0x123510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4AF8u; }
        if (ctx->pc != 0x2F4AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcDelete_0x123510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4AF8u; }
        if (ctx->pc != 0x2F4AF8u) { return; }
    }
    ctx->pc = 0x2F4AF8u;
label_2f4af8:
    // 0x2f4af8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4AF8u;
    {
        const bool branch_taken_0x2f4af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4AF8u;
            // 0x2f4afc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4af8) {
            ctx->pc = 0x2F4B10u;
            goto label_2f4b10;
        }
    }
    ctx->pc = 0x2F4B00u;
    // 0x2f4b00: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2f4b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2f4b04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f4b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f4b08: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2F4B08u;
    {
        const bool branch_taken_0x2f4b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4B08u;
            // 0x2f4b0c: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4b08) {
            ctx->pc = 0x2F4B80u;
            goto label_2f4b80;
        }
    }
    ctx->pc = 0x2F4B10u;
label_2f4b10:
    // 0x2f4b10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f4b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4b14: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F4B14u;
    SET_GPR_U32(ctx, 31, 0x2F4B1Cu);
    ctx->pc = 0x2F4B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4B14u;
            // 0x2f4b18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4B1Cu; }
        if (ctx->pc != 0x2F4B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4B1Cu; }
        if (ctx->pc != 0x2F4B1Cu) { return; }
    }
    ctx->pc = 0x2F4B1Cu;
label_2f4b1c:
    // 0x2f4b1c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2F4B1Cu;
    {
        const bool branch_taken_0x2f4b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4b1c) {
            ctx->pc = 0x2F4B80u;
            goto label_2f4b80;
        }
    }
    ctx->pc = 0x2F4B24u;
label_2f4b24:
    // 0x2f4b24: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x2f4b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x2f4b28: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F4B28u;
    SET_GPR_U32(ctx, 31, 0x2F4B30u);
    ctx->pc = 0x2F4B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4B28u;
            // 0x2f4b2c: 0x27a60078  addiu       $a2, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4B30u; }
        if (ctx->pc != 0x2F4B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4B30u; }
        if (ctx->pc != 0x2F4B30u) { return; }
    }
    ctx->pc = 0x2F4B30u;
label_2f4b30:
    // 0x2f4b30: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F4B30u;
    {
        const bool branch_taken_0x2f4b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4b30) {
            ctx->pc = 0x2F4B80u;
            goto label_2f4b80;
        }
    }
    ctx->pc = 0x2F4B38u;
    // 0x2f4b38: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x2f4b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x2f4b3c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2f4b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2f4b40: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2F4B40u;
    {
        const bool branch_taken_0x2f4b40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f4b40) {
            ctx->pc = 0x2F4B80u;
            goto label_2f4b80;
        }
    }
    ctx->pc = 0x2F4B48u;
    // 0x2f4b48: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2f4b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2f4b4c: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F4B4Cu;
    {
        const bool branch_taken_0x2f4b4c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F4B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4B4Cu;
            // 0x2f4b50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4b4c) {
            ctx->pc = 0x2F4B78u;
            goto label_2f4b78;
        }
    }
    ctx->pc = 0x2F4B54u;
    // 0x2f4b54: 0x8e0204e0  lw          $v0, 0x4E0($s0)
    ctx->pc = 0x2f4b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1248)));
    // 0x2f4b58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f4b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f4b5c: 0xae0204e0  sw          $v0, 0x4E0($s0)
    ctx->pc = 0x2f4b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1248), GPR_U32(ctx, 2));
    // 0x2f4b60: 0x8e0204e0  lw          $v0, 0x4E0($s0)
    ctx->pc = 0x2f4b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1248)));
    // 0x2f4b64: 0x28410079  slti        $at, $v0, 0x79
    ctx->pc = 0x2f4b64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)121) ? 1 : 0);
    // 0x2f4b68: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4B68u;
    {
        const bool branch_taken_0x2f4b68 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4B68u;
            // 0x2f4b6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4b68) {
            ctx->pc = 0x2F4B80u;
            goto label_2f4b80;
        }
    }
    ctx->pc = 0x2F4B70u;
    // 0x2f4b70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4B70u;
    {
        const bool branch_taken_0x2f4b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4B70u;
            // 0x2f4b74: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4b70) {
            ctx->pc = 0x2F4B88u;
            goto label_2f4b88;
        }
    }
    ctx->pc = 0x2F4B78u;
label_2f4b78:
    // 0x2f4b78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F4B78u;
    {
        const bool branch_taken_0x2f4b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4b78) {
            ctx->pc = 0x2F4B84u;
            goto label_2f4b84;
        }
    }
    ctx->pc = 0x2F4B80u;
label_2f4b80:
    // 0x2f4b80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f4b80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4b84:
    // 0x2f4b84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f4b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f4b88:
    // 0x2f4b88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f4b88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4b8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f4b8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4b90: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4B90u;
            // 0x2f4b94: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F4B98u;
}
