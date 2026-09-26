#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawHamon__FPff
// Address: 0x2ffba0 - 0x2ffc40
void DrawHamon__FPff_0x2ffba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawHamon__FPff_0x2ffba0");
#endif

    switch (ctx->pc) {
        case 0x2ffbe4u: goto label_2ffbe4;
        case 0x2ffc0cu: goto label_2ffc0c;
        case 0x2ffc20u: goto label_2ffc20;
        case 0x2ffc34u: goto label_2ffc34;
        default: break;
    }

    ctx->pc = 0x2ffba0u;

    // 0x2ffba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ffba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ffba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ffba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ffba8: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x2ffba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2ffbac: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2FFBACu;
    {
        const bool branch_taken_0x2ffbac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffbac) {
            ctx->pc = 0x2FFC34u;
            goto label_2ffc34;
        }
    }
    ctx->pc = 0x2FFBB4u;
    // 0x2ffbb4: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x2ffbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x2ffbb8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2ffbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ffbbc: 0x24429e10  addiu       $v0, $v0, -0x61F0
    ctx->pc = 0x2ffbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942224));
    // 0x2ffbc0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2ffbc0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ffbc4: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2ffbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x2ffbc8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2ffbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ffbcc: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x2ffbccu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2ffbd0: 0xe7ac0024  swc1        $f12, 0x24($sp)
    ctx->pc = 0x2ffbd0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2ffbd4: 0xe7ac0028  swc1        $f12, 0x28($sp)
    ctx->pc = 0x2ffbd4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2ffbd8: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2ffbd8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ffbdc: 0xc0c3e78  jal         func_30F9E0
    ctx->pc = 0x2FFBDCu;
    SET_GPR_U32(ctx, 31, 0x2FFBE4u);
    ctx->pc = 0x2FFBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFBDCu;
            // 0x2ffbe0: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30F9E0u;
    if (runtime->hasFunction(0x30F9E0u)) {
        auto targetFn = runtime->lookupFunction(0x30F9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFBE4u; }
        if (ctx->pc != 0x2FFBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWaterLevel__Fv_0x30f9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFBE4u; }
        if (ctx->pc != 0x2FFBE4u) { return; }
    }
    ctx->pc = 0x2FFBE4u;
label_2ffbe4:
    // 0x2ffbe4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2ffbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2ffbe8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ffbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2ffbec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ffbecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ffbf0: 0x8f849f70  lw          $a0, -0x6090($gp)
    ctx->pc = 0x2ffbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2ffbf4: 0x24a51fd0  addiu       $a1, $a1, 0x1FD0
    ctx->pc = 0x2ffbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8144));
    // 0x2ffbf8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ffbf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffbfc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ffbfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ffc00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ffc00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffc04: 0xc0b8498  jal         func_2E1260
    ctx->pc = 0x2FFC04u;
    SET_GPR_U32(ctx, 31, 0x2FFC0Cu);
    ctx->pc = 0x2FFC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFC04u;
            // 0x2ffc08: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFC0Cu; }
        if (ctx->pc != 0x2FFC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFC0Cu; }
        if (ctx->pc != 0x2FFC0Cu) { return; }
    }
    ctx->pc = 0x2FFC0Cu;
label_2ffc0c:
    // 0x2ffc0c: 0x8f849f70  lw          $a0, -0x6090($gp)
    ctx->pc = 0x2ffc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2ffc10: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2ffc10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ffc14: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2ffc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ffc18: 0xc0b8894  jal         func_2E2250
    ctx->pc = 0x2FFC18u;
    SET_GPR_U32(ctx, 31, 0x2FFC20u);
    ctx->pc = 0x2FFC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFC18u;
            // 0x2ffc1c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFC20u; }
        if (ctx->pc != 0x2FFC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFC20u; }
        if (ctx->pc != 0x2FFC20u) { return; }
    }
    ctx->pc = 0x2FFC20u;
label_2ffc20:
    // 0x2ffc20: 0x8f849f70  lw          $a0, -0x6090($gp)
    ctx->pc = 0x2ffc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2ffc24: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2ffc24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ffc28: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2ffc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ffc2c: 0xc0b88d8  jal         func_2E2360
    ctx->pc = 0x2FFC2Cu;
    SET_GPR_U32(ctx, 31, 0x2FFC34u);
    ctx->pc = 0x2FFC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFC2Cu;
            // 0x2ffc30: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2360u;
    if (runtime->hasFunction(0x2E2360u)) {
        auto targetFn = runtime->lookupFunction(0x2E2360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFC34u; }
        if (ctx->pc != 0x2FFC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect2__16CEffectScriptManFPfii_0x2e2360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFC34u; }
        if (ctx->pc != 0x2FFC34u) { return; }
    }
    ctx->pc = 0x2FFC34u;
label_2ffc34:
    // 0x2ffc34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ffc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ffc38: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFC38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFC38u;
            // 0x2ffc3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FFC40u;
}
