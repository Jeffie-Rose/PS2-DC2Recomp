#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_FORM_MALLOC__FP9SPI_STACKi
// Address: 0x2520a0 - 0x25211c
void ps2__MENU_FORM_MALLOC__FP9SPI_STACKi_0x2520a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_FORM_MALLOC__FP9SPI_STACKi_0x2520a0");
#endif

    switch (ctx->pc) {
        case 0x2520b4u: goto label_2520b4;
        case 0x2520dcu: goto label_2520dc;
        case 0x2520e8u: goto label_2520e8;
        case 0x252104u: goto label_252104;
        default: break;
    }

    ctx->pc = 0x2520a0u;

    // 0x2520a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2520a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2520a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2520a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2520a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2520a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2520ac: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2520ACu;
    SET_GPR_U32(ctx, 31, 0x2520B4u);
    ctx->pc = 0x2520B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2520ACu;
            // 0x2520b0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2520B4u; }
        if (ctx->pc != 0x2520B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2520B4u; }
        if (ctx->pc != 0x2520B4u) { return; }
    }
    ctx->pc = 0x2520B4u;
label_2520b4:
    // 0x2520b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2520b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2520b8: 0x289c0  sll         $s1, $v0, 7
    ctx->pc = 0x2520b8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2520bc: 0x3222000f  andi        $v0, $s1, 0xF
    ctx->pc = 0x2520bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x2520c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2520C0u;
    {
        const bool branch_taken_0x2520c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2520C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2520C0u;
            // 0x2520c4: 0x111102  srl         $v0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2520c0) {
            ctx->pc = 0x2520D0u;
            goto label_2520d0;
        }
    }
    ctx->pc = 0x2520C8u;
    // 0x2520c8: 0x111102  srl         $v0, $s1, 4
    ctx->pc = 0x2520c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
    // 0x2520cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2520ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2520d0:
    // 0x2520d0: 0x8f8497b0  lw          $a0, -0x6850($gp)
    ctx->pc = 0x2520d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940592)));
    // 0x2520d4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2520D4u;
    SET_GPR_U32(ctx, 31, 0x2520DCu);
    ctx->pc = 0x2520D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2520D4u;
            // 0x2520d8: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2520DCu; }
        if (ctx->pc != 0x2520DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2520DCu; }
        if (ctx->pc != 0x2520DCu) { return; }
    }
    ctx->pc = 0x2520DCu;
label_2520dc:
    // 0x2520dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2520dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2520e0: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x2520E0u;
    SET_GPR_U32(ctx, 31, 0x2520E8u);
    ctx->pc = 0x2520E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2520E0u;
            // 0x2520e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2520E8u; }
        if (ctx->pc != 0x2520E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2520E8u; }
        if (ctx->pc != 0x2520E8u) { return; }
    }
    ctx->pc = 0x2520E8u;
label_2520e8:
    // 0x2520e8: 0x8f839450  lw          $v1, -0x6BB0($gp)
    ctx->pc = 0x2520e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2520ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2520ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2520f0: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x2520f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x2520f4: 0xa470001c  sh          $s0, 0x1C($v1)
    ctx->pc = 0x2520f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 28), (uint16_t)GPR_U32(ctx, 16));
    // 0x2520f8: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2520f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2520fc: 0xc08abcc  jal         func_22AF30
    ctx->pc = 0x2520FCu;
    SET_GPR_U32(ctx, 31, 0x252104u);
    ctx->pc = 0x252100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2520FCu;
            // 0x252100: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AF30u;
    if (runtime->hasFunction(0x22AF30u)) {
        auto targetFn = runtime->lookupFunction(0x22AF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252104u; }
        if (ctx->pc != 0x252104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormInfoClear__14CPosDataManageFii_0x22af30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252104u; }
        if (ctx->pc != 0x252104u) { return; }
    }
    ctx->pc = 0x252104u;
label_252104:
    // 0x252104: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x252104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252108: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25210c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25210cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252110: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x252110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252114: 0x3e00008  jr          $ra
    ctx->pc = 0x252114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252114u;
            // 0x252118: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25211Cu;
}
