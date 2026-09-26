#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Setup__10COcclusionFPA4_f
// Address: 0x2d5dc0 - 0x2d5fa8
void Setup__10COcclusionFPA4_f_0x2d5dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Setup__10COcclusionFPA4_f_0x2d5dc0");
#endif

    switch (ctx->pc) {
        case 0x2d5dfcu: goto label_2d5dfc;
        case 0x2d5e20u: goto label_2d5e20;
        case 0x2d5e28u: goto label_2d5e28;
        case 0x2d5e3cu: goto label_2d5e3c;
        case 0x2d5e48u: goto label_2d5e48;
        case 0x2d5e54u: goto label_2d5e54;
        case 0x2d5e84u: goto label_2d5e84;
        case 0x2d5e90u: goto label_2d5e90;
        case 0x2d5e9cu: goto label_2d5e9c;
        case 0x2d5eb8u: goto label_2d5eb8;
        case 0x2d5eccu: goto label_2d5ecc;
        case 0x2d5ee0u: goto label_2d5ee0;
        case 0x2d5ef4u: goto label_2d5ef4;
        case 0x2d5f10u: goto label_2d5f10;
        case 0x2d5f24u: goto label_2d5f24;
        case 0x2d5f38u: goto label_2d5f38;
        case 0x2d5f4cu: goto label_2d5f4c;
        case 0x2d5f58u: goto label_2d5f58;
        case 0x2d5f68u: goto label_2d5f68;
        case 0x2d5f78u: goto label_2d5f78;
        case 0x2d5f88u: goto label_2d5f88;
        default: break;
    }

    ctx->pc = 0x2d5dc0u;

    // 0x2d5dc0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2d5dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2d5dc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d5dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d5dc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d5dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d5dcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d5dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d5dd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d5dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d5dd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d5dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d5dd8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d5dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d5ddc: 0x1060006b  beqz        $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x2D5DDCu;
    {
        const bool branch_taken_0x2d5ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5DDCu;
            // 0x2d5de0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5ddc) {
            ctx->pc = 0x2D5F8Cu;
            goto label_2d5f8c;
        }
    }
    ctx->pc = 0x2D5DE4u;
    // 0x2d5de4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d5de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5de8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2d5de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d5dec: 0xae620050  sw          $v0, 0x50($s3)
    ctx->pc = 0x2d5decu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 2));
    // 0x2d5df0: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x2d5df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2d5df4: 0xc04c228  jal         func_1308A0
    ctx->pc = 0x2D5DF4u;
    SET_GPR_U32(ctx, 31, 0x2D5DFCu);
    ctx->pc = 0x2D5DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5DF4u;
            // 0x2d5df8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1308A0u;
    if (runtime->hasFunction(0x1308A0u)) {
        auto targetFn = runtime->lookupFunction(0x1308A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5DFCu; }
        if (ctx->pc != 0x2D5DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgApplyMatrixN__FPA4_fPA4_fPA4_fi_0x1308a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5DFCu; }
        if (ctx->pc != 0x2D5DFCu) { return; }
    }
    ctx->pc = 0x2D5DFCu;
label_2d5dfc:
    // 0x2d5dfc: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x2d5dfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d5e00: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x2d5e00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d5e04: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x2d5e04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d5e08: 0x266400b0  addiu       $a0, $s3, 0xB0
    ctx->pc = 0x2d5e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
    // 0x2d5e0c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2d5e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d5e10: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d5e10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5e14: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2d5e14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5e18: 0xc04bd20  jal         func_12F480
    ctx->pc = 0x2D5E18u;
    SET_GPR_U32(ctx, 31, 0x2D5E20u);
    ctx->pc = 0x2D5E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5E18u;
            // 0x2d5e1c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F480u;
    if (runtime->hasFunction(0x12F480u)) {
        auto targetFn = runtime->lookupFunction(0x12F480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5E20u; }
        if (ctx->pc != 0x2D5E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMin__FPfPfPfPfPf_0x12f480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5E20u; }
        if (ctx->pc != 0x2D5E20u) { return; }
    }
    ctx->pc = 0x2D5E20u;
label_2d5e20:
    // 0x2d5e20: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2D5E20u;
    SET_GPR_U32(ctx, 31, 0x2D5E28u);
    ctx->pc = 0x2D5E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5E20u;
            // 0x2d5e24: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5E28u; }
        if (ctx->pc != 0x2D5E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5E28u; }
        if (ctx->pc != 0x2D5E28u) { return; }
    }
    ctx->pc = 0x2D5E28u;
label_2d5e28:
    // 0x2d5e28: 0x26640060  addiu       $a0, $s3, 0x60
    ctx->pc = 0x2d5e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x2d5e2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d5e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5e30: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d5e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5e34: 0xc04bd60  jal         func_12F580
    ctx->pc = 0x2D5E34u;
    SET_GPR_U32(ctx, 31, 0x2D5E3Cu);
    ctx->pc = 0x2D5E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5E34u;
            // 0x2d5e38: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F580u;
    if (runtime->hasFunction(0x12F580u)) {
        auto targetFn = runtime->lookupFunction(0x12F580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5E3Cu; }
        if (ctx->pc != 0x2D5E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPlaneNormal__FPfPfPfPf_0x12f580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5E3Cu; }
        if (ctx->pc != 0x2D5E3Cu) { return; }
    }
    ctx->pc = 0x2D5E3Cu;
label_2d5e3c:
    // 0x2d5e3c: 0x26640060  addiu       $a0, $s3, 0x60
    ctx->pc = 0x2d5e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x2d5e40: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2D5E40u;
    SET_GPR_U32(ctx, 31, 0x2D5E48u);
    ctx->pc = 0x2D5E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5E40u;
            // 0x2d5e44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5E48u; }
        if (ctx->pc != 0x2D5E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5E48u; }
        if (ctx->pc != 0x2D5E48u) { return; }
    }
    ctx->pc = 0x2D5E48u;
label_2d5e48:
    // 0x2d5e48: 0x26640060  addiu       $a0, $s3, 0x60
    ctx->pc = 0x2d5e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x2d5e4c: 0xc041bd6  jal         func_106F58
    ctx->pc = 0x2D5E4Cu;
    SET_GPR_U32(ctx, 31, 0x2D5E54u);
    ctx->pc = 0x2D5E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5E4Cu;
            // 0x2d5e50: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5E54u; }
        if (ctx->pc != 0x2D5E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5E54u; }
        if (ctx->pc != 0x2D5E54u) { return; }
    }
    ctx->pc = 0x2D5E54u;
label_2d5e54:
    // 0x2d5e54: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2d5e54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d5e58: 0x0  nop
    ctx->pc = 0x2d5e58u;
    // NOP
    // 0x2d5e5c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d5e5cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d5e60: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d5e60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d5e64: 0x0  nop
    ctx->pc = 0x2d5e64u;
    // NOP
    // 0x2d5e68: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x2D5E68u;
    {
        const bool branch_taken_0x2d5e68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D5E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5E68u;
            // 0x2d5e6c: 0xe660006c  swc1        $f0, 0x6C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5e68) {
            ctx->pc = 0x2D5EFCu;
            goto label_2d5efc;
        }
    }
    ctx->pc = 0x2D5E70u;
    // 0x2d5e70: 0x26640060  addiu       $a0, $s3, 0x60
    ctx->pc = 0x2d5e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x2d5e74: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2d5e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d5e78: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d5e78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5e7c: 0xc04bd60  jal         func_12F580
    ctx->pc = 0x2D5E7Cu;
    SET_GPR_U32(ctx, 31, 0x2D5E84u);
    ctx->pc = 0x2D5E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5E7Cu;
            // 0x2d5e80: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F580u;
    if (runtime->hasFunction(0x12F580u)) {
        auto targetFn = runtime->lookupFunction(0x12F580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5E84u; }
        if (ctx->pc != 0x2D5E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPlaneNormal__FPfPfPfPf_0x12f580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5E84u; }
        if (ctx->pc != 0x2D5E84u) { return; }
    }
    ctx->pc = 0x2D5E84u;
label_2d5e84:
    // 0x2d5e84: 0x26640060  addiu       $a0, $s3, 0x60
    ctx->pc = 0x2d5e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x2d5e88: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2D5E88u;
    SET_GPR_U32(ctx, 31, 0x2D5E90u);
    ctx->pc = 0x2D5E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5E88u;
            // 0x2d5e8c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5E90u; }
        if (ctx->pc != 0x2D5E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5E90u; }
        if (ctx->pc != 0x2D5E90u) { return; }
    }
    ctx->pc = 0x2D5E90u;
label_2d5e90:
    // 0x2d5e90: 0x26640060  addiu       $a0, $s3, 0x60
    ctx->pc = 0x2d5e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x2d5e94: 0xc041bd6  jal         func_106F58
    ctx->pc = 0x2D5E94u;
    SET_GPR_U32(ctx, 31, 0x2D5E9Cu);
    ctx->pc = 0x2D5E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5E94u;
            // 0x2d5e98: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5E9Cu; }
        if (ctx->pc != 0x2D5E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5E9Cu; }
        if (ctx->pc != 0x2D5E9Cu) { return; }
    }
    ctx->pc = 0x2D5E9Cu;
label_2d5e9c:
    // 0x2d5e9c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d5e9cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d5ea0: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x2d5ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x2d5ea4: 0xe660006c  swc1        $f0, 0x6C($s3)
    ctx->pc = 0x2d5ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 108), bits); }
    // 0x2d5ea8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2d5ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d5eac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d5eacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5eb0: 0xc04bd60  jal         func_12F580
    ctx->pc = 0x2D5EB0u;
    SET_GPR_U32(ctx, 31, 0x2D5EB8u);
    ctx->pc = 0x2D5EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5EB0u;
            // 0x2d5eb4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F580u;
    if (runtime->hasFunction(0x12F580u)) {
        auto targetFn = runtime->lookupFunction(0x12F580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5EB8u; }
        if (ctx->pc != 0x2D5EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPlaneNormal__FPfPfPfPf_0x12f580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5EB8u; }
        if (ctx->pc != 0x2D5EB8u) { return; }
    }
    ctx->pc = 0x2D5EB8u;
label_2d5eb8:
    // 0x2d5eb8: 0x26640080  addiu       $a0, $s3, 0x80
    ctx->pc = 0x2d5eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x2d5ebc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2d5ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d5ec0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d5ec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5ec4: 0xc04bd60  jal         func_12F580
    ctx->pc = 0x2D5EC4u;
    SET_GPR_U32(ctx, 31, 0x2D5ECCu);
    ctx->pc = 0x2D5EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5EC4u;
            // 0x2d5ec8: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F580u;
    if (runtime->hasFunction(0x12F580u)) {
        auto targetFn = runtime->lookupFunction(0x12F580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5ECCu; }
        if (ctx->pc != 0x2D5ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPlaneNormal__FPfPfPfPf_0x12f580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5ECCu; }
        if (ctx->pc != 0x2D5ECCu) { return; }
    }
    ctx->pc = 0x2D5ECCu;
label_2d5ecc:
    // 0x2d5ecc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2d5eccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5ed0: 0x26640090  addiu       $a0, $s3, 0x90
    ctx->pc = 0x2d5ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x2d5ed4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2d5ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d5ed8: 0xc04bd60  jal         func_12F580
    ctx->pc = 0x2D5ED8u;
    SET_GPR_U32(ctx, 31, 0x2D5EE0u);
    ctx->pc = 0x2D5EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5ED8u;
            // 0x2d5edc: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F580u;
    if (runtime->hasFunction(0x12F580u)) {
        auto targetFn = runtime->lookupFunction(0x12F580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5EE0u; }
        if (ctx->pc != 0x2D5EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPlaneNormal__FPfPfPfPf_0x12f580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5EE0u; }
        if (ctx->pc != 0x2D5EE0u) { return; }
    }
    ctx->pc = 0x2D5EE0u;
label_2d5ee0:
    // 0x2d5ee0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2d5ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5ee4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2d5ee4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5ee8: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x2d5ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x2d5eec: 0xc04bd60  jal         func_12F580
    ctx->pc = 0x2D5EECu;
    SET_GPR_U32(ctx, 31, 0x2D5EF4u);
    ctx->pc = 0x2D5EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5EECu;
            // 0x2d5ef0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F580u;
    if (runtime->hasFunction(0x12F580u)) {
        auto targetFn = runtime->lookupFunction(0x12F580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5EF4u; }
        if (ctx->pc != 0x2D5EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPlaneNormal__FPfPfPfPf_0x12f580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5EF4u; }
        if (ctx->pc != 0x2D5EF4u) { return; }
    }
    ctx->pc = 0x2D5EF4u;
label_2d5ef4:
    // 0x2d5ef4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2D5EF4u;
    {
        const bool branch_taken_0x2d5ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5EF4u;
            // 0x2d5ef8: 0x26640070  addiu       $a0, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5ef4) {
            ctx->pc = 0x2D5F50u;
            goto label_2d5f50;
        }
    }
    ctx->pc = 0x2D5EFCu;
label_2d5efc:
    // 0x2d5efc: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x2d5efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x2d5f00: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2d5f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d5f04: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2d5f04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5f08: 0xc04bd60  jal         func_12F580
    ctx->pc = 0x2D5F08u;
    SET_GPR_U32(ctx, 31, 0x2D5F10u);
    ctx->pc = 0x2D5F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5F08u;
            // 0x2d5f0c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F580u;
    if (runtime->hasFunction(0x12F580u)) {
        auto targetFn = runtime->lookupFunction(0x12F580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5F10u; }
        if (ctx->pc != 0x2D5F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPlaneNormal__FPfPfPfPf_0x12f580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5F10u; }
        if (ctx->pc != 0x2D5F10u) { return; }
    }
    ctx->pc = 0x2D5F10u;
label_2d5f10:
    // 0x2d5f10: 0x26640080  addiu       $a0, $s3, 0x80
    ctx->pc = 0x2d5f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x2d5f14: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2d5f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d5f18: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2d5f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d5f1c: 0xc04bd60  jal         func_12F580
    ctx->pc = 0x2D5F1Cu;
    SET_GPR_U32(ctx, 31, 0x2D5F24u);
    ctx->pc = 0x2D5F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5F1Cu;
            // 0x2d5f20: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F580u;
    if (runtime->hasFunction(0x12F580u)) {
        auto targetFn = runtime->lookupFunction(0x12F580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5F24u; }
        if (ctx->pc != 0x2D5F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPlaneNormal__FPfPfPfPf_0x12f580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5F24u; }
        if (ctx->pc != 0x2D5F24u) { return; }
    }
    ctx->pc = 0x2D5F24u;
label_2d5f24:
    // 0x2d5f24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d5f24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5f28: 0x26640090  addiu       $a0, $s3, 0x90
    ctx->pc = 0x2d5f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x2d5f2c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2d5f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d5f30: 0xc04bd60  jal         func_12F580
    ctx->pc = 0x2D5F30u;
    SET_GPR_U32(ctx, 31, 0x2D5F38u);
    ctx->pc = 0x2D5F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5F30u;
            // 0x2d5f34: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F580u;
    if (runtime->hasFunction(0x12F580u)) {
        auto targetFn = runtime->lookupFunction(0x12F580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5F38u; }
        if (ctx->pc != 0x2D5F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPlaneNormal__FPfPfPfPf_0x12f580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5F38u; }
        if (ctx->pc != 0x2D5F38u) { return; }
    }
    ctx->pc = 0x2D5F38u;
label_2d5f38:
    // 0x2d5f38: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d5f38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5f3c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2d5f3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5f40: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x2d5f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x2d5f44: 0xc04bd60  jal         func_12F580
    ctx->pc = 0x2D5F44u;
    SET_GPR_U32(ctx, 31, 0x2D5F4Cu);
    ctx->pc = 0x2D5F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5F44u;
            // 0x2d5f48: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F580u;
    if (runtime->hasFunction(0x12F580u)) {
        auto targetFn = runtime->lookupFunction(0x12F580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5F4Cu; }
        if (ctx->pc != 0x2D5F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPlaneNormal__FPfPfPfPf_0x12f580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5F4Cu; }
        if (ctx->pc != 0x2D5F4Cu) { return; }
    }
    ctx->pc = 0x2D5F4Cu;
label_2d5f4c:
    // 0x2d5f4c: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x2d5f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_2d5f50:
    // 0x2d5f50: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2D5F50u;
    SET_GPR_U32(ctx, 31, 0x2D5F58u);
    ctx->pc = 0x2D5F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5F50u;
            // 0x2d5f54: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5F58u; }
        if (ctx->pc != 0x2D5F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5F58u; }
        if (ctx->pc != 0x2D5F58u) { return; }
    }
    ctx->pc = 0x2D5F58u;
label_2d5f58:
    // 0x2d5f58: 0x26640080  addiu       $a0, $s3, 0x80
    ctx->pc = 0x2d5f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x2d5f5c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2d5f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2d5f60: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2D5F60u;
    SET_GPR_U32(ctx, 31, 0x2D5F68u);
    ctx->pc = 0x2D5F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5F60u;
            // 0x2d5f64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5F68u; }
        if (ctx->pc != 0x2D5F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5F68u; }
        if (ctx->pc != 0x2D5F68u) { return; }
    }
    ctx->pc = 0x2D5F68u;
label_2d5f68:
    // 0x2d5f68: 0x26640090  addiu       $a0, $s3, 0x90
    ctx->pc = 0x2d5f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x2d5f6c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x2d5f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x2d5f70: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2D5F70u;
    SET_GPR_U32(ctx, 31, 0x2D5F78u);
    ctx->pc = 0x2D5F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5F70u;
            // 0x2d5f74: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5F78u; }
        if (ctx->pc != 0x2D5F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5F78u; }
        if (ctx->pc != 0x2D5F78u) { return; }
    }
    ctx->pc = 0x2D5F78u;
label_2d5f78:
    // 0x2d5f78: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x2d5f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x2d5f7c: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x2d5f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
    // 0x2d5f80: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2D5F80u;
    SET_GPR_U32(ctx, 31, 0x2D5F88u);
    ctx->pc = 0x2D5F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5F80u;
            // 0x2d5f84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5F88u; }
        if (ctx->pc != 0x2D5F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5F88u; }
        if (ctx->pc != 0x2D5F88u) { return; }
    }
    ctx->pc = 0x2D5F88u;
label_2d5f88:
    // 0x2d5f88: 0xae6000ac  sw          $zero, 0xAC($s3)
    ctx->pc = 0x2d5f88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 172), GPR_U32(ctx, 0));
label_2d5f8c:
    // 0x2d5f8c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d5f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d5f90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d5f90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d5f94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d5f94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d5f98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d5f98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5f9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d5f9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5FA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5FA0u;
            // 0x2d5fa4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D5FA8u;
}
