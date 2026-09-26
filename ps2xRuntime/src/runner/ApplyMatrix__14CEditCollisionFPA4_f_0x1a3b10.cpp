#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ApplyMatrix__14CEditCollisionFPA4_f
// Address: 0x1a3b10 - 0x1a3c50
void ApplyMatrix__14CEditCollisionFPA4_f_0x1a3b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApplyMatrix__14CEditCollisionFPA4_f_0x1a3b10");
#endif

    switch (ctx->pc) {
        case 0x1a3b10u: goto label_1a3b10;
        case 0x1a3b14u: goto label_1a3b14;
        case 0x1a3b18u: goto label_1a3b18;
        case 0x1a3b1cu: goto label_1a3b1c;
        case 0x1a3b20u: goto label_1a3b20;
        case 0x1a3b24u: goto label_1a3b24;
        case 0x1a3b28u: goto label_1a3b28;
        case 0x1a3b2cu: goto label_1a3b2c;
        case 0x1a3b30u: goto label_1a3b30;
        case 0x1a3b34u: goto label_1a3b34;
        case 0x1a3b38u: goto label_1a3b38;
        case 0x1a3b3cu: goto label_1a3b3c;
        case 0x1a3b40u: goto label_1a3b40;
        case 0x1a3b44u: goto label_1a3b44;
        case 0x1a3b48u: goto label_1a3b48;
        case 0x1a3b4cu: goto label_1a3b4c;
        case 0x1a3b50u: goto label_1a3b50;
        case 0x1a3b54u: goto label_1a3b54;
        case 0x1a3b58u: goto label_1a3b58;
        case 0x1a3b5cu: goto label_1a3b5c;
        case 0x1a3b60u: goto label_1a3b60;
        case 0x1a3b64u: goto label_1a3b64;
        case 0x1a3b68u: goto label_1a3b68;
        case 0x1a3b6cu: goto label_1a3b6c;
        case 0x1a3b70u: goto label_1a3b70;
        case 0x1a3b74u: goto label_1a3b74;
        case 0x1a3b78u: goto label_1a3b78;
        case 0x1a3b7cu: goto label_1a3b7c;
        case 0x1a3b80u: goto label_1a3b80;
        case 0x1a3b84u: goto label_1a3b84;
        case 0x1a3b88u: goto label_1a3b88;
        case 0x1a3b8cu: goto label_1a3b8c;
        case 0x1a3b90u: goto label_1a3b90;
        case 0x1a3b94u: goto label_1a3b94;
        case 0x1a3b98u: goto label_1a3b98;
        case 0x1a3b9cu: goto label_1a3b9c;
        case 0x1a3ba0u: goto label_1a3ba0;
        case 0x1a3ba4u: goto label_1a3ba4;
        case 0x1a3ba8u: goto label_1a3ba8;
        case 0x1a3bacu: goto label_1a3bac;
        case 0x1a3bb0u: goto label_1a3bb0;
        case 0x1a3bb4u: goto label_1a3bb4;
        case 0x1a3bb8u: goto label_1a3bb8;
        case 0x1a3bbcu: goto label_1a3bbc;
        case 0x1a3bc0u: goto label_1a3bc0;
        case 0x1a3bc4u: goto label_1a3bc4;
        case 0x1a3bc8u: goto label_1a3bc8;
        case 0x1a3bccu: goto label_1a3bcc;
        case 0x1a3bd0u: goto label_1a3bd0;
        case 0x1a3bd4u: goto label_1a3bd4;
        case 0x1a3bd8u: goto label_1a3bd8;
        case 0x1a3bdcu: goto label_1a3bdc;
        case 0x1a3be0u: goto label_1a3be0;
        case 0x1a3be4u: goto label_1a3be4;
        case 0x1a3be8u: goto label_1a3be8;
        case 0x1a3becu: goto label_1a3bec;
        case 0x1a3bf0u: goto label_1a3bf0;
        case 0x1a3bf4u: goto label_1a3bf4;
        case 0x1a3bf8u: goto label_1a3bf8;
        case 0x1a3bfcu: goto label_1a3bfc;
        case 0x1a3c00u: goto label_1a3c00;
        case 0x1a3c04u: goto label_1a3c04;
        case 0x1a3c08u: goto label_1a3c08;
        case 0x1a3c0cu: goto label_1a3c0c;
        case 0x1a3c10u: goto label_1a3c10;
        case 0x1a3c14u: goto label_1a3c14;
        case 0x1a3c18u: goto label_1a3c18;
        case 0x1a3c1cu: goto label_1a3c1c;
        case 0x1a3c20u: goto label_1a3c20;
        case 0x1a3c24u: goto label_1a3c24;
        case 0x1a3c28u: goto label_1a3c28;
        case 0x1a3c2cu: goto label_1a3c2c;
        case 0x1a3c30u: goto label_1a3c30;
        case 0x1a3c34u: goto label_1a3c34;
        case 0x1a3c38u: goto label_1a3c38;
        case 0x1a3c3cu: goto label_1a3c3c;
        case 0x1a3c40u: goto label_1a3c40;
        case 0x1a3c44u: goto label_1a3c44;
        case 0x1a3c48u: goto label_1a3c48;
        case 0x1a3c4cu: goto label_1a3c4c;
        default: break;
    }

    ctx->pc = 0x1a3b10u;

label_1a3b10:
    // 0x1a3b10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a3b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1a3b14:
    // 0x1a3b14: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1a3b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1a3b18:
    // 0x1a3b18: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1a3b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1a3b1c:
    // 0x1a3b1c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1a3b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1a3b20:
    // 0x1a3b20: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1a3b20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a3b24:
    // 0x1a3b24: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a3b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1a3b28:
    // 0x1a3b28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a3b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1a3b2c:
    // 0x1a3b2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a3b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1a3b30:
    // 0x1a3b30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a3b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a3b34:
    // 0x1a3b34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a3b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a3b38:
    // 0x1a3b38: 0x8c900040  lw          $s0, 0x40($a0)
    ctx->pc = 0x1a3b38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a3b3c:
    // 0x1a3b3c: 0x1200003a  beqz        $s0, . + 4 + (0x3A << 2)
label_1a3b40:
    if (ctx->pc == 0x1A3B40u) {
        ctx->pc = 0x1A3B40u;
            // 0x1a3b40: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A3B44u;
        goto label_1a3b44;
    }
    ctx->pc = 0x1A3B3Cu;
    {
        const bool branch_taken_0x1a3b3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3B3Cu;
            // 0x1a3b40: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3b3c) {
            ctx->pc = 0x1A3C28u;
            goto label_1a3c28;
        }
    }
    ctx->pc = 0x1A3B44u;
label_1a3b44:
    // 0x1a3b44: 0x10000030  b           . + 4 + (0x30 << 2)
label_1a3b48:
    if (ctx->pc == 0x1A3B48u) {
        ctx->pc = 0x1A3B48u;
            // 0x1a3b48: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A3B4Cu;
        goto label_1a3b4c;
    }
    ctx->pc = 0x1A3B44u;
    {
        const bool branch_taken_0x1a3b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3B44u;
            // 0x1a3b48: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3b44) {
            ctx->pc = 0x1A3C08u;
            goto label_1a3c08;
        }
    }
    ctx->pc = 0x1A3B4Cu;
label_1a3b4c:
    // 0x1a3b4c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1a3b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a3b50:
    // 0x1a3b50: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a3b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3b54:
    // 0x1a3b54: 0xc04c228  jal         func_1308A0
label_1a3b58:
    if (ctx->pc == 0x1A3B58u) {
        ctx->pc = 0x1A3B58u;
            // 0x1a3b58: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1A3B5Cu;
        goto label_1a3b5c;
    }
    ctx->pc = 0x1A3B54u;
    SET_GPR_U32(ctx, 31, 0x1A3B5Cu);
    ctx->pc = 0x1A3B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3B54u;
            // 0x1a3b58: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1308A0u;
    if (runtime->hasFunction(0x1308A0u)) {
        auto targetFn = runtime->lookupFunction(0x1308A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3B5Cu; }
        if (ctx->pc != 0x1A3B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgApplyMatrixN__FPA4_fPA4_fPA4_fi_0x1308a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3B5Cu; }
        if (ctx->pc != 0x1A3B5Cu) { return; }
    }
    ctx->pc = 0x1A3B5Cu;
label_1a3b5c:
    // 0x1a3b5c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a3b5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3b60:
    // 0x1a3b60: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a3b60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3b64:
    // 0x1a3b64: 0x0  nop
    ctx->pc = 0x1a3b64u;
    // NOP
label_1a3b68:
    // 0x1a3b68: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x1a3b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_1a3b6c:
    // 0x1a3b6c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a3b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3b70:
    // 0x1a3b70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a3b70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3b74:
    // 0x1a3b74: 0x0  nop
    ctx->pc = 0x1a3b74u;
    // NOP
label_1a3b78:
    // 0x1a3b78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a3b78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a3b7c:
    // 0x1a3b7c: 0x0  nop
    ctx->pc = 0x1a3b7cu;
    // NOP
label_1a3b80:
    // 0x1a3b80: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_1a3b84:
    if (ctx->pc == 0x1A3B84u) {
        ctx->pc = 0x1A3B84u;
            // 0x1a3b84: 0x24540004  addiu       $s4, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x1A3B88u;
        goto label_1a3b88;
    }
    ctx->pc = 0x1A3B80u;
    {
        const bool branch_taken_0x1a3b80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A3B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3B80u;
            // 0x1a3b84: 0x24540004  addiu       $s4, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3b80) {
            ctx->pc = 0x1A3BACu;
            goto label_1a3bac;
        }
    }
    ctx->pc = 0x1A3B88u;
label_1a3b88:
    // 0x1a3b88: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a3b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1a3b8c:
    // 0x1a3b8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3b8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3b90:
    // 0x1a3b90: 0xc0a248c  jal         func_289230
label_1a3b94:
    if (ctx->pc == 0x1A3B94u) {
        ctx->pc = 0x1A3B94u;
            // 0x1a3b94: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1A3B98u;
        goto label_1a3b98;
    }
    ctx->pc = 0x1A3B90u;
    SET_GPR_U32(ctx, 31, 0x1A3B98u);
    ctx->pc = 0x1A3B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3B90u;
            // 0x1a3b94: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3B98u; }
        if (ctx->pc != 0x1A3B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3B98u; }
        if (ctx->pc != 0x1A3B98u) { return; }
    }
    ctx->pc = 0x1A3B98u;
label_1a3b98:
    // 0x1a3b98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3b98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3b9c:
    // 0x1a3b9c: 0x0  nop
    ctx->pc = 0x1a3b9cu;
    // NOP
label_1a3ba0:
    // 0x1a3ba0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3ba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a3ba4:
    // 0x1a3ba4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1a3ba8:
    if (ctx->pc == 0x1A3BA8u) {
        ctx->pc = 0x1A3BA8u;
            // 0x1a3ba8: 0xe6800000  swc1        $f0, 0x0($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->pc = 0x1A3BACu;
        goto label_1a3bac;
    }
    ctx->pc = 0x1A3BA4u;
    {
        const bool branch_taken_0x1a3ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3BA4u;
            // 0x1a3ba8: 0xe6800000  swc1        $f0, 0x0($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3ba4) {
            ctx->pc = 0x1A3BD0u;
            goto label_1a3bd0;
        }
    }
    ctx->pc = 0x1A3BACu;
label_1a3bac:
    // 0x1a3bac: 0x0  nop
    ctx->pc = 0x1a3bacu;
    // NOP
label_1a3bb0:
    // 0x1a3bb0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a3bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1a3bb4:
    // 0x1a3bb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3bb8:
    // 0x1a3bb8: 0xc0a248c  jal         func_289230
label_1a3bbc:
    if (ctx->pc == 0x1A3BBCu) {
        ctx->pc = 0x1A3BBCu;
            // 0x1a3bbc: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1A3BC0u;
        goto label_1a3bc0;
    }
    ctx->pc = 0x1A3BB8u;
    SET_GPR_U32(ctx, 31, 0x1A3BC0u);
    ctx->pc = 0x1A3BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3BB8u;
            // 0x1a3bbc: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3BC0u; }
        if (ctx->pc != 0x1A3BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3BC0u; }
        if (ctx->pc != 0x1A3BC0u) { return; }
    }
    ctx->pc = 0x1A3BC0u;
label_1a3bc0:
    // 0x1a3bc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3bc4:
    // 0x1a3bc4: 0x0  nop
    ctx->pc = 0x1a3bc4u;
    // NOP
label_1a3bc8:
    // 0x1a3bc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3bc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a3bcc:
    // 0x1a3bcc: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x1a3bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_1a3bd0:
    // 0x1a3bd0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a3bd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1a3bd4:
    // 0x1a3bd4: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x1a3bd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
label_1a3bd8:
    // 0x1a3bd8: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_1a3bdc:
    if (ctx->pc == 0x1A3BDCu) {
        ctx->pc = 0x1A3BDCu;
            // 0x1a3bdc: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x1A3BE0u;
        goto label_1a3be0;
    }
    ctx->pc = 0x1A3BD8u;
    {
        const bool branch_taken_0x1a3bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3BD8u;
            // 0x1a3bdc: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3bd8) {
            ctx->pc = 0x1A3B64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a3b64;
        }
    }
    ctx->pc = 0x1A3BE0u;
label_1a3be0:
    // 0x1a3be0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1a3be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1a3be4:
    // 0x1a3be4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a3be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3be8:
    // 0x1a3be8: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x1a3be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1a3bec:
    // 0x1a3bec: 0xc04bd60  jal         func_12F580
label_1a3bf0:
    if (ctx->pc == 0x1A3BF0u) {
        ctx->pc = 0x1A3BF0u;
            // 0x1a3bf0: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x1A3BF4u;
        goto label_1a3bf4;
    }
    ctx->pc = 0x1A3BECu;
    SET_GPR_U32(ctx, 31, 0x1A3BF4u);
    ctx->pc = 0x1A3BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3BECu;
            // 0x1a3bf0: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F580u;
    if (runtime->hasFunction(0x12F580u)) {
        auto targetFn = runtime->lookupFunction(0x12F580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3BF4u; }
        if (ctx->pc != 0x1A3BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPlaneNormal__FPfPfPfPf_0x12f580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3BF4u; }
        if (ctx->pc != 0x1A3BF4u) { return; }
    }
    ctx->pc = 0x1A3BF4u;
label_1a3bf4:
    // 0x1a3bf4: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1a3bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1a3bf8:
    // 0x1a3bf8: 0xc041be0  jal         func_106F80
label_1a3bfc:
    if (ctx->pc == 0x1A3BFCu) {
        ctx->pc = 0x1A3BFCu;
            // 0x1a3bfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A3C00u;
        goto label_1a3c00;
    }
    ctx->pc = 0x1A3BF8u;
    SET_GPR_U32(ctx, 31, 0x1A3C00u);
    ctx->pc = 0x1A3BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3BF8u;
            // 0x1a3bfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3C00u; }
        if (ctx->pc != 0x1A3C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3C00u; }
        if (ctx->pc != 0x1A3C00u) { return; }
    }
    ctx->pc = 0x1A3C00u;
label_1a3c00:
    // 0x1a3c00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a3c00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a3c04:
    // 0x1a3c04: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x1a3c04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1a3c08:
    // 0x1a3c08: 0x8ec20044  lw          $v0, 0x44($s6)
    ctx->pc = 0x1a3c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 68)));
label_1a3c0c:
    // 0x1a3c0c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a3c0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a3c10:
    // 0x1a3c10: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
label_1a3c14:
    if (ctx->pc == 0x1A3C14u) {
        ctx->pc = 0x1A3C14u;
            // 0x1a3c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A3C18u;
        goto label_1a3c18;
    }
    ctx->pc = 0x1A3C10u;
    {
        const bool branch_taken_0x1a3c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3C10u;
            // 0x1a3c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c10) {
            ctx->pc = 0x1A3B4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a3b4c;
        }
    }
    ctx->pc = 0x1A3C18u;
label_1a3c18:
    // 0x1a3c18: 0x8ed90030  lw          $t9, 0x30($s6)
    ctx->pc = 0x1a3c18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
label_1a3c1c:
    // 0x1a3c1c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a3c1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a3c20:
    // 0x1a3c20: 0x320f809  jalr        $t9
label_1a3c24:
    if (ctx->pc == 0x1A3C24u) {
        ctx->pc = 0x1A3C24u;
            // 0x1a3c24: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A3C28u;
        goto label_1a3c28;
    }
    ctx->pc = 0x1A3C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A3C28u);
        ctx->pc = 0x1A3C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3C20u;
            // 0x1a3c24: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A3C28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A3C28u; }
            if (ctx->pc != 0x1A3C28u) { return; }
        }
        }
    }
    ctx->pc = 0x1A3C28u;
label_1a3c28:
    // 0x1a3c28: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1a3c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a3c2c:
    // 0x1a3c2c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1a3c2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a3c30:
    // 0x1a3c30: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a3c30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a3c34:
    // 0x1a3c34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a3c34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a3c38:
    // 0x1a3c38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a3c38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a3c3c:
    // 0x1a3c3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a3c3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a3c40:
    // 0x1a3c40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a3c40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a3c44:
    // 0x1a3c44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a3c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a3c48:
    // 0x1a3c48: 0x3e00008  jr          $ra
label_1a3c4c:
    if (ctx->pc == 0x1A3C4Cu) {
        ctx->pc = 0x1A3C4Cu;
            // 0x1a3c4c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1A3C50u;
        goto label_fallthrough_0x1a3c48;
    }
    ctx->pc = 0x1A3C48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3C48u;
            // 0x1a3c4c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a3c48:
    ctx->pc = 0x1A3C50u;
}
