#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_COORDINATE_ANGLE__FP12RS_STACKDATAi
// Address: 0x26be90 - 0x26bf9c
void ps2__GET_COORDINATE_ANGLE__FP12RS_STACKDATAi_0x26be90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_COORDINATE_ANGLE__FP12RS_STACKDATAi_0x26be90");
#endif

    switch (ctx->pc) {
        case 0x26be90u: goto label_26be90;
        case 0x26be94u: goto label_26be94;
        case 0x26be98u: goto label_26be98;
        case 0x26be9cu: goto label_26be9c;
        case 0x26bea0u: goto label_26bea0;
        case 0x26bea4u: goto label_26bea4;
        case 0x26bea8u: goto label_26bea8;
        case 0x26beacu: goto label_26beac;
        case 0x26beb0u: goto label_26beb0;
        case 0x26beb4u: goto label_26beb4;
        case 0x26beb8u: goto label_26beb8;
        case 0x26bebcu: goto label_26bebc;
        case 0x26bec0u: goto label_26bec0;
        case 0x26bec4u: goto label_26bec4;
        case 0x26bec8u: goto label_26bec8;
        case 0x26beccu: goto label_26becc;
        case 0x26bed0u: goto label_26bed0;
        case 0x26bed4u: goto label_26bed4;
        case 0x26bed8u: goto label_26bed8;
        case 0x26bedcu: goto label_26bedc;
        case 0x26bee0u: goto label_26bee0;
        case 0x26bee4u: goto label_26bee4;
        case 0x26bee8u: goto label_26bee8;
        case 0x26beecu: goto label_26beec;
        case 0x26bef0u: goto label_26bef0;
        case 0x26bef4u: goto label_26bef4;
        case 0x26bef8u: goto label_26bef8;
        case 0x26befcu: goto label_26befc;
        case 0x26bf00u: goto label_26bf00;
        case 0x26bf04u: goto label_26bf04;
        case 0x26bf08u: goto label_26bf08;
        case 0x26bf0cu: goto label_26bf0c;
        case 0x26bf10u: goto label_26bf10;
        case 0x26bf14u: goto label_26bf14;
        case 0x26bf18u: goto label_26bf18;
        case 0x26bf1cu: goto label_26bf1c;
        case 0x26bf20u: goto label_26bf20;
        case 0x26bf24u: goto label_26bf24;
        case 0x26bf28u: goto label_26bf28;
        case 0x26bf2cu: goto label_26bf2c;
        case 0x26bf30u: goto label_26bf30;
        case 0x26bf34u: goto label_26bf34;
        case 0x26bf38u: goto label_26bf38;
        case 0x26bf3cu: goto label_26bf3c;
        case 0x26bf40u: goto label_26bf40;
        case 0x26bf44u: goto label_26bf44;
        case 0x26bf48u: goto label_26bf48;
        case 0x26bf4cu: goto label_26bf4c;
        case 0x26bf50u: goto label_26bf50;
        case 0x26bf54u: goto label_26bf54;
        case 0x26bf58u: goto label_26bf58;
        case 0x26bf5cu: goto label_26bf5c;
        case 0x26bf60u: goto label_26bf60;
        case 0x26bf64u: goto label_26bf64;
        case 0x26bf68u: goto label_26bf68;
        case 0x26bf6cu: goto label_26bf6c;
        case 0x26bf70u: goto label_26bf70;
        case 0x26bf74u: goto label_26bf74;
        case 0x26bf78u: goto label_26bf78;
        case 0x26bf7cu: goto label_26bf7c;
        case 0x26bf80u: goto label_26bf80;
        case 0x26bf84u: goto label_26bf84;
        case 0x26bf88u: goto label_26bf88;
        case 0x26bf8cu: goto label_26bf8c;
        case 0x26bf90u: goto label_26bf90;
        case 0x26bf94u: goto label_26bf94;
        case 0x26bf98u: goto label_26bf98;
        default: break;
    }

    ctx->pc = 0x26be90u;

label_26be90:
    // 0x26be90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x26be90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_26be94:
    // 0x26be94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26be94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_26be98:
    // 0x26be98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26be98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_26be9c:
    // 0x26be9c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x26be9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_26bea0:
    // 0x26bea0: 0xc097e18  jal         func_25F860
label_26bea4:
    if (ctx->pc == 0x26BEA4u) {
        ctx->pc = 0x26BEA4u;
            // 0x26bea4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x26BEA8u;
        goto label_26bea8;
    }
    ctx->pc = 0x26BEA0u;
    SET_GPR_U32(ctx, 31, 0x26BEA8u);
    ctx->pc = 0x26BEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BEA0u;
            // 0x26bea4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BEA8u; }
        if (ctx->pc != 0x26BEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BEA8u; }
        if (ctx->pc != 0x26BEA8u) { return; }
    }
    ctx->pc = 0x26BEA8u;
label_26bea8:
    // 0x26bea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26bea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26beac:
    // 0x26beac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x26beacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26beb0:
    // 0x26beb0: 0xc097e28  jal         func_25F8A0
label_26beb4:
    if (ctx->pc == 0x26BEB4u) {
        ctx->pc = 0x26BEB4u;
            // 0x26beb4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26BEB8u;
        goto label_26beb8;
    }
    ctx->pc = 0x26BEB0u;
    SET_GPR_U32(ctx, 31, 0x26BEB8u);
    ctx->pc = 0x26BEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BEB0u;
            // 0x26beb4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BEB8u; }
        if (ctx->pc != 0x26BEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BEB8u; }
        if (ctx->pc != 0x26BEB8u) { return; }
    }
    ctx->pc = 0x26BEB8u;
label_26beb8:
    // 0x26beb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26beb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26bebc:
    // 0x26bebc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x26bebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_26bec0:
    // 0x26bec0: 0xc097e28  jal         func_25F8A0
label_26bec4:
    if (ctx->pc == 0x26BEC4u) {
        ctx->pc = 0x26BEC4u;
            // 0x26bec4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26BEC8u;
        goto label_26bec8;
    }
    ctx->pc = 0x26BEC0u;
    SET_GPR_U32(ctx, 31, 0x26BEC8u);
    ctx->pc = 0x26BEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BEC0u;
            // 0x26bec4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BEC8u; }
        if (ctx->pc != 0x26BEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BEC8u; }
        if (ctx->pc != 0x26BEC8u) { return; }
    }
    ctx->pc = 0x26BEC8u;
label_26bec8:
    // 0x26bec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26bec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26becc:
    // 0x26becc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x26beccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_26bed0:
    // 0x26bed0: 0xc097e28  jal         func_25F8A0
label_26bed4:
    if (ctx->pc == 0x26BED4u) {
        ctx->pc = 0x26BED4u;
            // 0x26bed4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26BED8u;
        goto label_26bed8;
    }
    ctx->pc = 0x26BED0u;
    SET_GPR_U32(ctx, 31, 0x26BED8u);
    ctx->pc = 0x26BED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BED0u;
            // 0x26bed4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BED8u; }
        if (ctx->pc != 0x26BED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BED8u; }
        if (ctx->pc != 0x26BED8u) { return; }
    }
    ctx->pc = 0x26BED8u;
label_26bed8:
    // 0x26bed8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x26bed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_26bedc:
    // 0x26bedc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x26bedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_26bee0:
    // 0x26bee0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x26bee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_26bee4:
    // 0x26bee4: 0xc09ac74  jal         func_26B1D0
label_26bee8:
    if (ctx->pc == 0x26BEE8u) {
        ctx->pc = 0x26BEE8u;
            // 0x26bee8: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->pc = 0x26BEECu;
        goto label_26beec;
    }
    ctx->pc = 0x26BEE4u;
    SET_GPR_U32(ctx, 31, 0x26BEECu);
    ctx->pc = 0x26BEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BEE4u;
            // 0x26bee8: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BEECu; }
        if (ctx->pc != 0x26BEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BEECu; }
        if (ctx->pc != 0x26BEECu) { return; }
    }
    ctx->pc = 0x26BEECu;
label_26beec:
    // 0x26beec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_26bef0:
    if (ctx->pc == 0x26BEF0u) {
        ctx->pc = 0x26BEF4u;
        goto label_26bef4;
    }
    ctx->pc = 0x26BEECu;
    {
        const bool branch_taken_0x26beec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26beec) {
            ctx->pc = 0x26BEFCu;
            goto label_26befc;
        }
    }
    ctx->pc = 0x26BEF4u;
label_26bef4:
    // 0x26bef4: 0x10000024  b           . + 4 + (0x24 << 2)
label_26bef8:
    if (ctx->pc == 0x26BEF8u) {
        ctx->pc = 0x26BEF8u;
            // 0x26bef8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26BEFCu;
        goto label_26befc;
    }
    ctx->pc = 0x26BEF4u;
    {
        const bool branch_taken_0x26bef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BEF4u;
            // 0x26bef8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bef4) {
            ctx->pc = 0x26BF88u;
            goto label_26bf88;
        }
    }
    ctx->pc = 0x26BEFCu;
label_26befc:
    // 0x26befc: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x26befcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26bf00:
    // 0x26bf00: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x26bf00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26bf04:
    // 0x26bf04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26bf04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26bf08:
    // 0x26bf08: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x26bf08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_26bf0c:
    // 0x26bf0c: 0x320f809  jalr        $t9
label_26bf10:
    if (ctx->pc == 0x26BF10u) {
        ctx->pc = 0x26BF10u;
            // 0x26bf10: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x26BF14u;
        goto label_26bf14;
    }
    ctx->pc = 0x26BF0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26BF14u);
        ctx->pc = 0x26BF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BF0Cu;
            // 0x26bf10: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26BF14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26BF14u; }
            if (ctx->pc != 0x26BF14u) { return; }
        }
        }
    }
    ctx->pc = 0x26BF14u;
label_26bf14:
    // 0x26bf14: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26bf14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_26bf18:
    // 0x26bf18: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x26bf18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26bf1c:
    // 0x26bf1c: 0xc041c3e  jal         func_1070F8
label_26bf20:
    if (ctx->pc == 0x26BF20u) {
        ctx->pc = 0x26BF20u;
            // 0x26bf20: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x26BF24u;
        goto label_26bf24;
    }
    ctx->pc = 0x26BF1Cu;
    SET_GPR_U32(ctx, 31, 0x26BF24u);
    ctx->pc = 0x26BF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BF1Cu;
            // 0x26bf20: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BF24u; }
        if (ctx->pc != 0x26BF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BF24u; }
        if (ctx->pc != 0x26BF24u) { return; }
    }
    ctx->pc = 0x26BF24u;
label_26bf24:
    // 0x26bf24: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26bf24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_26bf28:
    // 0x26bf28: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x26bf28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_26bf2c:
    // 0x26bf2c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x26bf2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26bf30:
    // 0x26bf30: 0xc041be0  jal         func_106F80
label_26bf34:
    if (ctx->pc == 0x26BF34u) {
        ctx->pc = 0x26BF34u;
            // 0x26bf34: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->pc = 0x26BF38u;
        goto label_26bf38;
    }
    ctx->pc = 0x26BF30u;
    SET_GPR_U32(ctx, 31, 0x26BF38u);
    ctx->pc = 0x26BF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BF30u;
            // 0x26bf34: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BF38u; }
        if (ctx->pc != 0x26BF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BF38u; }
        if (ctx->pc != 0x26BF38u) { return; }
    }
    ctx->pc = 0x26BF38u;
label_26bf38:
    // 0x26bf38: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x26bf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26bf3c:
    // 0x26bf3c: 0x4600a046  mov.s       $f1, $f20
    ctx->pc = 0x26bf3cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[20]);
label_26bf40:
    // 0x26bf40: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x26bf40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26bf44:
    // 0x26bf44: 0x0  nop
    ctx->pc = 0x26bf44u;
    // NOP
label_26bf48:
    // 0x26bf48: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_26bf4c:
    if (ctx->pc == 0x26BF4Cu) {
        ctx->pc = 0x26BF50u;
        goto label_26bf50;
    }
    ctx->pc = 0x26BF48u;
    {
        const bool branch_taken_0x26bf48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26bf48) {
            ctx->pc = 0x26BF64u;
            goto label_26bf64;
        }
    }
    ctx->pc = 0x26BF50u;
label_26bf50:
    // 0x26bf50: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x26bf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26bf54:
    // 0x26bf54: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x26bf54u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26bf58:
    // 0x26bf58: 0x0  nop
    ctx->pc = 0x26bf58u;
    // NOP
label_26bf5c:
    // 0x26bf5c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_26bf60:
    if (ctx->pc == 0x26BF60u) {
        ctx->pc = 0x26BF60u;
            // 0x26bf60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26BF64u;
        goto label_26bf64;
    }
    ctx->pc = 0x26BF5Cu;
    {
        const bool branch_taken_0x26bf5c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26BF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BF5Cu;
            // 0x26bf60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bf5c) {
            ctx->pc = 0x26BF7Cu;
            goto label_26bf7c;
        }
    }
    ctx->pc = 0x26BF64u;
label_26bf64:
    // 0x26bf64: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x26bf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26bf68:
    // 0x26bf68: 0x46001307  neg.s       $f12, $f2
    ctx->pc = 0x26bf68u;
    ctx->f[12] = FPU_NEG_S(ctx->f[2]);
label_26bf6c:
    // 0x26bf6c: 0xc047c76  jal         func_11F1D8
label_26bf70:
    if (ctx->pc == 0x26BF70u) {
        ctx->pc = 0x26BF70u;
            // 0x26bf70: 0x46000347  neg.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x26BF74u;
        goto label_26bf74;
    }
    ctx->pc = 0x26BF6Cu;
    SET_GPR_U32(ctx, 31, 0x26BF74u);
    ctx->pc = 0x26BF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BF6Cu;
            // 0x26bf70: 0x46000347  neg.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BF74u; }
        if (ctx->pc != 0x26BF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BF74u; }
        if (ctx->pc != 0x26BF74u) { return; }
    }
    ctx->pc = 0x26BF74u;
label_26bf74:
    // 0x26bf74: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x26bf74u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_26bf78:
    // 0x26bf78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26bf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26bf7c:
    // 0x26bf7c: 0xc097e54  jal         func_25F950
label_26bf80:
    if (ctx->pc == 0x26BF80u) {
        ctx->pc = 0x26BF80u;
            // 0x26bf80: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x26BF84u;
        goto label_26bf84;
    }
    ctx->pc = 0x26BF7Cu;
    SET_GPR_U32(ctx, 31, 0x26BF84u);
    ctx->pc = 0x26BF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BF7Cu;
            // 0x26bf80: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BF84u; }
        if (ctx->pc != 0x26BF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BF84u; }
        if (ctx->pc != 0x26BF84u) { return; }
    }
    ctx->pc = 0x26BF84u;
label_26bf84:
    // 0x26bf84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26bf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26bf88:
    // 0x26bf88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26bf88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26bf8c:
    // 0x26bf8c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x26bf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_26bf90:
    // 0x26bf90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26bf90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26bf94:
    // 0x26bf94: 0x3e00008  jr          $ra
label_26bf98:
    if (ctx->pc == 0x26BF98u) {
        ctx->pc = 0x26BF98u;
            // 0x26bf98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x26BF9Cu;
        goto label_fallthrough_0x26bf94;
    }
    ctx->pc = 0x26BF94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BF94u;
            // 0x26bf98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x26bf94:
    ctx->pc = 0x26BF9Cu;
}
