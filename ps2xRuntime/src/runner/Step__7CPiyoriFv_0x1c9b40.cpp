#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__7CPiyoriFv
// Address: 0x1c9b40 - 0x1c9cb0
void Step__7CPiyoriFv_0x1c9b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__7CPiyoriFv_0x1c9b40");
#endif

    switch (ctx->pc) {
        case 0x1c9ba0u: goto label_1c9ba0;
        case 0x1c9bc0u: goto label_1c9bc0;
        case 0x1c9bc8u: goto label_1c9bc8;
        case 0x1c9be8u: goto label_1c9be8;
        case 0x1c9c64u: goto label_1c9c64;
        default: break;
    }

    ctx->pc = 0x1c9b40u;

    // 0x1c9b40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c9b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c9b44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c9b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c9b48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c9b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c9b4c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c9b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c9b50: 0x10600053  beqz        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x1C9B50u;
    {
        const bool branch_taken_0x1c9b50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9B50u;
            // 0x1c9b54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b50) {
            ctx->pc = 0x1C9CA0u;
            goto label_1c9ca0;
        }
    }
    ctx->pc = 0x1C9B58u;
    // 0x1c9b58: 0x8603001c  lh          $v1, 0x1C($s0)
    ctx->pc = 0x1c9b58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c9b5c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c9b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c9b60: 0xa603001c  sh          $v1, 0x1C($s0)
    ctx->pc = 0x1c9b60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c9b64: 0x8603001c  lh          $v1, 0x1C($s0)
    ctx->pc = 0x1c9b64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c9b68: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9B68u;
    {
        const bool branch_taken_0x1c9b68 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1c9b68) {
            ctx->pc = 0x1C9B78u;
            goto label_1c9b78;
        }
    }
    ctx->pc = 0x1C9B70u;
    // 0x1c9b70: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1C9B70u;
    {
        const bool branch_taken_0x1c9b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9B70u;
            // 0x1c9b74: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b70) {
            ctx->pc = 0x1C9CA0u;
            goto label_1c9ca0;
        }
    }
    ctx->pc = 0x1C9B78u;
label_1c9b78:
    // 0x1c9b78: 0x8603001e  lh          $v1, 0x1E($s0)
    ctx->pc = 0x1c9b78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x1c9b7c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c9b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c9b80: 0xa603001e  sh          $v1, 0x1E($s0)
    ctx->pc = 0x1c9b80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c9b84: 0x8603001e  lh          $v1, 0x1E($s0)
    ctx->pc = 0x1c9b84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x1c9b88: 0x1c600019  bgtz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C9B88u;
    {
        const bool branch_taken_0x1c9b88 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1c9b88) {
            ctx->pc = 0x1C9BF0u;
            goto label_1c9bf0;
        }
    }
    ctx->pc = 0x1C9B90u;
    // 0x1c9b90: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c9b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c9b94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b98: 0xc05d3d4  jal         func_174F50
    ctx->pc = 0x1C9B98u;
    SET_GPR_U32(ctx, 31, 0x1C9BA0u);
    ctx->pc = 0x1C9B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9B98u;
            // 0x1c9b9c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174F50u;
    if (runtime->hasFunction(0x174F50u)) {
        auto targetFn = runtime->lookupFunction(0x174F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9BA0u; }
        if (ctx->pc != 0x1C9BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiPf_0x174f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9BA0u; }
        if (ctx->pc != 0x1C9BA0u) { return; }
    }
    ctx->pc = 0x1C9BA0u;
label_1c9ba0:
    // 0x1c9ba0: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x1c9ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
    // 0x1c9ba4: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x1c9ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
    // 0x1c9ba8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1c9ba8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c9bac: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x1c9bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1c9bb0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1c9bb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c9bb4: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x1c9bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1c9bb8: 0xc063bbc  jal         func_18EEF0
    ctx->pc = 0x1C9BB8u;
    SET_GPR_U32(ctx, 31, 0x1C9BC0u);
    ctx->pc = 0x1C9BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9BB8u;
            // 0x1c9bbc: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18EEF0u;
    if (runtime->hasFunction(0x18EEF0u)) {
        auto targetFn = runtime->lookupFunction(0x18EEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9BC0u; }
        if (ctx->pc != 0x1C9BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndGetVolPan__FPfPfPfff_0x18eef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9BC0u; }
        if (ctx->pc != 0x1C9BC0u) { return; }
    }
    ctx->pc = 0x1C9BC0u;
label_1c9bc0:
    // 0x1c9bc0: 0xc06421c  jal         func_190870
    ctx->pc = 0x1C9BC0u;
    SET_GPR_U32(ctx, 31, 0x1C9BC8u);
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9BC8u; }
        if (ctx->pc != 0x1C9BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9BC8u; }
        if (ctx->pc != 0x1C9BC8u) { return; }
    }
    ctx->pc = 0x1C9BC8u;
label_1c9bc8:
    // 0x1c9bc8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1c9bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1c9bcc: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x1c9bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c9bd0: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1c9bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1c9bd4: 0x8c24c4d0  lw          $a0, -0x3B30($at)
    ctx->pc = 0x1c9bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952144)));
    // 0x1c9bd8: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x1c9bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c9bdc: 0xc7ad003c  lwc1        $f13, 0x3C($sp)
    ctx->pc = 0x1c9bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c9be0: 0xc063830  jal         func_18E0C0
    ctx->pc = 0x1C9BE0u;
    SET_GPR_U32(ctx, 31, 0x1C9BE8u);
    ctx->pc = 0x1C9BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9BE0u;
            // 0x1c9be4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E0C0u;
    if (runtime->hasFunction(0x18E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x18E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9BE8u; }
        if (ctx->pc != 0x1C9BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlayVPf__FUiiffi_0x18e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9BE8u; }
        if (ctx->pc != 0x1C9BE8u) { return; }
    }
    ctx->pc = 0x1C9BE8u;
label_1c9be8:
    // 0x1c9be8: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1c9be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c9bec: 0xa603001e  sh          $v1, 0x1E($s0)
    ctx->pc = 0x1c9becu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 3));
label_1c9bf0:
    // 0x1c9bf0: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1c9bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9bf4: 0x3c033dd6  lui         $v1, 0x3DD6
    ctx->pc = 0x1c9bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15830 << 16));
    // 0x1c9bf8: 0x34647750  ori         $a0, $v1, 0x7750
    ctx->pc = 0x1c9bf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30544);
    // 0x1c9bfc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c9bfcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9c00: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1c9c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1c9c04: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1c9c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1c9c08: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c9c08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c9c0c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c9c0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c9c10: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1c9c10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9c14: 0x0  nop
    ctx->pc = 0x1c9c14u;
    // NOP
    // 0x1c9c18: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9C18u;
    {
        const bool branch_taken_0x1c9c18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C9C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9C18u;
            // 0x1c9c1c: 0xe6010010  swc1        $f1, 0x10($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c18) {
            ctx->pc = 0x1C9C38u;
            goto label_1c9c38;
        }
    }
    ctx->pc = 0x1C9C20u;
    // 0x1c9c20: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1c9c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1c9c24: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1c9c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1c9c28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c9c28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9c2c: 0x0  nop
    ctx->pc = 0x1c9c2cu;
    // NOP
    // 0x1c9c30: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c9c30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c9c34: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1c9c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_1c9c38:
    // 0x1c9c38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9c3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c9c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9c40: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1c9c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1c9c44: 0x3c043e56  lui         $a0, 0x3E56
    ctx->pc = 0x1c9c44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15958 << 16));
    // 0x1c9c48: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1c9c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1c9c4c: 0x34847750  ori         $a0, $a0, 0x7750
    ctx->pc = 0x1c9c4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30544);
    // 0x1c9c50: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c9c50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9c54: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1c9c54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c9c58: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1c9c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1c9c5c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1c9c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1c9c60: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c9c60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c9c64:
    // 0x1c9c64: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x1c9c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1c9c68: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1c9c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9c6c: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x1c9c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1c9c70: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1c9c70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1c9c74: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1c9c74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9c78: 0x0  nop
    ctx->pc = 0x1c9c78u;
    // NOP
    // 0x1c9c7c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9C7Cu;
    {
        const bool branch_taken_0x1c9c7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C9C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9C7Cu;
            // 0x1c9c80: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c7c) {
            ctx->pc = 0x1C9C8Cu;
            goto label_1c9c8c;
        }
    }
    ctx->pc = 0x1C9C84u;
    // 0x1c9c84: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c9c84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c9c88: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c9c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1c9c8c:
    // 0x1c9c8c: 0x0  nop
    ctx->pc = 0x1c9c8cu;
    // NOP
    // 0x1c9c90: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c9c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c9c94: 0x28a30003  slti        $v1, $a1, 0x3
    ctx->pc = 0x1c9c94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c9c98: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1C9C98u;
    {
        const bool branch_taken_0x1c9c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9C98u;
            // 0x1c9c9c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c98) {
            ctx->pc = 0x1C9C64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c9c64;
        }
    }
    ctx->pc = 0x1C9CA0u;
label_1c9ca0:
    // 0x1c9ca0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c9ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9ca4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c9ca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9CA8u;
            // 0x1c9cac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9CB0u;
}
