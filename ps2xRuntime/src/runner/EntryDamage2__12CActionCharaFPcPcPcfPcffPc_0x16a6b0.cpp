#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EntryDamage2__12CActionCharaFPcPcPcfPcffPc
// Address: 0x16a6b0 - 0x16a844
void EntryDamage2__12CActionCharaFPcPcPcfPcffPc_0x16a6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EntryDamage2__12CActionCharaFPcPcPcfPcffPc_0x16a6b0");
#endif

    switch (ctx->pc) {
        case 0x16a728u: goto label_16a728;
        case 0x16a73cu: goto label_16a73c;
        case 0x16a748u: goto label_16a748;
        case 0x16a768u: goto label_16a768;
        case 0x16a780u: goto label_16a780;
        default: break;
    }

    ctx->pc = 0x16a6b0u;

    // 0x16a6b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x16a6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x16a6b4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x16a6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x16a6b8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x16a6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x16a6bc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x16a6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x16a6c0: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x16a6c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a6c4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x16a6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x16a6c8: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x16a6c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a6cc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x16a6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x16a6d0: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x16a6d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a6d4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x16a6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x16a6d8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x16a6d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a6dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16a6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16a6e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16a6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16a6e4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x16a6e4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x16a6e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16a6e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a6ec: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x16a6ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x16a6f0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x16a6f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x16a6f4: 0x80820bd8  lb          $v0, 0xBD8($a0)
    ctx->pc = 0x16a6f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3032)));
    // 0x16a6f8: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x16a6f8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x16a6fc: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x16a6fcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x16a700: 0x2842000b  slti        $v0, $v0, 0xB
    ctx->pc = 0x16a700u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x16a704: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A704u;
    {
        const bool branch_taken_0x16a704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A704u;
            // 0x16a708: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a704) {
            ctx->pc = 0x16A714u;
            goto label_16a714;
        }
    }
    ctx->pc = 0x16A70Cu;
    // 0x16a70c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x16A70Cu;
    {
        const bool branch_taken_0x16a70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A70Cu;
            // 0x16a710: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a70c) {
            ctx->pc = 0x16A810u;
            goto label_16a810;
        }
    }
    ctx->pc = 0x16A714u;
label_16a714:
    // 0x16a714: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16a714u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a718: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A718u;
    {
        const bool branch_taken_0x16a718 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A718u;
            // 0x16a71c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a718) {
            ctx->pc = 0x16A72Cu;
            goto label_16a72c;
        }
    }
    ctx->pc = 0x16A720u;
    // 0x16a720: 0xc05af3c  jal         func_16BCF0
    ctx->pc = 0x16A720u;
    SET_GPR_U32(ctx, 31, 0x16A728u);
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A728u; }
        if (ctx->pc != 0x16A728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A728u; }
        if (ctx->pc != 0x16A728u) { return; }
    }
    ctx->pc = 0x16A728u;
label_16a728:
    // 0x16a728: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16a728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16a72c:
    // 0x16a72c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A72Cu;
    {
        const bool branch_taken_0x16a72c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A72Cu;
            // 0x16a730: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a72c) {
            ctx->pc = 0x16A740u;
            goto label_16a740;
        }
    }
    ctx->pc = 0x16A734u;
    // 0x16a734: 0xc05af3c  jal         func_16BCF0
    ctx->pc = 0x16A734u;
    SET_GPR_U32(ctx, 31, 0x16A73Cu);
    ctx->pc = 0x16A738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A734u;
            // 0x16a738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A73Cu; }
        if (ctx->pc != 0x16A73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A73Cu; }
        if (ctx->pc != 0x16A73Cu) { return; }
    }
    ctx->pc = 0x16A73Cu;
label_16a73c:
    // 0x16a73c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16a73cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16a740:
    // 0x16a740: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16a740u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a744: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x16a744u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a748:
    // 0x16a748: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x16a748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x16a74c: 0x80420a20  lb          $v0, 0xA20($v0)
    ctx->pc = 0x16a74cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2592)));
    // 0x16a750: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x16A750u;
    {
        const bool branch_taken_0x16a750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A750u;
            // 0x16a754: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a750) {
            ctx->pc = 0x16A7FCu;
            goto label_16a7fc;
        }
    }
    ctx->pc = 0x16A758u;
    // 0x16a758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a75c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x16a75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a760: 0xc05ad8c  jal         func_16B630
    ctx->pc = 0x16A760u;
    SET_GPR_U32(ctx, 31, 0x16A768u);
    ctx->pc = 0x16A764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A760u;
            // 0x16a764: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B630u;
    if (runtime->hasFunction(0x16B630u)) {
        auto targetFn = runtime->lookupFunction(0x16B630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A768u; }
        if (ctx->pc != 0x16A768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWaitToFrame__12CActionCharaFPcfPc_0x16b630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A768u; }
        if (ctx->pc != 0x16A768u) { return; }
    }
    ctx->pc = 0x16A768u;
label_16a768:
    // 0x16a768: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16a768u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x16a76c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x16a76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a770: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16a770u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x16a774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a778: 0xc05ad8c  jal         func_16B630
    ctx->pc = 0x16A778u;
    SET_GPR_U32(ctx, 31, 0x16A780u);
    ctx->pc = 0x16A77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A778u;
            // 0x16a77c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B630u;
    if (runtime->hasFunction(0x16B630u)) {
        auto targetFn = runtime->lookupFunction(0x16B630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A780u; }
        if (ctx->pc != 0x16A780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWaitToFrame__12CActionCharaFPcfPc_0x16b630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A780u; }
        if (ctx->pc != 0x16A780u) { return; }
    }
    ctx->pc = 0x16A780u;
label_16a780:
    // 0x16a780: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16a780u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16a784: 0x0  nop
    ctx->pc = 0x16a784u;
    // NOP
    // 0x16a788: 0x46140832  c.eq.s      $f1, $f20
    ctx->pc = 0x16a788u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a78c: 0x0  nop
    ctx->pc = 0x16a78cu;
    // NOP
    // 0x16a790: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x16A790u;
    {
        const bool branch_taken_0x16a790 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16A794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A790u;
            // 0x16a794: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a790) {
            ctx->pc = 0x16A7B0u;
            goto label_16a7b0;
        }
    }
    ctx->pc = 0x16A798u;
    // 0x16a798: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x16a798u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a79c: 0x0  nop
    ctx->pc = 0x16a79cu;
    // NOP
    // 0x16a7a0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x16A7A0u;
    {
        const bool branch_taken_0x16a7a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16A7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A7A0u;
            // 0x16a7a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a7a0) {
            ctx->pc = 0x16A7B4u;
            goto label_16a7b4;
        }
    }
    ctx->pc = 0x16A7A8u;
    // 0x16a7a8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x16A7A8u;
    {
        const bool branch_taken_0x16a7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A7A8u;
            // 0x16a7ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a7a8) {
            ctx->pc = 0x16A810u;
            goto label_16a810;
        }
    }
    ctx->pc = 0x16A7B0u;
label_16a7b0:
    // 0x16a7b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16a7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16a7b4:
    // 0x16a7b4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x16a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x16a7b8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16a7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16a7bc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x16a7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x16a7c0: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x16a7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x16a7c4: 0xa0850a20  sb          $a1, 0xA20($a0)
    ctx->pc = 0x16a7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2592), (uint8_t)GPR_U32(ctx, 5));
    // 0x16a7c8: 0x24820a20  addiu       $v0, $a0, 0xA20
    ctx->pc = 0x16a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2592));
    // 0x16a7cc: 0xac910a28  sw          $s1, 0xA28($a0)
    ctx->pc = 0x16a7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2600), GPR_U32(ctx, 17));
    // 0x16a7d0: 0xac920a2c  sw          $s2, 0xA2C($a0)
    ctx->pc = 0x16a7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2604), GPR_U32(ctx, 18));
    // 0x16a7d4: 0xac960a40  sw          $s6, 0xA40($a0)
    ctx->pc = 0x16a7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2624), GPR_U32(ctx, 22));
    // 0x16a7d8: 0xe4940a38  swc1        $f20, 0xA38($a0)
    ctx->pc = 0x16a7d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2616), bits); }
    // 0x16a7dc: 0xe4800a3c  swc1        $f0, 0xA3C($a0)
    ctx->pc = 0x16a7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2620), bits); }
    // 0x16a7e0: 0xac940a24  sw          $s4, 0xA24($a0)
    ctx->pc = 0x16a7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2596), GPR_U32(ctx, 20));
    // 0x16a7e4: 0xe4960a30  swc1        $f22, 0xA30($a0)
    ctx->pc = 0x16a7e4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2608), bits); }
    // 0x16a7e8: 0xac830a34  sw          $v1, 0xA34($a0)
    ctx->pc = 0x16a7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2612), GPR_U32(ctx, 3));
    // 0x16a7ec: 0x82030bd8  lb          $v1, 0xBD8($s0)
    ctx->pc = 0x16a7ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3032)));
    // 0x16a7f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16a7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16a7f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16A7F4u;
    {
        const bool branch_taken_0x16a7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A7F4u;
            // 0x16a7f8: 0xa2030bd8  sb          $v1, 0xBD8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3032), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a7f4) {
            ctx->pc = 0x16A810u;
            goto label_16a810;
        }
    }
    ctx->pc = 0x16A7FCu;
label_16a7fc:
    // 0x16a7fc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x16a7fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x16a800: 0x2a62000b  slti        $v0, $s3, 0xB
    ctx->pc = 0x16a800u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x16a804: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x16A804u;
    {
        const bool branch_taken_0x16a804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A804u;
            // 0x16a808: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a804) {
            ctx->pc = 0x16A748u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16a748;
        }
    }
    ctx->pc = 0x16A80Cu;
    // 0x16a80c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16a80cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a810:
    // 0x16a810: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x16a810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16a814: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x16a814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x16a818: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x16a818u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16a81c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x16a81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16a820: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x16a820u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16a824: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16a824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16a828: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x16a828u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16a82c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x16a82cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16a830: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x16a830u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16a834: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16a834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a838: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16a838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a83c: 0x3e00008  jr          $ra
    ctx->pc = 0x16A83Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A83Cu;
            // 0x16a840: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16A844u;
}
