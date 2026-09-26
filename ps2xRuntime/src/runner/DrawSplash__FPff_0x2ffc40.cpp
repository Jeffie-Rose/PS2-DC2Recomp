#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawSplash__FPff
// Address: 0x2ffc40 - 0x2ffce0
void DrawSplash__FPff_0x2ffc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSplash__FPff_0x2ffc40");
#endif

    switch (ctx->pc) {
        case 0x2ffc84u: goto label_2ffc84;
        case 0x2ffcacu: goto label_2ffcac;
        case 0x2ffcc0u: goto label_2ffcc0;
        case 0x2ffcd4u: goto label_2ffcd4;
        default: break;
    }

    ctx->pc = 0x2ffc40u;

    // 0x2ffc40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ffc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ffc44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ffc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ffc48: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x2ffc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2ffc4c: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2FFC4Cu;
    {
        const bool branch_taken_0x2ffc4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffc4c) {
            ctx->pc = 0x2FFCD4u;
            goto label_2ffcd4;
        }
    }
    ctx->pc = 0x2FFC54u;
    // 0x2ffc54: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x2ffc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x2ffc58: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2ffc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ffc5c: 0x24429e20  addiu       $v0, $v0, -0x61E0
    ctx->pc = 0x2ffc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942240));
    // 0x2ffc60: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2ffc60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ffc64: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2ffc64u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x2ffc68: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2ffc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ffc6c: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x2ffc6cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2ffc70: 0xe7ac0024  swc1        $f12, 0x24($sp)
    ctx->pc = 0x2ffc70u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2ffc74: 0xe7ac0028  swc1        $f12, 0x28($sp)
    ctx->pc = 0x2ffc74u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2ffc78: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2ffc78u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ffc7c: 0xc0c3e78  jal         func_30F9E0
    ctx->pc = 0x2FFC7Cu;
    SET_GPR_U32(ctx, 31, 0x2FFC84u);
    ctx->pc = 0x2FFC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFC7Cu;
            // 0x2ffc80: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30F9E0u;
    if (runtime->hasFunction(0x30F9E0u)) {
        auto targetFn = runtime->lookupFunction(0x30F9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFC84u; }
        if (ctx->pc != 0x2FFC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWaterLevel__Fv_0x30f9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFC84u; }
        if (ctx->pc != 0x2FFC84u) { return; }
    }
    ctx->pc = 0x2FFC84u;
label_2ffc84:
    // 0x2ffc84: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2ffc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2ffc88: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ffc88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2ffc8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ffc8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ffc90: 0x8f849f70  lw          $a0, -0x6090($gp)
    ctx->pc = 0x2ffc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2ffc94: 0x24a51fd8  addiu       $a1, $a1, 0x1FD8
    ctx->pc = 0x2ffc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8152));
    // 0x2ffc98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ffc98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffc9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ffc9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ffca0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ffca0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffca4: 0xc0b8498  jal         func_2E1260
    ctx->pc = 0x2FFCA4u;
    SET_GPR_U32(ctx, 31, 0x2FFCACu);
    ctx->pc = 0x2FFCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFCA4u;
            // 0x2ffca8: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFCACu; }
        if (ctx->pc != 0x2FFCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFCACu; }
        if (ctx->pc != 0x2FFCACu) { return; }
    }
    ctx->pc = 0x2FFCACu;
label_2ffcac:
    // 0x2ffcac: 0x8f849f70  lw          $a0, -0x6090($gp)
    ctx->pc = 0x2ffcacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2ffcb0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2ffcb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ffcb4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2ffcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ffcb8: 0xc0b8894  jal         func_2E2250
    ctx->pc = 0x2FFCB8u;
    SET_GPR_U32(ctx, 31, 0x2FFCC0u);
    ctx->pc = 0x2FFCBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFCB8u;
            // 0x2ffcbc: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFCC0u; }
        if (ctx->pc != 0x2FFCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFCC0u; }
        if (ctx->pc != 0x2FFCC0u) { return; }
    }
    ctx->pc = 0x2FFCC0u;
label_2ffcc0:
    // 0x2ffcc0: 0x8f849f70  lw          $a0, -0x6090($gp)
    ctx->pc = 0x2ffcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2ffcc4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2ffcc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ffcc8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2ffcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ffccc: 0xc0b88d8  jal         func_2E2360
    ctx->pc = 0x2FFCCCu;
    SET_GPR_U32(ctx, 31, 0x2FFCD4u);
    ctx->pc = 0x2FFCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFCCCu;
            // 0x2ffcd0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2360u;
    if (runtime->hasFunction(0x2E2360u)) {
        auto targetFn = runtime->lookupFunction(0x2E2360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFCD4u; }
        if (ctx->pc != 0x2FFCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect2__16CEffectScriptManFPfii_0x2e2360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFCD4u; }
        if (ctx->pc != 0x2FFCD4u) { return; }
    }
    ctx->pc = 0x2FFCD4u;
label_2ffcd4:
    // 0x2ffcd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ffcd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ffcd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFCD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFCDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFCD8u;
            // 0x2ffcdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FFCE0u;
}
