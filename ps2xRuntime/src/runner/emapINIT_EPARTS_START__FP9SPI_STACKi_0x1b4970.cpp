#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: emapINIT_EPARTS_START__FP9SPI_STACKi
// Address: 0x1b4970 - 0x1b49f8
void emapINIT_EPARTS_START__FP9SPI_STACKi_0x1b4970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emapINIT_EPARTS_START__FP9SPI_STACKi_0x1b4970");
#endif

    switch (ctx->pc) {
        case 0x1b4984u: goto label_1b4984;
        case 0x1b49b8u: goto label_1b49b8;
        case 0x1b49c4u: goto label_1b49c4;
        default: break;
    }

    ctx->pc = 0x1b4970u;

    // 0x1b4970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b4970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b4974: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b4974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b4978: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b4978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b497c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1B497Cu;
    SET_GPR_U32(ctx, 31, 0x1B4984u);
    ctx->pc = 0x1B4980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B497Cu;
            // 0x1b4980: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4984u; }
        if (ctx->pc != 0x1B4984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4984u; }
        if (ctx->pc != 0x1B4984u) { return; }
    }
    ctx->pc = 0x1B4984u;
label_1b4984:
    // 0x1b4984: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b4984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4988: 0x1e000003  bgtz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4988u;
    {
        const bool branch_taken_0x1b4988 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x1B498Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4988u;
            // 0x1b498c: 0x108940  sll         $s1, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4988) {
            ctx->pc = 0x1B4998u;
            goto label_1b4998;
        }
    }
    ctx->pc = 0x1B4990u;
    // 0x1b4990: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1B4990u;
    {
        const bool branch_taken_0x1b4990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4990u;
            // 0x1b4994: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4990) {
            ctx->pc = 0x1B49E4u;
            goto label_1b49e4;
        }
    }
    ctx->pc = 0x1B4998u;
label_1b4998:
    // 0x1b4998: 0x3222000f  andi        $v0, $s1, 0xF
    ctx->pc = 0x1b4998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x1b499c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B499Cu;
    {
        const bool branch_taken_0x1b499c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B49A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B499Cu;
            // 0x1b49a0: 0x111102  srl         $v0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b499c) {
            ctx->pc = 0x1B49ACu;
            goto label_1b49ac;
        }
    }
    ctx->pc = 0x1B49A4u;
    // 0x1b49a4: 0x111102  srl         $v0, $s1, 4
    ctx->pc = 0x1b49a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
    // 0x1b49a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b49a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b49ac:
    // 0x1b49ac: 0x8f848d20  lw          $a0, -0x72E0($gp)
    ctx->pc = 0x1b49acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937888)));
    // 0x1b49b0: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1B49B0u;
    SET_GPR_U32(ctx, 31, 0x1B49B8u);
    ctx->pc = 0x1B49B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B49B0u;
            // 0x1b49b4: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B49B8u; }
        if (ctx->pc != 0x1B49B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B49B8u; }
        if (ctx->pc != 0x1B49B8u) { return; }
    }
    ctx->pc = 0x1B49B8u;
label_1b49b8:
    // 0x1b49b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b49b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b49bc: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x1B49BCu;
    SET_GPR_U32(ctx, 31, 0x1B49C4u);
    ctx->pc = 0x1B49C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B49BCu;
            // 0x1b49c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B49C4u; }
        if (ctx->pc != 0x1B49C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B49C4u; }
        if (ctx->pc != 0x1B49C4u) { return; }
    }
    ctx->pc = 0x1B49C4u;
label_1b49c4:
    // 0x1b49c4: 0x8f838d1c  lw          $v1, -0x72E4($gp)
    ctx->pc = 0x1b49c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937884)));
    // 0x1b49c8: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x1b49c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x1b49cc: 0x8f838d1c  lw          $v1, -0x72E4($gp)
    ctx->pc = 0x1b49ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937884)));
    // 0x1b49d0: 0xac700010  sw          $s0, 0x10($v1)
    ctx->pc = 0x1b49d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 16));
    // 0x1b49d4: 0xaf828d4c  sw          $v0, -0x72B4($gp)
    ctx->pc = 0x1b49d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937932), GPR_U32(ctx, 2));
    // 0x1b49d8: 0xaf908d3c  sw          $s0, -0x72C4($gp)
    ctx->pc = 0x1b49d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937916), GPR_U32(ctx, 16));
    // 0x1b49dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b49dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b49e0: 0xaf808d44  sw          $zero, -0x72BC($gp)
    ctx->pc = 0x1b49e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937924), GPR_U32(ctx, 0));
label_1b49e4:
    // 0x1b49e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b49e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b49e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b49e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b49ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b49ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b49f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B49F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B49F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B49F0u;
            // 0x1b49f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B49F8u;
}
