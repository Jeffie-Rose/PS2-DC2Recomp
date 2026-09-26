#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SWE_SET_COLOR__FP12RS_STACKDATAi
// Address: 0x277b00 - 0x277c40
void ps2__SWE_SET_COLOR__FP12RS_STACKDATAi_0x277b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SWE_SET_COLOR__FP12RS_STACKDATAi_0x277b00");
#endif

    switch (ctx->pc) {
        case 0x277b30u: goto label_277b30;
        case 0x277b40u: goto label_277b40;
        case 0x277b4cu: goto label_277b4c;
        case 0x277b80u: goto label_277b80;
        case 0x277b90u: goto label_277b90;
        case 0x277ba0u: goto label_277ba0;
        case 0x277bb0u: goto label_277bb0;
        case 0x277bc0u: goto label_277bc0;
        case 0x277bd0u: goto label_277bd0;
        case 0x277be0u: goto label_277be0;
        case 0x277becu: goto label_277bec;
        default: break;
    }

    ctx->pc = 0x277b00u;

    // 0x277b00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x277b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x277b04: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x277b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x277b08: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x277b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x277b0c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x277b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x277b10: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x277b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x277b14: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x277b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x277b18: 0x24950008  addiu       $s5, $a0, 0x8
    ctx->pc = 0x277b18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x277b1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x277b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x277b20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x277b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x277b24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x277b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x277b28: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277B28u;
    SET_GPR_U32(ctx, 31, 0x277B30u);
    ctx->pc = 0x277B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277B28u;
            // 0x277b2c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277B30u; }
        if (ctx->pc != 0x277B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277B30u; }
        if (ctx->pc != 0x277B30u) { return; }
    }
    ctx->pc = 0x277B30u;
label_277b30:
    // 0x277b30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x277b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x277b34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b38: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277B38u;
    SET_GPR_U32(ctx, 31, 0x277B40u);
    ctx->pc = 0x277B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277B38u;
            // 0x277b3c: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277B40u; }
        if (ctx->pc != 0x277B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277B40u; }
        if (ctx->pc != 0x277B40u) { return; }
    }
    ctx->pc = 0x277B40u;
label_277b40:
    // 0x277b40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b44: 0xc0956d4  jal         func_255B50
    ctx->pc = 0x277B44u;
    SET_GPR_U32(ctx, 31, 0x277B4Cu);
    ctx->pc = 0x277B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277B44u;
            // 0x277b48: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277B4Cu; }
        if (ctx->pc != 0x277B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277B4Cu; }
        if (ctx->pc != 0x277B4Cu) { return; }
    }
    ctx->pc = 0x277B4Cu;
label_277b4c:
    // 0x277b4c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x277B4Cu;
    {
        const bool branch_taken_0x277b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x277B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277B4Cu;
            // 0x277b50: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277b4c) {
            ctx->pc = 0x277B5Cu;
            goto label_277b5c;
        }
    }
    ctx->pc = 0x277B54u;
    // 0x277b54: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x277B54u;
    {
        const bool branch_taken_0x277b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277B54u;
            // 0x277b58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277b54) {
            ctx->pc = 0x277C14u;
            goto label_277c14;
        }
    }
    ctx->pc = 0x277B5Cu;
label_277b5c:
    // 0x277b5c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x277b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x277b60: 0x24560570  addiu       $s6, $v0, 0x570
    ctx->pc = 0x277b60u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 1392));
    // 0x277b64: 0x8c420570  lw          $v0, 0x570($v0)
    ctx->pc = 0x277b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1392)));
    // 0x277b68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x277B68u;
    {
        const bool branch_taken_0x277b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x277B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277B68u;
            // 0x277b6c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277b68) {
            ctx->pc = 0x277B78u;
            goto label_277b78;
        }
    }
    ctx->pc = 0x277B70u;
    // 0x277b70: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x277B70u;
    {
        const bool branch_taken_0x277b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277B70u;
            // 0x277b74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277b70) {
            ctx->pc = 0x277C14u;
            goto label_277c14;
        }
    }
    ctx->pc = 0x277B78u;
label_277b78:
    // 0x277b78: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277B78u;
    SET_GPR_U32(ctx, 31, 0x277B80u);
    ctx->pc = 0x277B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277B78u;
            // 0x277b7c: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277B80u; }
        if (ctx->pc != 0x277B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277B80u; }
        if (ctx->pc != 0x277B80u) { return; }
    }
    ctx->pc = 0x277B80u;
label_277b80:
    // 0x277b80: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x277b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b84: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x277b84u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b88: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277B88u;
    SET_GPR_U32(ctx, 31, 0x277B90u);
    ctx->pc = 0x277B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277B88u;
            // 0x277b8c: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277B90u; }
        if (ctx->pc != 0x277B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277B90u; }
        if (ctx->pc != 0x277B90u) { return; }
    }
    ctx->pc = 0x277B90u;
label_277b90:
    // 0x277b90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x277b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x277b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b98: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277B98u;
    SET_GPR_U32(ctx, 31, 0x277BA0u);
    ctx->pc = 0x277B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277B98u;
            // 0x277b9c: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277BA0u; }
        if (ctx->pc != 0x277BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277BA0u; }
        if (ctx->pc != 0x277BA0u) { return; }
    }
    ctx->pc = 0x277BA0u;
label_277ba0:
    // 0x277ba0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x277ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ba4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x277ba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ba8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277BA8u;
    SET_GPR_U32(ctx, 31, 0x277BB0u);
    ctx->pc = 0x277BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277BA8u;
            // 0x277bac: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277BB0u; }
        if (ctx->pc != 0x277BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277BB0u; }
        if (ctx->pc != 0x277BB0u) { return; }
    }
    ctx->pc = 0x277BB0u;
label_277bb0:
    // 0x277bb0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x277bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277bb4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x277bb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277bb8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277BB8u;
    SET_GPR_U32(ctx, 31, 0x277BC0u);
    ctx->pc = 0x277BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277BB8u;
            // 0x277bbc: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277BC0u; }
        if (ctx->pc != 0x277BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277BC0u; }
        if (ctx->pc != 0x277BC0u) { return; }
    }
    ctx->pc = 0x277BC0u;
label_277bc0:
    // 0x277bc0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x277bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277bc4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x277bc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277bc8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277BC8u;
    SET_GPR_U32(ctx, 31, 0x277BD0u);
    ctx->pc = 0x277BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277BC8u;
            // 0x277bcc: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277BD0u; }
        if (ctx->pc != 0x277BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277BD0u; }
        if (ctx->pc != 0x277BD0u) { return; }
    }
    ctx->pc = 0x277BD0u;
label_277bd0:
    // 0x277bd0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x277bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277bd4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x277bd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277bd8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277BD8u;
    SET_GPR_U32(ctx, 31, 0x277BE0u);
    ctx->pc = 0x277BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277BD8u;
            // 0x277bdc: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277BE0u; }
        if (ctx->pc != 0x277BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277BE0u; }
        if (ctx->pc != 0x277BE0u) { return; }
    }
    ctx->pc = 0x277BE0u;
label_277be0:
    // 0x277be0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x277be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277be4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277BE4u;
    SET_GPR_U32(ctx, 31, 0x277BECu);
    ctx->pc = 0x277BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277BE4u;
            // 0x277be8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277BECu; }
        if (ctx->pc != 0x277BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277BECu; }
        if (ctx->pc != 0x277BECu) { return; }
    }
    ctx->pc = 0x277BECu;
label_277bec:
    // 0x277bec: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x277becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x277bf0: 0xac770020  sw          $s7, 0x20($v1)
    ctx->pc = 0x277bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 23));
    // 0x277bf4: 0xac700024  sw          $s0, 0x24($v1)
    ctx->pc = 0x277bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 16));
    // 0x277bf8: 0xac710028  sw          $s1, 0x28($v1)
    ctx->pc = 0x277bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 17));
    // 0x277bfc: 0xac72002c  sw          $s2, 0x2C($v1)
    ctx->pc = 0x277bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 18));
    // 0x277c00: 0xac730030  sw          $s3, 0x30($v1)
    ctx->pc = 0x277c00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 19));
    // 0x277c04: 0xac740034  sw          $s4, 0x34($v1)
    ctx->pc = 0x277c04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 20));
    // 0x277c08: 0xac750038  sw          $s5, 0x38($v1)
    ctx->pc = 0x277c08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 21));
    // 0x277c0c: 0xac62003c  sw          $v0, 0x3C($v1)
    ctx->pc = 0x277c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
    // 0x277c10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_277c14:
    // 0x277c14: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x277c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x277c18: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x277c18u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x277c1c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x277c1cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x277c20: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x277c20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x277c24: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x277c24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x277c28: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x277c28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x277c2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x277c2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277c30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x277c30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277c34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x277c34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277c38: 0x3e00008  jr          $ra
    ctx->pc = 0x277C38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277C38u;
            // 0x277c3c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x277C40u;
}
