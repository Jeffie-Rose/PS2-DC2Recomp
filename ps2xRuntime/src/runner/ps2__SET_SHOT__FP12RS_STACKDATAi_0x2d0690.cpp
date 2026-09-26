#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_SHOT__FP12RS_STACKDATAi
// Address: 0x2d0690 - 0x2d095c
void ps2__SET_SHOT__FP12RS_STACKDATAi_0x2d0690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_SHOT__FP12RS_STACKDATAi_0x2d0690");
#endif

    switch (ctx->pc) {
        case 0x2d06d8u: goto label_2d06d8;
        case 0x2d06e8u: goto label_2d06e8;
        case 0x2d06f4u: goto label_2d06f4;
        case 0x2d0700u: goto label_2d0700;
        case 0x2d0720u: goto label_2d0720;
        case 0x2d072cu: goto label_2d072c;
        case 0x2d0748u: goto label_2d0748;
        case 0x2d0764u: goto label_2d0764;
        case 0x2d077cu: goto label_2d077c;
        case 0x2d0790u: goto label_2d0790;
        case 0x2d07a8u: goto label_2d07a8;
        case 0x2d07c0u: goto label_2d07c0;
        case 0x2d07ccu: goto label_2d07cc;
        case 0x2d07dcu: goto label_2d07dc;
        case 0x2d07e8u: goto label_2d07e8;
        case 0x2d07f4u: goto label_2d07f4;
        case 0x2d0844u: goto label_2d0844;
        case 0x2d086cu: goto label_2d086c;
        case 0x2d0884u: goto label_2d0884;
        case 0x2d08c0u: goto label_2d08c0;
        case 0x2d08dcu: goto label_2d08dc;
        case 0x2d0918u: goto label_2d0918;
        case 0x2d0934u: goto label_2d0934;
        default: break;
    }

    ctx->pc = 0x2d0690u;

    // 0x2d0690: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2d0690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2d0694: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2d0694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d0698: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2d0698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2d069c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2d069cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2d06a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2d06a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2d06a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d06a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d06a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d06a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d06ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d06acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d06b0: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x2d06b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2d06b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D06B4u;
    {
        const bool branch_taken_0x2d06b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D06B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D06B4u;
            // 0x2d06b8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d06b4) {
            ctx->pc = 0x2D06C8u;
            goto label_2d06c8;
        }
    }
    ctx->pc = 0x2D06BCu;
    // 0x2d06bc: 0x2a410006  slti        $at, $s2, 0x6
    ctx->pc = 0x2d06bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2d06c0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D06C0u;
    {
        const bool branch_taken_0x2d06c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D06C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D06C0u;
            // 0x2d06c4: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d06c0) {
            ctx->pc = 0x2D06D0u;
            goto label_2d06d0;
        }
    }
    ctx->pc = 0x2D06C8u;
label_2d06c8:
    // 0x2d06c8: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x2D06C8u;
    {
        const bool branch_taken_0x2d06c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D06CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D06C8u;
            // 0x2d06cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d06c8) {
            ctx->pc = 0x2D0938u;
            goto label_2d0938;
        }
    }
    ctx->pc = 0x2D06D0u;
label_2d06d0:
    // 0x2d06d0: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2D06D0u;
    SET_GPR_U32(ctx, 31, 0x2D06D8u);
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D06D8u; }
        if (ctx->pc != 0x2D06D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D06D8u; }
        if (ctx->pc != 0x2D06D8u) { return; }
    }
    ctx->pc = 0x2D06D8u;
label_2d06d8:
    // 0x2d06d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d06d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d06dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d06dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d06e0: 0xc0b37a8  jal         func_2CDEA0
    ctx->pc = 0x2D06E0u;
    SET_GPR_U32(ctx, 31, 0x2D06E8u);
    ctx->pc = 0x2D06E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D06E0u;
            // 0x2d06e4: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEA0u;
    if (runtime->hasFunction(0x2CDEA0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D06E8u; }
        if (ctx->pc != 0x2D06E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2cdea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D06E8u; }
        if (ctx->pc != 0x2D06E8u) { return; }
    }
    ctx->pc = 0x2D06E8u;
label_2d06e8:
    // 0x2d06e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d06e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d06ec: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2D06ECu;
    SET_GPR_U32(ctx, 31, 0x2D06F4u);
    ctx->pc = 0x2D06F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D06ECu;
            // 0x2d06f0: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D06F4u; }
        if (ctx->pc != 0x2D06F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D06F4u; }
        if (ctx->pc != 0x2D06F4u) { return; }
    }
    ctx->pc = 0x2D06F4u;
label_2d06f4:
    // 0x2d06f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d06f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d06f8: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2D06F8u;
    SET_GPR_U32(ctx, 31, 0x2D0700u);
    ctx->pc = 0x2D06FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D06F8u;
            // 0x2d06fc: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0700u; }
        if (ctx->pc != 0x2D0700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0700u; }
        if (ctx->pc != 0x2D0700u) { return; }
    }
    ctx->pc = 0x2D0700u;
label_2d0700:
    // 0x2d0700: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d0700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0704: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d0704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d0708: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2d0708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2d070c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2d070cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d0710: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0710u;
    {
        const bool branch_taken_0x2d0710 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D0714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0710u;
            // 0x2d0714: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0710) {
            ctx->pc = 0x2D0724u;
            goto label_2d0724;
        }
    }
    ctx->pc = 0x2D0718u;
    // 0x2d0718: 0xc0b379c  jal         func_2CDE70
    ctx->pc = 0x2D0718u;
    SET_GPR_U32(ctx, 31, 0x2D0720u);
    ctx->pc = 0x2CDE70u;
    if (runtime->hasFunction(0x2CDE70u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0720u; }
        if (ctx->pc != 0x2D0720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2cde70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0720u; }
        if (ctx->pc != 0x2D0720u) { return; }
    }
    ctx->pc = 0x2D0720u;
label_2d0720:
    // 0x2d0720: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2d0720u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2d0724:
    // 0x2d0724: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x2D0724u;
    SET_GPR_U32(ctx, 31, 0x2D072Cu);
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D072Cu; }
        if (ctx->pc != 0x2D072Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D072Cu; }
        if (ctx->pc != 0x2D072Cu) { return; }
    }
    ctx->pc = 0x2D072Cu;
label_2d072c:
    // 0x2d072c: 0x84540000  lh          $s4, 0x0($v0)
    ctx->pc = 0x2d072cu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0730: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d0730u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0734: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d0734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d0738: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2d0738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d073c: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d073cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d0740: 0xc041c5c  jal         func_107170
    ctx->pc = 0x2D0740u;
    SET_GPR_U32(ctx, 31, 0x2D0748u);
    ctx->pc = 0x2D0744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0740u;
            // 0x2d0744: 0x24450690  addiu       $a1, $v0, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0748u; }
        if (ctx->pc != 0x2D0748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0748u; }
        if (ctx->pc != 0x2D0748u) { return; }
    }
    ctx->pc = 0x2D0748u;
label_2d0748:
    // 0x2d0748: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d0748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d074c: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x2d074cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2d0750: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d0750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d0754: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2d0754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d0758: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d075c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x2D075Cu;
    SET_GPR_U32(ctx, 31, 0x2D0764u);
    ctx->pc = 0x2D0760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D075Cu;
            // 0x2d0760: 0x24450c10  addiu       $a1, $v0, 0xC10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0764u; }
        if (ctx->pc != 0x2D0764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0764u; }
        if (ctx->pc != 0x2D0764u) { return; }
    }
    ctx->pc = 0x2D0764u;
label_2d0764:
    // 0x2d0764: 0x1680005e  bnez        $s4, . + 4 + (0x5E << 2)
    ctx->pc = 0x2D0764u;
    {
        const bool branch_taken_0x2d0764 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0764u;
            // 0x2d0768: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0764) {
            ctx->pc = 0x2D08E0u;
            goto label_2d08e0;
        }
    }
    ctx->pc = 0x2D076Cu;
    // 0x2d076c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d076cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0770: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d0770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0774: 0xc067e84  jal         func_19FA10
    ctx->pc = 0x2D0774u;
    SET_GPR_U32(ctx, 31, 0x2D077Cu);
    ctx->pc = 0x2D0778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0774u;
            // 0x2d0778: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FA10u;
    if (runtime->hasFunction(0x19FA10u)) {
        auto targetFn = runtime->lookupFunction(0x19FA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D077Cu; }
        if (ctx->pc != 0x2D077Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowWhp__16CBattleCharaInfoFiPi_0x19fa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D077Cu; }
        if (ctx->pc != 0x2D077Cu) { return; }
    }
    ctx->pc = 0x2D077Cu;
label_2d077c:
    // 0x2d077c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d077cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d0780: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d0780u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d0784: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2d0784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d0788: 0xc05af3c  jal         func_16BCF0
    ctx->pc = 0x2D0788u;
    SET_GPR_U32(ctx, 31, 0x2D0790u);
    ctx->pc = 0x2D078Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0788u;
            // 0x2d078c: 0x24a502f8  addiu       $a1, $a1, 0x2F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0790u; }
        if (ctx->pc != 0x2D0790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0790u; }
        if (ctx->pc != 0x2D0790u) { return; }
    }
    ctx->pc = 0x2D0790u;
label_2d0790:
    // 0x2d0790: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d0790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d0794: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d0794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d0798: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2d0798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d079c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d079cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d07a0: 0xc05af3c  jal         func_16BCF0
    ctx->pc = 0x2D07A0u;
    SET_GPR_U32(ctx, 31, 0x2D07A8u);
    ctx->pc = 0x2D07A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D07A0u;
            // 0x2d07a4: 0x24a50300  addiu       $a1, $a1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D07A8u; }
        if (ctx->pc != 0x2D07A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D07A8u; }
        if (ctx->pc != 0x2D07A8u) { return; }
    }
    ctx->pc = 0x2D07A8u;
label_2d07a8:
    // 0x2d07a8: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D07A8u;
    {
        const bool branch_taken_0x2d07a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D07ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D07A8u;
            // 0x2d07ac: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d07a8) {
            ctx->pc = 0x2D07E8u;
            goto label_2d07e8;
        }
    }
    ctx->pc = 0x2D07B0u;
    // 0x2d07b0: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x2D07B0u;
    {
        const bool branch_taken_0x2d07b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D07B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D07B0u;
            // 0x2d07b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d07b0) {
            ctx->pc = 0x2D07E8u;
            goto label_2d07e8;
        }
    }
    ctx->pc = 0x2D07B8u;
    // 0x2d07b8: 0xc04de0c  jal         func_137830
    ctx->pc = 0x2D07B8u;
    SET_GPR_U32(ctx, 31, 0x2D07C0u);
    ctx->pc = 0x2D07BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D07B8u;
            // 0x2d07bc: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D07C0u; }
        if (ctx->pc != 0x2D07C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D07C0u; }
        if (ctx->pc != 0x2D07C0u) { return; }
    }
    ctx->pc = 0x2D07C0u;
label_2d07c0:
    // 0x2d07c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d07c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d07c4: 0xc04de0c  jal         func_137830
    ctx->pc = 0x2D07C4u;
    SET_GPR_U32(ctx, 31, 0x2D07CCu);
    ctx->pc = 0x2D07C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D07C4u;
            // 0x2d07c8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D07CCu; }
        if (ctx->pc != 0x2D07CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D07CCu; }
        if (ctx->pc != 0x2D07CCu) { return; }
    }
    ctx->pc = 0x2D07CCu;
label_2d07cc:
    // 0x2d07cc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2d07ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d07d0: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2d07d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d07d4: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2D07D4u;
    SET_GPR_U32(ctx, 31, 0x2D07DCu);
    ctx->pc = 0x2D07D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D07D4u;
            // 0x2d07d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D07DCu; }
        if (ctx->pc != 0x2D07DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D07DCu; }
        if (ctx->pc != 0x2D07DCu) { return; }
    }
    ctx->pc = 0x2D07DCu;
label_2d07dc:
    // 0x2d07dc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2d07dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d07e0: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2D07E0u;
    SET_GPR_U32(ctx, 31, 0x2D07E8u);
    ctx->pc = 0x2D07E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D07E0u;
            // 0x2d07e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D07E8u; }
        if (ctx->pc != 0x2D07E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D07E8u; }
        if (ctx->pc != 0x2D07E8u) { return; }
    }
    ctx->pc = 0x2D07E8u;
label_2d07e8:
    // 0x2d07e8: 0x8e500030  lw          $s0, 0x30($s2)
    ctx->pc = 0x2d07e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2d07ec: 0xc0664d0  jal         func_199340
    ctx->pc = 0x2D07ECu;
    SET_GPR_U32(ctx, 31, 0x2D07F4u);
    ctx->pc = 0x2D07F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D07ECu;
            // 0x2d07f0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199340u;
    if (runtime->hasFunction(0x199340u)) {
        auto targetFn = runtime->lookupFunction(0x199340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D07F4u; }
        if (ctx->pc != 0x2D07F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAttackType__13CGameDataUsedFv_0x199340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D07F4u; }
        if (ctx->pc != 0x2D07F4u) { return; }
    }
    ctx->pc = 0x2D07F4u;
label_2d07f4:
    // 0x2d07f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2d07f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d07f8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2d07f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d07fc: 0x18400032  blez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2D07FCu;
    {
        const bool branch_taken_0x2d07fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D0800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D07FCu;
            // 0x2d0800: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d07fc) {
            ctx->pc = 0x2D08C8u;
            goto label_2d08c8;
        }
    }
    ctx->pc = 0x2D0804u;
    // 0x2d0804: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0804u;
    {
        const bool branch_taken_0x2d0804 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0804u;
            // 0x2d0808: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0804) {
            ctx->pc = 0x2D0818u;
            goto label_2d0818;
        }
    }
    ctx->pc = 0x2D080Cu;
    // 0x2d080c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2d080cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2d0810: 0x1662000d  bne         $s3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D0810u;
    {
        const bool branch_taken_0x2d0810 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D0814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0810u;
            // 0x2d0814: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0810) {
            ctx->pc = 0x2D0848u;
            goto label_2d0848;
        }
    }
    ctx->pc = 0x2D0818u;
label_2d0818:
    // 0x2d0818: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d0818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d081c: 0x24430764  addiu       $v1, $v0, 0x764
    ctx->pc = 0x2d081cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1892));
    // 0x2d0820: 0x84420764  lh          $v0, 0x764($v0)
    ctx->pc = 0x2d0820u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1892)));
    // 0x2d0824: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0824u;
    {
        const bool branch_taken_0x2d0824 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D0828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0824u;
            // 0x2d0828: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0824) {
            ctx->pc = 0x2D0834u;
            goto label_2d0834;
        }
    }
    ctx->pc = 0x2D082Cu;
    // 0x2d082c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2D082Cu;
    {
        const bool branch_taken_0x2d082c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D082Cu;
            // 0x2d0830: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d082c) {
            ctx->pc = 0x2D093Cu;
            goto label_2d093c;
        }
    }
    ctx->pc = 0x2D0834u;
label_2d0834:
    // 0x2d0834: 0xa4710000  sh          $s1, 0x0($v1)
    ctx->pc = 0x2d0834u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x2d0838: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2d0838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d083c: 0xc0b3fe0  jal         func_2CFF80
    ctx->pc = 0x2D083Cu;
    SET_GPR_U32(ctx, 31, 0x2D0844u);
    ctx->pc = 0x2D0840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D083Cu;
            // 0x2d0840: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF80u;
    if (runtime->hasFunction(0x2CFF80u)) {
        auto targetFn = runtime->lookupFunction(0x2CFF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0844u; }
        if (ctx->pc != 0x2D0844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotNormalGun__FPfPf_0x2cff80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0844u; }
        if (ctx->pc != 0x2D0844u) { return; }
    }
    ctx->pc = 0x2D0844u;
label_2d0844:
    // 0x2d0844: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2d0844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2d0848:
    // 0x2d0848: 0x16620009  bne         $s3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D0848u;
    {
        const bool branch_taken_0x2d0848 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D084Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0848u;
            // 0x2d084c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0848) {
            ctx->pc = 0x2D0870u;
            goto label_2d0870;
        }
    }
    ctx->pc = 0x2D0850u;
    // 0x2d0850: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2d0850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2d0854: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2d0854u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x2d0858: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d0858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d085c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2d085cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d0860: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2d0860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d0864: 0xc0b4038  jal         func_2D00E0
    ctx->pc = 0x2D0864u;
    SET_GPR_U32(ctx, 31, 0x2D086Cu);
    ctx->pc = 0x2D0868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0864u;
            // 0x2d0868: 0x24c60308  addiu       $a2, $a2, 0x308 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D00E0u;
    if (runtime->hasFunction(0x2D00E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D00E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D086Cu; }
        if (ctx->pc != 0x2D086Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotMachineGun__FPfPfPcf_0x2d00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D086Cu; }
        if (ctx->pc != 0x2D086Cu) { return; }
    }
    ctx->pc = 0x2D086Cu;
label_2d086c:
    // 0x2d086c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2d086cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2d0870:
    // 0x2d0870: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D0870u;
    {
        const bool branch_taken_0x2d0870 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D0874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0870u;
            // 0x2d0874: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0870) {
            ctx->pc = 0x2D0888u;
            goto label_2d0888;
        }
    }
    ctx->pc = 0x2D0878u;
    // 0x2d0878: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2d0878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d087c: 0xc0b4088  jal         func_2D0220
    ctx->pc = 0x2D087Cu;
    SET_GPR_U32(ctx, 31, 0x2D0884u);
    ctx->pc = 0x2D0880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D087Cu;
            // 0x2d0880: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D0220u;
    if (runtime->hasFunction(0x2D0220u)) {
        auto targetFn = runtime->lookupFunction(0x2D0220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0884u; }
        if (ctx->pc != 0x2D0884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotGrenadGun__FPfPf_0x2d0220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0884u; }
        if (ctx->pc != 0x2D0884u) { return; }
    }
    ctx->pc = 0x2D0884u;
label_2d0884:
    // 0x2d0884: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2d0884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2d0888:
    // 0x2d0888: 0x16620014  bne         $s3, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D0888u;
    {
        const bool branch_taken_0x2d0888 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d0888) {
            ctx->pc = 0x2D08DCu;
            goto label_2d08dc;
        }
    }
    ctx->pc = 0x2D0890u;
    // 0x2d0890: 0x8603006e  lh          $v1, 0x6E($s0)
    ctx->pc = 0x2d0890u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 110)));
    // 0x2d0894: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x2d0894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2d0898: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d0898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d089c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2d089cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d08a0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D08A0u;
    {
        const bool branch_taken_0x2d08a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D08A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D08A0u;
            // 0x2d08a4: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d08a0) {
            ctx->pc = 0x2D08ACu;
            goto label_2d08ac;
        }
    }
    ctx->pc = 0x2D08A8u;
    // 0x2d08a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d08a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d08ac:
    // 0x2d08ac: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D08ACu;
    {
        const bool branch_taken_0x2d08ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D08B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D08ACu;
            // 0x2d08b0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d08ac) {
            ctx->pc = 0x2D08B8u;
            goto label_2d08b8;
        }
    }
    ctx->pc = 0x2D08B4u;
    // 0x2d08b4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2d08b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2d08b8:
    // 0x2d08b8: 0xc0b40ec  jal         func_2D03B0
    ctx->pc = 0x2D08B8u;
    SET_GPR_U32(ctx, 31, 0x2D08C0u);
    ctx->pc = 0x2D08BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D08B8u;
            // 0x2d08bc: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D03B0u;
    if (runtime->hasFunction(0x2D03B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D03B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D08C0u; }
        if (ctx->pc != 0x2D08C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotLaserGun__FPfPfi_0x2d03b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D08C0u; }
        if (ctx->pc != 0x2D08C0u) { return; }
    }
    ctx->pc = 0x2D08C0u;
label_2d08c0:
    // 0x2d08c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D08C0u;
    {
        const bool branch_taken_0x2d08c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d08c0) {
            ctx->pc = 0x2D08DCu;
            goto label_2d08dc;
        }
    }
    ctx->pc = 0x2D08C8u;
label_2d08c8:
    // 0x2d08c8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2d08c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d08cc: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d08ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d08d0: 0x8c440588  lw          $a0, 0x588($v0)
    ctx->pc = 0x2d08d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1416)));
    // 0x2d08d4: 0xc063818  jal         func_18E060
    ctx->pc = 0x2D08D4u;
    SET_GPR_U32(ctx, 31, 0x2D08DCu);
    ctx->pc = 0x2D08D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D08D4u;
            // 0x2d08d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D08DCu; }
        if (ctx->pc != 0x2D08DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D08DCu; }
        if (ctx->pc != 0x2D08DCu) { return; }
    }
    ctx->pc = 0x2D08DCu;
label_2d08dc:
    // 0x2d08dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d08dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d08e0:
    // 0x2d08e0: 0x16820014  bne         $s4, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D08E0u;
    {
        const bool branch_taken_0x2d08e0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D08E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D08E0u;
            // 0x2d08e4: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d08e0) {
            ctx->pc = 0x2D0934u;
            goto label_2d0934;
        }
    }
    ctx->pc = 0x2D08E8u;
    // 0x2d08e8: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2d08e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d08ec: 0x24640764  addiu       $a0, $v1, 0x764
    ctx->pc = 0x2d08ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1892));
    // 0x2d08f0: 0x84630764  lh          $v1, 0x764($v1)
    ctx->pc = 0x2d08f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1892)));
    // 0x2d08f4: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D08F4u;
    {
        const bool branch_taken_0x2d08f4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2d08f4) {
            ctx->pc = 0x2D0904u;
            goto label_2d0904;
        }
    }
    ctx->pc = 0x2D08FCu;
    // 0x2d08fc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2D08FCu;
    {
        const bool branch_taken_0x2d08fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d08fc) {
            ctx->pc = 0x2D0938u;
            goto label_2d0938;
        }
    }
    ctx->pc = 0x2D0904u;
label_2d0904:
    // 0x2d0904: 0xa4910000  sh          $s1, 0x0($a0)
    ctx->pc = 0x2d0904u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x2d0908: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d0908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d090c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d090cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0910: 0xc067e84  jal         func_19FA10
    ctx->pc = 0x2D0910u;
    SET_GPR_U32(ctx, 31, 0x2D0918u);
    ctx->pc = 0x2D0914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0910u;
            // 0x2d0914: 0x27a60098  addiu       $a2, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FA10u;
    if (runtime->hasFunction(0x19FA10u)) {
        auto targetFn = runtime->lookupFunction(0x19FA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0918u; }
        if (ctx->pc != 0x2D0918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowWhp__16CBattleCharaInfoFiPi_0x19fa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0918u; }
        if (ctx->pc != 0x2D0918u) { return; }
    }
    ctx->pc = 0x2D0918u;
label_2d0918:
    // 0x2d0918: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2d0918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2d091c: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D091Cu;
    {
        const bool branch_taken_0x2d091c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D0920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D091Cu;
            // 0x2d0920: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d091c) {
            ctx->pc = 0x2D0938u;
            goto label_2d0938;
        }
    }
    ctx->pc = 0x2D0924u;
    // 0x2d0924: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d0924u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2d0928: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2d0928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d092c: 0xc0b3f78  jal         func_2CFDE0
    ctx->pc = 0x2D092Cu;
    SET_GPR_U32(ctx, 31, 0x2D0934u);
    ctx->pc = 0x2D0930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D092Cu;
            // 0x2d0930: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFDE0u;
    if (runtime->hasFunction(0x2CFDE0u)) {
        auto targetFn = runtime->lookupFunction(0x2CFDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0934u; }
        if (ctx->pc != 0x2D0934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotMonicaMagic__FPfPff_0x2cfde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0934u; }
        if (ctx->pc != 0x2D0934u) { return; }
    }
    ctx->pc = 0x2D0934u;
label_2d0934:
    // 0x2d0934: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d0934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d0938:
    // 0x2d0938: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2d0938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2d093c:
    // 0x2d093c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2d093cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d0940: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2d0940u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d0944: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2d0944u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d0948: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2d0948u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d094c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d094cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0950: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d0950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0954: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0954u;
            // 0x2d0958: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D095Cu;
}
