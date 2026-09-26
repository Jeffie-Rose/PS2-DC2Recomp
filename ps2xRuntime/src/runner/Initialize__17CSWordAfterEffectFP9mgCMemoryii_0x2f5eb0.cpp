#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__17CSWordAfterEffectFP9mgCMemoryii
// Address: 0x2f5eb0 - 0x2f5ff0
void Initialize__17CSWordAfterEffectFP9mgCMemoryii_0x2f5eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__17CSWordAfterEffectFP9mgCMemoryii_0x2f5eb0");
#endif

    switch (ctx->pc) {
        case 0x2f5f1cu: goto label_2f5f1c;
        case 0x2f5f2cu: goto label_2f5f2c;
        case 0x2f5f50u: goto label_2f5f50;
        case 0x2f5f60u: goto label_2f5f60;
        default: break;
    }

    ctx->pc = 0x2f5eb0u;

    // 0x2f5eb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f5eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f5eb4: 0x6113c  dsll32      $v0, $a2, 4
    ctx->pc = 0x2f5eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 4));
    // 0x2f5eb8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f5eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2f5ebc: 0x2113f  dsra32      $v0, $v0, 4
    ctx->pc = 0x2f5ebcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 4));
    // 0x2f5ec0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2f5ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2f5ec4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f5ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2f5ec8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f5ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f5ecc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2f5eccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5ed0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f5ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f5ed4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f5ed4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5ed8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f5ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f5edc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2f5edcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5ee0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2f5ee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5ee4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f5ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f5ee8: 0x26230002  addiu       $v1, $s1, 0x2
    ctx->pc = 0x2f5ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x2f5eec: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2f5eecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2f5ef0: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x2f5ef0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2f5ef4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2f5ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2f5ef8: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x2f5ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2f5efc: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5EFCu;
    {
        const bool branch_taken_0x2f5efc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2F5F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5EFCu;
            // 0x2f5f00: 0x38100  sll         $s0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5efc) {
            ctx->pc = 0x2F5F0Cu;
            goto label_2f5f0c;
        }
    }
    ctx->pc = 0x2F5F04u;
    // 0x2f5f04: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x2f5f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2f5f08: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2f5f08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_2f5f0c:
    // 0x2f5f0c: 0x24550001  addiu       $s5, $v0, 0x1
    ctx->pc = 0x2f5f0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f5f10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f5f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5f14: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2F5F14u;
    SET_GPR_U32(ctx, 31, 0x2F5F1Cu);
    ctx->pc = 0x2F5F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5F14u;
            // 0x2f5f18: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5F1Cu; }
        if (ctx->pc != 0x2F5F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5F1Cu; }
        if (ctx->pc != 0x2F5F1Cu) { return; }
    }
    ctx->pc = 0x2F5F1Cu;
label_2f5f1c:
    // 0x2f5f1c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2f5f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5f20: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x2f5f20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x2f5f24: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2F5F24u;
    SET_GPR_U32(ctx, 31, 0x2F5F2Cu);
    ctx->pc = 0x2F5F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5F24u;
            // 0x2f5f28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5F2Cu; }
        if (ctx->pc != 0x2F5F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5F2Cu; }
        if (ctx->pc != 0x2F5F2Cu) { return; }
    }
    ctx->pc = 0x2F5F2Cu;
label_2f5f2c:
    // 0x2f5f2c: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x2f5f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x2f5f30: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5F30u;
    {
        const bool branch_taken_0x2f5f30 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2F5F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5F30u;
            // 0x2f5f34: 0x101103  sra         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5f30) {
            ctx->pc = 0x2F5F40u;
            goto label_2f5f40;
        }
    }
    ctx->pc = 0x2F5F38u;
    // 0x2f5f38: 0x2602000f  addiu       $v0, $s0, 0xF
    ctx->pc = 0x2f5f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x2f5f3c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2f5f3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_2f5f40:
    // 0x2f5f40: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x2f5f40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f5f44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f5f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5f48: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2F5F48u;
    SET_GPR_U32(ctx, 31, 0x2F5F50u);
    ctx->pc = 0x2F5F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5F48u;
            // 0x2f5f4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5F50u; }
        if (ctx->pc != 0x2F5F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5F50u; }
        if (ctx->pc != 0x2F5F50u) { return; }
    }
    ctx->pc = 0x2F5F50u;
label_2f5f50:
    // 0x2f5f50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f5f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5f54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f5f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5f58: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2F5F58u;
    SET_GPR_U32(ctx, 31, 0x2F5F60u);
    ctx->pc = 0x2F5F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5F58u;
            // 0x2f5f5c: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5F60u; }
        if (ctx->pc != 0x2F5F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5F60u; }
        if (ctx->pc != 0x2F5F60u) { return; }
    }
    ctx->pc = 0x2F5F60u;
label_2f5f60:
    // 0x2f5f60: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x2f5f60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
    // 0x2f5f64: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x2f5f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2f5f68: 0xae830020  sw          $v1, 0x20($s4)
    ctx->pc = 0x2f5f68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 3));
    // 0x2f5f6c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2f5f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2f5f70: 0xae860024  sw          $a2, 0x24($s4)
    ctx->pc = 0x2f5f70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 6));
    // 0x2f5f74: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x2f5f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2f5f78: 0xae850028  sw          $a1, 0x28($s4)
    ctx->pc = 0x2f5f78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 5));
    // 0x2f5f7c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2f5f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2f5f80: 0xae83002c  sw          $v1, 0x2C($s4)
    ctx->pc = 0x2f5f80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 3));
    // 0x2f5f84: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2f5f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2f5f88: 0xae860030  sw          $a2, 0x30($s4)
    ctx->pc = 0x2f5f88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 6));
    // 0x2f5f8c: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x2f5f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2f5f90: 0xae850034  sw          $a1, 0x34($s4)
    ctx->pc = 0x2f5f90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 5));
    // 0x2f5f94: 0xae840038  sw          $a0, 0x38($s4)
    ctx->pc = 0x2f5f94u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 4));
    // 0x2f5f98: 0xae86003c  sw          $a2, 0x3C($s4)
    ctx->pc = 0x2f5f98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 6));
    // 0x2f5f9c: 0xae800064  sw          $zero, 0x64($s4)
    ctx->pc = 0x2f5f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 0));
    // 0x2f5fa0: 0xae920078  sw          $s2, 0x78($s4)
    ctx->pc = 0x2f5fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 120), GPR_U32(ctx, 18));
    // 0x2f5fa4: 0xae910058  sw          $s1, 0x58($s4)
    ctx->pc = 0x2f5fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 17));
    // 0x2f5fa8: 0xae80005c  sw          $zero, 0x5C($s4)
    ctx->pc = 0x2f5fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 0));
    // 0x2f5fac: 0xae80007c  sw          $zero, 0x7C($s4)
    ctx->pc = 0x2f5facu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 124), GPR_U32(ctx, 0));
    // 0x2f5fb0: 0xae830080  sw          $v1, 0x80($s4)
    ctx->pc = 0x2f5fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 3));
    // 0x2f5fb4: 0xae830084  sw          $v1, 0x84($s4)
    ctx->pc = 0x2f5fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 3));
    // 0x2f5fb8: 0xae800088  sw          $zero, 0x88($s4)
    ctx->pc = 0x2f5fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 0));
    // 0x2f5fbc: 0xae800094  sw          $zero, 0x94($s4)
    ctx->pc = 0x2f5fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 0));
    // 0x2f5fc0: 0xae800098  sw          $zero, 0x98($s4)
    ctx->pc = 0x2f5fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 152), GPR_U32(ctx, 0));
    // 0x2f5fc4: 0xae800090  sw          $zero, 0x90($s4)
    ctx->pc = 0x2f5fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 0));
    // 0x2f5fc8: 0xae84008c  sw          $a0, 0x8C($s4)
    ctx->pc = 0x2f5fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 4));
    // 0x2f5fcc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f5fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f5fd0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2f5fd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f5fd4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f5fd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f5fd8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f5fd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f5fdc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f5fdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f5fe0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f5fe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f5fe4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f5fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5FE8u;
            // 0x2f5fec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5FF0u;
}
