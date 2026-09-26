#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: fpFISH_MAP_NUM__FP9SPI_STACKi
// Address: 0x303b30 - 0x303bac
void fpFISH_MAP_NUM__FP9SPI_STACKi_0x303b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fpFISH_MAP_NUM__FP9SPI_STACKi_0x303b30");
#endif

    switch (ctx->pc) {
        case 0x303b40u: goto label_303b40;
        case 0x303b74u: goto label_303b74;
        case 0x303b8cu: goto label_303b8c;
        default: break;
    }

    ctx->pc = 0x303b30u;

    // 0x303b30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x303b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x303b34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x303b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x303b38: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x303B38u;
    SET_GPR_U32(ctx, 31, 0x303B40u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303B40u; }
        if (ctx->pc != 0x303B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303B40u; }
        if (ctx->pc != 0x303B40u) { return; }
    }
    ctx->pc = 0x303B40u;
label_303b40:
    // 0x303b40: 0xaf82a0f0  sw          $v0, -0x5F10($gp)
    ctx->pc = 0x303b40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942960), GPR_U32(ctx, 2));
    // 0x303b44: 0x8f83a0f0  lw          $v1, -0x5F10($gp)
    ctx->pc = 0x303b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942960)));
    // 0x303b48: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x303b48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x303b4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x303b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x303b50: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x303b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x303b54: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x303b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x303b58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x303B58u;
    {
        const bool branch_taken_0x303b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303B58u;
            // 0x303b5c: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303b58) {
            ctx->pc = 0x303B68u;
            goto label_303b68;
        }
    }
    ctx->pc = 0x303B60u;
    // 0x303b60: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x303b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x303b64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x303b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_303b68:
    // 0x303b68: 0x8f84a0f8  lw          $a0, -0x5F08($gp)
    ctx->pc = 0x303b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
    // 0x303b6c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x303B6Cu;
    SET_GPR_U32(ctx, 31, 0x303B74u);
    ctx->pc = 0x303B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303B6Cu;
            // 0x303b70: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303B74u; }
        if (ctx->pc != 0x303B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303B74u; }
        if (ctx->pc != 0x303B74u) { return; }
    }
    ctx->pc = 0x303B74u;
label_303b74:
    // 0x303b74: 0x8f83a0f0  lw          $v1, -0x5F10($gp)
    ctx->pc = 0x303b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942960)));
    // 0x303b78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x303b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303b7c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x303b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x303b80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x303b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x303b84: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x303B84u;
    SET_GPR_U32(ctx, 31, 0x303B8Cu);
    ctx->pc = 0x303B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303B84u;
            // 0x303b88: 0x220c0  sll         $a0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303B8Cu; }
        if (ctx->pc != 0x303B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303B8Cu; }
        if (ctx->pc != 0x303B8Cu) { return; }
    }
    ctx->pc = 0x303B8Cu;
label_303b8c:
    // 0x303b8c: 0xaf82a0f4  sw          $v0, -0x5F0C($gp)
    ctx->pc = 0x303b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942964), GPR_U32(ctx, 2));
    // 0x303b90: 0x8f83a0f4  lw          $v1, -0x5F0C($gp)
    ctx->pc = 0x303b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942964)));
    // 0x303b94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x303b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303b98: 0xaf80a100  sw          $zero, -0x5F00($gp)
    ctx->pc = 0x303b98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942976), GPR_U32(ctx, 0));
    // 0x303b9c: 0xaf83a0fc  sw          $v1, -0x5F04($gp)
    ctx->pc = 0x303b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942972), GPR_U32(ctx, 3));
    // 0x303ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x303ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x303ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x303BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303BA4u;
            // 0x303ba8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303BACu;
}
