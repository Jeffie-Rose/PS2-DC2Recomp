#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InScreenFunc__4CMapFP16InScreenFuncInfo
// Address: 0x15fc00 - 0x15fcf8
void InScreenFunc__4CMapFP16InScreenFuncInfo_0x15fc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InScreenFunc__4CMapFP16InScreenFuncInfo_0x15fc00");
#endif

    switch (ctx->pc) {
        case 0x15fc00u: goto label_15fc00;
        case 0x15fc04u: goto label_15fc04;
        case 0x15fc08u: goto label_15fc08;
        case 0x15fc0cu: goto label_15fc0c;
        case 0x15fc10u: goto label_15fc10;
        case 0x15fc14u: goto label_15fc14;
        case 0x15fc18u: goto label_15fc18;
        case 0x15fc1cu: goto label_15fc1c;
        case 0x15fc20u: goto label_15fc20;
        case 0x15fc24u: goto label_15fc24;
        case 0x15fc28u: goto label_15fc28;
        case 0x15fc2cu: goto label_15fc2c;
        case 0x15fc30u: goto label_15fc30;
        case 0x15fc34u: goto label_15fc34;
        case 0x15fc38u: goto label_15fc38;
        case 0x15fc3cu: goto label_15fc3c;
        case 0x15fc40u: goto label_15fc40;
        case 0x15fc44u: goto label_15fc44;
        case 0x15fc48u: goto label_15fc48;
        case 0x15fc4cu: goto label_15fc4c;
        case 0x15fc50u: goto label_15fc50;
        case 0x15fc54u: goto label_15fc54;
        case 0x15fc58u: goto label_15fc58;
        case 0x15fc5cu: goto label_15fc5c;
        case 0x15fc60u: goto label_15fc60;
        case 0x15fc64u: goto label_15fc64;
        case 0x15fc68u: goto label_15fc68;
        case 0x15fc6cu: goto label_15fc6c;
        case 0x15fc70u: goto label_15fc70;
        case 0x15fc74u: goto label_15fc74;
        case 0x15fc78u: goto label_15fc78;
        case 0x15fc7cu: goto label_15fc7c;
        case 0x15fc80u: goto label_15fc80;
        case 0x15fc84u: goto label_15fc84;
        case 0x15fc88u: goto label_15fc88;
        case 0x15fc8cu: goto label_15fc8c;
        case 0x15fc90u: goto label_15fc90;
        case 0x15fc94u: goto label_15fc94;
        case 0x15fc98u: goto label_15fc98;
        case 0x15fc9cu: goto label_15fc9c;
        case 0x15fca0u: goto label_15fca0;
        case 0x15fca4u: goto label_15fca4;
        case 0x15fca8u: goto label_15fca8;
        case 0x15fcacu: goto label_15fcac;
        case 0x15fcb0u: goto label_15fcb0;
        case 0x15fcb4u: goto label_15fcb4;
        case 0x15fcb8u: goto label_15fcb8;
        case 0x15fcbcu: goto label_15fcbc;
        case 0x15fcc0u: goto label_15fcc0;
        case 0x15fcc4u: goto label_15fcc4;
        case 0x15fcc8u: goto label_15fcc8;
        case 0x15fcccu: goto label_15fccc;
        case 0x15fcd0u: goto label_15fcd0;
        case 0x15fcd4u: goto label_15fcd4;
        case 0x15fcd8u: goto label_15fcd8;
        case 0x15fcdcu: goto label_15fcdc;
        case 0x15fce0u: goto label_15fce0;
        case 0x15fce4u: goto label_15fce4;
        case 0x15fce8u: goto label_15fce8;
        case 0x15fcecu: goto label_15fcec;
        case 0x15fcf0u: goto label_15fcf0;
        case 0x15fcf4u: goto label_15fcf4;
        default: break;
    }

    ctx->pc = 0x15fc00u;

label_15fc00:
    // 0x15fc00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15fc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_15fc04:
    // 0x15fc04: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15fc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_15fc08:
    // 0x15fc08: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x15fc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_15fc0c:
    // 0x15fc0c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x15fc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_15fc10:
    // 0x15fc10: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x15fc10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15fc14:
    // 0x15fc14: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15fc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_15fc18:
    // 0x15fc18: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x15fc18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15fc1c:
    // 0x15fc1c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15fc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_15fc20:
    // 0x15fc20: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15fc20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15fc24:
    // 0x15fc24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15fc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_15fc28:
    // 0x15fc28: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x15fc28u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_15fc2c:
    // 0x15fc2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15fc2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15fc30:
    // 0x15fc30: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x15fc30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_15fc34:
    // 0x15fc34: 0x8c91032c  lw          $s1, 0x32C($a0)
    ctx->pc = 0x15fc34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 812)));
label_15fc38:
    // 0x15fc38: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x15fc38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_15fc3c:
    // 0x15fc3c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_15fc40:
    if (ctx->pc == 0x15FC40u) {
        ctx->pc = 0x15FC40u;
            // 0x15fc40: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x15FC44u;
        goto label_15fc44;
    }
    ctx->pc = 0x15FC3Cu;
    {
        const bool branch_taken_0x15fc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FC3Cu;
            // 0x15fc40: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fc3c) {
            ctx->pc = 0x15FCB8u;
            goto label_15fcb8;
        }
    }
    ctx->pc = 0x15FC44u;
label_15fc44:
    // 0x15fc44: 0x82220070  lb          $v0, 0x70($s1)
    ctx->pc = 0x15fc44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
label_15fc48:
    // 0x15fc48: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x15fc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_15fc4c:
    // 0x15fc4c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x15fc4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_15fc50:
    // 0x15fc50: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_15fc54:
    if (ctx->pc == 0x15FC54u) {
        ctx->pc = 0x15FC58u;
        goto label_15fc58;
    }
    ctx->pc = 0x15FC50u;
    {
        const bool branch_taken_0x15fc50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fc50) {
            ctx->pc = 0x15FCB0u;
            goto label_15fcb0;
        }
    }
    ctx->pc = 0x15FC58u;
label_15fc58:
    // 0x15fc58: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x15fc58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15fc5c:
    // 0x15fc5c: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x15fc5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_15fc60:
    // 0x15fc60: 0x320f809  jalr        $t9
label_15fc64:
    if (ctx->pc == 0x15FC64u) {
        ctx->pc = 0x15FC64u;
            // 0x15fc64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15FC68u;
        goto label_15fc68;
    }
    ctx->pc = 0x15FC60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15FC68u);
        ctx->pc = 0x15FC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FC60u;
            // 0x15fc64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15FC68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15FC68u; }
            if (ctx->pc != 0x15FC68u) { return; }
        }
        }
    }
    ctx->pc = 0x15FC68u;
label_15fc68:
    // 0x15fc68: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_15fc6c:
    if (ctx->pc == 0x15FC6Cu) {
        ctx->pc = 0x15FC6Cu;
            // 0x15fc6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15FC70u;
        goto label_15fc70;
    }
    ctx->pc = 0x15FC68u;
    {
        const bool branch_taken_0x15fc68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FC68u;
            // 0x15fc6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fc68) {
            ctx->pc = 0x15FCB0u;
            goto label_15fcb0;
        }
    }
    ctx->pc = 0x15FC70u;
label_15fc70:
    // 0x15fc70: 0xc059d2c  jal         func_1674B0
label_15fc74:
    if (ctx->pc == 0x15FC74u) {
        ctx->pc = 0x15FC74u;
            // 0x15fc74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15FC78u;
        goto label_15fc78;
    }
    ctx->pc = 0x15FC70u;
    SET_GPR_U32(ctx, 31, 0x15FC78u);
    ctx->pc = 0x15FC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FC70u;
            // 0x15fc74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1674B0u;
    if (runtime->hasFunction(0x1674B0u)) {
        auto targetFn = runtime->lookupFunction(0x1674B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FC78u; }
        if (ctx->pc != 0x15FC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InScreenFunc__9CMapPartsFP16InScreenFuncInfo_0x1674b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FC78u; }
        if (ctx->pc != 0x15FC78u) { return; }
    }
    ctx->pc = 0x15FC78u;
label_15fc78:
    // 0x15fc78: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_15fc7c:
    if (ctx->pc == 0x15FC7Cu) {
        ctx->pc = 0x15FC80u;
        goto label_15fc80;
    }
    ctx->pc = 0x15FC78u;
    {
        const bool branch_taken_0x15fc78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fc78) {
            ctx->pc = 0x15FCB0u;
            goto label_15fcb0;
        }
    }
    ctx->pc = 0x15FC80u;
label_15fc80:
    // 0x15fc80: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_15fc84:
    if (ctx->pc == 0x15FC84u) {
        ctx->pc = 0x15FC88u;
        goto label_15fc88;
    }
    ctx->pc = 0x15FC80u;
    {
        const bool branch_taken_0x15fc80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fc80) {
            ctx->pc = 0x15FC9Cu;
            goto label_15fc9c;
        }
    }
    ctx->pc = 0x15FC88u;
label_15fc88:
    // 0x15fc88: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x15fc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15fc8c:
    // 0x15fc8c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x15fc8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15fc90:
    // 0x15fc90: 0x0  nop
    ctx->pc = 0x15fc90u;
    // NOP
label_15fc94:
    // 0x15fc94: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_15fc98:
    if (ctx->pc == 0x15FC98u) {
        ctx->pc = 0x15FC9Cu;
        goto label_15fc9c;
    }
    ctx->pc = 0x15FC94u;
    {
        const bool branch_taken_0x15fc94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15fc94) {
            ctx->pc = 0x15FCB0u;
            goto label_15fcb0;
        }
    }
    ctx->pc = 0x15FC9Cu;
label_15fc9c:
    // 0x15fc9c: 0x0  nop
    ctx->pc = 0x15fc9cu;
    // NOP
label_15fca0:
    // 0x15fca0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15fca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15fca4:
    // 0x15fca4: 0xc6750004  lwc1        $f21, 0x4($s3)
    ctx->pc = 0x15fca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_15fca8:
    // 0x15fca8: 0xc6740008  lwc1        $f20, 0x8($s3)
    ctx->pc = 0x15fca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_15fcac:
    // 0x15fcac: 0x0  nop
    ctx->pc = 0x15fcacu;
    // NOP
label_15fcb0:
    // 0x15fcb0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15fcb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_15fcb4:
    // 0x15fcb4: 0x26310310  addiu       $s1, $s1, 0x310
    ctx->pc = 0x15fcb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
label_15fcb8:
    // 0x15fcb8: 0x8e820328  lw          $v0, 0x328($s4)
    ctx->pc = 0x15fcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 808)));
label_15fcbc:
    // 0x15fcbc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x15fcbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_15fcc0:
    // 0x15fcc0: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_15fcc4:
    if (ctx->pc == 0x15FCC4u) {
        ctx->pc = 0x15FCC8u;
        goto label_15fcc8;
    }
    ctx->pc = 0x15FCC0u;
    {
        const bool branch_taken_0x15fcc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fcc0) {
            ctx->pc = 0x15FC44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15fc44;
        }
    }
    ctx->pc = 0x15FCC8u;
label_15fcc8:
    // 0x15fcc8: 0xe6750004  swc1        $f21, 0x4($s3)
    ctx->pc = 0x15fcc8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_15fccc:
    // 0x15fccc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15fcccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15fcd0:
    // 0x15fcd0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15fcd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_15fcd4:
    // 0x15fcd4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x15fcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_15fcd8:
    // 0x15fcd8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x15fcd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15fcdc:
    // 0x15fcdc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x15fcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_15fce0:
    // 0x15fce0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x15fce0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15fce4:
    // 0x15fce4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x15fce4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15fce8:
    // 0x15fce8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15fce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15fcec:
    // 0x15fcec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15fcecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15fcf0:
    // 0x15fcf0: 0x3e00008  jr          $ra
label_15fcf4:
    if (ctx->pc == 0x15FCF4u) {
        ctx->pc = 0x15FCF4u;
            // 0x15fcf4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x15FCF8u;
        goto label_fallthrough_0x15fcf0;
    }
    ctx->pc = 0x15FCF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FCF0u;
            // 0x15fcf4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x15fcf0:
    ctx->pc = 0x15FCF8u;
}
