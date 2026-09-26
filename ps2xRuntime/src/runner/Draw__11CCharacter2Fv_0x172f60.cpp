#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__11CCharacter2Fv
// Address: 0x172f60 - 0x1730a8
void Draw__11CCharacter2Fv_0x172f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__11CCharacter2Fv_0x172f60");
#endif

    switch (ctx->pc) {
        case 0x172f60u: goto label_172f60;
        case 0x172f64u: goto label_172f64;
        case 0x172f68u: goto label_172f68;
        case 0x172f6cu: goto label_172f6c;
        case 0x172f70u: goto label_172f70;
        case 0x172f74u: goto label_172f74;
        case 0x172f78u: goto label_172f78;
        case 0x172f7cu: goto label_172f7c;
        case 0x172f80u: goto label_172f80;
        case 0x172f84u: goto label_172f84;
        case 0x172f88u: goto label_172f88;
        case 0x172f8cu: goto label_172f8c;
        case 0x172f90u: goto label_172f90;
        case 0x172f94u: goto label_172f94;
        case 0x172f98u: goto label_172f98;
        case 0x172f9cu: goto label_172f9c;
        case 0x172fa0u: goto label_172fa0;
        case 0x172fa4u: goto label_172fa4;
        case 0x172fa8u: goto label_172fa8;
        case 0x172facu: goto label_172fac;
        case 0x172fb0u: goto label_172fb0;
        case 0x172fb4u: goto label_172fb4;
        case 0x172fb8u: goto label_172fb8;
        case 0x172fbcu: goto label_172fbc;
        case 0x172fc0u: goto label_172fc0;
        case 0x172fc4u: goto label_172fc4;
        case 0x172fc8u: goto label_172fc8;
        case 0x172fccu: goto label_172fcc;
        case 0x172fd0u: goto label_172fd0;
        case 0x172fd4u: goto label_172fd4;
        case 0x172fd8u: goto label_172fd8;
        case 0x172fdcu: goto label_172fdc;
        case 0x172fe0u: goto label_172fe0;
        case 0x172fe4u: goto label_172fe4;
        case 0x172fe8u: goto label_172fe8;
        case 0x172fecu: goto label_172fec;
        case 0x172ff0u: goto label_172ff0;
        case 0x172ff4u: goto label_172ff4;
        case 0x172ff8u: goto label_172ff8;
        case 0x172ffcu: goto label_172ffc;
        case 0x173000u: goto label_173000;
        case 0x173004u: goto label_173004;
        case 0x173008u: goto label_173008;
        case 0x17300cu: goto label_17300c;
        case 0x173010u: goto label_173010;
        case 0x173014u: goto label_173014;
        case 0x173018u: goto label_173018;
        case 0x17301cu: goto label_17301c;
        case 0x173020u: goto label_173020;
        case 0x173024u: goto label_173024;
        case 0x173028u: goto label_173028;
        case 0x17302cu: goto label_17302c;
        case 0x173030u: goto label_173030;
        case 0x173034u: goto label_173034;
        case 0x173038u: goto label_173038;
        case 0x17303cu: goto label_17303c;
        case 0x173040u: goto label_173040;
        case 0x173044u: goto label_173044;
        case 0x173048u: goto label_173048;
        case 0x17304cu: goto label_17304c;
        case 0x173050u: goto label_173050;
        case 0x173054u: goto label_173054;
        case 0x173058u: goto label_173058;
        case 0x17305cu: goto label_17305c;
        case 0x173060u: goto label_173060;
        case 0x173064u: goto label_173064;
        case 0x173068u: goto label_173068;
        case 0x17306cu: goto label_17306c;
        case 0x173070u: goto label_173070;
        case 0x173074u: goto label_173074;
        case 0x173078u: goto label_173078;
        case 0x17307cu: goto label_17307c;
        case 0x173080u: goto label_173080;
        case 0x173084u: goto label_173084;
        case 0x173088u: goto label_173088;
        case 0x17308cu: goto label_17308c;
        case 0x173090u: goto label_173090;
        case 0x173094u: goto label_173094;
        case 0x173098u: goto label_173098;
        case 0x17309cu: goto label_17309c;
        case 0x1730a0u: goto label_1730a0;
        case 0x1730a4u: goto label_1730a4;
        default: break;
    }

    ctx->pc = 0x172f60u;

label_172f60:
    // 0x172f60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x172f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_172f64:
    // 0x172f64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x172f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_172f68:
    // 0x172f68: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x172f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_172f6c:
    // 0x172f6c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x172f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_172f70:
    // 0x172f70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x172f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_172f74:
    // 0x172f74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x172f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_172f78:
    // 0x172f78: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x172f78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_172f7c:
    // 0x172f7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x172f7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_172f80:
    // 0x172f80: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x172f80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_172f84:
    // 0x172f84: 0x320f809  jalr        $t9
label_172f88:
    if (ctx->pc == 0x172F88u) {
        ctx->pc = 0x172F88u;
            // 0x172f88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172F8Cu;
        goto label_172f8c;
    }
    ctx->pc = 0x172F84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172F8Cu);
        ctx->pc = 0x172F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172F84u;
            // 0x172f88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x172F8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x172F8Cu; }
            if (ctx->pc != 0x172F8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x172F8Cu;
label_172f8c:
    // 0x172f8c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_172f90:
    if (ctx->pc == 0x172F90u) {
        ctx->pc = 0x172F90u;
            // 0x172f90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172F94u;
        goto label_172f94;
    }
    ctx->pc = 0x172F8Cu;
    {
        const bool branch_taken_0x172f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172F8Cu;
            // 0x172f90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172f8c) {
            ctx->pc = 0x172F9Cu;
            goto label_172f9c;
        }
    }
    ctx->pc = 0x172F94u;
label_172f94:
    // 0x172f94: 0x1000003d  b           . + 4 + (0x3D << 2)
label_172f98:
    if (ctx->pc == 0x172F98u) {
        ctx->pc = 0x172F98u;
            // 0x172f98: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x172F9Cu;
        goto label_172f9c;
    }
    ctx->pc = 0x172F94u;
    {
        const bool branch_taken_0x172f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172F94u;
            // 0x172f98: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172f94) {
            ctx->pc = 0x17308Cu;
            goto label_17308c;
        }
    }
    ctx->pc = 0x172F9Cu;
label_172f9c:
    // 0x172f9c: 0xc6140100  lwc1        $f20, 0x100($s0)
    ctx->pc = 0x172f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_172fa0:
    // 0x172fa0: 0xc0516c8  jal         func_145B20
label_172fa4:
    if (ctx->pc == 0x172FA4u) {
        ctx->pc = 0x172FA4u;
            // 0x172fa4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x172FA8u;
        goto label_172fa8;
    }
    ctx->pc = 0x172FA0u;
    SET_GPR_U32(ctx, 31, 0x172FA8u);
    ctx->pc = 0x172FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172FA0u;
            // 0x172fa4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145B20u;
    if (runtime->hasFunction(0x145B20u)) {
        auto targetFn = runtime->lookupFunction(0x145B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172FA8u; }
        if (ctx->pc != 0x172FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetDistFromCamera__FPf_0x145b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172FA8u; }
        if (ctx->pc != 0x172FA8u) { return; }
    }
    ctx->pc = 0x172FA8u;
label_172fa8:
    // 0x172fa8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x172fa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_172fac:
    // 0x172fac: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x172facu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_172fb0:
    // 0x172fb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x172fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_172fb4:
    // 0x172fb4: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x172fb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_172fb8:
    // 0x172fb8: 0x320f809  jalr        $t9
label_172fbc:
    if (ctx->pc == 0x172FBCu) {
        ctx->pc = 0x172FBCu;
            // 0x172fbc: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->pc = 0x172FC0u;
        goto label_172fc0;
    }
    ctx->pc = 0x172FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172FC0u);
        ctx->pc = 0x172FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172FB8u;
            // 0x172fbc: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x172FC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x172FC0u; }
            if (ctx->pc != 0x172FC0u) { return; }
        }
        }
    }
    ctx->pc = 0x172FC0u;
label_172fc0:
    // 0x172fc0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_172fc4:
    if (ctx->pc == 0x172FC4u) {
        ctx->pc = 0x172FC4u;
            // 0x172fc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172FC8u;
        goto label_172fc8;
    }
    ctx->pc = 0x172FC0u;
    {
        const bool branch_taken_0x172fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172FC0u;
            // 0x172fc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172fc0) {
            ctx->pc = 0x172FD0u;
            goto label_172fd0;
        }
    }
    ctx->pc = 0x172FC8u;
label_172fc8:
    // 0x172fc8: 0x1000002f  b           . + 4 + (0x2F << 2)
label_172fcc:
    if (ctx->pc == 0x172FCCu) {
        ctx->pc = 0x172FD0u;
        goto label_172fd0;
    }
    ctx->pc = 0x172FC8u;
    {
        const bool branch_taken_0x172fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172fc8) {
            ctx->pc = 0x173088u;
            goto label_173088;
        }
    }
    ctx->pc = 0x172FD0u;
label_172fd0:
    // 0x172fd0: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x172fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172fd4:
    // 0x172fd4: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x172fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_172fd8:
    // 0x172fd8: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_172fdc:
    if (ctx->pc == 0x172FDCu) {
        ctx->pc = 0x172FDCu;
            // 0x172fdc: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x172FE0u;
        goto label_172fe0;
    }
    ctx->pc = 0x172FD8u;
    {
        const bool branch_taken_0x172fd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x172FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172FD8u;
            // 0x172fdc: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x172fd8) {
            ctx->pc = 0x173024u;
            goto label_173024;
        }
    }
    ctx->pc = 0x172FE0u;
label_172fe0:
    // 0x172fe0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x172fe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_172fe4:
    // 0x172fe4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x172fe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_172fe8:
    // 0x172fe8: 0x320f809  jalr        $t9
label_172fec:
    if (ctx->pc == 0x172FECu) {
        ctx->pc = 0x172FECu;
            // 0x172fec: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x172FF0u;
        goto label_172ff0;
    }
    ctx->pc = 0x172FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172FF0u);
        ctx->pc = 0x172FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172FE8u;
            // 0x172fec: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x172FF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x172FF0u; }
            if (ctx->pc != 0x172FF0u) { return; }
        }
        }
    }
    ctx->pc = 0x172FF0u;
label_172ff0:
    // 0x172ff0: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x172ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_172ff4:
    // 0x172ff4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x172ff4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_172ff8:
    // 0x172ff8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x172ff8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_172ffc:
    // 0x172ffc: 0x320f809  jalr        $t9
label_173000:
    if (ctx->pc == 0x173000u) {
        ctx->pc = 0x173000u;
            // 0x173000: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x173004u;
        goto label_173004;
    }
    ctx->pc = 0x172FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x173004u);
        ctx->pc = 0x173000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172FFCu;
            // 0x173000: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x173004u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173004u; }
            if (ctx->pc != 0x173004u) { return; }
        }
        }
    }
    ctx->pc = 0x173004u;
label_173004:
    // 0x173004: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x173004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_173008:
    // 0x173008: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x173008u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17300c:
    // 0x17300c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x17300cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_173010:
    // 0x173010: 0x320f809  jalr        $t9
label_173014:
    if (ctx->pc == 0x173014u) {
        ctx->pc = 0x173014u;
            // 0x173014: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x173018u;
        goto label_173018;
    }
    ctx->pc = 0x173010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x173018u);
        ctx->pc = 0x173014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173010u;
            // 0x173014: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x173018u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173018u; }
            if (ctx->pc != 0x173018u) { return; }
        }
        }
    }
    ctx->pc = 0x173018u;
label_173018:
    // 0x173018: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x173018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_17301c:
    // 0x17301c: 0xc04de0c  jal         func_137830
label_173020:
    if (ctx->pc == 0x173020u) {
        ctx->pc = 0x173020u;
            // 0x173020: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x173024u;
        goto label_173024;
    }
    ctx->pc = 0x17301Cu;
    SET_GPR_U32(ctx, 31, 0x173024u);
    ctx->pc = 0x173020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17301Cu;
            // 0x173020: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173024u; }
        if (ctx->pc != 0x173024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173024u; }
        if (ctx->pc != 0x173024u) { return; }
    }
    ctx->pc = 0x173024u;
label_173024:
    // 0x173024: 0xc05cc2c  jal         func_1730B0
label_173028:
    if (ctx->pc == 0x173028u) {
        ctx->pc = 0x173028u;
            // 0x173028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17302Cu;
        goto label_17302c;
    }
    ctx->pc = 0x173024u;
    SET_GPR_U32(ctx, 31, 0x17302Cu);
    ctx->pc = 0x173028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173024u;
            // 0x173028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1730B0u;
    if (runtime->hasFunction(0x1730B0u)) {
        auto targetFn = runtime->lookupFunction(0x1730B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17302Cu; }
        if (ctx->pc != 0x17302Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDeformMesh__11CCharacter2Fv_0x1730b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17302Cu; }
        if (ctx->pc != 0x17302Cu) { return; }
    }
    ctx->pc = 0x17302Cu;
label_17302c:
    // 0x17302c: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x17302cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_173030:
    // 0x173030: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_173034:
    if (ctx->pc == 0x173034u) {
        ctx->pc = 0x173034u;
            // 0x173034: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173038u;
        goto label_173038;
    }
    ctx->pc = 0x173030u;
    {
        const bool branch_taken_0x173030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x173034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173030u;
            // 0x173034: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173030) {
            ctx->pc = 0x173044u;
            goto label_173044;
        }
    }
    ctx->pc = 0x173038u;
label_173038:
    // 0x173038: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x173038u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_17303c:
    // 0x17303c: 0xc04df4c  jal         func_137D30
label_173040:
    if (ctx->pc == 0x173040u) {
        ctx->pc = 0x173040u;
            // 0x173040: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x173044u;
        goto label_173044;
    }
    ctx->pc = 0x17303Cu;
    SET_GPR_U32(ctx, 31, 0x173044u);
    ctx->pc = 0x173040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17303Cu;
            // 0x173040: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137D30u;
    if (runtime->hasFunction(0x137D30u)) {
        auto targetFn = runtime->lookupFunction(0x137D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173044u; }
        if (ctx->pc != 0x173044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParamObjAlpha__8mgCFrameFfi_0x137d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173044u; }
        if (ctx->pc != 0x173044u) { return; }
    }
    ctx->pc = 0x173044u;
label_173044:
    // 0x173044: 0xc050be4  jal         func_142F90
label_173048:
    if (ctx->pc == 0x173048u) {
        ctx->pc = 0x173048u;
            // 0x173048: 0x8e040070  lw          $a0, 0x70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
        ctx->pc = 0x17304Cu;
        goto label_17304c;
    }
    ctx->pc = 0x173044u;
    SET_GPR_U32(ctx, 31, 0x17304Cu);
    ctx->pc = 0x173048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173044u;
            // 0x173048: 0x8e040070  lw          $a0, 0x70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142F90u;
    if (runtime->hasFunction(0x142F90u)) {
        auto targetFn = runtime->lookupFunction(0x142F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17304Cu; }
        if (ctx->pc != 0x17304Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDraw__FP8mgCFrame_0x142f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17304Cu; }
        if (ctx->pc != 0x17304Cu) { return; }
    }
    ctx->pc = 0x17304Cu;
label_17304c:
    // 0x17304c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x17304cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_173050:
    // 0x173050: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x173050u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173054:
    // 0x173054: 0x10000008  b           . + 4 + (0x8 << 2)
label_173058:
    if (ctx->pc == 0x173058u) {
        ctx->pc = 0x173058u;
            // 0x173058: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17305Cu;
        goto label_17305c;
    }
    ctx->pc = 0x173054u;
    {
        const bool branch_taken_0x173054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173054u;
            // 0x173058: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173054) {
            ctx->pc = 0x173078u;
            goto label_173078;
        }
    }
    ctx->pc = 0x17305Cu;
label_17305c:
    // 0x17305c: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x17305cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_173060:
    // 0x173060: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x173060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173064:
    // 0x173064: 0xc05eb2c  jal         func_17ACB0
label_173068:
    if (ctx->pc == 0x173068u) {
        ctx->pc = 0x173068u;
            // 0x173068: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->pc = 0x17306Cu;
        goto label_17306c;
    }
    ctx->pc = 0x173064u;
    SET_GPR_U32(ctx, 31, 0x17306Cu);
    ctx->pc = 0x173068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173064u;
            // 0x173068: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17ACB0u;
    if (runtime->hasFunction(0x17ACB0u)) {
        auto targetFn = runtime->lookupFunction(0x17ACB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17306Cu; }
        if (ctx->pc != 0x17306Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSub__13CDynamicAnimeFi_0x17acb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17306Cu; }
        if (ctx->pc != 0x17306Cu) { return; }
    }
    ctx->pc = 0x17306Cu;
label_17306c:
    // 0x17306c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x17306cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_173070:
    // 0x173070: 0x26730090  addiu       $s3, $s3, 0x90
    ctx->pc = 0x173070u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_173074:
    // 0x173074: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x173074u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_173078:
    // 0x173078: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x173078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_17307c:
    // 0x17307c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x17307cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_173080:
    // 0x173080: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_173084:
    if (ctx->pc == 0x173084u) {
        ctx->pc = 0x173084u;
            // 0x173084: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173088u;
        goto label_173088;
    }
    ctx->pc = 0x173080u;
    {
        const bool branch_taken_0x173080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173080u;
            // 0x173084: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173080) {
            ctx->pc = 0x17305Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17305c;
        }
    }
    ctx->pc = 0x173088u;
label_173088:
    // 0x173088: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x173088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_17308c:
    // 0x17308c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17308cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_173090:
    // 0x173090: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x173090u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_173094:
    // 0x173094: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x173094u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_173098:
    // 0x173098: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x173098u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17309c:
    // 0x17309c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17309cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1730a0:
    // 0x1730a0: 0x3e00008  jr          $ra
label_1730a4:
    if (ctx->pc == 0x1730A4u) {
        ctx->pc = 0x1730A4u;
            // 0x1730a4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1730A8u;
        goto label_fallthrough_0x1730a0;
    }
    ctx->pc = 0x1730A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1730A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1730A0u;
            // 0x1730a4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1730a0:
    ctx->pc = 0x1730A8u;
}
