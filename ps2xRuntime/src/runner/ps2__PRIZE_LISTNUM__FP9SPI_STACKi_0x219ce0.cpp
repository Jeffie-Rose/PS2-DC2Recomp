#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _PRIZE_LISTNUM__FP9SPI_STACKi
// Address: 0x219ce0 - 0x219d44
void ps2__PRIZE_LISTNUM__FP9SPI_STACKi_0x219ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__PRIZE_LISTNUM__FP9SPI_STACKi_0x219ce0");
#endif

    switch (ctx->pc) {
        case 0x219cf0u: goto label_219cf0;
        case 0x219d1cu: goto label_219d1c;
        case 0x219d28u: goto label_219d28;
        default: break;
    }

    ctx->pc = 0x219ce0u;

    // 0x219ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x219ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x219ce4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x219ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x219ce8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x219CE8u;
    SET_GPR_U32(ctx, 31, 0x219CF0u);
    ctx->pc = 0x219CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219CE8u;
            // 0x219cec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219CF0u; }
        if (ctx->pc != 0x219CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219CF0u; }
        if (ctx->pc != 0x219CF0u) { return; }
    }
    ctx->pc = 0x219CF0u;
label_219cf0:
    // 0x219cf0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x219cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x219cf4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x219cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x219cf8: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x219cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x219cfc: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x219cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x219d00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x219D00u;
    {
        const bool branch_taken_0x219d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219D00u;
            // 0x219d04: 0x101102  srl         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d00) {
            ctx->pc = 0x219D10u;
            goto label_219d10;
        }
    }
    ctx->pc = 0x219D08u;
    // 0x219d08: 0x101102  srl         $v0, $s0, 4
    ctx->pc = 0x219d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
    // 0x219d0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x219d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_219d10:
    // 0x219d10: 0x8f849270  lw          $a0, -0x6D90($gp)
    ctx->pc = 0x219d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939248)));
    // 0x219d14: 0xc04e748  jal         func_139D20
    ctx->pc = 0x219D14u;
    SET_GPR_U32(ctx, 31, 0x219D1Cu);
    ctx->pc = 0x219D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219D14u;
            // 0x219d18: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219D1Cu; }
        if (ctx->pc != 0x219D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219D1Cu; }
        if (ctx->pc != 0x219D1Cu) { return; }
    }
    ctx->pc = 0x219D1Cu;
label_219d1c:
    // 0x219d1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219d20: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x219D20u;
    SET_GPR_U32(ctx, 31, 0x219D28u);
    ctx->pc = 0x219D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219D20u;
            // 0x219d24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219D28u; }
        if (ctx->pc != 0x219D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219D28u; }
        if (ctx->pc != 0x219D28u) { return; }
    }
    ctx->pc = 0x219D28u;
label_219d28:
    // 0x219d28: 0xaf829274  sw          $v0, -0x6D8C($gp)
    ctx->pc = 0x219d28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939252), GPR_U32(ctx, 2));
    // 0x219d2c: 0xa7809278  sh          $zero, -0x6D88($gp)
    ctx->pc = 0x219d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939256), (uint16_t)GPR_U32(ctx, 0));
    // 0x219d30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x219d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219d34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x219d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219d38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x219d38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x219D3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219D3Cu;
            // 0x219d40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x219D44u;
}
