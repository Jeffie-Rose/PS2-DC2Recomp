#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SelFishSetCursor__9CAquariumFv
// Address: 0x215f20 - 0x215ffc
void SelFishSetCursor__9CAquariumFv_0x215f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SelFishSetCursor__9CAquariumFv_0x215f20");
#endif

    switch (ctx->pc) {
        case 0x215f20u: goto label_215f20;
        case 0x215f24u: goto label_215f24;
        case 0x215f28u: goto label_215f28;
        case 0x215f2cu: goto label_215f2c;
        case 0x215f30u: goto label_215f30;
        case 0x215f34u: goto label_215f34;
        case 0x215f38u: goto label_215f38;
        case 0x215f3cu: goto label_215f3c;
        case 0x215f40u: goto label_215f40;
        case 0x215f44u: goto label_215f44;
        case 0x215f48u: goto label_215f48;
        case 0x215f4cu: goto label_215f4c;
        case 0x215f50u: goto label_215f50;
        case 0x215f54u: goto label_215f54;
        case 0x215f58u: goto label_215f58;
        case 0x215f5cu: goto label_215f5c;
        case 0x215f60u: goto label_215f60;
        case 0x215f64u: goto label_215f64;
        case 0x215f68u: goto label_215f68;
        case 0x215f6cu: goto label_215f6c;
        case 0x215f70u: goto label_215f70;
        case 0x215f74u: goto label_215f74;
        case 0x215f78u: goto label_215f78;
        case 0x215f7cu: goto label_215f7c;
        case 0x215f80u: goto label_215f80;
        case 0x215f84u: goto label_215f84;
        case 0x215f88u: goto label_215f88;
        case 0x215f8cu: goto label_215f8c;
        case 0x215f90u: goto label_215f90;
        case 0x215f94u: goto label_215f94;
        case 0x215f98u: goto label_215f98;
        case 0x215f9cu: goto label_215f9c;
        case 0x215fa0u: goto label_215fa0;
        case 0x215fa4u: goto label_215fa4;
        case 0x215fa8u: goto label_215fa8;
        case 0x215facu: goto label_215fac;
        case 0x215fb0u: goto label_215fb0;
        case 0x215fb4u: goto label_215fb4;
        case 0x215fb8u: goto label_215fb8;
        case 0x215fbcu: goto label_215fbc;
        case 0x215fc0u: goto label_215fc0;
        case 0x215fc4u: goto label_215fc4;
        case 0x215fc8u: goto label_215fc8;
        case 0x215fccu: goto label_215fcc;
        case 0x215fd0u: goto label_215fd0;
        case 0x215fd4u: goto label_215fd4;
        case 0x215fd8u: goto label_215fd8;
        case 0x215fdcu: goto label_215fdc;
        case 0x215fe0u: goto label_215fe0;
        case 0x215fe4u: goto label_215fe4;
        case 0x215fe8u: goto label_215fe8;
        case 0x215fecu: goto label_215fec;
        case 0x215ff0u: goto label_215ff0;
        case 0x215ff4u: goto label_215ff4;
        case 0x215ff8u: goto label_215ff8;
        default: break;
    }

    ctx->pc = 0x215f20u;

label_215f20:
    // 0x215f20: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x215f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_215f24:
    // 0x215f24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x215f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_215f28:
    // 0x215f28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x215f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_215f2c:
    // 0x215f2c: 0x848302d8  lh          $v1, 0x2D8($a0)
    ctx->pc = 0x215f2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 728)));
label_215f30:
    // 0x215f30: 0x460002e  bltz        $v1, . + 4 + (0x2E << 2)
label_215f34:
    if (ctx->pc == 0x215F34u) {
        ctx->pc = 0x215F34u;
            // 0x215f34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x215F38u;
        goto label_215f38;
    }
    ctx->pc = 0x215F30u;
    {
        const bool branch_taken_0x215f30 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x215F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215F30u;
            // 0x215f34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215f30) {
            ctx->pc = 0x215FECu;
            goto label_215fec;
        }
    }
    ctx->pc = 0x215F38u;
label_215f38:
    // 0x215f38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x215f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_215f3c:
    // 0x215f3c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x215f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_215f40:
    // 0x215f40: 0x8c6302b4  lw          $v1, 0x2B4($v1)
    ctx->pc = 0x215f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 692)));
label_215f44:
    // 0x215f44: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_215f48:
    if (ctx->pc == 0x215F48u) {
        ctx->pc = 0x215F4Cu;
        goto label_215f4c;
    }
    ctx->pc = 0x215F44u;
    {
        const bool branch_taken_0x215f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x215f44) {
            ctx->pc = 0x215FECu;
            goto label_215fec;
        }
    }
    ctx->pc = 0x215F4Cu;
label_215f4c:
    // 0x215f4c: 0x8f8491c8  lw          $a0, -0x6E38($gp)
    ctx->pc = 0x215f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
label_215f50:
    // 0x215f50: 0x8c990060  lw          $t9, 0x60($a0)
    ctx->pc = 0x215f50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_215f54:
    // 0x215f54: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x215f54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_215f58:
    // 0x215f58: 0x320f809  jalr        $t9
label_215f5c:
    if (ctx->pc == 0x215F5Cu) {
        ctx->pc = 0x215F5Cu;
            // 0x215f5c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x215F60u;
        goto label_215f60;
    }
    ctx->pc = 0x215F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x215F60u);
        ctx->pc = 0x215F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215F58u;
            // 0x215f5c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x215F60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x215F60u; }
            if (ctx->pc != 0x215F60u) { return; }
        }
        }
    }
    ctx->pc = 0x215F60u;
label_215f60:
    // 0x215f60: 0x8f8491c8  lw          $a0, -0x6E38($gp)
    ctx->pc = 0x215f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
label_215f64:
    // 0x215f64: 0xc04c574  jal         func_1315D0
label_215f68:
    if (ctx->pc == 0x215F68u) {
        ctx->pc = 0x215F68u;
            // 0x215f68: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x215F6Cu;
        goto label_215f6c;
    }
    ctx->pc = 0x215F64u;
    SET_GPR_U32(ctx, 31, 0x215F6Cu);
    ctx->pc = 0x215F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215F64u;
            // 0x215f68: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215F6Cu; }
        if (ctx->pc != 0x215F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215F6Cu; }
        if (ctx->pc != 0x215F6Cu) { return; }
    }
    ctx->pc = 0x215F6Cu;
label_215f6c:
    // 0x215f6c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x215f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_215f70:
    // 0x215f70: 0xc050e28  jal         func_1438A0
label_215f74:
    if (ctx->pc == 0x215F74u) {
        ctx->pc = 0x215F74u;
            // 0x215f74: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x215F78u;
        goto label_215f78;
    }
    ctx->pc = 0x215F70u;
    SET_GPR_U32(ctx, 31, 0x215F78u);
    ctx->pc = 0x215F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215F70u;
            // 0x215f74: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1438A0u;
    if (runtime->hasFunction(0x1438A0u)) {
        auto targetFn = runtime->lookupFunction(0x1438A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215F78u; }
        if (ctx->pc != 0x215F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetViewMatrix__FPA4_fPf_0x1438a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215F78u; }
        if (ctx->pc != 0x215F78u) { return; }
    }
    ctx->pc = 0x215F78u;
label_215f78:
    // 0x215f78: 0x860202d8  lh          $v0, 0x2D8($s0)
    ctx->pc = 0x215f78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 728)));
label_215f7c:
    // 0x215f7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x215f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_215f80:
    // 0x215f80: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x215f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_215f84:
    // 0x215f84: 0x8c4402b4  lw          $a0, 0x2B4($v0)
    ctx->pc = 0x215f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
label_215f88:
    // 0x215f88: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x215f88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_215f8c:
    // 0x215f8c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x215f8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_215f90:
    // 0x215f90: 0x320f809  jalr        $t9
label_215f94:
    if (ctx->pc == 0x215F94u) {
        ctx->pc = 0x215F94u;
            // 0x215f94: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x215F98u;
        goto label_215f98;
    }
    ctx->pc = 0x215F90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x215F98u);
        ctx->pc = 0x215F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215F90u;
            // 0x215f94: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x215F98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x215F98u; }
            if (ctx->pc != 0x215F98u) { return; }
        }
        }
    }
    ctx->pc = 0x215F98u;
label_215f98:
    // 0x215f98: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x215f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_215f9c:
    // 0x215f9c: 0xc05166c  jal         func_1459B0
label_215fa0:
    if (ctx->pc == 0x215FA0u) {
        ctx->pc = 0x215FA0u;
            // 0x215fa0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x215FA4u;
        goto label_215fa4;
    }
    ctx->pc = 0x215F9Cu;
    SET_GPR_U32(ctx, 31, 0x215FA4u);
    ctx->pc = 0x215FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215F9Cu;
            // 0x215fa0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1459B0u;
    if (runtime->hasFunction(0x1459B0u)) {
        auto targetFn = runtime->lookupFunction(0x1459B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215FA4u; }
        if (ctx->pc != 0x215FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldScreen__FPiPf_0x1459b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215FA4u; }
        if (ctx->pc != 0x215FA4u) { return; }
    }
    ctx->pc = 0x215FA4u;
label_215fa4:
    // 0x215fa4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x215fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_215fa8:
    // 0x215fa8: 0xc041c72  jal         func_1071C8
label_215fac:
    if (ctx->pc == 0x215FACu) {
        ctx->pc = 0x215FACu;
            // 0x215fac: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x215FB0u;
        goto label_215fb0;
    }
    ctx->pc = 0x215FA8u;
    SET_GPR_U32(ctx, 31, 0x215FB0u);
    ctx->pc = 0x215FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215FA8u;
            // 0x215fac: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071C8u;
    if (runtime->hasFunction(0x1071C8u)) {
        auto targetFn = runtime->lookupFunction(0x1071C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215FB0u; }
        if (ctx->pc != 0x215FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ITOF4Vector_0x1071c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215FB0u; }
        if (ctx->pc != 0x215FB0u) { return; }
    }
    ctx->pc = 0x215FB0u;
label_215fb0:
    // 0x215fb0: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x215fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_215fb4:
    // 0x215fb4: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x215fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_215fb8:
    // 0x215fb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x215fb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_215fbc:
    // 0x215fbc: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x215fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_215fc0:
    // 0x215fc0: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x215fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
label_215fc4:
    // 0x215fc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x215fc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215fc8:
    // 0x215fc8: 0x0  nop
    ctx->pc = 0x215fc8u;
    // NOP
label_215fcc:
    // 0x215fcc: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x215fccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_215fd0:
    // 0x215fd0: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x215fd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_215fd4:
    // 0x215fd4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x215fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_215fd8:
    // 0x215fd8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x215fd8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_215fdc:
    // 0x215fdc: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x215fdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_215fe0:
    // 0x215fe0: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x215fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_215fe4:
    // 0x215fe4: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x215fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
label_215fe8:
    // 0x215fe8: 0xe601011c  swc1        $f1, 0x11C($s0)
    ctx->pc = 0x215fe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
label_215fec:
    // 0x215fec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x215fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_215ff0:
    // 0x215ff0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x215ff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_215ff4:
    // 0x215ff4: 0x3e00008  jr          $ra
label_215ff8:
    if (ctx->pc == 0x215FF8u) {
        ctx->pc = 0x215FF8u;
            // 0x215ff8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x215FFCu;
        goto label_fallthrough_0x215ff4;
    }
    ctx->pc = 0x215FF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215FF4u;
            // 0x215ff8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x215ff4:
    ctx->pc = 0x215FFCu;
}
