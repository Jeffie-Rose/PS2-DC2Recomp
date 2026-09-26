#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_EXE_FORM_SETPOS__FP9SPI_STACKi
// Address: 0x254260 - 0x2542f4
void ps2__MENU_EXE_FORM_SETPOS__FP9SPI_STACKi_0x254260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_EXE_FORM_SETPOS__FP9SPI_STACKi_0x254260");
#endif

    switch (ctx->pc) {
        case 0x25428cu: goto label_25428c;
        case 0x254298u: goto label_254298;
        case 0x2542b4u: goto label_2542b4;
        case 0x2542c0u: goto label_2542c0;
        default: break;
    }

    ctx->pc = 0x254260u;

    // 0x254260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x254260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x254264: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x254264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x254268: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x254268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25426c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25426cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x254270: 0x938297d8  lbu         $v0, -0x6828($gp)
    ctx->pc = 0x254270u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940632)));
    // 0x254274: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254274u;
    {
        const bool branch_taken_0x254274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254274u;
            // 0x254278: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254274) {
            ctx->pc = 0x254284u;
            goto label_254284;
        }
    }
    ctx->pc = 0x25427Cu;
    // 0x25427c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x25427Cu;
    {
        const bool branch_taken_0x25427c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25427Cu;
            // 0x254280: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25427c) {
            ctx->pc = 0x2542E0u;
            goto label_2542e0;
        }
    }
    ctx->pc = 0x254284u;
label_254284:
    // 0x254284: 0xc05191c  jal         func_146470
    ctx->pc = 0x254284u;
    SET_GPR_U32(ctx, 31, 0x25428Cu);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25428Cu; }
        if (ctx->pc != 0x25428Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25428Cu; }
        if (ctx->pc != 0x25428Cu) { return; }
    }
    ctx->pc = 0x25428Cu;
label_25428c:
    // 0x25428c: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x25428cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x254290: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x254290u;
    SET_GPR_U32(ctx, 31, 0x254298u);
    ctx->pc = 0x254294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254290u;
            // 0x254294: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254298u; }
        if (ctx->pc != 0x254298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254298u; }
        if (ctx->pc != 0x254298u) { return; }
    }
    ctx->pc = 0x254298u;
label_254298:
    // 0x254298: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x254298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25429c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25429Cu;
    {
        const bool branch_taken_0x25429c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2542A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25429Cu;
            // 0x2542a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25429c) {
            ctx->pc = 0x2542ACu;
            goto label_2542ac;
        }
    }
    ctx->pc = 0x2542A4u;
    // 0x2542a4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2542A4u;
    {
        const bool branch_taken_0x2542a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2542A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2542A4u;
            // 0x2542a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2542a4) {
            ctx->pc = 0x2542E0u;
            goto label_2542e0;
        }
    }
    ctx->pc = 0x2542ACu;
label_2542ac:
    // 0x2542ac: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2542ACu;
    SET_GPR_U32(ctx, 31, 0x2542B4u);
    ctx->pc = 0x2542B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2542ACu;
            // 0x2542b0: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2542B4u; }
        if (ctx->pc != 0x2542B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2542B4u; }
        if (ctx->pc != 0x2542B4u) { return; }
    }
    ctx->pc = 0x2542B4u;
label_2542b4:
    // 0x2542b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2542b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2542b8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2542B8u;
    SET_GPR_U32(ctx, 31, 0x2542C0u);
    ctx->pc = 0x2542BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2542B8u;
            // 0x2542bc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2542C0u; }
        if (ctx->pc != 0x2542C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2542C0u; }
        if (ctx->pc != 0x2542C0u) { return; }
    }
    ctx->pc = 0x2542C0u;
label_2542c0:
    // 0x2542c0: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x2542c0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2542c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2542c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2542c8: 0x0  nop
    ctx->pc = 0x2542c8u;
    // NOP
    // 0x2542cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2542ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2542d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2542d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2542d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2542d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2542d8: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x2542d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2542dc: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2542dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_2542e0:
    // 0x2542e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2542e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2542e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2542e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2542e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2542e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2542ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2542ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2542F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2542ECu;
            // 0x2542f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2542F4u;
}
