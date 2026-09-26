#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SND_SET_SE_VOL__FP12RS_STACKDATAi
// Address: 0x272be0 - 0x272c9c
void ps2__SND_SET_SE_VOL__FP12RS_STACKDATAi_0x272be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SND_SET_SE_VOL__FP12RS_STACKDATAi_0x272be0");
#endif

    switch (ctx->pc) {
        case 0x272bfcu: goto label_272bfc;
        case 0x272c0cu: goto label_272c0c;
        case 0x272c38u: goto label_272c38;
        case 0x272c4cu: goto label_272c4c;
        case 0x272c5cu: goto label_272c5c;
        case 0x272c70u: goto label_272c70;
        default: break;
    }

    ctx->pc = 0x272be0u;

    // 0x272be0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x272be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x272be4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x272be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x272be8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x272be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x272bec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x272becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x272bf0: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x272bf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x272bf4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272BF4u;
    SET_GPR_U32(ctx, 31, 0x272BFCu);
    ctx->pc = 0x272BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272BF4u;
            // 0x272bf8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272BFCu; }
        if (ctx->pc != 0x272BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272BFCu; }
        if (ctx->pc != 0x272BFCu) { return; }
    }
    ctx->pc = 0x272BFCu;
label_272bfc:
    // 0x272bfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x272bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272c00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x272c00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272c04: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272C04u;
    SET_GPR_U32(ctx, 31, 0x272C0Cu);
    ctx->pc = 0x272C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272C04u;
            // 0x272c08: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272C0Cu; }
        if (ctx->pc != 0x272C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272C0Cu; }
        if (ctx->pc != 0x272C0Cu) { return; }
    }
    ctx->pc = 0x272C0Cu;
label_272c0c:
    // 0x272c0c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x272c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x272c10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x272c10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272c14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272c18: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x272C18u;
    {
        const bool branch_taken_0x272c18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x272C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272C18u;
            // 0x272c1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272c18) {
            ctx->pc = 0x272C54u;
            goto label_272c54;
        }
    }
    ctx->pc = 0x272C20u;
    // 0x272c20: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x272C20u;
    {
        const bool branch_taken_0x272c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x272C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272C20u;
            // 0x272c24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272c20) {
            ctx->pc = 0x272C30u;
            goto label_272c30;
        }
    }
    ctx->pc = 0x272C28u;
    // 0x272c28: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x272C28u;
    {
        const bool branch_taken_0x272c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272C28u;
            // 0x272c2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272c28) {
            ctx->pc = 0x272C78u;
            goto label_272c78;
        }
    }
    ctx->pc = 0x272C30u;
label_272c30:
    // 0x272c30: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272C30u;
    SET_GPR_U32(ctx, 31, 0x272C38u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272C38u; }
        if (ctx->pc != 0x272C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272C38u; }
        if (ctx->pc != 0x272C38u) { return; }
    }
    ctx->pc = 0x272C38u;
label_272c38:
    // 0x272c38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x272c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272c3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x272c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272c40: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x272c40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272c44: 0xc063a7c  jal         func_18E9F0
    ctx->pc = 0x272C44u;
    SET_GPR_U32(ctx, 31, 0x272C4Cu);
    ctx->pc = 0x272C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272C44u;
            // 0x272c48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E9F0u;
    if (runtime->hasFunction(0x18E9F0u)) {
        auto targetFn = runtime->lookupFunction(0x18E9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272C4Cu; }
        if (ctx->pc != 0x272C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSeVol__FUiiii_0x18e9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272C4Cu; }
        if (ctx->pc != 0x272C4Cu) { return; }
    }
    ctx->pc = 0x272C4Cu;
label_272c4c:
    // 0x272c4c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x272C4Cu;
    {
        const bool branch_taken_0x272c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272C4Cu;
            // 0x272c50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272c4c) {
            ctx->pc = 0x272C84u;
            goto label_272c84;
        }
    }
    ctx->pc = 0x272C54u;
label_272c54:
    // 0x272c54: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x272C54u;
    SET_GPR_U32(ctx, 31, 0x272C5Cu);
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272C5Cu; }
        if (ctx->pc != 0x272C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272C5Cu; }
        if (ctx->pc != 0x272C5Cu) { return; }
    }
    ctx->pc = 0x272C5Cu;
label_272c5c:
    // 0x272c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x272c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272c60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x272c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272c64: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x272c64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x272c68: 0xc063b38  jal         func_18ECE0
    ctx->pc = 0x272C68u;
    SET_GPR_U32(ctx, 31, 0x272C70u);
    ctx->pc = 0x272C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272C68u;
            // 0x272c6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ECE0u;
    if (runtime->hasFunction(0x18ECE0u)) {
        auto targetFn = runtime->lookupFunction(0x18ECE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272C70u; }
        if (ctx->pc != 0x272C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSeVolf__FUiifi_0x18ece0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272C70u; }
        if (ctx->pc != 0x272C70u) { return; }
    }
    ctx->pc = 0x272C70u;
label_272c70:
    // 0x272c70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x272C70u;
    {
        const bool branch_taken_0x272c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272c70) {
            ctx->pc = 0x272C80u;
            goto label_272c80;
        }
    }
    ctx->pc = 0x272C78u;
label_272c78:
    // 0x272c78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x272C78u;
    {
        const bool branch_taken_0x272c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272C78u;
            // 0x272c7c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272c78) {
            ctx->pc = 0x272C88u;
            goto label_272c88;
        }
    }
    ctx->pc = 0x272C80u;
label_272c80:
    // 0x272c80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272c84:
    // 0x272c84: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x272c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_272c88:
    // 0x272c88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x272c88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x272c8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x272c8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x272c90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x272c90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272c94: 0x3e00008  jr          $ra
    ctx->pc = 0x272C94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272C94u;
            // 0x272c98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272C9Cu;
}
