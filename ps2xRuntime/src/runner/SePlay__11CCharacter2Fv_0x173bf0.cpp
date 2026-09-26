#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SePlay__11CCharacter2Fv
// Address: 0x173bf0 - 0x173ec4
void SePlay__11CCharacter2Fv_0x173bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SePlay__11CCharacter2Fv_0x173bf0");
#endif

    switch (ctx->pc) {
        case 0x173c7cu: goto label_173c7c;
        case 0x173c9cu: goto label_173c9c;
        case 0x173ca8u: goto label_173ca8;
        case 0x173d0cu: goto label_173d0c;
        case 0x173d40u: goto label_173d40;
        case 0x173dbcu: goto label_173dbc;
        case 0x173df8u: goto label_173df8;
        case 0x173e28u: goto label_173e28;
        case 0x173e60u: goto label_173e60;
        default: break;
    }

    ctx->pc = 0x173bf0u;

    // 0x173bf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x173bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x173bf4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x173bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x173bf8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x173bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x173bfc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x173bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x173c00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x173c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x173c04: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x173c04u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x173c08: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x173c08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x173c0c: 0x8c83059c  lw          $v1, 0x59C($a0)
    ctx->pc = 0x173c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1436)));
    // 0x173c10: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x173C10u;
    {
        const bool branch_taken_0x173c10 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x173C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173C10u;
            // 0x173c14: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173c10) {
            ctx->pc = 0x173C20u;
            goto label_173c20;
        }
    }
    ctx->pc = 0x173C18u;
    // 0x173c18: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x173c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x173c1c: 0xae43059c  sw          $v1, 0x59C($s2)
    ctx->pc = 0x173c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1436), GPR_U32(ctx, 3));
label_173c20:
    // 0x173c20: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x173c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x173c24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x173c24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x173c28: 0xc6400390  lwc1        $f0, 0x390($s2)
    ctx->pc = 0x173c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173c2c: 0x8e430380  lw          $v1, 0x380($s2)
    ctx->pc = 0x173c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
    // 0x173c30: 0xc6420388  lwc1        $f2, 0x388($s2)
    ctx->pc = 0x173c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x173c34: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x173c34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x173c38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x173c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x173c3c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x173c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x173c40: 0x8c7005a4  lw          $s0, 0x5A4($v1)
    ctx->pc = 0x173c40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1444)));
    // 0x173c44: 0x46001501  sub.s       $f20, $f2, $f0
    ctx->pc = 0x173c44u;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x173c48: 0x12000096  beqz        $s0, . + 4 + (0x96 << 2)
    ctx->pc = 0x173C48u;
    {
        const bool branch_taken_0x173c48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x173C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173C48u;
            // 0x173c4c: 0x46001540  add.s       $f21, $f2, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x173c48) {
            ctx->pc = 0x173EA4u;
            goto label_173ea4;
        }
    }
    ctx->pc = 0x173C50u;
    // 0x173c50: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x173c50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x173c54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x173c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173c58: 0xae440594  sw          $a0, 0x594($s2)
    ctx->pc = 0x173c58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1428), GPR_U32(ctx, 4));
    // 0x173c5c: 0xae400598  sw          $zero, 0x598($s2)
    ctx->pc = 0x173c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1432), GPR_U32(ctx, 0));
    // 0x173c60: 0x8e440590  lw          $a0, 0x590($s2)
    ctx->pc = 0x173c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1424)));
    // 0x173c64: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x173C64u;
    {
        const bool branch_taken_0x173c64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x173C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173C64u;
            // 0x173c68: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173c64) {
            ctx->pc = 0x173CA0u;
            goto label_173ca0;
        }
    }
    ctx->pc = 0x173C6Cu;
    // 0x173c6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x173c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173c70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x173c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173c74: 0xc05d3d4  jal         func_174F50
    ctx->pc = 0x173C74u;
    SET_GPR_U32(ctx, 31, 0x173C7Cu);
    ctx->pc = 0x173C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173C74u;
            // 0x173c78: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174F50u;
    if (runtime->hasFunction(0x174F50u)) {
        auto targetFn = runtime->lookupFunction(0x174F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173C7Cu; }
        if (ctx->pc != 0x173C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiPf_0x174f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173C7Cu; }
        if (ctx->pc != 0x173C7Cu) { return; }
    }
    ctx->pc = 0x173C7Cu;
label_173c7c:
    // 0x173c7c: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x173c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
    // 0x173c80: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x173c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
    // 0x173c84: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x173c84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x173c88: 0x26440594  addiu       $a0, $s2, 0x594
    ctx->pc = 0x173c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1428));
    // 0x173c8c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x173c8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x173c90: 0x26450598  addiu       $a1, $s2, 0x598
    ctx->pc = 0x173c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1432));
    // 0x173c94: 0xc063bbc  jal         func_18EEF0
    ctx->pc = 0x173C94u;
    SET_GPR_U32(ctx, 31, 0x173C9Cu);
    ctx->pc = 0x173C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173C94u;
            // 0x173c98: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18EEF0u;
    if (runtime->hasFunction(0x18EEF0u)) {
        auto targetFn = runtime->lookupFunction(0x18EEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173C9Cu; }
        if (ctx->pc != 0x173C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndGetVolPan__FPfPfPfff_0x18eef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173C9Cu; }
        if (ctx->pc != 0x173C9Cu) { return; }
    }
    ctx->pc = 0x173C9Cu;
label_173c9c:
    // 0x173c9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x173c9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173ca0:
    // 0x173ca0: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x173CA0u;
    {
        const bool branch_taken_0x173ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173ca0) {
            ctx->pc = 0x173E88u;
            goto label_173e88;
        }
    }
    ctx->pc = 0x173CA8u;
label_173ca8:
    // 0x173ca8: 0x86070008  lh          $a3, 0x8($s0)
    ctx->pc = 0x173ca8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x173cac: 0x18e00026  blez        $a3, . + 4 + (0x26 << 2)
    ctx->pc = 0x173CACu;
    {
        const bool branch_taken_0x173cac = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x173cac) {
            ctx->pc = 0x173D48u;
            goto label_173d48;
        }
    }
    ctx->pc = 0x173CB4u;
    // 0x173cb4: 0xc6410388  lwc1        $f1, 0x388($s2)
    ctx->pc = 0x173cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173cb8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x173cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173cbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x173cbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173cc0: 0x0  nop
    ctx->pc = 0x173cc0u;
    // NOP
    // 0x173cc4: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x173CC4u;
    {
        const bool branch_taken_0x173cc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x173cc4) {
            ctx->pc = 0x173D40u;
            goto label_173d40;
        }
    }
    ctx->pc = 0x173CCCu;
    // 0x173ccc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x173cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173cd0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x173cd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173cd4: 0x0  nop
    ctx->pc = 0x173cd4u;
    // NOP
    // 0x173cd8: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x173CD8u;
    {
        const bool branch_taken_0x173cd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x173cd8) {
            ctx->pc = 0x173D40u;
            goto label_173d40;
        }
    }
    ctx->pc = 0x173CE0u;
    // 0x173ce0: 0x8604000a  lh          $a0, 0xA($s0)
    ctx->pc = 0x173ce0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x173ce4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x173ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x173ce8: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x173CE8u;
    {
        const bool branch_taken_0x173ce8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x173ce8) {
            ctx->pc = 0x173D0Cu;
            goto label_173d0c;
        }
    }
    ctx->pc = 0x173CF0u;
    // 0x173cf0: 0x8e4405a0  lw          $a0, 0x5A0($s2)
    ctx->pc = 0x173cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1440)));
    // 0x173cf4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x173CF4u;
    {
        const bool branch_taken_0x173cf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x173cf4) {
            ctx->pc = 0x173D0Cu;
            goto label_173d0c;
        }
    }
    ctx->pc = 0x173CFCu;
    // 0x173cfc: 0x8606000c  lh          $a2, 0xC($s0)
    ctx->pc = 0x173cfcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x173d00: 0x8e450588  lw          $a1, 0x588($s2)
    ctx->pc = 0x173d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1416)));
    // 0x173d04: 0xc0631a8  jal         func_18C6A0
    ctx->pc = 0x173D04u;
    SET_GPR_U32(ctx, 31, 0x173D0Cu);
    ctx->pc = 0x173D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173D04u;
            // 0x173d08: 0x2408000d  addiu       $t0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C6A0u;
    if (runtime->hasFunction(0x18C6A0u)) {
        auto targetFn = runtime->lookupFunction(0x18C6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173D0Cu; }
        if (ctx->pc != 0x173D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SeLoopPlayStop__11CLoopSeMngrFUiiii_0x18c6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173D0Cu; }
        if (ctx->pc != 0x173D0Cu) { return; }
    }
    ctx->pc = 0x173D0Cu;
label_173d0c:
    // 0x173d0c: 0x0  nop
    ctx->pc = 0x173d0cu;
    // NOP
    // 0x173d10: 0x8604000a  lh          $a0, 0xA($s0)
    ctx->pc = 0x173d10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x173d14: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x173d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x173d18: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x173D18u;
    {
        const bool branch_taken_0x173d18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x173d18) {
            ctx->pc = 0x173D40u;
            goto label_173d40;
        }
    }
    ctx->pc = 0x173D20u;
    // 0x173d20: 0x8e4405a0  lw          $a0, 0x5A0($s2)
    ctx->pc = 0x173d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1440)));
    // 0x173d24: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x173D24u;
    {
        const bool branch_taken_0x173d24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x173d24) {
            ctx->pc = 0x173D40u;
            goto label_173d40;
        }
    }
    ctx->pc = 0x173D2Cu;
    // 0x173d2c: 0x8606000c  lh          $a2, 0xC($s0)
    ctx->pc = 0x173d2cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x173d30: 0x86070008  lh          $a3, 0x8($s0)
    ctx->pc = 0x173d30u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x173d34: 0x8e45058c  lw          $a1, 0x58C($s2)
    ctx->pc = 0x173d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1420)));
    // 0x173d38: 0xc0631a8  jal         func_18C6A0
    ctx->pc = 0x173D38u;
    SET_GPR_U32(ctx, 31, 0x173D40u);
    ctx->pc = 0x173D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173D38u;
            // 0x173d3c: 0x2408000d  addiu       $t0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C6A0u;
    if (runtime->hasFunction(0x18C6A0u)) {
        auto targetFn = runtime->lookupFunction(0x18C6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173D40u; }
        if (ctx->pc != 0x173D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SeLoopPlayStop__11CLoopSeMngrFUiiii_0x18c6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173D40u; }
        if (ctx->pc != 0x173D40u) { return; }
    }
    ctx->pc = 0x173D40u;
label_173d40:
    // 0x173d40: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x173D40u;
    {
        const bool branch_taken_0x173d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173D40u;
            // 0x173d44: 0xa600000e  sh          $zero, 0xE($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173d40) {
            ctx->pc = 0x173E68u;
            goto label_173e68;
        }
    }
    ctx->pc = 0x173D48u;
label_173d48:
    // 0x173d48: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x173d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173d4c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x173d4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173d50: 0x0  nop
    ctx->pc = 0x173d50u;
    // NOP
    // 0x173d54: 0x45000044  bc1f        . + 4 + (0x44 << 2)
    ctx->pc = 0x173D54u;
    {
        const bool branch_taken_0x173d54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x173d54) {
            ctx->pc = 0x173E68u;
            goto label_173e68;
        }
    }
    ctx->pc = 0x173D5Cu;
    // 0x173d5c: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x173d5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173d60: 0x0  nop
    ctx->pc = 0x173d60u;
    // NOP
    // 0x173d64: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x173D64u;
    {
        const bool branch_taken_0x173d64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x173d64) {
            ctx->pc = 0x173E68u;
            goto label_173e68;
        }
    }
    ctx->pc = 0x173D6Cu;
    // 0x173d6c: 0x8603000e  lh          $v1, 0xE($s0)
    ctx->pc = 0x173d6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x173d70: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x173D70u;
    {
        const bool branch_taken_0x173d70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x173d70) {
            ctx->pc = 0x173E68u;
            goto label_173e68;
        }
    }
    ctx->pc = 0x173D78u;
    // 0x173d78: 0x8605000a  lh          $a1, 0xA($s0)
    ctx->pc = 0x173d78u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x173d7c: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x173d7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x173d80: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x173D80u;
    {
        const bool branch_taken_0x173d80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x173d80) {
            ctx->pc = 0x173DD0u;
            goto label_173dd0;
        }
    }
    ctx->pc = 0x173D88u;
    // 0x173d88: 0x8e430584  lw          $v1, 0x584($s2)
    ctx->pc = 0x173d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1412)));
    // 0x173d8c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x173D8Cu;
    {
        const bool branch_taken_0x173d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x173d8c) {
            ctx->pc = 0x173DD0u;
            goto label_173dd0;
        }
    }
    ctx->pc = 0x173D94u;
    // 0x173d94: 0x8e430580  lw          $v1, 0x580($s2)
    ctx->pc = 0x173d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
    // 0x173d98: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x173D98u;
    {
        const bool branch_taken_0x173d98 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x173d98) {
            ctx->pc = 0x173DBCu;
            goto label_173dbc;
        }
    }
    ctx->pc = 0x173DA0u;
    // 0x173da0: 0x8e44057c  lw          $a0, 0x57C($s2)
    ctx->pc = 0x173da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1404)));
    // 0x173da4: 0xc64c0594  lwc1        $f12, 0x594($s2)
    ctx->pc = 0x173da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x173da8: 0xc64d0598  lwc1        $f13, 0x598($s2)
    ctx->pc = 0x173da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x173dac: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x173dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x173db0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x173db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x173db4: 0xc063830  jal         func_18E0C0
    ctx->pc = 0x173DB4u;
    SET_GPR_U32(ctx, 31, 0x173DBCu);
    ctx->pc = 0x173DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173DB4u;
            // 0x173db8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E0C0u;
    if (runtime->hasFunction(0x18E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x18E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173DBCu; }
        if (ctx->pc != 0x173DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlayVPf__FUiiffi_0x18e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173DBCu; }
        if (ctx->pc != 0x173DBCu) { return; }
    }
    ctx->pc = 0x173DBCu;
label_173dbc:
    // 0x173dbc: 0x0  nop
    ctx->pc = 0x173dbcu;
    // NOP
    // 0x173dc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x173dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173dc4: 0xae43059c  sw          $v1, 0x59C($s2)
    ctx->pc = 0x173dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1436), GPR_U32(ctx, 3));
    // 0x173dc8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x173dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x173dcc: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x173dccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
label_173dd0:
    // 0x173dd0: 0x8604000a  lh          $a0, 0xA($s0)
    ctx->pc = 0x173dd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x173dd4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x173dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x173dd8: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x173DD8u;
    {
        const bool branch_taken_0x173dd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x173dd8) {
            ctx->pc = 0x173E00u;
            goto label_173e00;
        }
    }
    ctx->pc = 0x173DE0u;
    // 0x173de0: 0x8605000c  lh          $a1, 0xC($s0)
    ctx->pc = 0x173de0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x173de4: 0xc64c0594  lwc1        $f12, 0x594($s2)
    ctx->pc = 0x173de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x173de8: 0x8e440588  lw          $a0, 0x588($s2)
    ctx->pc = 0x173de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1416)));
    // 0x173dec: 0xc64d0598  lwc1        $f13, 0x598($s2)
    ctx->pc = 0x173decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x173df0: 0xc063830  jal         func_18E0C0
    ctx->pc = 0x173DF0u;
    SET_GPR_U32(ctx, 31, 0x173DF8u);
    ctx->pc = 0x173DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173DF0u;
            // 0x173df4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E0C0u;
    if (runtime->hasFunction(0x18E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x18E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173DF8u; }
        if (ctx->pc != 0x173DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlayVPf__FUiiffi_0x18e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173DF8u; }
        if (ctx->pc != 0x173DF8u) { return; }
    }
    ctx->pc = 0x173DF8u;
label_173df8:
    // 0x173df8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x173df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x173dfc: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x173dfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
label_173e00:
    // 0x173e00: 0x8604000a  lh          $a0, 0xA($s0)
    ctx->pc = 0x173e00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x173e04: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x173e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x173e08: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x173E08u;
    {
        const bool branch_taken_0x173e08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x173e08) {
            ctx->pc = 0x173E38u;
            goto label_173e38;
        }
    }
    ctx->pc = 0x173E10u;
    // 0x173e10: 0x8605000c  lh          $a1, 0xC($s0)
    ctx->pc = 0x173e10u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x173e14: 0xc64c0594  lwc1        $f12, 0x594($s2)
    ctx->pc = 0x173e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x173e18: 0x8e440588  lw          $a0, 0x588($s2)
    ctx->pc = 0x173e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1416)));
    // 0x173e1c: 0xc64d0598  lwc1        $f13, 0x598($s2)
    ctx->pc = 0x173e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x173e20: 0xc063830  jal         func_18E0C0
    ctx->pc = 0x173E20u;
    SET_GPR_U32(ctx, 31, 0x173E28u);
    ctx->pc = 0x173E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173E20u;
            // 0x173e24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E0C0u;
    if (runtime->hasFunction(0x18E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x18E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173E28u; }
        if (ctx->pc != 0x173E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlayVPf__FUiiffi_0x18e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173E28u; }
        if (ctx->pc != 0x173E28u) { return; }
    }
    ctx->pc = 0x173E28u;
label_173e28:
    // 0x173e28: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x173e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x173e2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x173e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173e30: 0xa604000e  sh          $a0, 0xE($s0)
    ctx->pc = 0x173e30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x173e34: 0xae43059c  sw          $v1, 0x59C($s2)
    ctx->pc = 0x173e34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1436), GPR_U32(ctx, 3));
label_173e38:
    // 0x173e38: 0x8604000a  lh          $a0, 0xA($s0)
    ctx->pc = 0x173e38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x173e3c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x173e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x173e40: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x173E40u;
    {
        const bool branch_taken_0x173e40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x173e40) {
            ctx->pc = 0x173E68u;
            goto label_173e68;
        }
    }
    ctx->pc = 0x173E48u;
    // 0x173e48: 0x8605000c  lh          $a1, 0xC($s0)
    ctx->pc = 0x173e48u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x173e4c: 0xc64c0594  lwc1        $f12, 0x594($s2)
    ctx->pc = 0x173e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x173e50: 0x8e44058c  lw          $a0, 0x58C($s2)
    ctx->pc = 0x173e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1420)));
    // 0x173e54: 0xc64d0598  lwc1        $f13, 0x598($s2)
    ctx->pc = 0x173e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x173e58: 0xc063830  jal         func_18E0C0
    ctx->pc = 0x173E58u;
    SET_GPR_U32(ctx, 31, 0x173E60u);
    ctx->pc = 0x173E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173E58u;
            // 0x173e5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E0C0u;
    if (runtime->hasFunction(0x18E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x18E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173E60u; }
        if (ctx->pc != 0x173E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlayVPf__FUiiffi_0x18e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173E60u; }
        if (ctx->pc != 0x173E60u) { return; }
    }
    ctx->pc = 0x173E60u;
label_173e60:
    // 0x173e60: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x173e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x173e64: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x173e64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
label_173e68:
    // 0x173e68: 0x8603000e  lh          $v1, 0xE($s0)
    ctx->pc = 0x173e68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x173e6c: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x173E6Cu;
    {
        const bool branch_taken_0x173e6c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x173e6c) {
            ctx->pc = 0x173E7Cu;
            goto label_173e7c;
        }
    }
    ctx->pc = 0x173E74u;
    // 0x173e74: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x173e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x173e78: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x173e78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
label_173e7c:
    // 0x173e7c: 0x0  nop
    ctx->pc = 0x173e7cu;
    // NOP
    // 0x173e80: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x173e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x173e84: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x173e84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_173e88:
    // 0x173e88: 0x8e430380  lw          $v1, 0x380($s2)
    ctx->pc = 0x173e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
    // 0x173e8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x173e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x173e90: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x173e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x173e94: 0x8c6305c4  lw          $v1, 0x5C4($v1)
    ctx->pc = 0x173e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1476)));
    // 0x173e98: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x173e98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x173e9c: 0x1460ff82  bnez        $v1, . + 4 + (-0x7E << 2)
    ctx->pc = 0x173E9Cu;
    {
        const bool branch_taken_0x173e9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x173e9c) {
            ctx->pc = 0x173CA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_173ca8;
        }
    }
    ctx->pc = 0x173EA4u;
label_173ea4:
    // 0x173ea4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x173ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x173ea8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x173ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x173eac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x173eacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173eb0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x173eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x173eb4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x173eb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173eb8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x173eb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x173EBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173EBCu;
            // 0x173ec0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173EC4u;
}
