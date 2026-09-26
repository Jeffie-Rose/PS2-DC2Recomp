#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddExpWeaponParam__Ffii
// Address: 0x1e8ae0 - 0x1e8d5c
void AddExpWeaponParam__Ffii_0x1e8ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddExpWeaponParam__Ffii_0x1e8ae0");
#endif

    switch (ctx->pc) {
        case 0x1e8b0cu: goto label_1e8b0c;
        case 0x1e8b70u: goto label_1e8b70;
        case 0x1e8ba0u: goto label_1e8ba0;
        case 0x1e8bd8u: goto label_1e8bd8;
        case 0x1e8bf4u: goto label_1e8bf4;
        case 0x1e8c34u: goto label_1e8c34;
        case 0x1e8c50u: goto label_1e8c50;
        case 0x1e8c80u: goto label_1e8c80;
        case 0x1e8cb0u: goto label_1e8cb0;
        case 0x1e8ce8u: goto label_1e8ce8;
        case 0x1e8d04u: goto label_1e8d04;
        case 0x1e8d2cu: goto label_1e8d2c;
        case 0x1e8d3cu: goto label_1e8d3c;
        default: break;
    }

    ctx->pc = 0x1e8ae0u;

    // 0x1e8ae0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e8ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e8ae4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e8ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1e8ae8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e8ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1e8aec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e8aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e8af0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e8af0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8af4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e8af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e8af8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e8af8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8afc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e8afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e8b00: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1e8b00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e8b04: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x1E8B04u;
    SET_GPR_U32(ctx, 31, 0x1E8B0Cu);
    ctx->pc = 0x1E8B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8B04u;
            // 0x1e8b08: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8B0Cu; }
        if (ctx->pc != 0x1E8B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8B0Cu; }
        if (ctx->pc != 0x1E8B0Cu) { return; }
    }
    ctx->pc = 0x1E8B0Cu;
label_1e8b0c:
    // 0x1e8b0c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1e8b0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e8b10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e8b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8b14: 0x10930039  beq         $a0, $s3, . + 4 + (0x39 << 2)
    ctx->pc = 0x1E8B14u;
    {
        const bool branch_taken_0x1e8b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        ctx->pc = 0x1E8B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8B14u;
            // 0x1e8b18: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8b14) {
            ctx->pc = 0x1E8BFCu;
            goto label_1e8bfc;
        }
    }
    ctx->pc = 0x1E8B1Cu;
    // 0x1e8b1c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1e8b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e8b20: 0x1083002f  beq         $a0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1E8B20u;
    {
        const bool branch_taken_0x1e8b20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E8B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8B20u;
            // 0x1e8b24: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8b20) {
            ctx->pc = 0x1E8BE0u;
            goto label_1e8be0;
        }
    }
    ctx->pc = 0x1E8B28u;
    // 0x1e8b28: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1E8B28u;
    {
        const bool branch_taken_0x1e8b28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E8B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8B28u;
            // 0x1e8b2c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8b28) {
            ctx->pc = 0x1E8BC4u;
            goto label_1e8bc4;
        }
    }
    ctx->pc = 0x1E8B30u;
    // 0x1e8b30: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E8B30u;
    {
        const bool branch_taken_0x1e8b30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e8b30) {
            ctx->pc = 0x1E8B48u;
            goto label_1e8b48;
        }
    }
    ctx->pc = 0x1E8B38u;
    // 0x1e8b38: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8B38u;
    {
        const bool branch_taken_0x1e8b38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8b38) {
            ctx->pc = 0x1E8B48u;
            goto label_1e8b48;
        }
    }
    ctx->pc = 0x1E8B40u;
    // 0x1e8b40: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x1E8B40u;
    {
        const bool branch_taken_0x1e8b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8B40u;
            // 0x1e8b44: 0x8fa3006c  lw          $v1, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8b40) {
            ctx->pc = 0x1E8D0Cu;
            goto label_1e8d0c;
        }
    }
    ctx->pc = 0x1E8B48u;
label_1e8b48:
    // 0x1e8b48: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e8b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1e8b4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8b50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e8b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8b54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e8b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8b58: 0x27a6006c  addiu       $a2, $sp, 0x6C
    ctx->pc = 0x1e8b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1e8b5c: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x1e8b5cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x1e8b60: 0x0  nop
    ctx->pc = 0x1e8b60u;
    // NOP
    // 0x1e8b64: 0x0  nop
    ctx->pc = 0x1e8b64u;
    // NOP
    // 0x1e8b68: 0xc067f4c  jal         func_19FD30
    ctx->pc = 0x1E8B68u;
    SET_GPR_U32(ctx, 31, 0x1E8B70u);
    ctx->pc = 0x1E8B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8B68u;
            // 0x1e8b6c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FD30u;
    if (runtime->hasFunction(0x19FD30u)) {
        auto targetFn = runtime->lookupFunction(0x19FD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8B70u; }
        if (ctx->pc != 0x1E8B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddAbs__16CBattleCharaInfoFifPi_0x19fd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8B70u; }
        if (ctx->pc != 0x1E8B70u) { return; }
    }
    ctx->pc = 0x1E8B70u;
label_1e8b70:
    // 0x1e8b70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e8b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e8b74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e8b74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e8b78: 0x0  nop
    ctx->pc = 0x1e8b78u;
    // NOP
    // 0x1e8b7c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e8b7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8b80: 0x0  nop
    ctx->pc = 0x1e8b80u;
    // NOP
    // 0x1e8b84: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E8B84u;
    {
        const bool branch_taken_0x1e8b84 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8B84u;
            // 0x1e8b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8b84) {
            ctx->pc = 0x1E8B90u;
            goto label_1e8b90;
        }
    }
    ctx->pc = 0x1E8B8Cu;
    // 0x1e8b8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e8b8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8b90:
    // 0x1e8b90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e8b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8b94: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e8b94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e8b98: 0xc067f4c  jal         func_19FD30
    ctx->pc = 0x1E8B98u;
    SET_GPR_U32(ctx, 31, 0x1E8BA0u);
    ctx->pc = 0x1E8B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8B98u;
            // 0x1e8b9c: 0x27a6006c  addiu       $a2, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FD30u;
    if (runtime->hasFunction(0x19FD30u)) {
        auto targetFn = runtime->lookupFunction(0x19FD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8BA0u; }
        if (ctx->pc != 0x1E8BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddAbs__16CBattleCharaInfoFifPi_0x19fd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8BA0u; }
        if (ctx->pc != 0x1E8BA0u) { return; }
    }
    ctx->pc = 0x1E8BA0u;
label_1e8ba0:
    // 0x1e8ba0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1e8ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1e8ba4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e8ba4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e8ba8: 0x0  nop
    ctx->pc = 0x1e8ba8u;
    // NOP
    // 0x1e8bac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e8bacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8bb0: 0x0  nop
    ctx->pc = 0x1e8bb0u;
    // NOP
    // 0x1e8bb4: 0x45010054  bc1t        . + 4 + (0x54 << 2)
    ctx->pc = 0x1E8BB4u;
    {
        const bool branch_taken_0x1e8bb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8bb4) {
            ctx->pc = 0x1E8D08u;
            goto label_1e8d08;
        }
    }
    ctx->pc = 0x1E8BBCu;
    // 0x1e8bbc: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1E8BBCu;
    {
        const bool branch_taken_0x1e8bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8BBCu;
            // 0x1e8bc0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8bbc) {
            ctx->pc = 0x1E8D08u;
            goto label_1e8d08;
        }
    }
    ctx->pc = 0x1E8BC4u;
label_1e8bc4:
    // 0x1e8bc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8bc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e8bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8bcc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e8bccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e8bd0: 0xc067f4c  jal         func_19FD30
    ctx->pc = 0x1E8BD0u;
    SET_GPR_U32(ctx, 31, 0x1E8BD8u);
    ctx->pc = 0x1E8BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8BD0u;
            // 0x1e8bd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FD30u;
    if (runtime->hasFunction(0x19FD30u)) {
        auto targetFn = runtime->lookupFunction(0x19FD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8BD8u; }
        if (ctx->pc != 0x1E8BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddAbs__16CBattleCharaInfoFifPi_0x19fd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8BD8u; }
        if (ctx->pc != 0x1E8BD8u) { return; }
    }
    ctx->pc = 0x1E8BD8u;
label_1e8bd8:
    // 0x1e8bd8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1E8BD8u;
    {
        const bool branch_taken_0x1e8bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8bd8) {
            ctx->pc = 0x1E8D08u;
            goto label_1e8d08;
        }
    }
    ctx->pc = 0x1E8BE0u;
label_1e8be0:
    // 0x1e8be0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8be4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e8be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8be8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e8be8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e8bec: 0xc067f4c  jal         func_19FD30
    ctx->pc = 0x1E8BECu;
    SET_GPR_U32(ctx, 31, 0x1E8BF4u);
    ctx->pc = 0x1E8BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8BECu;
            // 0x1e8bf0: 0x27a6006c  addiu       $a2, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FD30u;
    if (runtime->hasFunction(0x19FD30u)) {
        auto targetFn = runtime->lookupFunction(0x19FD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8BF4u; }
        if (ctx->pc != 0x1E8BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddAbs__16CBattleCharaInfoFifPi_0x19fd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8BF4u; }
        if (ctx->pc != 0x1E8BF4u) { return; }
    }
    ctx->pc = 0x1E8BF4u;
label_1e8bf4:
    // 0x1e8bf4: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1E8BF4u;
    {
        const bool branch_taken_0x1e8bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8BF4u;
            // 0x1e8bf8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8bf4) {
            ctx->pc = 0x1E8D08u;
            goto label_1e8d08;
        }
    }
    ctx->pc = 0x1E8BFCu;
label_1e8bfc:
    // 0x1e8bfc: 0x2e410009  sltiu       $at, $s2, 0x9
    ctx->pc = 0x1e8bfcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1e8c00: 0x10200041  beqz        $at, . + 4 + (0x41 << 2)
    ctx->pc = 0x1E8C00u;
    {
        const bool branch_taken_0x1e8c00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8C00u;
            // 0x1e8c04: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8c00) {
            ctx->pc = 0x1E8D08u;
            goto label_1e8d08;
        }
    }
    ctx->pc = 0x1E8C08u;
    // 0x1e8c08: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1e8c08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1e8c0c: 0x24848280  addiu       $a0, $a0, -0x7D80
    ctx->pc = 0x1e8c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935168));
    // 0x1e8c10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e8c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e8c14: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e8c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e8c18: 0x600008  jr          $v1
    ctx->pc = 0x1E8C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E8C20u: goto label_1e8c20;
            case 0x1E8C3Cu: goto label_1e8c3c;
            case 0x1E8C58u: goto label_1e8c58;
            case 0x1E8CD4u: goto label_1e8cd4;
            case 0x1E8CF0u: goto label_1e8cf0;
            case 0x1E8D08u: goto label_1e8d08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E8C20u;
label_1e8c20:
    // 0x1e8c20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8c24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e8c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8c28: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e8c28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e8c2c: 0xc067f4c  jal         func_19FD30
    ctx->pc = 0x1E8C2Cu;
    SET_GPR_U32(ctx, 31, 0x1E8C34u);
    ctx->pc = 0x1E8C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8C2Cu;
            // 0x1e8c30: 0x27a6006c  addiu       $a2, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FD30u;
    if (runtime->hasFunction(0x19FD30u)) {
        auto targetFn = runtime->lookupFunction(0x19FD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8C34u; }
        if (ctx->pc != 0x1E8C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddAbs__16CBattleCharaInfoFifPi_0x19fd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8C34u; }
        if (ctx->pc != 0x1E8C34u) { return; }
    }
    ctx->pc = 0x1E8C34u;
label_1e8c34:
    // 0x1e8c34: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1E8C34u;
    {
        const bool branch_taken_0x1e8c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8C34u;
            // 0x1e8c38: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8c34) {
            ctx->pc = 0x1E8D08u;
            goto label_1e8d08;
        }
    }
    ctx->pc = 0x1E8C3Cu;
label_1e8c3c:
    // 0x1e8c3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8c40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e8c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8c44: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e8c44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e8c48: 0xc067f4c  jal         func_19FD30
    ctx->pc = 0x1E8C48u;
    SET_GPR_U32(ctx, 31, 0x1E8C50u);
    ctx->pc = 0x1E8C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8C48u;
            // 0x1e8c4c: 0x27a6006c  addiu       $a2, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FD30u;
    if (runtime->hasFunction(0x19FD30u)) {
        auto targetFn = runtime->lookupFunction(0x19FD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8C50u; }
        if (ctx->pc != 0x1E8C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddAbs__16CBattleCharaInfoFifPi_0x19fd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8C50u; }
        if (ctx->pc != 0x1E8C50u) { return; }
    }
    ctx->pc = 0x1E8C50u;
label_1e8c50:
    // 0x1e8c50: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1E8C50u;
    {
        const bool branch_taken_0x1e8c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8C50u;
            // 0x1e8c54: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8c50) {
            ctx->pc = 0x1E8D08u;
            goto label_1e8d08;
        }
    }
    ctx->pc = 0x1E8C58u;
label_1e8c58:
    // 0x1e8c58: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e8c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1e8c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8c60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e8c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8c64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e8c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8c68: 0x27a6006c  addiu       $a2, $sp, 0x6C
    ctx->pc = 0x1e8c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1e8c6c: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x1e8c6cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x1e8c70: 0x0  nop
    ctx->pc = 0x1e8c70u;
    // NOP
    // 0x1e8c74: 0x0  nop
    ctx->pc = 0x1e8c74u;
    // NOP
    // 0x1e8c78: 0xc067f4c  jal         func_19FD30
    ctx->pc = 0x1E8C78u;
    SET_GPR_U32(ctx, 31, 0x1E8C80u);
    ctx->pc = 0x1E8C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8C78u;
            // 0x1e8c7c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FD30u;
    if (runtime->hasFunction(0x19FD30u)) {
        auto targetFn = runtime->lookupFunction(0x19FD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8C80u; }
        if (ctx->pc != 0x1E8C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddAbs__16CBattleCharaInfoFifPi_0x19fd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8C80u; }
        if (ctx->pc != 0x1E8C80u) { return; }
    }
    ctx->pc = 0x1E8C80u;
label_1e8c80:
    // 0x1e8c80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e8c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e8c84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e8c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e8c88: 0x0  nop
    ctx->pc = 0x1e8c88u;
    // NOP
    // 0x1e8c8c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e8c8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8c90: 0x0  nop
    ctx->pc = 0x1e8c90u;
    // NOP
    // 0x1e8c94: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E8C94u;
    {
        const bool branch_taken_0x1e8c94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8C94u;
            // 0x1e8c98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8c94) {
            ctx->pc = 0x1E8CA0u;
            goto label_1e8ca0;
        }
    }
    ctx->pc = 0x1E8C9Cu;
    // 0x1e8c9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e8c9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8ca0:
    // 0x1e8ca0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e8ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8ca4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e8ca4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e8ca8: 0xc067f4c  jal         func_19FD30
    ctx->pc = 0x1E8CA8u;
    SET_GPR_U32(ctx, 31, 0x1E8CB0u);
    ctx->pc = 0x1E8CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8CA8u;
            // 0x1e8cac: 0x27a6006c  addiu       $a2, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FD30u;
    if (runtime->hasFunction(0x19FD30u)) {
        auto targetFn = runtime->lookupFunction(0x19FD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8CB0u; }
        if (ctx->pc != 0x1E8CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddAbs__16CBattleCharaInfoFifPi_0x19fd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8CB0u; }
        if (ctx->pc != 0x1E8CB0u) { return; }
    }
    ctx->pc = 0x1E8CB0u;
label_1e8cb0:
    // 0x1e8cb0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1e8cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1e8cb4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e8cb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e8cb8: 0x0  nop
    ctx->pc = 0x1e8cb8u;
    // NOP
    // 0x1e8cbc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e8cbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8cc0: 0x0  nop
    ctx->pc = 0x1e8cc0u;
    // NOP
    // 0x1e8cc4: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x1E8CC4u;
    {
        const bool branch_taken_0x1e8cc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8cc4) {
            ctx->pc = 0x1E8D08u;
            goto label_1e8d08;
        }
    }
    ctx->pc = 0x1E8CCCu;
    // 0x1e8ccc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E8CCCu;
    {
        const bool branch_taken_0x1e8ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8CCCu;
            // 0x1e8cd0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8ccc) {
            ctx->pc = 0x1E8D08u;
            goto label_1e8d08;
        }
    }
    ctx->pc = 0x1E8CD4u;
label_1e8cd4:
    // 0x1e8cd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8cd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e8cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8cdc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e8cdcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e8ce0: 0xc067f4c  jal         func_19FD30
    ctx->pc = 0x1E8CE0u;
    SET_GPR_U32(ctx, 31, 0x1E8CE8u);
    ctx->pc = 0x1E8CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8CE0u;
            // 0x1e8ce4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FD30u;
    if (runtime->hasFunction(0x19FD30u)) {
        auto targetFn = runtime->lookupFunction(0x19FD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8CE8u; }
        if (ctx->pc != 0x1E8CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddAbs__16CBattleCharaInfoFifPi_0x19fd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8CE8u; }
        if (ctx->pc != 0x1E8CE8u) { return; }
    }
    ctx->pc = 0x1E8CE8u;
label_1e8ce8:
    // 0x1e8ce8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E8CE8u;
    {
        const bool branch_taken_0x1e8ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8ce8) {
            ctx->pc = 0x1E8D08u;
            goto label_1e8d08;
        }
    }
    ctx->pc = 0x1E8CF0u;
label_1e8cf0:
    // 0x1e8cf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8cf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e8cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8cf8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e8cf8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e8cfc: 0xc067f4c  jal         func_19FD30
    ctx->pc = 0x1E8CFCu;
    SET_GPR_U32(ctx, 31, 0x1E8D04u);
    ctx->pc = 0x1E8D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8CFCu;
            // 0x1e8d00: 0x27a6006c  addiu       $a2, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FD30u;
    if (runtime->hasFunction(0x19FD30u)) {
        auto targetFn = runtime->lookupFunction(0x19FD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D04u; }
        if (ctx->pc != 0x1E8D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddAbs__16CBattleCharaInfoFifPi_0x19fd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D04u; }
        if (ctx->pc != 0x1E8D04u) { return; }
    }
    ctx->pc = 0x1E8D04u;
label_1e8d04:
    // 0x1e8d04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e8d04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8d08:
    // 0x1e8d08: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1e8d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_1e8d0c:
    // 0x1e8d0c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1E8D0Cu;
    {
        const bool branch_taken_0x1e8d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8D0Cu;
            // 0x1e8d10: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8d0c) {
            ctx->pc = 0x1E8D3Cu;
            goto label_1e8d3c;
        }
    }
    ctx->pc = 0x1E8D14u;
    // 0x1e8d14: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1e8d14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d18: 0x24840370  addiu       $a0, $a0, 0x370
    ctx->pc = 0x1e8d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 880));
    // 0x1e8d1c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1e8d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1e8d20: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1e8d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x1e8d24: 0xc0724cc  jal         func_1C9330
    ctx->pc = 0x1E8D24u;
    SET_GPR_U32(ctx, 31, 0x1E8D2Cu);
    ctx->pc = 0x1E8D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8D24u;
            // 0x1e8d28: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9330u;
    if (runtime->hasFunction(0x1C9330u)) {
        auto targetFn = runtime->lookupFunction(0x1C9330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D2Cu; }
        if (ctx->pc != 0x1E8D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetLevelUpInfo__12CLevelupInfoFiiii_0x1c9330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D2Cu; }
        if (ctx->pc != 0x1E8D2Cu) { return; }
    }
    ctx->pc = 0x1E8D2Cu;
label_1e8d2c:
    // 0x1e8d2c: 0x8f848ac4  lw          $a0, -0x753C($gp)
    ctx->pc = 0x1e8d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937284)));
    // 0x1e8d30: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1e8d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1e8d34: 0xc063818  jal         func_18E060
    ctx->pc = 0x1E8D34u;
    SET_GPR_U32(ctx, 31, 0x1E8D3Cu);
    ctx->pc = 0x1E8D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8D34u;
            // 0x1e8d38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D3Cu; }
        if (ctx->pc != 0x1E8D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D3Cu; }
        if (ctx->pc != 0x1E8D3Cu) { return; }
    }
    ctx->pc = 0x1E8D3Cu;
label_1e8d3c:
    // 0x1e8d3c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e8d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e8d40: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e8d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e8d44: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e8d44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8d48: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e8d48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8d4c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e8d4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8d50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e8d50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8d54: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8D54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8D54u;
            // 0x1e8d58: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E8D5Cu;
}
