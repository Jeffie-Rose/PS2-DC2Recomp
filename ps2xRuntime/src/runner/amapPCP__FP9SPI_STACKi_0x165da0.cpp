#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: amapPCP__FP9SPI_STACKi
// Address: 0x165da0 - 0x165e70
void amapPCP__FP9SPI_STACKi_0x165da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("amapPCP__FP9SPI_STACKi_0x165da0");
#endif

    switch (ctx->pc) {
        case 0x165db8u: goto label_165db8;
        case 0x165ddcu: goto label_165ddc;
        case 0x165e20u: goto label_165e20;
        case 0x165e40u: goto label_165e40;
        case 0x165e50u: goto label_165e50;
        default: break;
    }

    ctx->pc = 0x165da0u;

    // 0x165da0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x165da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x165da4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x165da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x165da8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x165da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x165dac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x165dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x165db0: 0xc05191c  jal         func_146470
    ctx->pc = 0x165DB0u;
    SET_GPR_U32(ctx, 31, 0x165DB8u);
    ctx->pc = 0x165DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165DB0u;
            // 0x165db4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165DB8u; }
        if (ctx->pc != 0x165DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165DB8u; }
        if (ctx->pc != 0x165DB8u) { return; }
    }
    ctx->pc = 0x165DB8u;
label_165db8:
    // 0x165db8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x165db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165dbc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165DBCu;
    {
        const bool branch_taken_0x165dbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x165DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165DBCu;
            // 0x165dc0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165dbc) {
            ctx->pc = 0x165DCCu;
            goto label_165dcc;
        }
    }
    ctx->pc = 0x165DC4u;
    // 0x165dc4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x165DC4u;
    {
        const bool branch_taken_0x165dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165DC4u;
            // 0x165dc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165dc4) {
            ctx->pc = 0x165E58u;
            goto label_165e58;
        }
    }
    ctx->pc = 0x165DCCu;
label_165dcc:
    // 0x165dcc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x165dccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165dd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x165dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165dd4: 0x8f85895c  lw          $a1, -0x76A4($gp)
    ctx->pc = 0x165dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936924)));
    // 0x165dd8: 0x0  nop
    ctx->pc = 0x165dd8u;
    // NOP
label_165ddc:
    // 0x165ddc: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x165ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x165de0: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x165de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x165de4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x165DE4u;
    {
        const bool branch_taken_0x165de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165DE4u;
            // 0x165de8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165de4) {
            ctx->pc = 0x165DF8u;
            goto label_165df8;
        }
    }
    ctx->pc = 0x165DECu;
    // 0x165dec: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x165decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x165df0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x165DF0u;
    {
        const bool branch_taken_0x165df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165DF0u;
            // 0x165df4: 0x24510048  addiu       $s1, $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165df0) {
            ctx->pc = 0x165E08u;
            goto label_165e08;
        }
    }
    ctx->pc = 0x165DF8u;
label_165df8:
    // 0x165df8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x165df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x165dfc: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x165dfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x165e00: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x165E00u;
    {
        const bool branch_taken_0x165e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165E00u;
            // 0x165e04: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165e00) {
            ctx->pc = 0x165DDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_165ddc;
        }
    }
    ctx->pc = 0x165E08u;
label_165e08:
    // 0x165e08: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x165E08u;
    {
        const bool branch_taken_0x165e08 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x165E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165E08u;
            // 0x165e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165e08) {
            ctx->pc = 0x165E18u;
            goto label_165e18;
        }
    }
    ctx->pc = 0x165E10u;
    // 0x165e10: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x165E10u;
    {
        const bool branch_taken_0x165e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165E10u;
            // 0x165e14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165e10) {
            ctx->pc = 0x165E58u;
            goto label_165e58;
        }
    }
    ctx->pc = 0x165E18u;
label_165e18:
    // 0x165e18: 0xc04a422  jal         func_129088
    ctx->pc = 0x165E18u;
    SET_GPR_U32(ctx, 31, 0x165E20u);
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165E20u; }
        if (ctx->pc != 0x165E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165E20u; }
        if (ctx->pc != 0x165E20u) { return; }
    }
    ctx->pc = 0x165E20u;
label_165e20:
    // 0x165e20: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x165e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x165e24: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x165e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x165e28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165E28u;
    {
        const bool branch_taken_0x165e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165E28u;
            // 0x165e2c: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165e28) {
            ctx->pc = 0x165E38u;
            goto label_165e38;
        }
    }
    ctx->pc = 0x165E30u;
    // 0x165e30: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x165e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x165e34: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x165e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_165e38:
    // 0x165e38: 0xc04e748  jal         func_139D20
    ctx->pc = 0x165E38u;
    SET_GPR_U32(ctx, 31, 0x165E40u);
    ctx->pc = 0x165E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165E38u;
            // 0x165e3c: 0x8f848960  lw          $a0, -0x76A0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936928)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165E40u; }
        if (ctx->pc != 0x165E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165E40u; }
        if (ctx->pc != 0x165E40u) { return; }
    }
    ctx->pc = 0x165E40u;
label_165e40:
    // 0x165e40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x165e40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165e44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x165e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165e48: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x165E48u;
    SET_GPR_U32(ctx, 31, 0x165E50u);
    ctx->pc = 0x165E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165E48u;
            // 0x165e4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165E50u; }
        if (ctx->pc != 0x165E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165E50u; }
        if (ctx->pc != 0x165E50u) { return; }
    }
    ctx->pc = 0x165E50u;
label_165e50:
    // 0x165e50: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x165e50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x165e54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_165e58:
    // 0x165e58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x165e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165e5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x165e5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165e60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x165e60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165e64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165e68: 0x3e00008  jr          $ra
    ctx->pc = 0x165E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165E68u;
            // 0x165e6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x165E70u;
}
