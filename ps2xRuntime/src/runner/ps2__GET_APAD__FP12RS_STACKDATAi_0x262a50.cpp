#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_APAD__FP12RS_STACKDATAi
// Address: 0x262a50 - 0x262b10
void ps2__GET_APAD__FP12RS_STACKDATAi_0x262a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_APAD__FP12RS_STACKDATAi_0x262a50");
#endif

    switch (ctx->pc) {
        case 0x262a78u: goto label_262a78;
        case 0x262a88u: goto label_262a88;
        case 0x262aa0u: goto label_262aa0;
        case 0x262ab0u: goto label_262ab0;
        case 0x262ac8u: goto label_262ac8;
        case 0x262ad8u: goto label_262ad8;
        case 0x262aecu: goto label_262aec;
        case 0x262af8u: goto label_262af8;
        default: break;
    }

    ctx->pc = 0x262a50u;

    // 0x262a50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x262a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x262a54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x262a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x262a58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x262a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x262a5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x262a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x262a60: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x262a60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262a64: 0x1a000008  blez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x262A64u;
    {
        const bool branch_taken_0x262a64 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x262A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262A64u;
            // 0x262a68: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262a64) {
            ctx->pc = 0x262A88u;
            goto label_262a88;
        }
    }
    ctx->pc = 0x262A6Cu;
    // 0x262a6c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x262a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x262a70: 0xc052cc0  jal         func_14B300
    ctx->pc = 0x262A70u;
    SET_GPR_U32(ctx, 31, 0x262A78u);
    ctx->pc = 0x262A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262A70u;
            // 0x262a74: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B300u;
    if (runtime->hasFunction(0x14B300u)) {
        auto targetFn = runtime->lookupFunction(0x14B300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262A78u; }
        if (ctx->pc != 0x262A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLXf__8CGamePadFv_0x14b300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262A78u; }
        if (ctx->pc != 0x262A78u) { return; }
    }
    ctx->pc = 0x262A78u;
label_262a78:
    // 0x262a78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262a7c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x262a7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x262a80: 0xc097e54  jal         func_25F950
    ctx->pc = 0x262A80u;
    SET_GPR_U32(ctx, 31, 0x262A88u);
    ctx->pc = 0x262A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262A80u;
            // 0x262a84: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262A88u; }
        if (ctx->pc != 0x262A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262A88u; }
        if (ctx->pc != 0x262A88u) { return; }
    }
    ctx->pc = 0x262A88u;
label_262a88:
    // 0x262a88: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x262a88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x262a8c: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x262A8Cu;
    {
        const bool branch_taken_0x262a8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x262A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262A8Cu;
            // 0x262a90: 0x2a010003  slti        $at, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x262a8c) {
            ctx->pc = 0x262AB4u;
            goto label_262ab4;
        }
    }
    ctx->pc = 0x262A94u;
    // 0x262a94: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x262a94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x262a98: 0xc052cd0  jal         func_14B340
    ctx->pc = 0x262A98u;
    SET_GPR_U32(ctx, 31, 0x262AA0u);
    ctx->pc = 0x262A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262A98u;
            // 0x262a9c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B340u;
    if (runtime->hasFunction(0x14B340u)) {
        auto targetFn = runtime->lookupFunction(0x14B340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262AA0u; }
        if (ctx->pc != 0x262AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLYf__8CGamePadFv_0x14b340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262AA0u; }
        if (ctx->pc != 0x262AA0u) { return; }
    }
    ctx->pc = 0x262AA0u;
label_262aa0:
    // 0x262aa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262aa4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x262aa4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x262aa8: 0xc097e54  jal         func_25F950
    ctx->pc = 0x262AA8u;
    SET_GPR_U32(ctx, 31, 0x262AB0u);
    ctx->pc = 0x262AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262AA8u;
            // 0x262aac: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262AB0u; }
        if (ctx->pc != 0x262AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262AB0u; }
        if (ctx->pc != 0x262AB0u) { return; }
    }
    ctx->pc = 0x262AB0u;
label_262ab0:
    // 0x262ab0: 0x2a010003  slti        $at, $s0, 0x3
    ctx->pc = 0x262ab0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_262ab4:
    // 0x262ab4: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x262AB4u;
    {
        const bool branch_taken_0x262ab4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x262AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262AB4u;
            // 0x262ab8: 0x2a010004  slti        $at, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x262ab4) {
            ctx->pc = 0x262ADCu;
            goto label_262adc;
        }
    }
    ctx->pc = 0x262ABCu;
    // 0x262abc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x262abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x262ac0: 0xc052ca0  jal         func_14B280
    ctx->pc = 0x262AC0u;
    SET_GPR_U32(ctx, 31, 0x262AC8u);
    ctx->pc = 0x262AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262AC0u;
            // 0x262ac4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B280u;
    if (runtime->hasFunction(0x14B280u)) {
        auto targetFn = runtime->lookupFunction(0x14B280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262AC8u; }
        if (ctx->pc != 0x262AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRXf__8CGamePadFv_0x14b280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262AC8u; }
        if (ctx->pc != 0x262AC8u) { return; }
    }
    ctx->pc = 0x262AC8u;
label_262ac8:
    // 0x262ac8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262acc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x262accu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x262ad0: 0xc097e54  jal         func_25F950
    ctx->pc = 0x262AD0u;
    SET_GPR_U32(ctx, 31, 0x262AD8u);
    ctx->pc = 0x262AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262AD0u;
            // 0x262ad4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262AD8u; }
        if (ctx->pc != 0x262AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262AD8u; }
        if (ctx->pc != 0x262AD8u) { return; }
    }
    ctx->pc = 0x262AD8u;
label_262ad8:
    // 0x262ad8: 0x2a010004  slti        $at, $s0, 0x4
    ctx->pc = 0x262ad8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_262adc:
    // 0x262adc: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x262ADCu;
    {
        const bool branch_taken_0x262adc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x262AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262ADCu;
            // 0x262ae0: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262adc) {
            ctx->pc = 0x262AF8u;
            goto label_262af8;
        }
    }
    ctx->pc = 0x262AE4u;
    // 0x262ae4: 0xc052cb0  jal         func_14B2C0
    ctx->pc = 0x262AE4u;
    SET_GPR_U32(ctx, 31, 0x262AECu);
    ctx->pc = 0x262AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262AE4u;
            // 0x262ae8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B2C0u;
    if (runtime->hasFunction(0x14B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262AECu; }
        if (ctx->pc != 0x262AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRYf__8CGamePadFv_0x14b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262AECu; }
        if (ctx->pc != 0x262AECu) { return; }
    }
    ctx->pc = 0x262AECu;
label_262aec:
    // 0x262aec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262af0: 0xc097e54  jal         func_25F950
    ctx->pc = 0x262AF0u;
    SET_GPR_U32(ctx, 31, 0x262AF8u);
    ctx->pc = 0x262AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262AF0u;
            // 0x262af4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262AF8u; }
        if (ctx->pc != 0x262AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262AF8u; }
        if (ctx->pc != 0x262AF8u) { return; }
    }
    ctx->pc = 0x262AF8u;
label_262af8:
    // 0x262af8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x262af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262afc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x262afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262b00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x262b00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262b04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x262b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262b08: 0x3e00008  jr          $ra
    ctx->pc = 0x262B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262B08u;
            // 0x262b0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x262B10u;
}
