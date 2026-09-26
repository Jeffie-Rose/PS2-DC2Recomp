#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CMRS_FADE_IN__FP12RS_STACKDATAi
// Address: 0x270340 - 0x2703ec
void ps2__CMRS_FADE_IN__FP12RS_STACKDATAi_0x270340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CMRS_FADE_IN__FP12RS_STACKDATAi_0x270340");
#endif

    switch (ctx->pc) {
        case 0x270374u: goto label_270374;
        case 0x270390u: goto label_270390;
        case 0x2703a0u: goto label_2703a0;
        case 0x2703acu: goto label_2703ac;
        case 0x2703c8u: goto label_2703c8;
        default: break;
    }

    ctx->pc = 0x270340u;

    // 0x270340: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x270340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x270344: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x270344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x270348: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x270348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x27034c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27034cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x270350: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x270350u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x270354: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x270354u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x270358: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x270358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27035c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x27035cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x270360: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x270360u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x270364: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x270364u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x270368: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x270368u;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
    // 0x27036c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27036Cu;
    SET_GPR_U32(ctx, 31, 0x270374u);
    ctx->pc = 0x270370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27036Cu;
            // 0x270370: 0x4600b546  mov.s       $f21, $f22 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270374u; }
        if (ctx->pc != 0x270374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270374u; }
        if (ctx->pc != 0x270374u) { return; }
    }
    ctx->pc = 0x270374u;
label_270374:
    // 0x270374: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x270374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270378: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x270378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27037c: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27037Cu;
    {
        const bool branch_taken_0x27037c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x27037c) {
            ctx->pc = 0x2703B0u;
            goto label_2703b0;
        }
    }
    ctx->pc = 0x270384u;
    // 0x270384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x270384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270388: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x270388u;
    SET_GPR_U32(ctx, 31, 0x270390u);
    ctx->pc = 0x27038Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270388u;
            // 0x27038c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270390u; }
        if (ctx->pc != 0x270390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270390u; }
        if (ctx->pc != 0x270390u) { return; }
    }
    ctx->pc = 0x270390u;
label_270390:
    // 0x270390: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x270390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270394: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x270394u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x270398: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x270398u;
    SET_GPR_U32(ctx, 31, 0x2703A0u);
    ctx->pc = 0x27039Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270398u;
            // 0x27039c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2703A0u; }
        if (ctx->pc != 0x2703A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2703A0u; }
        if (ctx->pc != 0x2703A0u) { return; }
    }
    ctx->pc = 0x2703A0u;
label_2703a0:
    // 0x2703a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2703a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2703a4: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x2703A4u;
    SET_GPR_U32(ctx, 31, 0x2703ACu);
    ctx->pc = 0x2703A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2703A4u;
            // 0x2703a8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2703ACu; }
        if (ctx->pc != 0x2703ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2703ACu; }
        if (ctx->pc != 0x2703ACu) { return; }
    }
    ctx->pc = 0x2703ACu;
label_2703ac:
    // 0x2703ac: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2703acu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2703b0:
    // 0x2703b0: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x2703b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x2703b4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2703b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2703b8: 0x2484f920  addiu       $a0, $a0, -0x6E0
    ctx->pc = 0x2703b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
    // 0x2703bc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2703bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2703c0: 0xc096958  jal         func_25A560
    ctx->pc = 0x2703C0u;
    SET_GPR_U32(ctx, 31, 0x2703C8u);
    ctx->pc = 0x2703C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2703C0u;
            // 0x2703c4: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A560u;
    if (runtime->hasFunction(0x25A560u)) {
        auto targetFn = runtime->lookupFunction(0x25A560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2703C8u; }
        if (ctx->pc != 0x2703C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__12CSceneCmrSeqFifff_0x25a560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2703C8u; }
        if (ctx->pc != 0x2703C8u) { return; }
    }
    ctx->pc = 0x2703C8u;
label_2703c8:
    // 0x2703c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2703c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2703cc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2703ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2703d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2703d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2703d4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2703d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2703d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2703d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2703dc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2703dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2703e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2703e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2703e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2703E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2703E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2703E4u;
            // 0x2703e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2703ECu;
}
