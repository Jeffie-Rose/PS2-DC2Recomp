#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: vpiNPC_PLACE_NUM__FP9SPI_STACKi
// Address: 0x319ef0 - 0x319f8c
void vpiNPC_PLACE_NUM__FP9SPI_STACKi_0x319ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("vpiNPC_PLACE_NUM__FP9SPI_STACKi_0x319ef0");
#endif

    switch (ctx->pc) {
        case 0x319f00u: goto label_319f00;
        case 0x319f34u: goto label_319f34;
        case 0x319f44u: goto label_319f44;
        case 0x319f60u: goto label_319f60;
        default: break;
    }

    ctx->pc = 0x319ef0u;

    // 0x319ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x319ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x319ef4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x319ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x319ef8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x319EF8u;
    SET_GPR_U32(ctx, 31, 0x319F00u);
    ctx->pc = 0x319EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319EF8u;
            // 0x319efc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319F00u; }
        if (ctx->pc != 0x319F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319F00u; }
        if (ctx->pc != 0x319F00u) { return; }
    }
    ctx->pc = 0x319F00u;
label_319f00:
    // 0x319f00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x319f00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319f04: 0x1e000003  bgtz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x319F04u;
    {
        const bool branch_taken_0x319f04 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x319F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319F04u;
            // 0x319f08: 0x101980  sll         $v1, $s0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319f04) {
            ctx->pc = 0x319F14u;
            goto label_319f14;
        }
    }
    ctx->pc = 0x319F0Cu;
    // 0x319f0c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x319F0Cu;
    {
        const bool branch_taken_0x319f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319F0Cu;
            // 0x319f10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319f0c) {
            ctx->pc = 0x319F7Cu;
            goto label_319f7c;
        }
    }
    ctx->pc = 0x319F14u;
label_319f14:
    // 0x319f14: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x319f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x319f18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x319F18u;
    {
        const bool branch_taken_0x319f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319F18u;
            // 0x319f1c: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319f18) {
            ctx->pc = 0x319F28u;
            goto label_319f28;
        }
    }
    ctx->pc = 0x319F20u;
    // 0x319f20: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x319f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x319f24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x319f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_319f28:
    // 0x319f28: 0x8f84a370  lw          $a0, -0x5C90($gp)
    ctx->pc = 0x319f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943600)));
    // 0x319f2c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x319F2Cu;
    SET_GPR_U32(ctx, 31, 0x319F34u);
    ctx->pc = 0x319F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319F2Cu;
            // 0x319f30: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319F34u; }
        if (ctx->pc != 0x319F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319F34u; }
        if (ctx->pc != 0x319F34u) { return; }
    }
    ctx->pc = 0x319F34u;
label_319f34:
    // 0x319f34: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x319f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x319f38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x319f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319f3c: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x319F3Cu;
    SET_GPR_U32(ctx, 31, 0x319F44u);
    ctx->pc = 0x319F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319F3Cu;
            // 0x319f40: 0x24640010  addiu       $a0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319F44u; }
        if (ctx->pc != 0x319F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319F44u; }
        if (ctx->pc != 0x319F44u) { return; }
    }
    ctx->pc = 0x319F44u;
label_319f44:
    // 0x319f44: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x319f44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x319f48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x319f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319f4c: 0x24a59f90  addiu       $a1, $a1, -0x6070
    ctx->pc = 0x319f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942608));
    // 0x319f50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x319f50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319f54: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x319f54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x319f58: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x319F58u;
    SET_GPR_U32(ctx, 31, 0x319F60u);
    ctx->pc = 0x319F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319F58u;
            // 0x319f5c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319F60u; }
        if (ctx->pc != 0x319F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319F60u; }
        if (ctx->pc != 0x319F60u) { return; }
    }
    ctx->pc = 0x319F60u;
label_319f60:
    // 0x319f60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x319F60u;
    {
        const bool branch_taken_0x319f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319f60) {
            ctx->pc = 0x319F70u;
            goto label_319f70;
        }
    }
    ctx->pc = 0x319F68u;
    // 0x319f68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x319F68u;
    {
        const bool branch_taken_0x319f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319F68u;
            // 0x319f6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319f68) {
            ctx->pc = 0x319F7Cu;
            goto label_319f7c;
        }
    }
    ctx->pc = 0x319F70u;
label_319f70:
    // 0x319f70: 0xaf82a334  sw          $v0, -0x5CCC($gp)
    ctx->pc = 0x319f70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943540), GPR_U32(ctx, 2));
    // 0x319f74: 0xaf90a330  sw          $s0, -0x5CD0($gp)
    ctx->pc = 0x319f74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943536), GPR_U32(ctx, 16));
    // 0x319f78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x319f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_319f7c:
    // 0x319f7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x319f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x319f80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x319f80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x319f84: 0x3e00008  jr          $ra
    ctx->pc = 0x319F84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319F84u;
            // 0x319f88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x319F8Cu;
}
