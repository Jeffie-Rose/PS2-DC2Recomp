#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__13CRedMarkModelFv
// Address: 0x28b990 - 0x28ba30
void Draw__13CRedMarkModelFv_0x28b990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__13CRedMarkModelFv_0x28b990");
#endif

    switch (ctx->pc) {
        case 0x28b990u: goto label_28b990;
        case 0x28b994u: goto label_28b994;
        case 0x28b998u: goto label_28b998;
        case 0x28b99cu: goto label_28b99c;
        case 0x28b9a0u: goto label_28b9a0;
        case 0x28b9a4u: goto label_28b9a4;
        case 0x28b9a8u: goto label_28b9a8;
        case 0x28b9acu: goto label_28b9ac;
        case 0x28b9b0u: goto label_28b9b0;
        case 0x28b9b4u: goto label_28b9b4;
        case 0x28b9b8u: goto label_28b9b8;
        case 0x28b9bcu: goto label_28b9bc;
        case 0x28b9c0u: goto label_28b9c0;
        case 0x28b9c4u: goto label_28b9c4;
        case 0x28b9c8u: goto label_28b9c8;
        case 0x28b9ccu: goto label_28b9cc;
        case 0x28b9d0u: goto label_28b9d0;
        case 0x28b9d4u: goto label_28b9d4;
        case 0x28b9d8u: goto label_28b9d8;
        case 0x28b9dcu: goto label_28b9dc;
        case 0x28b9e0u: goto label_28b9e0;
        case 0x28b9e4u: goto label_28b9e4;
        case 0x28b9e8u: goto label_28b9e8;
        case 0x28b9ecu: goto label_28b9ec;
        case 0x28b9f0u: goto label_28b9f0;
        case 0x28b9f4u: goto label_28b9f4;
        case 0x28b9f8u: goto label_28b9f8;
        case 0x28b9fcu: goto label_28b9fc;
        case 0x28ba00u: goto label_28ba00;
        case 0x28ba04u: goto label_28ba04;
        case 0x28ba08u: goto label_28ba08;
        case 0x28ba0cu: goto label_28ba0c;
        case 0x28ba10u: goto label_28ba10;
        case 0x28ba14u: goto label_28ba14;
        case 0x28ba18u: goto label_28ba18;
        case 0x28ba1cu: goto label_28ba1c;
        case 0x28ba20u: goto label_28ba20;
        case 0x28ba24u: goto label_28ba24;
        case 0x28ba28u: goto label_28ba28;
        case 0x28ba2cu: goto label_28ba2c;
        default: break;
    }

    ctx->pc = 0x28b990u;

label_28b990:
    // 0x28b990: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28b990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_28b994:
    // 0x28b994: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28b994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_28b998:
    // 0x28b998: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28b998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_28b99c:
    // 0x28b99c: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x28b99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_28b9a0:
    // 0x28b9a0: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_28b9a4:
    if (ctx->pc == 0x28B9A4u) {
        ctx->pc = 0x28B9A4u;
            // 0x28b9a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28B9A8u;
        goto label_28b9a8;
    }
    ctx->pc = 0x28B9A0u;
    {
        const bool branch_taken_0x28b9a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B9A0u;
            // 0x28b9a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b9a0) {
            ctx->pc = 0x28BA20u;
            goto label_28ba20;
        }
    }
    ctx->pc = 0x28B9A8u;
label_28b9a8:
    // 0x28b9a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x28b9a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28b9ac:
    // 0x28b9ac: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x28b9acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_28b9b0:
    // 0x28b9b0: 0x320f809  jalr        $t9
label_28b9b4:
    if (ctx->pc == 0x28B9B4u) {
        ctx->pc = 0x28B9B4u;
            // 0x28b9b4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x28B9B8u;
        goto label_28b9b8;
    }
    ctx->pc = 0x28B9B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28B9B8u);
        ctx->pc = 0x28B9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B9B0u;
            // 0x28b9b4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28B9B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28B9B8u; }
            if (ctx->pc != 0x28B9B8u) { return; }
        }
        }
    }
    ctx->pc = 0x28B9B8u;
label_28b9b8:
    // 0x28b9b8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x28b9b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28b9bc:
    // 0x28b9bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b9c0:
    // 0x28b9c0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x28b9c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_28b9c4:
    // 0x28b9c4: 0x320f809  jalr        $t9
label_28b9c8:
    if (ctx->pc == 0x28B9C8u) {
        ctx->pc = 0x28B9C8u;
            // 0x28b9c8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x28B9CCu;
        goto label_28b9cc;
    }
    ctx->pc = 0x28B9C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28B9CCu);
        ctx->pc = 0x28B9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B9C4u;
            // 0x28b9c8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28B9CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28B9CCu; }
            if (ctx->pc != 0x28B9CCu) { return; }
        }
        }
    }
    ctx->pc = 0x28B9CCu;
label_28b9cc:
    // 0x28b9cc: 0xc047a42  jal         func_11E908
label_28b9d0:
    if (ctx->pc == 0x28B9D0u) {
        ctx->pc = 0x28B9D0u;
            // 0x28b9d0: 0xc60c0084  lwc1        $f12, 0x84($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x28B9D4u;
        goto label_28b9d4;
    }
    ctx->pc = 0x28B9CCu;
    SET_GPR_U32(ctx, 31, 0x28B9D4u);
    ctx->pc = 0x28B9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B9CCu;
            // 0x28b9d0: 0xc60c0084  lwc1        $f12, 0x84($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B9D4u; }
        if (ctx->pc != 0x28B9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B9D4u; }
        if (ctx->pc != 0x28B9D4u) { return; }
    }
    ctx->pc = 0x28B9D4u;
label_28b9d4:
    // 0x28b9d4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x28b9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_28b9d8:
    // 0x28b9d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b9dc:
    // 0x28b9dc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x28b9dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_28b9e0:
    // 0x28b9e0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x28b9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b9e4:
    // 0x28b9e4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x28b9e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_28b9e8:
    // 0x28b9e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28b9e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28b9ec:
    // 0x28b9ec: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x28b9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_28b9f0:
    // 0x28b9f0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x28b9f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28b9f4:
    // 0x28b9f4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x28b9f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_28b9f8:
    // 0x28b9f8: 0x320f809  jalr        $t9
label_28b9fc:
    if (ctx->pc == 0x28B9FCu) {
        ctx->pc = 0x28B9FCu;
            // 0x28b9fc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x28BA00u;
        goto label_28ba00;
    }
    ctx->pc = 0x28B9F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28BA00u);
        ctx->pc = 0x28B9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B9F8u;
            // 0x28b9fc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28BA00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28BA00u; }
            if (ctx->pc != 0x28BA00u) { return; }
        }
        }
    }
    ctx->pc = 0x28BA00u;
label_28ba00:
    // 0x28ba00: 0xc05a804  jal         func_16A010
label_28ba04:
    if (ctx->pc == 0x28BA04u) {
        ctx->pc = 0x28BA04u;
            // 0x28ba04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28BA08u;
        goto label_28ba08;
    }
    ctx->pc = 0x28BA00u;
    SET_GPR_U32(ctx, 31, 0x28BA08u);
    ctx->pc = 0x28BA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BA00u;
            // 0x28ba04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A010u;
    if (runtime->hasFunction(0x16A010u)) {
        auto targetFn = runtime->lookupFunction(0x16A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BA08u; }
        if (ctx->pc != 0x28BA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__12CObjectFrameFv_0x16a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BA08u; }
        if (ctx->pc != 0x28BA08u) { return; }
    }
    ctx->pc = 0x28BA08u;
label_28ba08:
    // 0x28ba08: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x28ba08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28ba0c:
    // 0x28ba0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ba0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28ba10:
    // 0x28ba10: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x28ba10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_28ba14:
    // 0x28ba14: 0x320f809  jalr        $t9
label_28ba18:
    if (ctx->pc == 0x28BA18u) {
        ctx->pc = 0x28BA18u;
            // 0x28ba18: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x28BA1Cu;
        goto label_28ba1c;
    }
    ctx->pc = 0x28BA14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28BA1Cu);
        ctx->pc = 0x28BA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BA14u;
            // 0x28ba18: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28BA1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28BA1Cu; }
            if (ctx->pc != 0x28BA1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x28BA1Cu;
label_28ba1c:
    // 0x28ba1c: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x28ba1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_28ba20:
    // 0x28ba20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28ba20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28ba24:
    // 0x28ba24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28ba24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28ba28:
    // 0x28ba28: 0x3e00008  jr          $ra
label_28ba2c:
    if (ctx->pc == 0x28BA2Cu) {
        ctx->pc = 0x28BA2Cu;
            // 0x28ba2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x28BA30u;
        goto label_fallthrough_0x28ba28;
    }
    ctx->pc = 0x28BA28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BA28u;
            // 0x28ba2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28ba28:
    ctx->pc = 0x28BA30u;
}
