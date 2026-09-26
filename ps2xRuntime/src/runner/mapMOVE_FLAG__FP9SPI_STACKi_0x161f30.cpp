#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapMOVE_FLAG__FP9SPI_STACKi
// Address: 0x161f30 - 0x161ff4
void mapMOVE_FLAG__FP9SPI_STACKi_0x161f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapMOVE_FLAG__FP9SPI_STACKi_0x161f30");
#endif

    switch (ctx->pc) {
        case 0x161f60u: goto label_161f60;
        case 0x161f74u: goto label_161f74;
        case 0x161f90u: goto label_161f90;
        case 0x161facu: goto label_161fac;
        case 0x161fc8u: goto label_161fc8;
        default: break;
    }

    ctx->pc = 0x161f30u;

    // 0x161f30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x161f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x161f34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x161f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x161f38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x161f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x161f3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x161f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x161f40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x161f40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161f44: 0x8f848918  lw          $a0, -0x76E8($gp)
    ctx->pc = 0x161f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936856)));
    // 0x161f48: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x161F48u;
    {
        const bool branch_taken_0x161f48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x161F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161F48u;
            // 0x161f4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161f48) {
            ctx->pc = 0x161F58u;
            goto label_161f58;
        }
    }
    ctx->pc = 0x161F50u;
    // 0x161f50: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x161F50u;
    {
        const bool branch_taken_0x161f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161F50u;
            // 0x161f54: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161f50) {
            ctx->pc = 0x161FE4u;
            goto label_161fe4;
        }
    }
    ctx->pc = 0x161F58u;
label_161f58:
    // 0x161f58: 0xc05874c  jal         func_161D30
    ctx->pc = 0x161F58u;
    SET_GPR_U32(ctx, 31, 0x161F60u);
    ctx->pc = 0x161D30u;
    if (runtime->hasFunction(0x161D30u)) {
        auto targetFn = runtime->lookupFunction(0x161D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F60u; }
        if (ctx->pc != 0x161F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pGetData__17CList_9CMapParts_Fv_0x161d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F60u; }
        if (ctx->pc != 0x161F60u) { return; }
    }
    ctx->pc = 0x161F60u;
label_161f60:
    // 0x161f60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161f64: 0xac4002ec  sw          $zero, 0x2EC($v0)
    ctx->pc = 0x161f64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 748), GPR_U32(ctx, 0));
    // 0x161f68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x161f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161f6c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x161F6Cu;
    SET_GPR_U32(ctx, 31, 0x161F74u);
    ctx->pc = 0x161F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161F6Cu;
            // 0x161f70: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F74u; }
        if (ctx->pc != 0x161F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F74u; }
        if (ctx->pc != 0x161F74u) { return; }
    }
    ctx->pc = 0x161F74u;
label_161f74:
    // 0x161f74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161F74u;
    {
        const bool branch_taken_0x161f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161F74u;
            // 0x161f78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161f74) {
            ctx->pc = 0x161F88u;
            goto label_161f88;
        }
    }
    ctx->pc = 0x161F7Cu;
    // 0x161f7c: 0x8e0202ec  lw          $v0, 0x2EC($s0)
    ctx->pc = 0x161f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 748)));
    // 0x161f80: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x161f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x161f84: 0xae0202ec  sw          $v0, 0x2EC($s0)
    ctx->pc = 0x161f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 748), GPR_U32(ctx, 2));
label_161f88:
    // 0x161f88: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x161F88u;
    SET_GPR_U32(ctx, 31, 0x161F90u);
    ctx->pc = 0x161F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161F88u;
            // 0x161f8c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F90u; }
        if (ctx->pc != 0x161F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F90u; }
        if (ctx->pc != 0x161F90u) { return; }
    }
    ctx->pc = 0x161F90u;
label_161f90:
    // 0x161f90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161F90u;
    {
        const bool branch_taken_0x161f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161F90u;
            // 0x161f94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161f90) {
            ctx->pc = 0x161FA4u;
            goto label_161fa4;
        }
    }
    ctx->pc = 0x161F98u;
    // 0x161f98: 0x8e0202ec  lw          $v0, 0x2EC($s0)
    ctx->pc = 0x161f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 748)));
    // 0x161f9c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x161f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x161fa0: 0xae0202ec  sw          $v0, 0x2EC($s0)
    ctx->pc = 0x161fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 748), GPR_U32(ctx, 2));
label_161fa4:
    // 0x161fa4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x161FA4u;
    SET_GPR_U32(ctx, 31, 0x161FACu);
    ctx->pc = 0x161FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161FA4u;
            // 0x161fa8: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161FACu; }
        if (ctx->pc != 0x161FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161FACu; }
        if (ctx->pc != 0x161FACu) { return; }
    }
    ctx->pc = 0x161FACu;
label_161fac:
    // 0x161fac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161FACu;
    {
        const bool branch_taken_0x161fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161FACu;
            // 0x161fb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161fac) {
            ctx->pc = 0x161FC0u;
            goto label_161fc0;
        }
    }
    ctx->pc = 0x161FB4u;
    // 0x161fb4: 0x8e0202ec  lw          $v0, 0x2EC($s0)
    ctx->pc = 0x161fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 748)));
    // 0x161fb8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x161fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x161fbc: 0xae0202ec  sw          $v0, 0x2EC($s0)
    ctx->pc = 0x161fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 748), GPR_U32(ctx, 2));
label_161fc0:
    // 0x161fc0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x161FC0u;
    SET_GPR_U32(ctx, 31, 0x161FC8u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161FC8u; }
        if (ctx->pc != 0x161FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161FC8u; }
        if (ctx->pc != 0x161FC8u) { return; }
    }
    ctx->pc = 0x161FC8u;
label_161fc8:
    // 0x161fc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x161FC8u;
    {
        const bool branch_taken_0x161fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161FC8u;
            // 0x161fcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161fc8) {
            ctx->pc = 0x161FE0u;
            goto label_161fe0;
        }
    }
    ctx->pc = 0x161FD0u;
    // 0x161fd0: 0x8e0202ec  lw          $v0, 0x2EC($s0)
    ctx->pc = 0x161fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 748)));
    // 0x161fd4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x161fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x161fd8: 0xae0202ec  sw          $v0, 0x2EC($s0)
    ctx->pc = 0x161fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 748), GPR_U32(ctx, 2));
    // 0x161fdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161fe0:
    // 0x161fe0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x161fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_161fe4:
    // 0x161fe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x161fe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161fe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x161fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161fec: 0x3e00008  jr          $ra
    ctx->pc = 0x161FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161FECu;
            // 0x161ff0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161FF4u;
}
