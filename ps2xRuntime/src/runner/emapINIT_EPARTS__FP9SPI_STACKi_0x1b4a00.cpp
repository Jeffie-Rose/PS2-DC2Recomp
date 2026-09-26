#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: emapINIT_EPARTS__FP9SPI_STACKi
// Address: 0x1b4a00 - 0x1b4a9c
void emapINIT_EPARTS__FP9SPI_STACKi_0x1b4a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emapINIT_EPARTS__FP9SPI_STACKi_0x1b4a00");
#endif

    switch (ctx->pc) {
        case 0x1b4a58u: goto label_1b4a58;
        case 0x1b4a68u: goto label_1b4a68;
        case 0x1b4a74u: goto label_1b4a74;
        default: break;
    }

    ctx->pc = 0x1b4a00u;

    // 0x1b4a00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b4a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b4a04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b4a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b4a08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b4a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b4a0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b4a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b4a10: 0x8f838d44  lw          $v1, -0x72BC($gp)
    ctx->pc = 0x1b4a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937924)));
    // 0x1b4a14: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B4A14u;
    {
        const bool branch_taken_0x1b4a14 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1B4A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4A14u;
            // 0x1b4a18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a14) {
            ctx->pc = 0x1B4A30u;
            goto label_1b4a30;
        }
    }
    ctx->pc = 0x1B4A1Cu;
    // 0x1b4a1c: 0x8f828d3c  lw          $v0, -0x72C4($gp)
    ctx->pc = 0x1b4a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
    // 0x1b4a20: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1b4a20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b4a24: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4A24u;
    {
        const bool branch_taken_0x1b4a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4a24) {
            ctx->pc = 0x1B4A38u;
            goto label_1b4a38;
        }
    }
    ctx->pc = 0x1B4A2Cu;
    // 0x1b4a2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b4a2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4a30:
    // 0x1b4a30: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B4A30u;
    {
        const bool branch_taken_0x1b4a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4A30u;
            // 0x1b4a34: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a30) {
            ctx->pc = 0x1B4A8Cu;
            goto label_1b4a8c;
        }
    }
    ctx->pc = 0x1B4A38u;
label_1b4a38:
    // 0x1b4a38: 0x8f858d4c  lw          $a1, -0x72B4($gp)
    ctx->pc = 0x1b4a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937932)));
    // 0x1b4a3c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4A3Cu;
    {
        const bool branch_taken_0x1b4a3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4A3Cu;
            // 0x1b4a40: 0x31140  sll         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a3c) {
            ctx->pc = 0x1B4A4Cu;
            goto label_1b4a4c;
        }
    }
    ctx->pc = 0x1B4A44u;
    // 0x1b4a44: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1B4A44u;
    {
        const bool branch_taken_0x1b4a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4A44u;
            // 0x1b4a48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a44) {
            ctx->pc = 0x1B4A88u;
            goto label_1b4a88;
        }
    }
    ctx->pc = 0x1B4A4Cu;
label_1b4a4c:
    // 0x1b4a4c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x1b4a4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1b4a50: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1B4A50u;
    SET_GPR_U32(ctx, 31, 0x1B4A58u);
    ctx->pc = 0x1B4A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4A50u;
            // 0x1b4a54: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4A58u; }
        if (ctx->pc != 0x1B4A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4A58u; }
        if (ctx->pc != 0x1B4A58u) { return; }
    }
    ctx->pc = 0x1B4A58u;
label_1b4a58:
    // 0x1b4a58: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b4a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b4a5c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b4a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b4a60: 0xc051928  jal         func_1464A0
    ctx->pc = 0x1B4A60u;
    SET_GPR_U32(ctx, 31, 0x1B4A68u);
    ctx->pc = 0x1B4A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4A60u;
            // 0x1b4a64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4A68u; }
        if (ctx->pc != 0x1B4A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4A68u; }
        if (ctx->pc != 0x1B4A68u) { return; }
    }
    ctx->pc = 0x1B4A68u;
label_1b4a68:
    // 0x1b4a68: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x1b4a68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x1b4a6c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1B4A6Cu;
    SET_GPR_U32(ctx, 31, 0x1B4A74u);
    ctx->pc = 0x1B4A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4A6Cu;
            // 0x1b4a70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4A74u; }
        if (ctx->pc != 0x1B4A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4A74u; }
        if (ctx->pc != 0x1B4A74u) { return; }
    }
    ctx->pc = 0x1B4A74u;
label_1b4a74:
    // 0x1b4a74: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1b4a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1b4a78: 0x8f838d44  lw          $v1, -0x72BC($gp)
    ctx->pc = 0x1b4a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937924)));
    // 0x1b4a7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4a80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b4a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b4a84: 0xaf838d44  sw          $v1, -0x72BC($gp)
    ctx->pc = 0x1b4a84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937924), GPR_U32(ctx, 3));
label_1b4a88:
    // 0x1b4a88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b4a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b4a8c:
    // 0x1b4a8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b4a8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4a90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b4a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4a94: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4A94u;
            // 0x1b4a98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4A9Cu;
}
