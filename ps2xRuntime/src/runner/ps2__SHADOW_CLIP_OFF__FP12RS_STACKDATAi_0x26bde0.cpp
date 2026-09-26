#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SHADOW_CLIP_OFF__FP12RS_STACKDATAi
// Address: 0x26bde0 - 0x26be8c
void ps2__SHADOW_CLIP_OFF__FP12RS_STACKDATAi_0x26bde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SHADOW_CLIP_OFF__FP12RS_STACKDATAi_0x26bde0");
#endif

    switch (ctx->pc) {
        case 0x26be08u: goto label_26be08;
        case 0x26be18u: goto label_26be18;
        case 0x26be24u: goto label_26be24;
        case 0x26be54u: goto label_26be54;
        case 0x26be6cu: goto label_26be6c;
        default: break;
    }

    ctx->pc = 0x26bde0u;

    // 0x26bde0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x26bde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x26bde4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26bde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26bde8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26bde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26bdec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26bdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26bdf0: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x26bdf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26bdf4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26bdf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26bdf8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x26bdf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bdfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26bdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26be00: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26BE00u;
    SET_GPR_U32(ctx, 31, 0x26BE08u);
    ctx->pc = 0x26BE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BE00u;
            // 0x26be04: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BE08u; }
        if (ctx->pc != 0x26BE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BE08u; }
        if (ctx->pc != 0x26BE08u) { return; }
    }
    ctx->pc = 0x26BE08u;
label_26be08:
    // 0x26be08: 0x1a400004  blez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x26BE08u;
    {
        const bool branch_taken_0x26be08 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x26BE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BE08u;
            // 0x26be0c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26be08) {
            ctx->pc = 0x26BE1Cu;
            goto label_26be1c;
        }
    }
    ctx->pc = 0x26BE10u;
    // 0x26be10: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26BE10u;
    SET_GPR_U32(ctx, 31, 0x26BE18u);
    ctx->pc = 0x26BE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BE10u;
            // 0x26be14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BE18u; }
        if (ctx->pc != 0x26BE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BE18u; }
        if (ctx->pc != 0x26BE18u) { return; }
    }
    ctx->pc = 0x26BE18u;
label_26be18:
    // 0x26be18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26be18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26be1c:
    // 0x26be1c: 0xc09ac74  jal         func_26B1D0
    ctx->pc = 0x26BE1Cu;
    SET_GPR_U32(ctx, 31, 0x26BE24u);
    ctx->pc = 0x26BE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BE1Cu;
            // 0x26be20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BE24u; }
        if (ctx->pc != 0x26BE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BE24u; }
        if (ctx->pc != 0x26BE24u) { return; }
    }
    ctx->pc = 0x26BE24u;
label_26be24:
    // 0x26be24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26be24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26be28: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26BE28u;
    {
        const bool branch_taken_0x26be28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BE28u;
            // 0x26be2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26be28) {
            ctx->pc = 0x26BE38u;
            goto label_26be38;
        }
    }
    ctx->pc = 0x26BE30u;
    // 0x26be30: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x26BE30u;
    {
        const bool branch_taken_0x26be30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BE30u;
            // 0x26be34: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26be30) {
            ctx->pc = 0x26BE74u;
            goto label_26be74;
        }
    }
    ctx->pc = 0x26BE38u;
label_26be38:
    // 0x26be38: 0x8e0202c0  lw          $v0, 0x2C0($s0)
    ctx->pc = 0x26be38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
    // 0x26be3c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26BE3Cu;
    {
        const bool branch_taken_0x26be3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BE3Cu;
            // 0x26be40: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26be3c) {
            ctx->pc = 0x26BE4Cu;
            goto label_26be4c;
        }
    }
    ctx->pc = 0x26BE44u;
    // 0x26be44: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26BE44u;
    {
        const bool branch_taken_0x26be44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BE44u;
            // 0x26be48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26be44) {
            ctx->pc = 0x26BE70u;
            goto label_26be70;
        }
    }
    ctx->pc = 0x26BE4Cu;
label_26be4c:
    // 0x26be4c: 0xc04d6d8  jal         func_135B60
    ctx->pc = 0x26BE4Cu;
    SET_GPR_U32(ctx, 31, 0x26BE54u);
    ctx->pc = 0x135B60u;
    if (runtime->hasFunction(0x135B60u)) {
        auto targetFn = runtime->lookupFunction(0x135B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BE54u; }
        if (ctx->pc != 0x26BE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12mgCFrameAttrFv_0x135b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BE54u; }
        if (ctx->pc != 0x26BE54u) { return; }
    }
    ctx->pc = 0x26BE54u;
label_26be54:
    // 0x26be54: 0xafb10098  sw          $s1, 0x98($sp)
    ctx->pc = 0x26be54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 17));
    // 0x26be58: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x26be58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26be5c: 0x8e0402c0  lw          $a0, 0x2C0($s0)
    ctx->pc = 0x26be5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
    // 0x26be60: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26be60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26be64: 0xc04de54  jal         func_137950
    ctx->pc = 0x26BE64u;
    SET_GPR_U32(ctx, 31, 0x26BE6Cu);
    ctx->pc = 0x26BE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BE64u;
            // 0x26be68: 0x3c070010  lui         $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BE6Cu; }
        if (ctx->pc != 0x26BE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BE6Cu; }
        if (ctx->pc != 0x26BE6Cu) { return; }
    }
    ctx->pc = 0x26BE6Cu;
label_26be6c:
    // 0x26be6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26be70:
    // 0x26be70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26be70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_26be74:
    // 0x26be74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26be74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26be78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26be78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26be7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26be7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26be80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26be80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26be84: 0x3e00008  jr          $ra
    ctx->pc = 0x26BE84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BE84u;
            // 0x26be88: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26BE8Cu;
}
