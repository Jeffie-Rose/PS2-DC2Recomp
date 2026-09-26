#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CMRS_FADE_OUT__FP12RS_STACKDATAi
// Address: 0x2703f0 - 0x27049c
void ps2__CMRS_FADE_OUT__FP12RS_STACKDATAi_0x2703f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CMRS_FADE_OUT__FP12RS_STACKDATAi_0x2703f0");
#endif

    switch (ctx->pc) {
        case 0x270424u: goto label_270424;
        case 0x270440u: goto label_270440;
        case 0x270450u: goto label_270450;
        case 0x27045cu: goto label_27045c;
        case 0x270478u: goto label_270478;
        default: break;
    }

    ctx->pc = 0x2703f0u;

    // 0x2703f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2703f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2703f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2703f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2703f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2703f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2703fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2703fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x270400: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x270400u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x270404: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x270404u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x270408: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x270408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27040c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x27040cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x270410: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x270410u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x270414: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x270414u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x270418: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x270418u;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
    // 0x27041c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27041Cu;
    SET_GPR_U32(ctx, 31, 0x270424u);
    ctx->pc = 0x270420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27041Cu;
            // 0x270420: 0x4600b546  mov.s       $f21, $f22 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270424u; }
        if (ctx->pc != 0x270424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270424u; }
        if (ctx->pc != 0x270424u) { return; }
    }
    ctx->pc = 0x270424u;
label_270424:
    // 0x270424: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x270424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270428: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x270428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27042c: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27042Cu;
    {
        const bool branch_taken_0x27042c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x27042c) {
            ctx->pc = 0x270460u;
            goto label_270460;
        }
    }
    ctx->pc = 0x270434u;
    // 0x270434: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x270434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270438: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x270438u;
    SET_GPR_U32(ctx, 31, 0x270440u);
    ctx->pc = 0x27043Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270438u;
            // 0x27043c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270440u; }
        if (ctx->pc != 0x270440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270440u; }
        if (ctx->pc != 0x270440u) { return; }
    }
    ctx->pc = 0x270440u;
label_270440:
    // 0x270440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x270440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270444: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x270444u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x270448: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x270448u;
    SET_GPR_U32(ctx, 31, 0x270450u);
    ctx->pc = 0x27044Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270448u;
            // 0x27044c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270450u; }
        if (ctx->pc != 0x270450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270450u; }
        if (ctx->pc != 0x270450u) { return; }
    }
    ctx->pc = 0x270450u;
label_270450:
    // 0x270450: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x270450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270454: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x270454u;
    SET_GPR_U32(ctx, 31, 0x27045Cu);
    ctx->pc = 0x270458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270454u;
            // 0x270458: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27045Cu; }
        if (ctx->pc != 0x27045Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27045Cu; }
        if (ctx->pc != 0x27045Cu) { return; }
    }
    ctx->pc = 0x27045Cu;
label_27045c:
    // 0x27045c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x27045cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_270460:
    // 0x270460: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x270460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x270464: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x270464u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x270468: 0x2484f920  addiu       $a0, $a0, -0x6E0
    ctx->pc = 0x270468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
    // 0x27046c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x27046cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x270470: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x270470u;
    SET_GPR_U32(ctx, 31, 0x270478u);
    ctx->pc = 0x270474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270470u;
            // 0x270474: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (runtime->hasFunction(0x25A5D0u)) {
        auto targetFn = runtime->lookupFunction(0x25A5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270478u; }
        if (ctx->pc != 0x270478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__12CSceneCmrSeqFifff_0x25a5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270478u; }
        if (ctx->pc != 0x270478u) { return; }
    }
    ctx->pc = 0x270478u;
label_270478:
    // 0x270478: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x270478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27047c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x27047cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x270480: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x270480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x270484: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x270484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x270488: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x270488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27048c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x27048cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x270490: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270494: 0x3e00008  jr          $ra
    ctx->pc = 0x270494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270494u;
            // 0x270498: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27049Cu;
}
