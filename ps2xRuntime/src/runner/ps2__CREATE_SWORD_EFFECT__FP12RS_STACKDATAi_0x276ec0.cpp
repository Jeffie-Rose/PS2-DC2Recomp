#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CREATE_SWORD_EFFECT__FP12RS_STACKDATAi
// Address: 0x276ec0 - 0x276f98
void ps2__CREATE_SWORD_EFFECT__FP12RS_STACKDATAi_0x276ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CREATE_SWORD_EFFECT__FP12RS_STACKDATAi_0x276ec0");
#endif

    switch (ctx->pc) {
        case 0x276edcu: goto label_276edc;
        case 0x276eecu: goto label_276eec;
        case 0x276ef8u: goto label_276ef8;
        case 0x276f08u: goto label_276f08;
        case 0x276f24u: goto label_276f24;
        case 0x276f30u: goto label_276f30;
        case 0x276f7cu: goto label_276f7c;
        default: break;
    }

    ctx->pc = 0x276ec0u;

    // 0x276ec0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x276ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x276ec4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x276ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x276ec8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x276ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x276ecc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x276eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x276ed0: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x276ed0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x276ed4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x276ED4u;
    SET_GPR_U32(ctx, 31, 0x276EDCu);
    ctx->pc = 0x276ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276ED4u;
            // 0x276ed8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276EDCu; }
        if (ctx->pc != 0x276EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276EDCu; }
        if (ctx->pc != 0x276EDCu) { return; }
    }
    ctx->pc = 0x276EDCu;
label_276edc:
    // 0x276edc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x276edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276ee0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x276ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276ee4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x276EE4u;
    SET_GPR_U32(ctx, 31, 0x276EECu);
    ctx->pc = 0x276EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276EE4u;
            // 0x276ee8: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276EECu; }
        if (ctx->pc != 0x276EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276EECu; }
        if (ctx->pc != 0x276EECu) { return; }
    }
    ctx->pc = 0x276EECu;
label_276eec:
    // 0x276eec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x276eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276ef0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x276EF0u;
    SET_GPR_U32(ctx, 31, 0x276EF8u);
    ctx->pc = 0x276EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276EF0u;
            // 0x276ef4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276EF8u; }
        if (ctx->pc != 0x276EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276EF8u; }
        if (ctx->pc != 0x276EF8u) { return; }
    }
    ctx->pc = 0x276EF8u;
label_276ef8:
    // 0x276ef8: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x276ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x276efc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x276efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276f00: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x276F00u;
    SET_GPR_U32(ctx, 31, 0x276F08u);
    ctx->pc = 0x276F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276F00u;
            // 0x276f04: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276F08u; }
        if (ctx->pc != 0x276F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276F08u; }
        if (ctx->pc != 0x276F08u) { return; }
    }
    ctx->pc = 0x276F08u;
label_276f08:
    // 0x276f08: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x276f08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276f0c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x276F0Cu;
    {
        const bool branch_taken_0x276f0c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x276F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276F0Cu;
            // 0x276f10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276f0c) {
            ctx->pc = 0x276F1Cu;
            goto label_276f1c;
        }
    }
    ctx->pc = 0x276F14u;
    // 0x276f14: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x276F14u;
    {
        const bool branch_taken_0x276f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276F14u;
            // 0x276f18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276f14) {
            ctx->pc = 0x276F80u;
            goto label_276f80;
        }
    }
    ctx->pc = 0x276F1Cu;
label_276f1c:
    // 0x276f1c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x276F1Cu;
    SET_GPR_U32(ctx, 31, 0x276F24u);
    ctx->pc = 0x276F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276F1Cu;
            // 0x276f20: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276F24u; }
        if (ctx->pc != 0x276F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276F24u; }
        if (ctx->pc != 0x276F24u) { return; }
    }
    ctx->pc = 0x276F24u;
label_276f24:
    // 0x276f24: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x276f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x276f28: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x276F28u;
    SET_GPR_U32(ctx, 31, 0x276F30u);
    ctx->pc = 0x276F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276F28u;
            // 0x276f2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276F30u; }
        if (ctx->pc != 0x276F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276F30u; }
        if (ctx->pc != 0x276F30u) { return; }
    }
    ctx->pc = 0x276F30u;
label_276f30:
    // 0x276f30: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x276F30u;
    {
        const bool branch_taken_0x276f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276F30u;
            // 0x276f34: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276f30) {
            ctx->pc = 0x276F58u;
            goto label_276f58;
        }
    }
    ctx->pc = 0x276F38u;
    // 0x276f38: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x276f38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x276f3c: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x276f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x276f40: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x276f40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x276f44: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x276f44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x276f48: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x276f48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x276f4c: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x276f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x276f50: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x276f50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x276f54: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x276f54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_276f58:
    // 0x276f58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x276F58u;
    {
        const bool branch_taken_0x276f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x276F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276F58u;
            // 0x276f5c: 0xaf8297e8  sw          $v0, -0x6818($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940648), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276f58) {
            ctx->pc = 0x276F68u;
            goto label_276f68;
        }
    }
    ctx->pc = 0x276F60u;
    // 0x276f60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x276F60u;
    {
        const bool branch_taken_0x276f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276F60u;
            // 0x276f64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276f60) {
            ctx->pc = 0x276F80u;
            goto label_276f80;
        }
    }
    ctx->pc = 0x276F68u;
label_276f68:
    // 0x276f68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x276f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276f6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x276f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276f70: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x276f70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276f74: 0xc070890  jal         func_1C2240
    ctx->pc = 0x276F74u;
    SET_GPR_U32(ctx, 31, 0x276F7Cu);
    ctx->pc = 0x276F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276F74u;
            // 0x276f78: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2240u;
    if (runtime->hasFunction(0x1C2240u)) {
        auto targetFn = runtime->lookupFunction(0x1C2240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276F7Cu; }
        if (ctx->pc != 0x276F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__16CSWordAfterImageFP9mgCMemoryii_0x1c2240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276F7Cu; }
        if (ctx->pc != 0x276F7Cu) { return; }
    }
    ctx->pc = 0x276F7Cu;
label_276f7c:
    // 0x276f7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_276f80:
    // 0x276f80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x276f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x276f84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x276f84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276f88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x276f88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276f8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x276f8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276f90: 0x3e00008  jr          $ra
    ctx->pc = 0x276F90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276F90u;
            // 0x276f94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x276F98u;
}
