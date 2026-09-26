#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ETCINFO_MALLOC__FP9SPI_STACKi
// Address: 0x2518a0 - 0x251918
void ps2__ETCINFO_MALLOC__FP9SPI_STACKi_0x2518a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ETCINFO_MALLOC__FP9SPI_STACKi_0x2518a0");
#endif

    switch (ctx->pc) {
        case 0x2518bcu: goto label_2518bc;
        case 0x2518e8u: goto label_2518e8;
        case 0x251904u: goto label_251904;
        default: break;
    }

    ctx->pc = 0x2518a0u;

    // 0x2518a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2518a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2518a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2518a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2518a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2518a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2518ac: 0x18a00004  blez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2518ACu;
    {
        const bool branch_taken_0x2518ac = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2518B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2518ACu;
            // 0x2518b0: 0x24100060  addiu       $s0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2518ac) {
            ctx->pc = 0x2518C0u;
            goto label_2518c0;
        }
    }
    ctx->pc = 0x2518B4u;
    // 0x2518b4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2518B4u;
    SET_GPR_U32(ctx, 31, 0x2518BCu);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2518BCu; }
        if (ctx->pc != 0x2518BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2518BCu; }
        if (ctx->pc != 0x2518BCu) { return; }
    }
    ctx->pc = 0x2518BCu;
label_2518bc:
    // 0x2518bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2518bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2518c0:
    // 0x2518c0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2518c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2518c4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2518c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2518c8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2518c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2518cc: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2518ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2518d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2518D0u;
    {
        const bool branch_taken_0x2518d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2518D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2518D0u;
            // 0x2518d4: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2518d0) {
            ctx->pc = 0x2518E0u;
            goto label_2518e0;
        }
    }
    ctx->pc = 0x2518D8u;
    // 0x2518d8: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2518d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2518dc: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2518dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2518e0:
    // 0x2518e0: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2518E0u;
    SET_GPR_U32(ctx, 31, 0x2518E8u);
    ctx->pc = 0x2518E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2518E0u;
            // 0x2518e4: 0x8f8497b0  lw          $a0, -0x6850($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940592)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2518E8u; }
        if (ctx->pc != 0x2518E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2518E8u; }
        if (ctx->pc != 0x2518E8u) { return; }
    }
    ctx->pc = 0x2518E8u;
label_2518e8:
    // 0x2518e8: 0x8f839450  lw          $v1, -0x6BB0($gp)
    ctx->pc = 0x2518e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2518ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2518ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2518f0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2518f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2518f4: 0xa4700004  sh          $s0, 0x4($v1)
    ctx->pc = 0x2518f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 16));
    // 0x2518f8: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2518f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2518fc: 0xc08aab0  jal         func_22AAC0
    ctx->pc = 0x2518FCu;
    SET_GPR_U32(ctx, 31, 0x251904u);
    ctx->pc = 0x251900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2518FCu;
            // 0x251900: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AAC0u;
    if (runtime->hasFunction(0x22AAC0u)) {
        auto targetFn = runtime->lookupFunction(0x22AAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251904u; }
        if (ctx->pc != 0x251904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EtcTblClear__14CPosDataManageFii_0x22aac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251904u; }
        if (ctx->pc != 0x251904u) { return; }
    }
    ctx->pc = 0x251904u;
label_251904:
    // 0x251904: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x251904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x251908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25190c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25190cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251910: 0x3e00008  jr          $ra
    ctx->pc = 0x251910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251910u;
            // 0x251914: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x251918u;
}
