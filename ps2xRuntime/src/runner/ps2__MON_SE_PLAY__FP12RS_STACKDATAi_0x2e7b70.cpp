#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MON_SE_PLAY__FP12RS_STACKDATAi
// Address: 0x2e7b70 - 0x2e7c78
void ps2__MON_SE_PLAY__FP12RS_STACKDATAi_0x2e7b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MON_SE_PLAY__FP12RS_STACKDATAi_0x2e7b70");
#endif

    switch (ctx->pc) {
        case 0x2e7bb0u: goto label_2e7bb0;
        case 0x2e7bd0u: goto label_2e7bd0;
        case 0x2e7c00u: goto label_2e7c00;
        case 0x2e7c10u: goto label_2e7c10;
        case 0x2e7c30u: goto label_2e7c30;
        case 0x2e7c48u: goto label_2e7c48;
        default: break;
    }

    ctx->pc = 0x2e7b70u;

    // 0x2e7b70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e7b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e7b74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e7b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e7b78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e7b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e7b7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e7b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e7b80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e7b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e7b84: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e7b84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7b88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e7b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e7b8c: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e7b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e7b90: 0x8c4500a8  lw          $a1, 0xA8($v0)
    ctx->pc = 0x2e7b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x2e7b94: 0x28a10000  slti        $at, $a1, 0x0
    ctx->pc = 0x2e7b94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2e7b98: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7B98u;
    {
        const bool branch_taken_0x2e7b98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7B98u;
            // 0x2e7b9c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b98) {
            ctx->pc = 0x2E7BA8u;
            goto label_2e7ba8;
        }
    }
    ctx->pc = 0x2E7BA0u;
    // 0x2e7ba0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2E7BA0u;
    {
        const bool branch_taken_0x2e7ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7BA0u;
            // 0x2e7ba4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ba0) {
            ctx->pc = 0x2E7C5Cu;
            goto label_2e7c5c;
        }
    }
    ctx->pc = 0x2E7BA8u;
label_2e7ba8:
    // 0x2e7ba8: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x2E7BA8u;
    SET_GPR_U32(ctx, 31, 0x2E7BB0u);
    ctx->pc = 0x2E7BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7BA8u;
            // 0x2e7bac: 0x8f849ec8  lw          $a0, -0x6138($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942408)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7BB0u; }
        if (ctx->pc != 0x2E7BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7BB0u; }
        if (ctx->pc != 0x2E7BB0u) { return; }
    }
    ctx->pc = 0x2E7BB0u;
label_2e7bb0:
    // 0x2e7bb0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7BB0u;
    {
        const bool branch_taken_0x2e7bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7bb0) {
            ctx->pc = 0x2E7BC0u;
            goto label_2e7bc0;
        }
    }
    ctx->pc = 0x2E7BB8u;
    // 0x2e7bb8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2E7BB8u;
    {
        const bool branch_taken_0x2e7bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7BB8u;
            // 0x2e7bbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7bb8) {
            ctx->pc = 0x2E7C5Cu;
            goto label_2e7c5c;
        }
    }
    ctx->pc = 0x2E7BC0u;
label_2e7bc0:
    // 0x2e7bc0: 0x8c510588  lw          $s1, 0x588($v0)
    ctx->pc = 0x2e7bc0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1416)));
    // 0x2e7bc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e7bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7bc8: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E7BC8u;
    SET_GPR_U32(ctx, 31, 0x2E7BD0u);
    ctx->pc = 0x2E7BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7BC8u;
            // 0x2e7bcc: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7BD0u; }
        if (ctx->pc != 0x2E7BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7BD0u; }
        if (ctx->pc != 0x2E7BD0u) { return; }
    }
    ctx->pc = 0x2E7BD0u;
label_2e7bd0:
    // 0x2e7bd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e7bd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7bd4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e7bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e7bd8: 0x1242000b  beq         $s2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E7BD8u;
    {
        const bool branch_taken_0x2e7bd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7BD8u;
            // 0x2e7bdc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7bd8) {
            ctx->pc = 0x2E7C08u;
            goto label_2e7c08;
        }
    }
    ctx->pc = 0x2E7BE0u;
    // 0x2e7be0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7be4: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7BE4u;
    {
        const bool branch_taken_0x2e7be4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7BE4u;
            // 0x2e7be8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7be4) {
            ctx->pc = 0x2E7BF4u;
            goto label_2e7bf4;
        }
    }
    ctx->pc = 0x2E7BECu;
    // 0x2e7bec: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2E7BECu;
    {
        const bool branch_taken_0x2e7bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7BECu;
            // 0x2e7bf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7bec) {
            ctx->pc = 0x2E7C50u;
            goto label_2e7c50;
        }
    }
    ctx->pc = 0x2E7BF4u;
label_2e7bf4:
    // 0x2e7bf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e7bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7bf8: 0xc063818  jal         func_18E060
    ctx->pc = 0x2E7BF8u;
    SET_GPR_U32(ctx, 31, 0x2E7C00u);
    ctx->pc = 0x2E7BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7BF8u;
            // 0x2e7bfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7C00u; }
        if (ctx->pc != 0x2E7C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7C00u; }
        if (ctx->pc != 0x2E7C00u) { return; }
    }
    ctx->pc = 0x2E7C00u;
label_2e7c00:
    // 0x2e7c00: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2E7C00u;
    {
        const bool branch_taken_0x2e7c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7C00u;
            // 0x2e7c04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c00) {
            ctx->pc = 0x2E7C5Cu;
            goto label_2e7c5c;
        }
    }
    ctx->pc = 0x2E7C08u;
label_2e7c08:
    // 0x2e7c08: 0xc0b8cbc  jal         func_2E32F0
    ctx->pc = 0x2E7C08u;
    SET_GPR_U32(ctx, 31, 0x2E7C10u);
    ctx->pc = 0x2E7C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7C08u;
            // 0x2e7c0c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7C10u; }
        if (ctx->pc != 0x2E7C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7C10u; }
        if (ctx->pc != 0x2E7C10u) { return; }
    }
    ctx->pc = 0x2E7C10u;
label_2e7c10:
    // 0x2e7c10: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x2e7c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
    // 0x2e7c14: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x2e7c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
    // 0x2e7c18: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2e7c18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e7c1c: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x2e7c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2e7c20: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e7c20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e7c24: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x2e7c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x2e7c28: 0xc063bbc  jal         func_18EEF0
    ctx->pc = 0x2E7C28u;
    SET_GPR_U32(ctx, 31, 0x2E7C30u);
    ctx->pc = 0x2E7C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7C28u;
            // 0x2e7c2c: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18EEF0u;
    if (runtime->hasFunction(0x18EEF0u)) {
        auto targetFn = runtime->lookupFunction(0x18EEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7C30u; }
        if (ctx->pc != 0x2E7C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndGetVolPan__FPfPfPfff_0x18eef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7C30u; }
        if (ctx->pc != 0x2E7C30u) { return; }
    }
    ctx->pc = 0x2E7C30u;
label_2e7c30:
    // 0x2e7c30: 0xc7ac0068  lwc1        $f12, 0x68($sp)
    ctx->pc = 0x2e7c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e7c34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7c38: 0xc7ad006c  lwc1        $f13, 0x6C($sp)
    ctx->pc = 0x2e7c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e7c3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e7c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7c40: 0xc063830  jal         func_18E0C0
    ctx->pc = 0x2E7C40u;
    SET_GPR_U32(ctx, 31, 0x2E7C48u);
    ctx->pc = 0x2E7C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7C40u;
            // 0x2e7c44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E0C0u;
    if (runtime->hasFunction(0x18E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x18E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7C48u; }
        if (ctx->pc != 0x2E7C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlayVPf__FUiiffi_0x18e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7C48u; }
        if (ctx->pc != 0x2E7C48u) { return; }
    }
    ctx->pc = 0x2E7C48u;
label_2e7c48:
    // 0x2e7c48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7C48u;
    {
        const bool branch_taken_0x2e7c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7c48) {
            ctx->pc = 0x2E7C58u;
            goto label_2e7c58;
        }
    }
    ctx->pc = 0x2E7C50u;
label_2e7c50:
    // 0x2e7c50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7C50u;
    {
        const bool branch_taken_0x2e7c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7C50u;
            // 0x2e7c54: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c50) {
            ctx->pc = 0x2E7C60u;
            goto label_2e7c60;
        }
    }
    ctx->pc = 0x2E7C58u;
label_2e7c58:
    // 0x2e7c58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e7c5c:
    // 0x2e7c5c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e7c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2e7c60:
    // 0x2e7c60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e7c60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e7c64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e7c64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7c68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e7c68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7c6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e7c6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7c70: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7C70u;
            // 0x2e7c74: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E7C78u;
}
