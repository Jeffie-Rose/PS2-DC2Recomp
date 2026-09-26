#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: amapIMG__FP9SPI_STACKi
// Address: 0x165cd0 - 0x165da0
void amapIMG__FP9SPI_STACKi_0x165cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("amapIMG__FP9SPI_STACKi_0x165cd0");
#endif

    switch (ctx->pc) {
        case 0x165ce8u: goto label_165ce8;
        case 0x165d0cu: goto label_165d0c;
        case 0x165d50u: goto label_165d50;
        case 0x165d70u: goto label_165d70;
        case 0x165d80u: goto label_165d80;
        default: break;
    }

    ctx->pc = 0x165cd0u;

    // 0x165cd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x165cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x165cd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x165cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x165cd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x165cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x165cdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x165cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x165ce0: 0xc05191c  jal         func_146470
    ctx->pc = 0x165CE0u;
    SET_GPR_U32(ctx, 31, 0x165CE8u);
    ctx->pc = 0x165CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165CE0u;
            // 0x165ce4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165CE8u; }
        if (ctx->pc != 0x165CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165CE8u; }
        if (ctx->pc != 0x165CE8u) { return; }
    }
    ctx->pc = 0x165CE8u;
label_165ce8:
    // 0x165ce8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x165ce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165cec: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165CECu;
    {
        const bool branch_taken_0x165cec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x165CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165CECu;
            // 0x165cf0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165cec) {
            ctx->pc = 0x165CFCu;
            goto label_165cfc;
        }
    }
    ctx->pc = 0x165CF4u;
    // 0x165cf4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x165CF4u;
    {
        const bool branch_taken_0x165cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165CF4u;
            // 0x165cf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165cf4) {
            ctx->pc = 0x165D88u;
            goto label_165d88;
        }
    }
    ctx->pc = 0x165CFCu;
label_165cfc:
    // 0x165cfc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x165cfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165d00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x165d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165d04: 0x8f85895c  lw          $a1, -0x76A4($gp)
    ctx->pc = 0x165d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936924)));
    // 0x165d08: 0x0  nop
    ctx->pc = 0x165d08u;
    // NOP
label_165d0c:
    // 0x165d0c: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x165d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x165d10: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x165d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x165d14: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x165D14u;
    {
        const bool branch_taken_0x165d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165D14u;
            // 0x165d18: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165d14) {
            ctx->pc = 0x165D28u;
            goto label_165d28;
        }
    }
    ctx->pc = 0x165D1Cu;
    // 0x165d1c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x165d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x165d20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x165D20u;
    {
        const bool branch_taken_0x165d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165D20u;
            // 0x165d24: 0x24510004  addiu       $s1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165d20) {
            ctx->pc = 0x165D38u;
            goto label_165d38;
        }
    }
    ctx->pc = 0x165D28u;
label_165d28:
    // 0x165d28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x165d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x165d2c: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x165d2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x165d30: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x165D30u;
    {
        const bool branch_taken_0x165d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165D30u;
            // 0x165d34: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165d30) {
            ctx->pc = 0x165D0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_165d0c;
        }
    }
    ctx->pc = 0x165D38u;
label_165d38:
    // 0x165d38: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x165D38u;
    {
        const bool branch_taken_0x165d38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x165D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165D38u;
            // 0x165d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165d38) {
            ctx->pc = 0x165D48u;
            goto label_165d48;
        }
    }
    ctx->pc = 0x165D40u;
    // 0x165d40: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x165D40u;
    {
        const bool branch_taken_0x165d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165D40u;
            // 0x165d44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165d40) {
            ctx->pc = 0x165D88u;
            goto label_165d88;
        }
    }
    ctx->pc = 0x165D48u;
label_165d48:
    // 0x165d48: 0xc04a422  jal         func_129088
    ctx->pc = 0x165D48u;
    SET_GPR_U32(ctx, 31, 0x165D50u);
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165D50u; }
        if (ctx->pc != 0x165D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165D50u; }
        if (ctx->pc != 0x165D50u) { return; }
    }
    ctx->pc = 0x165D50u;
label_165d50:
    // 0x165d50: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x165d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x165d54: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x165d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x165d58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165D58u;
    {
        const bool branch_taken_0x165d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165D58u;
            // 0x165d5c: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165d58) {
            ctx->pc = 0x165D68u;
            goto label_165d68;
        }
    }
    ctx->pc = 0x165D60u;
    // 0x165d60: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x165d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x165d64: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x165d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_165d68:
    // 0x165d68: 0xc04e748  jal         func_139D20
    ctx->pc = 0x165D68u;
    SET_GPR_U32(ctx, 31, 0x165D70u);
    ctx->pc = 0x165D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165D68u;
            // 0x165d6c: 0x8f848960  lw          $a0, -0x76A0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936928)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165D70u; }
        if (ctx->pc != 0x165D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165D70u; }
        if (ctx->pc != 0x165D70u) { return; }
    }
    ctx->pc = 0x165D70u;
label_165d70:
    // 0x165d70: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x165d70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165d74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x165d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165d78: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x165D78u;
    SET_GPR_U32(ctx, 31, 0x165D80u);
    ctx->pc = 0x165D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165D78u;
            // 0x165d7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165D80u; }
        if (ctx->pc != 0x165D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165D80u; }
        if (ctx->pc != 0x165D80u) { return; }
    }
    ctx->pc = 0x165D80u;
label_165d80:
    // 0x165d80: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x165d80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x165d84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_165d88:
    // 0x165d88: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x165d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165d8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x165d8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165d90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x165d90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165d94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165d94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165d98: 0x3e00008  jr          $ra
    ctx->pc = 0x165D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165D98u;
            // 0x165d9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x165DA0u;
}
