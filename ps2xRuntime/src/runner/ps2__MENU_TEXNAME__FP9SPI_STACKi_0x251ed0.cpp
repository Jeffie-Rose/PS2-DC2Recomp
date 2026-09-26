#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_TEXNAME__FP9SPI_STACKi
// Address: 0x251ed0 - 0x251f30
void ps2__MENU_TEXNAME__FP9SPI_STACKi_0x251ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_TEXNAME__FP9SPI_STACKi_0x251ed0");
#endif

    switch (ctx->pc) {
        case 0x251ee4u: goto label_251ee4;
        case 0x251efcu: goto label_251efc;
        case 0x251f08u: goto label_251f08;
        default: break;
    }

    ctx->pc = 0x251ed0u;

    // 0x251ed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x251ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x251ed4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x251ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x251ed8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x251ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x251edc: 0xc05191c  jal         func_146470
    ctx->pc = 0x251EDCu;
    SET_GPR_U32(ctx, 31, 0x251EE4u);
    ctx->pc = 0x251EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251EDCu;
            // 0x251ee0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251EE4u; }
        if (ctx->pc != 0x251EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251EE4u; }
        if (ctx->pc != 0x251EE4u) { return; }
    }
    ctx->pc = 0x251EE4u;
label_251ee4:
    // 0x251ee4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x251EE4u;
    {
        const bool branch_taken_0x251ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251EE4u;
            // 0x251ee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ee4) {
            ctx->pc = 0x251F00u;
            goto label_251f00;
        }
    }
    ctx->pc = 0x251EECu;
    // 0x251eec: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x251eecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x251ef0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x251ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251ef4: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x251EF4u;
    SET_GPR_U32(ctx, 31, 0x251EFCu);
    ctx->pc = 0x251EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251EF4u;
            // 0x251ef8: 0x2484e340  addiu       $a0, $a0, -0x1CC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251EFCu; }
        if (ctx->pc != 0x251EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251EFCu; }
        if (ctx->pc != 0x251EFCu) { return; }
    }
    ctx->pc = 0x251EFCu;
label_251efc:
    // 0x251efc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x251efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_251f00:
    // 0x251f00: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x251F00u;
    SET_GPR_U32(ctx, 31, 0x251F08u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251F08u; }
        if (ctx->pc != 0x251F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251F08u; }
        if (ctx->pc != 0x251F08u) { return; }
    }
    ctx->pc = 0x251F08u;
label_251f08:
    // 0x251f08: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x251f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x251f0c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x251f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x251f10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x251f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x251f14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x251f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x251f18: 0x8463000c  lh          $v1, 0xC($v1)
    ctx->pc = 0x251f18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x251f1c: 0xa78397ac  sh          $v1, -0x6854($gp)
    ctx->pc = 0x251f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940588), (uint16_t)GPR_U32(ctx, 3));
    // 0x251f20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x251f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251f24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x251f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251f28: 0x3e00008  jr          $ra
    ctx->pc = 0x251F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251F28u;
            // 0x251f2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x251F30u;
}
