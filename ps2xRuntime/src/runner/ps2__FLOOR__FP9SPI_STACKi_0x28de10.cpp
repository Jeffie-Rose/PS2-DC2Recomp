#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _FLOOR__FP9SPI_STACKi
// Address: 0x28de10 - 0x28ded4
void ps2__FLOOR__FP9SPI_STACKi_0x28de10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__FLOOR__FP9SPI_STACKi_0x28de10");
#endif

    switch (ctx->pc) {
        case 0x28de34u: goto label_28de34;
        case 0x28de44u: goto label_28de44;
        case 0x28de78u: goto label_28de78;
        case 0x28de84u: goto label_28de84;
        default: break;
    }

    ctx->pc = 0x28de10u;

    // 0x28de10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28de10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x28de14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28de14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x28de18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28de18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28de1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28de1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28de20: 0x24940008  addiu       $s4, $a0, 0x8
    ctx->pc = 0x28de20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x28de24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28de24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28de28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28de28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28de2c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x28DE2Cu;
    SET_GPR_U32(ctx, 31, 0x28DE34u);
    ctx->pc = 0x28DE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28DE2Cu;
            // 0x28de30: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DE34u; }
        if (ctx->pc != 0x28DE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DE34u; }
        if (ctx->pc != 0x28DE34u) { return; }
    }
    ctx->pc = 0x28DE34u;
label_28de34:
    // 0x28de34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28de34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28de38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28de38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28de3c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x28DE3Cu;
    SET_GPR_U32(ctx, 31, 0x28DE44u);
    ctx->pc = 0x28DE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28DE3Cu;
            // 0x28de40: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DE44u; }
        if (ctx->pc != 0x28DE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DE44u; }
        if (ctx->pc != 0x28DE44u) { return; }
    }
    ctx->pc = 0x28DE44u;
label_28de44:
    // 0x28de44: 0x8f83982c  lw          $v1, -0x67D4($gp)
    ctx->pc = 0x28de44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940716)));
    // 0x28de48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28de48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28de4c: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x28de4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x28de50: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x28de50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x28de54: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x28de54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x28de58: 0x29880  sll         $s3, $v0, 2
    ctx->pc = 0x28de58u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28de5c: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x28de5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x28de60: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x28de60u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x28de64: 0xac302208  sw          $s0, 0x2208($at)
    ctx->pc = 0x28de64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8712), GPR_U32(ctx, 16));
    // 0x28de68: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x28de68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x28de6c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x28DE6Cu;
    {
        const bool branch_taken_0x28de6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DE6Cu;
            // 0x28de70: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28de6c) {
            ctx->pc = 0x28DEB0u;
            goto label_28deb0;
        }
    }
    ctx->pc = 0x28DE74u;
    // 0x28de74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28de74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28de78:
    // 0x28de78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28de78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28de7c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x28DE7Cu;
    SET_GPR_U32(ctx, 31, 0x28DE84u);
    ctx->pc = 0x28DE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28DE7Cu;
            // 0x28de80: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DE84u; }
        if (ctx->pc != 0x28DE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DE84u; }
        if (ctx->pc != 0x28DE84u) { return; }
    }
    ctx->pc = 0x28DE84u;
label_28de84:
    // 0x28de84: 0x8f85982c  lw          $a1, -0x67D4($gp)
    ctx->pc = 0x28de84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940716)));
    // 0x28de88: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x28de88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x28de8c: 0x3464220c  ori         $a0, $v1, 0x220C
    ctx->pc = 0x28de8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8716);
    // 0x28de90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28de90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x28de94: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x28de94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x28de98: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x28de98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x28de9c: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x28de9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x28dea0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x28dea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x28dea4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x28dea4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x28dea8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x28DEA8u;
    {
        const bool branch_taken_0x28dea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DEA8u;
            // 0x28deac: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dea8) {
            ctx->pc = 0x28DE78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28de78;
        }
    }
    ctx->pc = 0x28DEB0u;
label_28deb0:
    // 0x28deb0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28deb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28deb4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28deb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28deb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28debc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28debcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28dec0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28dec0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28dec4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28dec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28dec8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28dec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28decc: 0x3e00008  jr          $ra
    ctx->pc = 0x28DECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DECCu;
            // 0x28ded0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28DED4u;
}
