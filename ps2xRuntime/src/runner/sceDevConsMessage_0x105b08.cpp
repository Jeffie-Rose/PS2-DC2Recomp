#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sceDevConsMessage
// Address: 0x105b08 - 0x105c24
void sceDevConsMessage_0x105b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsMessage_0x105b08");
#endif

    switch (ctx->pc) {
        case 0x105b40u: goto label_105b40;
        case 0x105b60u: goto label_105b60;
        case 0x105b84u: goto label_105b84;
        case 0x105b94u: goto label_105b94;
        case 0x105bd0u: goto label_105bd0;
        case 0x105be0u: goto label_105be0;
        default: break;
    }

    ctx->pc = 0x105b08u;

    // 0x105b08: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x105b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x105b0c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x105b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x105b10: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x105b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x105b14: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x105b14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105b18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x105b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x105b1c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x105b1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105b20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x105b20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105b24: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x105b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x105b28: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x105b28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105b2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x105b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105b30: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x105b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105b34: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x105b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x105b38: 0xc041514  jal         func_105450
    ctx->pc = 0x105B38u;
    SET_GPR_U32(ctx, 31, 0x105B40u);
    ctx->pc = 0x105B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105B38u;
            // 0x105b3c: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105450u;
    if (runtime->hasFunction(0x105450u)) {
        auto targetFn = runtime->lookupFunction(0x105450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105B40u; }
        if (ctx->pc != 0x105B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevConsPrintf_0x105450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105B40u; }
        if (ctx->pc != 0x105B40u) { return; }
    }
    ctx->pc = 0x105B40u;
label_105b40:
    // 0x105b40: 0x1600001e  bnez        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x105B40u;
    {
        const bool branch_taken_0x105b40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x105B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105B40u;
            // 0x105b44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b40) {
            ctx->pc = 0x105BBCu;
            goto label_105bbc;
        }
    }
    ctx->pc = 0x105B48u;
    // 0x105b48: 0x24530002  addiu       $s3, $v0, 0x2
    ctx->pc = 0x105b48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x105b4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105b50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x105b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105b54: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x105b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105b58: 0xc0413a4  jal         func_104E90
    ctx->pc = 0x105B58u;
    SET_GPR_U32(ctx, 31, 0x105B60u);
    ctx->pc = 0x105B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105B58u;
            // 0x105b5c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104E90u;
    if (runtime->hasFunction(0x104E90u)) {
        auto targetFn = runtime->lookupFunction(0x104E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105B60u; }
        if (ctx->pc != 0x105B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevConsOpen_0x104e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105B60u; }
        if (ctx->pc != 0x105B60u) { return; }
    }
    ctx->pc = 0x105B60u;
label_105b60:
    // 0x105b60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x105b60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105b64: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x105B64u;
    {
        const bool branch_taken_0x105b64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105B64u;
            // 0x105b68: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b64) {
            ctx->pc = 0x105C08u;
            goto label_105c08;
        }
    }
    ctx->pc = 0x105B6Cu;
    // 0x105b6c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x105b6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105b70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105b74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x105b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105b78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x105b78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105b7c: 0xc04170a  jal         func_105C28
    ctx->pc = 0x105B7Cu;
    SET_GPR_U32(ctx, 31, 0x105B84u);
    ctx->pc = 0x105B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105B7Cu;
            // 0x105b80: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105C28u;
    if (runtime->hasFunction(0x105C28u)) {
        auto targetFn = runtime->lookupFunction(0x105C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105B84u; }
        if (ctx->pc != 0x105B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevConsFrame_0x105c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105B84u; }
        if (ctx->pc != 0x105B84u) { return; }
    }
    ctx->pc = 0x105B84u;
label_105b84:
    // 0x105b84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105b88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x105b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105b8c: 0xc0415aa  jal         func_1056A8
    ctx->pc = 0x105B8Cu;
    SET_GPR_U32(ctx, 31, 0x105B94u);
    ctx->pc = 0x105B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105B8Cu;
            // 0x105b90: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1056A8u;
    if (runtime->hasFunction(0x1056A8u)) {
        auto targetFn = runtime->lookupFunction(0x1056A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105B94u; }
        if (ctx->pc != 0x105B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevConsLocate_0x1056a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105B94u; }
        if (ctx->pc != 0x105B94u) { return; }
    }
    ctx->pc = 0x105B94u;
label_105b94:
    // 0x105b94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105b98: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x105b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105b9c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x105b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x105ba0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x105ba0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x105ba4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x105ba4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x105ba8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x105ba8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105bac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x105bacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105bb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105bb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105bb4: 0x8041514  j           func_105450
    ctx->pc = 0x105BB4u;
    ctx->pc = 0x105BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105BB4u;
            // 0x105bb8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105450u;
    if (runtime->hasFunction(0x105450u)) {
        auto targetFn = runtime->lookupFunction(0x105450u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceDevConsPrintf_0x105450(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x105BBCu;
label_105bbc:
    // 0x105bbc: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x105bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x105bc0: 0x2646ffff  addiu       $a2, $s2, -0x1
    ctx->pc = 0x105bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x105bc4: 0x24470002  addiu       $a3, $v0, 0x2
    ctx->pc = 0x105bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x105bc8: 0xc04170a  jal         func_105C28
    ctx->pc = 0x105BC8u;
    SET_GPR_U32(ctx, 31, 0x105BD0u);
    ctx->pc = 0x105BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105BC8u;
            // 0x105bcc: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105C28u;
    if (runtime->hasFunction(0x105C28u)) {
        auto targetFn = runtime->lookupFunction(0x105C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105BD0u; }
        if (ctx->pc != 0x105BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevConsFrame_0x105c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105BD0u; }
        if (ctx->pc != 0x105BD0u) { return; }
    }
    ctx->pc = 0x105BD0u;
label_105bd0:
    // 0x105bd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x105bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105bd4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x105bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105bd8: 0xc0415aa  jal         func_1056A8
    ctx->pc = 0x105BD8u;
    SET_GPR_U32(ctx, 31, 0x105BE0u);
    ctx->pc = 0x105BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105BD8u;
            // 0x105bdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1056A8u;
    if (runtime->hasFunction(0x1056A8u)) {
        auto targetFn = runtime->lookupFunction(0x1056A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105BE0u; }
        if (ctx->pc != 0x105BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevConsLocate_0x1056a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105BE0u; }
        if (ctx->pc != 0x105BE0u) { return; }
    }
    ctx->pc = 0x105BE0u;
label_105be0:
    // 0x105be0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105be4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x105be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105be8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x105be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x105bec: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x105becu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x105bf0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x105bf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x105bf4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x105bf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105bf8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x105bf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105bfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105bfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105c00: 0x8041514  j           func_105450
    ctx->pc = 0x105C00u;
    ctx->pc = 0x105C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105C00u;
            // 0x105c04: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105450u;
    if (runtime->hasFunction(0x105450u)) {
        auto targetFn = runtime->lookupFunction(0x105450u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceDevConsPrintf_0x105450(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x105C08u;
label_105c08:
    // 0x105c08: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x105c08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x105c0c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x105c0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x105c10: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x105c10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105c14: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x105c14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105c18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105c18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x105C1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105C1Cu;
            // 0x105c20: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x105C24u;
}
