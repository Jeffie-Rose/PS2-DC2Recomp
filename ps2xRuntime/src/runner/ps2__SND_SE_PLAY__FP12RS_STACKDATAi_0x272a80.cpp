#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SND_SE_PLAY__FP12RS_STACKDATAi
// Address: 0x272a80 - 0x272b90
void ps2__SND_SE_PLAY__FP12RS_STACKDATAi_0x272a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SND_SE_PLAY__FP12RS_STACKDATAi_0x272a80");
#endif

    switch (ctx->pc) {
        case 0x272ac4u: goto label_272ac4;
        case 0x272ad0u: goto label_272ad0;
        case 0x272ae0u: goto label_272ae0;
        case 0x272af0u: goto label_272af0;
        case 0x272b00u: goto label_272b00;
        case 0x272b0cu: goto label_272b0c;
        case 0x272b20u: goto label_272b20;
        case 0x272b30u: goto label_272b30;
        case 0x272b40u: goto label_272b40;
        case 0x272b50u: goto label_272b50;
        case 0x272b5cu: goto label_272b5c;
        case 0x272b74u: goto label_272b74;
        default: break;
    }

    ctx->pc = 0x272a80u;

    // 0x272a80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x272a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x272a84: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x272a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x272a88: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x272a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x272a8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x272a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x272a90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x272a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x272a94: 0x10a20024  beq         $a1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x272A94u;
    {
        const bool branch_taken_0x272a94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x272A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272A94u;
            // 0x272a98: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a94) {
            ctx->pc = 0x272B28u;
            goto label_272b28;
        }
    }
    ctx->pc = 0x272A9Cu;
    // 0x272a9c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x272a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x272aa0: 0x10a20011  beq         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x272AA0u;
    {
        const bool branch_taken_0x272aa0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x272AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272AA0u;
            // 0x272aa4: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272aa0) {
            ctx->pc = 0x272AE8u;
            goto label_272ae8;
        }
    }
    ctx->pc = 0x272AA8u;
    // 0x272aa8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x272aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x272aac: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272AACu;
    {
        const bool branch_taken_0x272aac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x272AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272AACu;
            // 0x272ab0: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272aac) {
            ctx->pc = 0x272ABCu;
            goto label_272abc;
        }
    }
    ctx->pc = 0x272AB4u;
    // 0x272ab4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x272AB4u;
    {
        const bool branch_taken_0x272ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272AB4u;
            // 0x272ab8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272ab4) {
            ctx->pc = 0x272B78u;
            goto label_272b78;
        }
    }
    ctx->pc = 0x272ABCu;
label_272abc:
    // 0x272abc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272ABCu;
    SET_GPR_U32(ctx, 31, 0x272AC4u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272AC4u; }
        if (ctx->pc != 0x272AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272AC4u; }
        if (ctx->pc != 0x272AC4u) { return; }
    }
    ctx->pc = 0x272AC4u;
label_272ac4:
    // 0x272ac4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x272ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ac8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272AC8u;
    SET_GPR_U32(ctx, 31, 0x272AD0u);
    ctx->pc = 0x272ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272AC8u;
            // 0x272acc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272AD0u; }
        if (ctx->pc != 0x272AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272AD0u; }
        if (ctx->pc != 0x272AD0u) { return; }
    }
    ctx->pc = 0x272AD0u;
label_272ad0:
    // 0x272ad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x272ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ad4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x272ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ad8: 0xc063818  jal         func_18E060
    ctx->pc = 0x272AD8u;
    SET_GPR_U32(ctx, 31, 0x272AE0u);
    ctx->pc = 0x272ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272AD8u;
            // 0x272adc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272AE0u; }
        if (ctx->pc != 0x272AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272AE0u; }
        if (ctx->pc != 0x272AE0u) { return; }
    }
    ctx->pc = 0x272AE0u;
label_272ae0:
    // 0x272ae0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x272AE0u;
    {
        const bool branch_taken_0x272ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272AE0u;
            // 0x272ae4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272ae0) {
            ctx->pc = 0x272B78u;
            goto label_272b78;
        }
    }
    ctx->pc = 0x272AE8u;
label_272ae8:
    // 0x272ae8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272AE8u;
    SET_GPR_U32(ctx, 31, 0x272AF0u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272AF0u; }
        if (ctx->pc != 0x272AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272AF0u; }
        if (ctx->pc != 0x272AF0u) { return; }
    }
    ctx->pc = 0x272AF0u;
label_272af0:
    // 0x272af0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x272af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272af4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x272af4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272af8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272AF8u;
    SET_GPR_U32(ctx, 31, 0x272B00u);
    ctx->pc = 0x272AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272AF8u;
            // 0x272afc: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272B00u; }
        if (ctx->pc != 0x272B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272B00u; }
        if (ctx->pc != 0x272B00u) { return; }
    }
    ctx->pc = 0x272B00u;
label_272b00:
    // 0x272b00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x272b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b04: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272B04u;
    SET_GPR_U32(ctx, 31, 0x272B0Cu);
    ctx->pc = 0x272B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272B04u;
            // 0x272b08: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272B0Cu; }
        if (ctx->pc != 0x272B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272B0Cu; }
        if (ctx->pc != 0x272B0Cu) { return; }
    }
    ctx->pc = 0x272B0Cu;
label_272b0c:
    // 0x272b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x272b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x272b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b14: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x272b14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b18: 0xc063820  jal         func_18E080
    ctx->pc = 0x272B18u;
    SET_GPR_U32(ctx, 31, 0x272B20u);
    ctx->pc = 0x272B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272B18u;
            // 0x272b1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E080u;
    if (runtime->hasFunction(0x18E080u)) {
        auto targetFn = runtime->lookupFunction(0x18E080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272B20u; }
        if (ctx->pc != 0x272B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlayV__FUiiii_0x18e080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272B20u; }
        if (ctx->pc != 0x272B20u) { return; }
    }
    ctx->pc = 0x272B20u;
label_272b20:
    // 0x272b20: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x272B20u;
    {
        const bool branch_taken_0x272b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272B20u;
            // 0x272b24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272b20) {
            ctx->pc = 0x272B78u;
            goto label_272b78;
        }
    }
    ctx->pc = 0x272B28u;
label_272b28:
    // 0x272b28: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272B28u;
    SET_GPR_U32(ctx, 31, 0x272B30u);
    ctx->pc = 0x272B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272B28u;
            // 0x272b2c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272B30u; }
        if (ctx->pc != 0x272B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272B30u; }
        if (ctx->pc != 0x272B30u) { return; }
    }
    ctx->pc = 0x272B30u;
label_272b30:
    // 0x272b30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x272b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x272b34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b38: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272B38u;
    SET_GPR_U32(ctx, 31, 0x272B40u);
    ctx->pc = 0x272B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272B38u;
            // 0x272b3c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272B40u; }
        if (ctx->pc != 0x272B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272B40u; }
        if (ctx->pc != 0x272B40u) { return; }
    }
    ctx->pc = 0x272B40u;
label_272b40:
    // 0x272b40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x272b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x272b44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b48: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272B48u;
    SET_GPR_U32(ctx, 31, 0x272B50u);
    ctx->pc = 0x272B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272B48u;
            // 0x272b4c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272B50u; }
        if (ctx->pc != 0x272B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272B50u; }
        if (ctx->pc != 0x272B50u) { return; }
    }
    ctx->pc = 0x272B50u;
label_272b50:
    // 0x272b50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x272b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b54: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272B54u;
    SET_GPR_U32(ctx, 31, 0x272B5Cu);
    ctx->pc = 0x272B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272B54u;
            // 0x272b58: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272B5Cu; }
        if (ctx->pc != 0x272B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272B5Cu; }
        if (ctx->pc != 0x272B5Cu) { return; }
    }
    ctx->pc = 0x272B5Cu;
label_272b5c:
    // 0x272b5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x272b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x272b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b64: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x272b64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b68: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x272b68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b6c: 0xc063828  jal         func_18E0A0
    ctx->pc = 0x272B6Cu;
    SET_GPR_U32(ctx, 31, 0x272B74u);
    ctx->pc = 0x272B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272B6Cu;
            // 0x272b70: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E0A0u;
    if (runtime->hasFunction(0x18E0A0u)) {
        auto targetFn = runtime->lookupFunction(0x18E0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272B74u; }
        if (ctx->pc != 0x272B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlayVP__FUiiiii_0x18e0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272B74u; }
        if (ctx->pc != 0x272B74u) { return; }
    }
    ctx->pc = 0x272B74u;
label_272b74:
    // 0x272b74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272b78:
    // 0x272b78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x272b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x272b7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x272b7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x272b80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x272b80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x272b84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x272b84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272b88: 0x3e00008  jr          $ra
    ctx->pc = 0x272B88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272B88u;
            // 0x272b8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272B90u;
}
