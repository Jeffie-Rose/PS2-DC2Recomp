#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Shake__11CWaterFrameFfff
// Address: 0x1849f0 - 0x184b64
void Shake__11CWaterFrameFfff_0x1849f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Shake__11CWaterFrameFfff_0x1849f0");
#endif

    switch (ctx->pc) {
        case 0x1849f0u: goto label_1849f0;
        case 0x1849f4u: goto label_1849f4;
        case 0x1849f8u: goto label_1849f8;
        case 0x1849fcu: goto label_1849fc;
        case 0x184a00u: goto label_184a00;
        case 0x184a04u: goto label_184a04;
        case 0x184a08u: goto label_184a08;
        case 0x184a0cu: goto label_184a0c;
        case 0x184a10u: goto label_184a10;
        case 0x184a14u: goto label_184a14;
        case 0x184a18u: goto label_184a18;
        case 0x184a1cu: goto label_184a1c;
        case 0x184a20u: goto label_184a20;
        case 0x184a24u: goto label_184a24;
        case 0x184a28u: goto label_184a28;
        case 0x184a2cu: goto label_184a2c;
        case 0x184a30u: goto label_184a30;
        case 0x184a34u: goto label_184a34;
        case 0x184a38u: goto label_184a38;
        case 0x184a3cu: goto label_184a3c;
        case 0x184a40u: goto label_184a40;
        case 0x184a44u: goto label_184a44;
        case 0x184a48u: goto label_184a48;
        case 0x184a4cu: goto label_184a4c;
        case 0x184a50u: goto label_184a50;
        case 0x184a54u: goto label_184a54;
        case 0x184a58u: goto label_184a58;
        case 0x184a5cu: goto label_184a5c;
        case 0x184a60u: goto label_184a60;
        case 0x184a64u: goto label_184a64;
        case 0x184a68u: goto label_184a68;
        case 0x184a6cu: goto label_184a6c;
        case 0x184a70u: goto label_184a70;
        case 0x184a74u: goto label_184a74;
        case 0x184a78u: goto label_184a78;
        case 0x184a7cu: goto label_184a7c;
        case 0x184a80u: goto label_184a80;
        case 0x184a84u: goto label_184a84;
        case 0x184a88u: goto label_184a88;
        case 0x184a8cu: goto label_184a8c;
        case 0x184a90u: goto label_184a90;
        case 0x184a94u: goto label_184a94;
        case 0x184a98u: goto label_184a98;
        case 0x184a9cu: goto label_184a9c;
        case 0x184aa0u: goto label_184aa0;
        case 0x184aa4u: goto label_184aa4;
        case 0x184aa8u: goto label_184aa8;
        case 0x184aacu: goto label_184aac;
        case 0x184ab0u: goto label_184ab0;
        case 0x184ab4u: goto label_184ab4;
        case 0x184ab8u: goto label_184ab8;
        case 0x184abcu: goto label_184abc;
        case 0x184ac0u: goto label_184ac0;
        case 0x184ac4u: goto label_184ac4;
        case 0x184ac8u: goto label_184ac8;
        case 0x184accu: goto label_184acc;
        case 0x184ad0u: goto label_184ad0;
        case 0x184ad4u: goto label_184ad4;
        case 0x184ad8u: goto label_184ad8;
        case 0x184adcu: goto label_184adc;
        case 0x184ae0u: goto label_184ae0;
        case 0x184ae4u: goto label_184ae4;
        case 0x184ae8u: goto label_184ae8;
        case 0x184aecu: goto label_184aec;
        case 0x184af0u: goto label_184af0;
        case 0x184af4u: goto label_184af4;
        case 0x184af8u: goto label_184af8;
        case 0x184afcu: goto label_184afc;
        case 0x184b00u: goto label_184b00;
        case 0x184b04u: goto label_184b04;
        case 0x184b08u: goto label_184b08;
        case 0x184b0cu: goto label_184b0c;
        case 0x184b10u: goto label_184b10;
        case 0x184b14u: goto label_184b14;
        case 0x184b18u: goto label_184b18;
        case 0x184b1cu: goto label_184b1c;
        case 0x184b20u: goto label_184b20;
        case 0x184b24u: goto label_184b24;
        case 0x184b28u: goto label_184b28;
        case 0x184b2cu: goto label_184b2c;
        case 0x184b30u: goto label_184b30;
        case 0x184b34u: goto label_184b34;
        case 0x184b38u: goto label_184b38;
        case 0x184b3cu: goto label_184b3c;
        case 0x184b40u: goto label_184b40;
        case 0x184b44u: goto label_184b44;
        case 0x184b48u: goto label_184b48;
        case 0x184b4cu: goto label_184b4c;
        case 0x184b50u: goto label_184b50;
        case 0x184b54u: goto label_184b54;
        case 0x184b58u: goto label_184b58;
        case 0x184b5cu: goto label_184b5c;
        case 0x184b60u: goto label_184b60;
        default: break;
    }

    ctx->pc = 0x1849f0u;

label_1849f0:
    // 0x1849f0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1849f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_1849f4:
    // 0x1849f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1849f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1849f8:
    // 0x1849f8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1849f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1849fc:
    // 0x1849fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1849fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_184a00:
    // 0x184a00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x184a00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_184a04:
    // 0x184a04: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x184a04u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_184a08:
    // 0x184a08: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x184a08u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_184a0c:
    // 0x184a0c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x184a0cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_184a10:
    // 0x184a10: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x184a10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_184a14:
    // 0x184a14: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x184a14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_184a18:
    // 0x184a18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x184a18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_184a1c:
    // 0x184a1c: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x184a1cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
label_184a20:
    // 0x184a20: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x184a20u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
label_184a24:
    // 0x184a24: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x184a24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_184a28:
    // 0x184a28: 0x320f809  jalr        $t9
label_184a2c:
    if (ctx->pc == 0x184A2Cu) {
        ctx->pc = 0x184A2Cu;
            // 0x184a2c: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        ctx->pc = 0x184A30u;
        goto label_184a30;
    }
    ctx->pc = 0x184A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x184A30u);
        ctx->pc = 0x184A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184A28u;
            // 0x184a2c: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x184A30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x184A30u; }
            if (ctx->pc != 0x184A30u) { return; }
        }
        }
    }
    ctx->pc = 0x184A30u;
label_184a30:
    // 0x184a30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x184a30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_184a34:
    // 0x184a34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x184a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184a38:
    // 0x184a38: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x184a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_184a3c:
    // 0x184a3c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x184a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_184a40:
    // 0x184a40: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x184a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
label_184a44:
    // 0x184a44: 0xe7b800d0  swc1        $f24, 0xD0($sp)
    ctx->pc = 0x184a44u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_184a48:
    // 0x184a48: 0xe7b700d8  swc1        $f23, 0xD8($sp)
    ctx->pc = 0x184a48u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_184a4c:
    // 0x184a4c: 0xc04dc0c  jal         func_137030
label_184a50:
    if (ctx->pc == 0x184A50u) {
        ctx->pc = 0x184A50u;
            // 0x184a50: 0xafa000d4  sw          $zero, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
        ctx->pc = 0x184A54u;
        goto label_184a54;
    }
    ctx->pc = 0x184A4Cu;
    SET_GPR_U32(ctx, 31, 0x184A54u);
    ctx->pc = 0x184A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184A4Cu;
            // 0x184a50: 0xafa000d4  sw          $zero, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184A54u; }
        if (ctx->pc != 0x184A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184A54u; }
        if (ctx->pc != 0x184A54u) { return; }
    }
    ctx->pc = 0x184A54u;
label_184a54:
    // 0x184a54: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x184a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_184a58:
    // 0x184a58: 0xc04c0b4  jal         func_1302D0
label_184a5c:
    if (ctx->pc == 0x184A5Cu) {
        ctx->pc = 0x184A5Cu;
            // 0x184a5c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x184A60u;
        goto label_184a60;
    }
    ctx->pc = 0x184A58u;
    SET_GPR_U32(ctx, 31, 0x184A60u);
    ctx->pc = 0x184A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184A58u;
            // 0x184a5c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1302D0u;
    if (runtime->hasFunction(0x1302D0u)) {
        auto targetFn = runtime->lookupFunction(0x1302D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184A60u; }
        if (ctx->pc != 0x184A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInversMatrix__FPA4_fPA4_f_0x1302d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184A60u; }
        if (ctx->pc != 0x184A60u) { return; }
    }
    ctx->pc = 0x184A60u;
label_184a60:
    // 0x184a60: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x184a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_184a64:
    // 0x184a64: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x184a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_184a68:
    // 0x184a68: 0xc041bb0  jal         func_106EC0
label_184a6c:
    if (ctx->pc == 0x184A6Cu) {
        ctx->pc = 0x184A6Cu;
            // 0x184a6c: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x184A70u;
        goto label_184a70;
    }
    ctx->pc = 0x184A68u;
    SET_GPR_U32(ctx, 31, 0x184A70u);
    ctx->pc = 0x184A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184A68u;
            // 0x184a6c: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184A70u; }
        if (ctx->pc != 0x184A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184A70u; }
        if (ctx->pc != 0x184A70u) { return; }
    }
    ctx->pc = 0x184A70u;
label_184a70:
    // 0x184a70: 0xc7b800e0  lwc1        $f24, 0xE0($sp)
    ctx->pc = 0x184a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_184a74:
    // 0x184a74: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x184a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_184a78:
    // 0x184a78: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x184a78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_184a7c:
    // 0x184a7c: 0x0  nop
    ctx->pc = 0x184a7cu;
    // NOP
label_184a80:
    // 0x184a80: 0x4501002e  bc1t        . + 4 + (0x2E << 2)
label_184a84:
    if (ctx->pc == 0x184A84u) {
        ctx->pc = 0x184A84u;
            // 0x184a84: 0xc7b700e8  lwc1        $f23, 0xE8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
        ctx->pc = 0x184A88u;
        goto label_184a88;
    }
    ctx->pc = 0x184A80u;
    {
        const bool branch_taken_0x184a80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x184A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184A80u;
            // 0x184a84: 0xc7b700e8  lwc1        $f23, 0xE8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x184a80) {
            ctx->pc = 0x184B3Cu;
            goto label_184b3c;
        }
    }
    ctx->pc = 0x184A88u;
label_184a88:
    // 0x184a88: 0xc6030070  lwc1        $f3, 0x70($s0)
    ctx->pc = 0x184a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_184a8c:
    // 0x184a8c: 0x4603c036  c.le.s      $f24, $f3
    ctx->pc = 0x184a8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[24], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_184a90:
    // 0x184a90: 0x0  nop
    ctx->pc = 0x184a90u;
    // NOP
label_184a94:
    // 0x184a94: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_184a98:
    if (ctx->pc == 0x184A98u) {
        ctx->pc = 0x184A9Cu;
        goto label_184a9c;
    }
    ctx->pc = 0x184A94u;
    {
        const bool branch_taken_0x184a94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x184a94) {
            ctx->pc = 0x184AA4u;
            goto label_184aa4;
        }
    }
    ctx->pc = 0x184A9Cu;
label_184a9c:
    // 0x184a9c: 0x10000028  b           . + 4 + (0x28 << 2)
label_184aa0:
    if (ctx->pc == 0x184AA0u) {
        ctx->pc = 0x184AA0u;
            // 0x184aa0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x184AA4u;
        goto label_184aa4;
    }
    ctx->pc = 0x184A9Cu;
    {
        const bool branch_taken_0x184a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184A9Cu;
            // 0x184aa0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184a9c) {
            ctx->pc = 0x184B40u;
            goto label_184b40;
        }
    }
    ctx->pc = 0x184AA4u;
label_184aa4:
    // 0x184aa4: 0xc6150068  lwc1        $f21, 0x68($s0)
    ctx->pc = 0x184aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_184aa8:
    // 0x184aa8: 0x4615b834  c.lt.s      $f23, $f21
    ctx->pc = 0x184aa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_184aac:
    // 0x184aac: 0x0  nop
    ctx->pc = 0x184aacu;
    // NOP
label_184ab0:
    // 0x184ab0: 0x45010022  bc1t        . + 4 + (0x22 << 2)
label_184ab4:
    if (ctx->pc == 0x184AB4u) {
        ctx->pc = 0x184AB8u;
        goto label_184ab8;
    }
    ctx->pc = 0x184AB0u;
    {
        const bool branch_taken_0x184ab0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x184ab0) {
            ctx->pc = 0x184B3Cu;
            goto label_184b3c;
        }
    }
    ctx->pc = 0x184AB8u;
label_184ab8:
    // 0x184ab8: 0xc6160078  lwc1        $f22, 0x78($s0)
    ctx->pc = 0x184ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_184abc:
    // 0x184abc: 0x4616b836  c.le.s      $f23, $f22
    ctx->pc = 0x184abcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_184ac0:
    // 0x184ac0: 0x0  nop
    ctx->pc = 0x184ac0u;
    // NOP
label_184ac4:
    // 0x184ac4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_184ac8:
    if (ctx->pc == 0x184AC8u) {
        ctx->pc = 0x184ACCu;
        goto label_184acc;
    }
    ctx->pc = 0x184AC4u;
    {
        const bool branch_taken_0x184ac4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x184ac4) {
            ctx->pc = 0x184AD4u;
            goto label_184ad4;
        }
    }
    ctx->pc = 0x184ACCu;
label_184acc:
    // 0x184acc: 0x1000001b  b           . + 4 + (0x1B << 2)
label_184ad0:
    if (ctx->pc == 0x184AD0u) {
        ctx->pc = 0x184AD4u;
        goto label_184ad4;
    }
    ctx->pc = 0x184ACCu;
    {
        const bool branch_taken_0x184acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184acc) {
            ctx->pc = 0x184B3Cu;
            goto label_184b3c;
        }
    }
    ctx->pc = 0x184AD4u;
label_184ad4:
    // 0x184ad4: 0xc6020054  lwc1        $f2, 0x54($s0)
    ctx->pc = 0x184ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_184ad8:
    // 0x184ad8: 0x4600c041  sub.s       $f1, $f24, $f0
    ctx->pc = 0x184ad8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
label_184adc:
    // 0x184adc: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x184adcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_184ae0:
    // 0x184ae0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x184ae0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_184ae4:
    // 0x184ae4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x184ae4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_184ae8:
    // 0x184ae8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x184ae8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_184aec:
    // 0x184aec: 0x0  nop
    ctx->pc = 0x184aecu;
    // NOP
label_184af0:
    // 0x184af0: 0x0  nop
    ctx->pc = 0x184af0u;
    // NOP
label_184af4:
    // 0x184af4: 0xc0a248c  jal         func_289230
label_184af8:
    if (ctx->pc == 0x184AF8u) {
        ctx->pc = 0x184AFCu;
        goto label_184afc;
    }
    ctx->pc = 0x184AF4u;
    SET_GPR_U32(ctx, 31, 0x184AFCu);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184AFCu; }
        if (ctx->pc != 0x184AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184AFCu; }
        if (ctx->pc != 0x184AFCu) { return; }
    }
    ctx->pc = 0x184AFCu;
label_184afc:
    // 0x184afc: 0xc6020058  lwc1        $f2, 0x58($s0)
    ctx->pc = 0x184afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_184b00:
    // 0x184b00: 0x4615b841  sub.s       $f1, $f23, $f21
    ctx->pc = 0x184b00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[21]);
label_184b04:
    // 0x184b04: 0x4615b001  sub.s       $f0, $f22, $f21
    ctx->pc = 0x184b04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
label_184b08:
    // 0x184b08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x184b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_184b0c:
    // 0x184b0c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x184b0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_184b10:
    // 0x184b10: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x184b10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_184b14:
    // 0x184b14: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x184b14u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_184b18:
    // 0x184b18: 0x0  nop
    ctx->pc = 0x184b18u;
    // NOP
label_184b1c:
    // 0x184b1c: 0x0  nop
    ctx->pc = 0x184b1cu;
    // NOP
label_184b20:
    // 0x184b20: 0xc0a248c  jal         func_289230
label_184b24:
    if (ctx->pc == 0x184B24u) {
        ctx->pc = 0x184B28u;
        goto label_184b28;
    }
    ctx->pc = 0x184B20u;
    SET_GPR_U32(ctx, 31, 0x184B28u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184B28u; }
        if (ctx->pc != 0x184B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184B28u; }
        if (ctx->pc != 0x184B28u) { return; }
    }
    ctx->pc = 0x184B28u;
label_184b28:
    // 0x184b28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x184b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184b2c:
    // 0x184b2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x184b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_184b30:
    // 0x184b30: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x184b30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_184b34:
    // 0x184b34: 0xc061728  jal         func_185CA0
label_184b38:
    if (ctx->pc == 0x184B38u) {
        ctx->pc = 0x184B38u;
            // 0x184b38: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x184B3Cu;
        goto label_184b3c;
    }
    ctx->pc = 0x184B34u;
    SET_GPR_U32(ctx, 31, 0x184B3Cu);
    ctx->pc = 0x184B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184B34u;
            // 0x184b38: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185CA0u;
    if (runtime->hasFunction(0x185CA0u)) {
        auto targetFn = runtime->lookupFunction(0x185CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184B3Cu; }
        if (ctx->pc != 0x184B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shake__11CWaterFrameFiif_0x185ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184B3Cu; }
        if (ctx->pc != 0x184B3Cu) { return; }
    }
    ctx->pc = 0x184B3Cu;
label_184b3c:
    // 0x184b3c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x184b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_184b40:
    // 0x184b40: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x184b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_184b44:
    // 0x184b44: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x184b44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_184b48:
    // 0x184b48: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x184b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_184b4c:
    // 0x184b4c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x184b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_184b50:
    // 0x184b50: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x184b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_184b54:
    // 0x184b54: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x184b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_184b58:
    // 0x184b58: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x184b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_184b5c:
    // 0x184b5c: 0x3e00008  jr          $ra
label_184b60:
    if (ctx->pc == 0x184B60u) {
        ctx->pc = 0x184B60u;
            // 0x184b60: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x184B64u;
        goto label_fallthrough_0x184b5c;
    }
    ctx->pc = 0x184B5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184B5Cu;
            // 0x184b60: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x184b5c:
    ctx->pc = 0x184B64u;
}
