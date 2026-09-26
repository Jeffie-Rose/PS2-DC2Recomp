#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CLOTH_START__FP9SPI_STACKi
// Address: 0x176e00 - 0x176eb8
void ps2__CLOTH_START__FP9SPI_STACKi_0x176e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CLOTH_START__FP9SPI_STACKi_0x176e00");
#endif

    switch (ctx->pc) {
        case 0x176e10u: goto label_176e10;
        case 0x176e4cu: goto label_176e4c;
        case 0x176e64u: goto label_176e64;
        case 0x176e80u: goto label_176e80;
        default: break;
    }

    ctx->pc = 0x176e00u;

    // 0x176e00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x176e04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x176e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x176e08: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x176E08u;
    SET_GPR_U32(ctx, 31, 0x176E10u);
    ctx->pc = 0x176E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176E08u;
            // 0x176e0c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176E10u; }
        if (ctx->pc != 0x176E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176E10u; }
        if (ctx->pc != 0x176E10u) { return; }
    }
    ctx->pc = 0x176E10u;
label_176e10:
    // 0x176e10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x176e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176e14: 0x1e000003  bgtz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x176E14u;
    {
        const bool branch_taken_0x176e14 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x176E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176E14u;
            // 0x176e18: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176e14) {
            ctx->pc = 0x176E24u;
            goto label_176e24;
        }
    }
    ctx->pc = 0x176E1Cu;
    // 0x176e1c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x176E1Cu;
    {
        const bool branch_taken_0x176e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176E1Cu;
            // 0x176e20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176e1c) {
            ctx->pc = 0x176EA8u;
            goto label_176ea8;
        }
    }
    ctx->pc = 0x176E24u;
label_176e24:
    // 0x176e24: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x176e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x176e28: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x176e28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176e2c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x176e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x176e30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x176E30u;
    {
        const bool branch_taken_0x176e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x176E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176E30u;
            // 0x176e34: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176e30) {
            ctx->pc = 0x176E40u;
            goto label_176e40;
        }
    }
    ctx->pc = 0x176E38u;
    // 0x176e38: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x176e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x176e3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x176e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_176e40:
    // 0x176e40: 0x8f8489e8  lw          $a0, -0x7618($gp)
    ctx->pc = 0x176e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937064)));
    // 0x176e44: 0xc04e748  jal         func_139D20
    ctx->pc = 0x176E44u;
    SET_GPR_U32(ctx, 31, 0x176E4Cu);
    ctx->pc = 0x176E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176E44u;
            // 0x176e48: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176E4Cu; }
        if (ctx->pc != 0x176E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176E4Cu; }
        if (ctx->pc != 0x176E4Cu) { return; }
    }
    ctx->pc = 0x176E4Cu;
label_176e4c:
    // 0x176e4c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x176e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x176e50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x176e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176e54: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x176e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x176e58: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x176e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176e5c: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x176E5Cu;
    SET_GPR_U32(ctx, 31, 0x176E64u);
    ctx->pc = 0x176E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176E5Cu;
            // 0x176e60: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176E64u; }
        if (ctx->pc != 0x176E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176E64u; }
        if (ctx->pc != 0x176E64u) { return; }
    }
    ctx->pc = 0x176E64u;
label_176e64:
    // 0x176e64: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x176e64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x176e68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176e6c: 0x24a56ec0  addiu       $a1, $a1, 0x6EC0
    ctx->pc = 0x176e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28352));
    // 0x176e70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x176e70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176e74: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x176e74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x176e78: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x176E78u;
    SET_GPR_U32(ctx, 31, 0x176E80u);
    ctx->pc = 0x176E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176E78u;
            // 0x176e7c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176E80u; }
        if (ctx->pc != 0x176E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176E80u; }
        if (ctx->pc != 0x176E80u) { return; }
    }
    ctx->pc = 0x176E80u;
label_176e80:
    // 0x176e80: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x176e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x176e84: 0xac620130  sw          $v0, 0x130($v1)
    ctx->pc = 0x176e84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 304), GPR_U32(ctx, 2));
    // 0x176e88: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x176e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x176e8c: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x176e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x176e90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x176E90u;
    {
        const bool branch_taken_0x176e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176E90u;
            // 0x176e94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176e90) {
            ctx->pc = 0x176EA0u;
            goto label_176ea0;
        }
    }
    ctx->pc = 0x176E98u;
    // 0x176e98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x176E98u;
    {
        const bool branch_taken_0x176e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176E98u;
            // 0x176e9c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176e98) {
            ctx->pc = 0x176EACu;
            goto label_176eac;
        }
    }
    ctx->pc = 0x176EA0u;
label_176ea0:
    // 0x176ea0: 0xac70012c  sw          $s0, 0x12C($v1)
    ctx->pc = 0x176ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 300), GPR_U32(ctx, 16));
    // 0x176ea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x176ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_176ea8:
    // 0x176ea8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x176ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_176eac:
    // 0x176eac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x176eacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x176EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176EB0u;
            // 0x176eb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x176EB8u;
}
