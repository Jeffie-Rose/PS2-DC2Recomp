#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNextMovePos__16CMenuPosDataFormFPi
// Address: 0x2289b0 - 0x228cd8
void GetNextMovePos__16CMenuPosDataFormFPi_0x2289b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNextMovePos__16CMenuPosDataFormFPi_0x2289b0");
#endif

    switch (ctx->pc) {
        case 0x228a0cu: goto label_228a0c;
        case 0x228a18u: goto label_228a18;
        case 0x228a60u: goto label_228a60;
        case 0x228a6cu: goto label_228a6c;
        case 0x228ae8u: goto label_228ae8;
        case 0x228b28u: goto label_228b28;
        case 0x228b38u: goto label_228b38;
        case 0x228b44u: goto label_228b44;
        case 0x228b4cu: goto label_228b4c;
        case 0x228b7cu: goto label_228b7c;
        case 0x228bbcu: goto label_228bbc;
        case 0x228bccu: goto label_228bcc;
        case 0x228c50u: goto label_228c50;
        case 0x228c58u: goto label_228c58;
        default: break;
    }

    ctx->pc = 0x2289b0u;

    // 0x2289b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2289b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2289b4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2289b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2289b8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2289b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2289bc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2289bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2289c0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2289c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2289c4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2289c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2289c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2289c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2289cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2289ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2289d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2289d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2289d4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2289d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2289d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2289d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2289dc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2289DCu;
    {
        const bool branch_taken_0x2289dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2289E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2289DCu;
            // 0x2289e0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2289dc) {
            ctx->pc = 0x2289F0u;
            goto label_2289f0;
        }
    }
    ctx->pc = 0x2289E4u;
    // 0x2289e4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x2289e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2289e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2289E8u;
    {
        const bool branch_taken_0x2289e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2289e8) {
            ctx->pc = 0x2289F8u;
            goto label_2289f8;
        }
    }
    ctx->pc = 0x2289F0u;
label_2289f0:
    // 0x2289f0: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x2289F0u;
    {
        const bool branch_taken_0x2289f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2289F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2289F0u;
            // 0x2289f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2289f0) {
            ctx->pc = 0x228CACu;
            goto label_228cac;
        }
    }
    ctx->pc = 0x2289F8u;
label_2289f8:
    // 0x2289f8: 0xdf829420  ld          $v0, -0x6BE0($gp)
    ctx->pc = 0x2289f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294939680)));
    // 0x2289fc: 0x27a30098  addiu       $v1, $sp, 0x98
    ctx->pc = 0x2289fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x228a00: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x228a00u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x228a04: 0xc0a248c  jal         func_289230
    ctx->pc = 0x228A04u;
    SET_GPR_U32(ctx, 31, 0x228A0Cu);
    ctx->pc = 0x228A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228A04u;
            // 0x228a08: 0xc62c000c  lwc1        $f12, 0xC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228A0Cu; }
        if (ctx->pc != 0x228A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228A0Cu; }
        if (ctx->pc != 0x228A0Cu) { return; }
    }
    ctx->pc = 0x228A0Cu;
label_228a0c:
    // 0x228a0c: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x228a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    // 0x228a10: 0xc0a248c  jal         func_289230
    ctx->pc = 0x228A10u;
    SET_GPR_U32(ctx, 31, 0x228A18u);
    ctx->pc = 0x228A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228A10u;
            // 0x228a14: 0xc62c0010  lwc1        $f12, 0x10($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228A18u; }
        if (ctx->pc != 0x228A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228A18u; }
        if (ctx->pc != 0x228A18u) { return; }
    }
    ctx->pc = 0x228A18u;
label_228a18:
    // 0x228a18: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x228a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x228a1c: 0x8626005e  lh          $a2, 0x5E($s1)
    ctx->pc = 0x228a1cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 94)));
    // 0x228a20: 0xc0082a  slt         $at, $a2, $zero
    ctx->pc = 0x228a20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x228a24: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x228A24u;
    {
        const bool branch_taken_0x228a24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x228a24) {
            ctx->pc = 0x228A74u;
            goto label_228a74;
        }
    }
    ctx->pc = 0x228A2Cu;
    // 0x228a2c: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x228a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x228a30: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x228a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x228a34: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x228a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x228a38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x228a38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x228a3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x228a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x228a40: 0x8c530010  lw          $s3, 0x10($v0)
    ctx->pc = 0x228a40u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x228a44: 0x86720000  lh          $s2, 0x0($s3)
    ctx->pc = 0x228a44u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x228a48: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x228a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228a4c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x228a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x228a50: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x228a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228a54: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x228a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x228a58: 0xc0a248c  jal         func_289230
    ctx->pc = 0x228A58u;
    SET_GPR_U32(ctx, 31, 0x228A60u);
    ctx->pc = 0x228A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228A58u;
            // 0x228a5c: 0xc66c0004  lwc1        $f12, 0x4($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228A60u; }
        if (ctx->pc != 0x228A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228A60u; }
        if (ctx->pc != 0x228A60u) { return; }
    }
    ctx->pc = 0x228A60u;
label_228a60:
    // 0x228a60: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x228a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x228a64: 0xc0a248c  jal         func_289230
    ctx->pc = 0x228A64u;
    SET_GPR_U32(ctx, 31, 0x228A6Cu);
    ctx->pc = 0x228A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228A64u;
            // 0x228a68: 0xc66c0008  lwc1        $f12, 0x8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228A6Cu; }
        if (ctx->pc != 0x228A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228A6Cu; }
        if (ctx->pc != 0x228A6Cu) { return; }
    }
    ctx->pc = 0x228A6Cu;
label_228a6c:
    // 0x228a6c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x228A6Cu;
    {
        const bool branch_taken_0x228a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228A6Cu;
            // 0x228a70: 0xafa20094  sw          $v0, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228a6c) {
            ctx->pc = 0x228A98u;
            goto label_228a98;
        }
    }
    ctx->pc = 0x228A74u;
label_228a74:
    // 0x228a74: 0x92320020  lbu         $s2, 0x20($s1)
    ctx->pc = 0x228a74u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x228a78: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x228a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228a7c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x228a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x228a80: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x228a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228a84: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x228a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x228a88: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x228a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x228a8c: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x228a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x228a90: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x228a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x228a94: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x228a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_228a98:
    // 0x228a98: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x228a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x228a9c: 0x12420036  beq         $s2, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x228A9Cu;
    {
        const bool branch_taken_0x228a9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x228AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228A9Cu;
            // 0x228aa0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228a9c) {
            ctx->pc = 0x228B78u;
            goto label_228b78;
        }
    }
    ctx->pc = 0x228AA4u;
    // 0x228aa4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x228aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x228aa8: 0x12420033  beq         $s2, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x228AA8u;
    {
        const bool branch_taken_0x228aa8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x228AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228AA8u;
            // 0x228aac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228aa8) {
            ctx->pc = 0x228B78u;
            goto label_228b78;
        }
    }
    ctx->pc = 0x228AB0u;
    // 0x228ab0: 0x1242000c  beq         $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x228AB0u;
    {
        const bool branch_taken_0x228ab0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x228AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228AB0u;
            // 0x228ab4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228ab0) {
            ctx->pc = 0x228AE4u;
            goto label_228ae4;
        }
    }
    ctx->pc = 0x228AB8u;
    // 0x228ab8: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x228AB8u;
    {
        const bool branch_taken_0x228ab8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x228ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228AB8u;
            // 0x228abc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228ab8) {
            ctx->pc = 0x228AD0u;
            goto label_228ad0;
        }
    }
    ctx->pc = 0x228AC0u;
    // 0x228ac0: 0x12420075  beq         $s2, $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x228AC0u;
    {
        const bool branch_taken_0x228ac0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x228ac0) {
            ctx->pc = 0x228C98u;
            goto label_228c98;
        }
    }
    ctx->pc = 0x228AC8u;
    // 0x228ac8: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x228AC8u;
    {
        const bool branch_taken_0x228ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228ac8) {
            ctx->pc = 0x228C98u;
            goto label_228c98;
        }
    }
    ctx->pc = 0x228AD0u;
label_228ad0:
    // 0x228ad0: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x228ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x228ad4: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x228ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x228ad8: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x228ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
    // 0x228adc: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x228ADCu;
    {
        const bool branch_taken_0x228adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228ADCu;
            // 0x228ae0: 0xafa2009c  sw          $v0, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228adc) {
            ctx->pc = 0x228C98u;
            goto label_228c98;
        }
    }
    ctx->pc = 0x228AE4u;
label_228ae4:
    // 0x228ae4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x228ae4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228ae8:
    // 0x228ae8: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x228ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x228aec: 0x24730098  addiu       $s3, $v1, 0x98
    ctx->pc = 0x228aecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 152));
    // 0x228af0: 0x8c740090  lw          $s4, 0x90($v1)
    ctx->pc = 0x228af0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x228af4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x228af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x228af8: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x228af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x228afc: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x228AFCu;
    {
        const bool branch_taken_0x228afc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x228B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228AFCu;
            // 0x228b00: 0x24620088  addiu       $v0, $v1, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228afc) {
            ctx->pc = 0x228B10u;
            goto label_228b10;
        }
    }
    ctx->pc = 0x228B04u;
    // 0x228b04: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x228b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228b08: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x228b08u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x228b0c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x228b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_228b10:
    // 0x228b10: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x228b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x228b14: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x228b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228b18: 0xc4540088  lwc1        $f20, 0x88($v0)
    ctx->pc = 0x228b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x228b1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228b1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228b20: 0xc0a248c  jal         func_289230
    ctx->pc = 0x228B20u;
    SET_GPR_U32(ctx, 31, 0x228B28u);
    ctx->pc = 0x228B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228B20u;
            // 0x228b24: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228B28u; }
        if (ctx->pc != 0x228B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228B28u; }
        if (ctx->pc != 0x228B28u) { return; }
    }
    ctx->pc = 0x228B28u;
label_228b28:
    // 0x228b28: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x228b28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x228b2c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x228b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x228b30: 0xc048fb2  jal         func_123EC8
    ctx->pc = 0x228B30u;
    SET_GPR_U32(ctx, 31, 0x228B38u);
    ctx->pc = 0x228B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228B30u;
            // 0x228b34: 0x2822023  subu        $a0, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123EC8u;
    if (runtime->hasFunction(0x123EC8u)) {
        auto targetFn = runtime->lookupFunction(0x123EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228B38u; }
        if (ctx->pc != 0x228B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        abs_0x123ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228B38u; }
        if (ctx->pc != 0x228B38u) { return; }
    }
    ctx->pc = 0x228B38u;
label_228b38:
    // 0x228b38: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x228b38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x228b3c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x228B3Cu;
    SET_GPR_U32(ctx, 31, 0x228B44u);
    ctx->pc = 0x228B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228B3Cu;
            // 0x228b40: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228B44u; }
        if (ctx->pc != 0x228B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228B44u; }
        if (ctx->pc != 0x228B44u) { return; }
    }
    ctx->pc = 0x228B44u;
label_228b44:
    // 0x228b44: 0xc048fb2  jal         func_123EC8
    ctx->pc = 0x228B44u;
    SET_GPR_U32(ctx, 31, 0x228B4Cu);
    ctx->pc = 0x228B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228B44u;
            // 0x228b48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123EC8u;
    if (runtime->hasFunction(0x123EC8u)) {
        auto targetFn = runtime->lookupFunction(0x123EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228B4Cu; }
        if (ctx->pc != 0x228B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        abs_0x123ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228B4Cu; }
        if (ctx->pc != 0x228B4Cu) { return; }
    }
    ctx->pc = 0x228B4Cu;
label_228b4c:
    // 0x228b4c: 0x55082a  slt         $at, $v0, $s5
    ctx->pc = 0x228b4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x228b50: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x228B50u;
    {
        const bool branch_taken_0x228b50 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x228b50) {
            ctx->pc = 0x228B5Cu;
            goto label_228b5c;
        }
    }
    ctx->pc = 0x228B58u;
    // 0x228b58: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x228b58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
label_228b5c:
    // 0x228b5c: 0x0  nop
    ctx->pc = 0x228b5cu;
    // NOP
    // 0x228b60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x228b60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x228b64: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x228b64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x228b68: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x228B68u;
    {
        const bool branch_taken_0x228b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228B68u;
            // 0x228b6c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228b68) {
            ctx->pc = 0x228AE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_228ae8;
        }
    }
    ctx->pc = 0x228B70u;
    // 0x228b70: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x228B70u;
    {
        const bool branch_taken_0x228b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228b70) {
            ctx->pc = 0x228C98u;
            goto label_228c98;
        }
    }
    ctx->pc = 0x228B78u;
label_228b78:
    // 0x228b78: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x228b78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228b7c:
    // 0x228b7c: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x228b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x228b80: 0x24530098  addiu       $s3, $v0, 0x98
    ctx->pc = 0x228b80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x228b84: 0x8c540090  lw          $s4, 0x90($v0)
    ctx->pc = 0x228b84u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x228b88: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x228b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x228b8c: 0xc4550088  lwc1        $f21, 0x88($v0)
    ctx->pc = 0x228b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x228b90: 0x2831023  subu        $v0, $s4, $v1
    ctx->pc = 0x228b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x228b94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x228b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228b98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x228b98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228b9c: 0x0  nop
    ctx->pc = 0x228b9cu;
    // NOP
    // 0x228ba0: 0x46800d20  cvt.s.w     $f20, $f1
    ctx->pc = 0x228ba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x228ba4: 0x4615a043  div.s       $f1, $f20, $f21
    ctx->pc = 0x228ba4u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[20], ctx->f[21]); }
    // 0x228ba8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228ba8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228bac: 0x0  nop
    ctx->pc = 0x228bacu;
    // NOP
    // 0x228bb0: 0x0  nop
    ctx->pc = 0x228bb0u;
    // NOP
    // 0x228bb4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x228BB4u;
    SET_GPR_U32(ctx, 31, 0x228BBCu);
    ctx->pc = 0x228BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228BB4u;
            // 0x228bb8: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228BBCu; }
        if (ctx->pc != 0x228BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228BBCu; }
        if (ctx->pc != 0x228BBCu) { return; }
    }
    ctx->pc = 0x228BBCu;
label_228bbc:
    // 0x228bbc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x228bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x228bc0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x228bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x228bc4: 0xc048fb2  jal         func_123EC8
    ctx->pc = 0x228BC4u;
    SET_GPR_U32(ctx, 31, 0x228BCCu);
    ctx->pc = 0x228BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228BC4u;
            // 0x228bc8: 0x2822023  subu        $a0, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123EC8u;
    if (runtime->hasFunction(0x123EC8u)) {
        auto targetFn = runtime->lookupFunction(0x123EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228BCCu; }
        if (ctx->pc != 0x228BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        abs_0x123ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228BCCu; }
        if (ctx->pc != 0x228BCCu) { return; }
    }
    ctx->pc = 0x228BCCu;
label_228bcc:
    // 0x228bcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228bd0: 0x0  nop
    ctx->pc = 0x228bd0u;
    // NOP
    // 0x228bd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228bd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228bd8: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x228bd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228bdc: 0x0  nop
    ctx->pc = 0x228bdcu;
    // NOP
    // 0x228be0: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x228BE0u;
    {
        const bool branch_taken_0x228be0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x228be0) {
            ctx->pc = 0x228C88u;
            goto label_228c88;
        }
    }
    ctx->pc = 0x228BE8u;
    // 0x228be8: 0x92230020  lbu         $v1, 0x20($s1)
    ctx->pc = 0x228be8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x228bec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x228becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x228bf0: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x228BF0u;
    {
        const bool branch_taken_0x228bf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x228bf0) {
            ctx->pc = 0x228C44u;
            goto label_228c44;
        }
    }
    ctx->pc = 0x228BF8u;
    // 0x228bf8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x228bf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228bfc: 0x0  nop
    ctx->pc = 0x228bfcu;
    // NOP
    // 0x228c00: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x228c00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228c04: 0x0  nop
    ctx->pc = 0x228c04u;
    // NOP
    // 0x228c08: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x228C08u;
    {
        const bool branch_taken_0x228c08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228c08) {
            ctx->pc = 0x228C1Cu;
            goto label_228c1c;
        }
    }
    ctx->pc = 0x228C10u;
    // 0x228c10: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x228c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x228c14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x228c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x228c18: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x228c18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_228c1c:
    // 0x228c1c: 0x0  nop
    ctx->pc = 0x228c1cu;
    // NOP
    // 0x228c20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x228c20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228c24: 0x0  nop
    ctx->pc = 0x228c24u;
    // NOP
    // 0x228c28: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x228c28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228c2c: 0x0  nop
    ctx->pc = 0x228c2cu;
    // NOP
    // 0x228c30: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x228C30u;
    {
        const bool branch_taken_0x228c30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x228c30) {
            ctx->pc = 0x228C44u;
            goto label_228c44;
        }
    }
    ctx->pc = 0x228C38u;
    // 0x228c38: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x228c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x228c3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x228c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x228c40: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x228c40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_228c44:
    // 0x228c44: 0x0  nop
    ctx->pc = 0x228c44u;
    // NOP
    // 0x228c48: 0xc0a248c  jal         func_289230
    ctx->pc = 0x228C48u;
    SET_GPR_U32(ctx, 31, 0x228C50u);
    ctx->pc = 0x228C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228C48u;
            // 0x228c4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228C50u; }
        if (ctx->pc != 0x228C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228C50u; }
        if (ctx->pc != 0x228C50u) { return; }
    }
    ctx->pc = 0x228C50u;
label_228c50:
    // 0x228c50: 0xc048fb2  jal         func_123EC8
    ctx->pc = 0x228C50u;
    SET_GPR_U32(ctx, 31, 0x228C58u);
    ctx->pc = 0x228C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228C50u;
            // 0x228c54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123EC8u;
    if (runtime->hasFunction(0x123EC8u)) {
        auto targetFn = runtime->lookupFunction(0x123EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228C58u; }
        if (ctx->pc != 0x228C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        abs_0x123ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228C58u; }
        if (ctx->pc != 0x228C58u) { return; }
    }
    ctx->pc = 0x228C58u;
label_228c58:
    // 0x228c58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228c58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228c5c: 0x0  nop
    ctx->pc = 0x228c5cu;
    // NOP
    // 0x228c60: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x228c60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x228c64: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x228c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
    // 0x228c68: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x228c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x228c6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228c6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228c70: 0x0  nop
    ctx->pc = 0x228c70u;
    // NOP
    // 0x228c74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x228c74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228c78: 0x0  nop
    ctx->pc = 0x228c78u;
    // NOP
    // 0x228c7c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x228C7Cu;
    {
        const bool branch_taken_0x228c7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x228c7c) {
            ctx->pc = 0x228C88u;
            goto label_228c88;
        }
    }
    ctx->pc = 0x228C84u;
    // 0x228c84: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x228c84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
label_228c88:
    // 0x228c88: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x228c88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x228c8c: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x228c8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x228c90: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x228C90u;
    {
        const bool branch_taken_0x228c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228C90u;
            // 0x228c94: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228c90) {
            ctx->pc = 0x228B7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_228b7c;
        }
    }
    ctx->pc = 0x228C98u;
label_228c98:
    // 0x228c98: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x228c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x228c9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x228c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228ca0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x228ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x228ca4: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x228ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x228ca8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x228ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_228cac:
    // 0x228cac: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x228cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x228cb0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x228cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x228cb4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x228cb4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x228cb8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x228cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x228cbc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x228cbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x228cc0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x228cc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228cc4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x228cc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x228cc8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x228cc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228ccc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x228cccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x228CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228CD0u;
            // 0x228cd4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x228CD8u;
}
