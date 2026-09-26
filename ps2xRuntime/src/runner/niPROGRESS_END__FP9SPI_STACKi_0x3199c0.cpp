#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: niPROGRESS_END__FP9SPI_STACKi
// Address: 0x3199c0 - 0x319af4
void niPROGRESS_END__FP9SPI_STACKi_0x3199c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("niPROGRESS_END__FP9SPI_STACKi_0x3199c0");
#endif

    switch (ctx->pc) {
        case 0x319a18u: goto label_319a18;
        case 0x319a30u: goto label_319a30;
        case 0x319a6cu: goto label_319a6c;
        default: break;
    }

    ctx->pc = 0x3199c0u;

    // 0x3199c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3199c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3199c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3199c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3199c8: 0x8f82a348  lw          $v0, -0x5CB8($gp)
    ctx->pc = 0x3199c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
    // 0x3199cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3199CCu;
    {
        const bool branch_taken_0x3199cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3199D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3199CCu;
            // 0x3199d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3199cc) {
            ctx->pc = 0x3199DCu;
            goto label_3199dc;
        }
    }
    ctx->pc = 0x3199D4u;
    // 0x3199d4: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x3199D4u;
    {
        const bool branch_taken_0x3199d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3199D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3199D4u;
            // 0x3199d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3199d4) {
            ctx->pc = 0x319AECu;
            goto label_319aec;
        }
    }
    ctx->pc = 0x3199DCu;
label_3199dc:
    // 0x3199dc: 0x8f83a34c  lw          $v1, -0x5CB4($gp)
    ctx->pc = 0x3199dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943564)));
    // 0x3199e0: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3199E0u;
    {
        const bool branch_taken_0x3199e0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x3199E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3199E0u;
            // 0x3199e4: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3199e0) {
            ctx->pc = 0x3199F0u;
            goto label_3199f0;
        }
    }
    ctx->pc = 0x3199E8u;
    // 0x3199e8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x3199E8u;
    {
        const bool branch_taken_0x3199e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3199ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3199E8u;
            // 0x3199ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3199e8) {
            ctx->pc = 0x319AE8u;
            goto label_319ae8;
        }
    }
    ctx->pc = 0x3199F0u;
label_3199f0:
    // 0x3199f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3199f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3199f4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x3199f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3199f8: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x3199f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x3199fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3199FCu;
    {
        const bool branch_taken_0x3199fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3199FCu;
            // 0x319a00: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3199fc) {
            ctx->pc = 0x319A0Cu;
            goto label_319a0c;
        }
    }
    ctx->pc = 0x319A04u;
    // 0x319a04: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x319a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x319a08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x319a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_319a0c:
    // 0x319a0c: 0x8f84a344  lw          $a0, -0x5CBC($gp)
    ctx->pc = 0x319a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943556)));
    // 0x319a10: 0xc04e748  jal         func_139D20
    ctx->pc = 0x319A10u;
    SET_GPR_U32(ctx, 31, 0x319A18u);
    ctx->pc = 0x319A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319A10u;
            // 0x319a14: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319A18u; }
        if (ctx->pc != 0x319A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319A18u; }
        if (ctx->pc != 0x319A18u) { return; }
    }
    ctx->pc = 0x319A18u;
label_319a18:
    // 0x319a18: 0x8f83a34c  lw          $v1, -0x5CB4($gp)
    ctx->pc = 0x319a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943564)));
    // 0x319a1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x319a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319a20: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x319a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x319a24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x319a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x319a28: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x319A28u;
    SET_GPR_U32(ctx, 31, 0x319A30u);
    ctx->pc = 0x319A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319A28u;
            // 0x319a2c: 0x220c0  sll         $a0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319A30u; }
        if (ctx->pc != 0x319A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319A30u; }
        if (ctx->pc != 0x319A30u) { return; }
    }
    ctx->pc = 0x319A30u;
label_319a30:
    // 0x319a30: 0x8f83a348  lw          $v1, -0x5CB8($gp)
    ctx->pc = 0x319a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
    // 0x319a34: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x319a34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x319a38: 0x8f82a348  lw          $v0, -0x5CB8($gp)
    ctx->pc = 0x319a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
    // 0x319a3c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x319a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x319a40: 0x8f83a348  lw          $v1, -0x5CB8($gp)
    ctx->pc = 0x319a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
    // 0x319a44: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x319a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x319a48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x319A48u;
    {
        const bool branch_taken_0x319a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319A48u;
            // 0x319a4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319a48) {
            ctx->pc = 0x319A58u;
            goto label_319a58;
        }
    }
    ctx->pc = 0x319A50u;
    // 0x319a50: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x319A50u;
    {
        const bool branch_taken_0x319a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x319a50) {
            ctx->pc = 0x319AE8u;
            goto label_319ae8;
        }
    }
    ctx->pc = 0x319A58u;
label_319a58:
    // 0x319a58: 0x8f82a34c  lw          $v0, -0x5CB4($gp)
    ctx->pc = 0x319a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943564)));
    // 0x319a5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x319a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319a60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x319a60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319a64: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x319A64u;
    {
        const bool branch_taken_0x319a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319A64u;
            // 0x319a68: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319a64) {
            ctx->pc = 0x319AD8u;
            goto label_319ad8;
        }
    }
    ctx->pc = 0x319A6Cu;
label_319a6c:
    // 0x319a6c: 0x8f83a35c  lw          $v1, -0x5CA4($gp)
    ctx->pc = 0x319a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943580)));
    // 0x319a70: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x319a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x319a74: 0x8f82a348  lw          $v0, -0x5CB8($gp)
    ctx->pc = 0x319a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
    // 0x319a78: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x319a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x319a7c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x319a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x319a80: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x319a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x319a84: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x319a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x319a88: 0x24c60028  addiu       $a2, $a2, 0x28
    ctx->pc = 0x319a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
    // 0x319a8c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x319a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x319a90: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x319a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x319a94: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x319a94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x319a98: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x319a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x319a9c: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x319a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x319aa0: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x319aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319aa4: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x319aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x319aa8: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x319aa8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x319aac: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x319aacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x319ab0: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x319ab0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x319ab4: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x319ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x319ab8: 0xc4a30018  lwc1        $f3, 0x18($a1)
    ctx->pc = 0x319ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x319abc: 0xc4a2001c  lwc1        $f2, 0x1C($a1)
    ctx->pc = 0x319abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x319ac0: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x319ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319ac4: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x319ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x319ac8: 0xe4630018  swc1        $f3, 0x18($v1)
    ctx->pc = 0x319ac8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x319acc: 0xe462001c  swc1        $f2, 0x1C($v1)
    ctx->pc = 0x319accu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x319ad0: 0xe4610020  swc1        $f1, 0x20($v1)
    ctx->pc = 0x319ad0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x319ad4: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x319ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_319ad8:
    // 0x319ad8: 0x8f82a34c  lw          $v0, -0x5CB4($gp)
    ctx->pc = 0x319ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943564)));
    // 0x319adc: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x319adcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x319ae0: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x319AE0u;
    {
        const bool branch_taken_0x319ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319AE0u;
            // 0x319ae4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319ae0) {
            ctx->pc = 0x319A6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_319a6c;
        }
    }
    ctx->pc = 0x319AE8u;
label_319ae8:
    // 0x319ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x319ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_319aec:
    // 0x319aec: 0x3e00008  jr          $ra
    ctx->pc = 0x319AECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319AECu;
            // 0x319af0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x319AF4u;
}
