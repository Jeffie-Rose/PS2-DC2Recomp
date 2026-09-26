#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapCAMERA_INFO__FP9SPI_STACKi
// Address: 0x162df0 - 0x162eb0
void mapCAMERA_INFO__FP9SPI_STACKi_0x162df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapCAMERA_INFO__FP9SPI_STACKi_0x162df0");
#endif

    switch (ctx->pc) {
        case 0x162e00u: goto label_162e00;
        case 0x162e18u: goto label_162e18;
        case 0x162e40u: goto label_162e40;
        case 0x162e4cu: goto label_162e4c;
        case 0x162e6cu: goto label_162e6c;
        case 0x162e88u: goto label_162e88;
        case 0x162e98u: goto label_162e98;
        default: break;
    }

    ctx->pc = 0x162df0u;

    // 0x162df0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x162df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x162df4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x162df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x162df8: 0xc058720  jal         func_161C80
    ctx->pc = 0x162DF8u;
    SET_GPR_U32(ctx, 31, 0x162E00u);
    ctx->pc = 0x162DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162DF8u;
            // 0x162dfc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161C80u;
    if (runtime->hasFunction(0x161C80u)) {
        auto targetFn = runtime->lookupFunction(0x161C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162E00u; }
        if (ctx->pc != 0x162E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsAddMode__Fv_0x161c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162E00u; }
        if (ctx->pc != 0x162E00u) { return; }
    }
    ctx->pc = 0x162E00u;
label_162e00:
    // 0x162e00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x162E00u;
    {
        const bool branch_taken_0x162e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162E00u;
            // 0x162e04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162e00) {
            ctx->pc = 0x162E10u;
            goto label_162e10;
        }
    }
    ctx->pc = 0x162E08u;
    // 0x162e08: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x162E08u;
    {
        const bool branch_taken_0x162e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162E08u;
            // 0x162e0c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162e08) {
            ctx->pc = 0x162EA4u;
            goto label_162ea4;
        }
    }
    ctx->pc = 0x162E10u;
label_162e10:
    // 0x162e10: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x162E10u;
    SET_GPR_U32(ctx, 31, 0x162E18u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162E18u; }
        if (ctx->pc != 0x162E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162E18u; }
        if (ctx->pc != 0x162E18u) { return; }
    }
    ctx->pc = 0x162E18u;
label_162e18:
    // 0x162e18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162e18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162e1c: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x162E1Cu;
    {
        const bool branch_taken_0x162e1c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x162E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162E1Cu;
            // 0x162e20: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162e1c) {
            ctx->pc = 0x162E2Cu;
            goto label_162e2c;
        }
    }
    ctx->pc = 0x162E24u;
    // 0x162e24: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x162E24u;
    {
        const bool branch_taken_0x162e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162E24u;
            // 0x162e28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162e24) {
            ctx->pc = 0x162EA0u;
            goto label_162ea0;
        }
    }
    ctx->pc = 0x162E2Cu;
label_162e2c:
    // 0x162e2c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x162e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x162e30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x162e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x162e34: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x162e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x162e38: 0xc05878c  jal         func_161E30
    ctx->pc = 0x162E38u;
    SET_GPR_U32(ctx, 31, 0x162E40u);
    ctx->pc = 0x162E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162E38u;
            // 0x162e3c: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161E30u;
    if (runtime->hasFunction(0x161E30u)) {
        auto targetFn = runtime->lookupFunction(0x161E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162E40u; }
        if (ctx->pc != 0x162E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        algn16_size__FUi_0x161e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162E40u; }
        if (ctx->pc != 0x162E40u) { return; }
    }
    ctx->pc = 0x162E40u;
label_162e40:
    // 0x162e40: 0x8f848920  lw          $a0, -0x76E0($gp)
    ctx->pc = 0x162e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x162e44: 0xc04e748  jal         func_139D20
    ctx->pc = 0x162E44u;
    SET_GPR_U32(ctx, 31, 0x162E4Cu);
    ctx->pc = 0x162E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162E44u;
            // 0x162e48: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162E4Cu; }
        if (ctx->pc != 0x162E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162E4Cu; }
        if (ctx->pc != 0x162E4Cu) { return; }
    }
    ctx->pc = 0x162E4Cu;
label_162e4c:
    // 0x162e4c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x162e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x162e50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x162e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162e54: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x162e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x162e58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x162e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x162e5c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x162e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x162e60: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x162e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x162e64: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x162E64u;
    SET_GPR_U32(ctx, 31, 0x162E6Cu);
    ctx->pc = 0x162E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162E64u;
            // 0x162e68: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162E6Cu; }
        if (ctx->pc != 0x162E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162E6Cu; }
        if (ctx->pc != 0x162E6Cu) { return; }
    }
    ctx->pc = 0x162E6Cu;
label_162e6c:
    // 0x162e6c: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x162e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
    // 0x162e70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x162e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162e74: 0x24a52eb0  addiu       $a1, $a1, 0x2EB0
    ctx->pc = 0x162e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11952));
    // 0x162e78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x162e78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162e7c: 0x240700d0  addiu       $a3, $zero, 0xD0
    ctx->pc = 0x162e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x162e80: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x162E80u;
    SET_GPR_U32(ctx, 31, 0x162E88u);
    ctx->pc = 0x162E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162E80u;
            // 0x162e84: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162E88u; }
        if (ctx->pc != 0x162E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162E88u; }
        if (ctx->pc != 0x162E88u) { return; }
    }
    ctx->pc = 0x162E88u;
label_162e88:
    // 0x162e88: 0x8f848914  lw          $a0, -0x76EC($gp)
    ctx->pc = 0x162e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
    // 0x162e8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x162e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162e90: 0xc0572f8  jal         func_15CBE0
    ctx->pc = 0x162E90u;
    SET_GPR_U32(ctx, 31, 0x162E98u);
    ctx->pc = 0x162E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162E90u;
            // 0x162e94: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CBE0u;
    if (runtime->hasFunction(0x15CBE0u)) {
        auto targetFn = runtime->lookupFunction(0x15CBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162E98u; }
        if (ctx->pc != 0x162E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCameraInfoTable__4CMapFP11CCameraInfoi_0x15cbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162E98u; }
        if (ctx->pc != 0x162E98u) { return; }
    }
    ctx->pc = 0x162E98u;
label_162e98:
    // 0x162e98: 0xaf808934  sw          $zero, -0x76CC($gp)
    ctx->pc = 0x162e98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936884), GPR_U32(ctx, 0));
    // 0x162e9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162ea0:
    // 0x162ea0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x162ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_162ea4:
    // 0x162ea4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x162ea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x162EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162EA8u;
            // 0x162eac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162EB0u;
}
