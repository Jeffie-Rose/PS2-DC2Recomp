#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _BTL_SE_PLAY__FP12RS_STACKDATAi
// Address: 0x2e7cf0 - 0x2e7dcc
void ps2__BTL_SE_PLAY__FP12RS_STACKDATAi_0x2e7cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__BTL_SE_PLAY__FP12RS_STACKDATAi_0x2e7cf0");
#endif

    switch (ctx->pc) {
        case 0x2e7d24u: goto label_2e7d24;
        case 0x2e7d54u: goto label_2e7d54;
        case 0x2e7d64u: goto label_2e7d64;
        case 0x2e7d84u: goto label_2e7d84;
        case 0x2e7d9cu: goto label_2e7d9c;
        default: break;
    }

    ctx->pc = 0x2e7cf0u;

    // 0x2e7cf0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e7cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e7cf4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2e7cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2e7cf8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e7cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e7cfc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e7cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e7d00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e7d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e7d04: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x2e7d04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e7d08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e7d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e7d0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e7d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e7d10: 0x8f829ec8  lw          $v0, -0x6138($gp)
    ctx->pc = 0x2e7d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942408)));
    // 0x2e7d14: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2e7d14u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2e7d18: 0x8c31c4d0  lw          $s1, -0x3B30($at)
    ctx->pc = 0x2e7d18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952144)));
    // 0x2e7d1c: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E7D1Cu;
    SET_GPR_U32(ctx, 31, 0x2E7D24u);
    ctx->pc = 0x2E7D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7D1Cu;
            // 0x2e7d20: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7D24u; }
        if (ctx->pc != 0x2E7D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7D24u; }
        if (ctx->pc != 0x2E7D24u) { return; }
    }
    ctx->pc = 0x2E7D24u;
label_2e7d24:
    // 0x2e7d24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e7d24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7d28: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e7d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e7d2c: 0x1242000b  beq         $s2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E7D2Cu;
    {
        const bool branch_taken_0x2e7d2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7D2Cu;
            // 0x2e7d30: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d2c) {
            ctx->pc = 0x2E7D5Cu;
            goto label_2e7d5c;
        }
    }
    ctx->pc = 0x2E7D34u;
    // 0x2e7d34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7d38: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7D38u;
    {
        const bool branch_taken_0x2e7d38 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7D38u;
            // 0x2e7d3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d38) {
            ctx->pc = 0x2E7D48u;
            goto label_2e7d48;
        }
    }
    ctx->pc = 0x2E7D40u;
    // 0x2e7d40: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2E7D40u;
    {
        const bool branch_taken_0x2e7d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7D40u;
            // 0x2e7d44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d40) {
            ctx->pc = 0x2E7DA4u;
            goto label_2e7da4;
        }
    }
    ctx->pc = 0x2E7D48u;
label_2e7d48:
    // 0x2e7d48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e7d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7d4c: 0xc063818  jal         func_18E060
    ctx->pc = 0x2E7D4Cu;
    SET_GPR_U32(ctx, 31, 0x2E7D54u);
    ctx->pc = 0x2E7D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7D4Cu;
            // 0x2e7d50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7D54u; }
        if (ctx->pc != 0x2E7D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7D54u; }
        if (ctx->pc != 0x2E7D54u) { return; }
    }
    ctx->pc = 0x2E7D54u;
label_2e7d54:
    // 0x2e7d54: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2E7D54u;
    {
        const bool branch_taken_0x2e7d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7D54u;
            // 0x2e7d58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d54) {
            ctx->pc = 0x2E7DB0u;
            goto label_2e7db0;
        }
    }
    ctx->pc = 0x2E7D5Cu;
label_2e7d5c:
    // 0x2e7d5c: 0xc0b8cbc  jal         func_2E32F0
    ctx->pc = 0x2E7D5Cu;
    SET_GPR_U32(ctx, 31, 0x2E7D64u);
    ctx->pc = 0x2E7D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7D5Cu;
            // 0x2e7d60: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7D64u; }
        if (ctx->pc != 0x2E7D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7D64u; }
        if (ctx->pc != 0x2E7D64u) { return; }
    }
    ctx->pc = 0x2E7D64u;
label_2e7d64:
    // 0x2e7d64: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x2e7d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
    // 0x2e7d68: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x2e7d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
    // 0x2e7d6c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2e7d6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e7d70: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x2e7d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2e7d74: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e7d74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e7d78: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x2e7d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x2e7d7c: 0xc063bbc  jal         func_18EEF0
    ctx->pc = 0x2E7D7Cu;
    SET_GPR_U32(ctx, 31, 0x2E7D84u);
    ctx->pc = 0x2E7D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7D7Cu;
            // 0x2e7d80: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18EEF0u;
    if (runtime->hasFunction(0x18EEF0u)) {
        auto targetFn = runtime->lookupFunction(0x18EEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7D84u; }
        if (ctx->pc != 0x2E7D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndGetVolPan__FPfPfPfff_0x18eef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7D84u; }
        if (ctx->pc != 0x2E7D84u) { return; }
    }
    ctx->pc = 0x2E7D84u;
label_2e7d84:
    // 0x2e7d84: 0xc7ac0068  lwc1        $f12, 0x68($sp)
    ctx->pc = 0x2e7d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e7d88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7d8c: 0xc7ad006c  lwc1        $f13, 0x6C($sp)
    ctx->pc = 0x2e7d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e7d90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e7d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7d94: 0xc063830  jal         func_18E0C0
    ctx->pc = 0x2E7D94u;
    SET_GPR_U32(ctx, 31, 0x2E7D9Cu);
    ctx->pc = 0x2E7D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7D94u;
            // 0x2e7d98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E0C0u;
    if (runtime->hasFunction(0x18E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x18E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7D9Cu; }
        if (ctx->pc != 0x2E7D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlayVPf__FUiiffi_0x18e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7D9Cu; }
        if (ctx->pc != 0x2E7D9Cu) { return; }
    }
    ctx->pc = 0x2E7D9Cu;
label_2e7d9c:
    // 0x2e7d9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7D9Cu;
    {
        const bool branch_taken_0x2e7d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7d9c) {
            ctx->pc = 0x2E7DACu;
            goto label_2e7dac;
        }
    }
    ctx->pc = 0x2E7DA4u;
label_2e7da4:
    // 0x2e7da4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7DA4u;
    {
        const bool branch_taken_0x2e7da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7DA4u;
            // 0x2e7da8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7da4) {
            ctx->pc = 0x2E7DB4u;
            goto label_2e7db4;
        }
    }
    ctx->pc = 0x2E7DACu;
label_2e7dac:
    // 0x2e7dac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e7db0:
    // 0x2e7db0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e7db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2e7db4:
    // 0x2e7db4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e7db4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e7db8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e7db8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7dbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e7dbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7dc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e7dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7DC4u;
            // 0x2e7dc8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E7DCCu;
}
