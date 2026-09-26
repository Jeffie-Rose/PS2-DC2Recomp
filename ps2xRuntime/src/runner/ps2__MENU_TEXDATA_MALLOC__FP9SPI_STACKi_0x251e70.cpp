#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_TEXDATA_MALLOC__FP9SPI_STACKi
// Address: 0x251e70 - 0x251ed0
void ps2__MENU_TEXDATA_MALLOC__FP9SPI_STACKi_0x251e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_TEXDATA_MALLOC__FP9SPI_STACKi_0x251e70");
#endif

    switch (ctx->pc) {
        case 0x251e8cu: goto label_251e8c;
        case 0x251eb0u: goto label_251eb0;
        default: break;
    }

    ctx->pc = 0x251e70u;

    // 0x251e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x251e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x251e74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x251e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x251e78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x251e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x251e7c: 0x18a00004  blez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x251E7Cu;
    {
        const bool branch_taken_0x251e7c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x251E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251E7Cu;
            // 0x251e80: 0x24100100  addiu       $s0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251e7c) {
            ctx->pc = 0x251E90u;
            goto label_251e90;
        }
    }
    ctx->pc = 0x251E84u;
    // 0x251e84: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x251E84u;
    SET_GPR_U32(ctx, 31, 0x251E8Cu);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251E8Cu; }
        if (ctx->pc != 0x251E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251E8Cu; }
        if (ctx->pc != 0x251E8Cu) { return; }
    }
    ctx->pc = 0x251E8Cu;
label_251e8c:
    // 0x251e8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x251e8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_251e90:
    // 0x251e90: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x251e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x251e94: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x251e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x251e98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x251E98u;
    {
        const bool branch_taken_0x251e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251E98u;
            // 0x251e9c: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251e98) {
            ctx->pc = 0x251EA8u;
            goto label_251ea8;
        }
    }
    ctx->pc = 0x251EA0u;
    // 0x251ea0: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x251ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x251ea4: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x251ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_251ea8:
    // 0x251ea8: 0xc04e748  jal         func_139D20
    ctx->pc = 0x251EA8u;
    SET_GPR_U32(ctx, 31, 0x251EB0u);
    ctx->pc = 0x251EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251EA8u;
            // 0x251eac: 0x8f8497b0  lw          $a0, -0x6850($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940592)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251EB0u; }
        if (ctx->pc != 0x251EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251EB0u; }
        if (ctx->pc != 0x251EB0u) { return; }
    }
    ctx->pc = 0x251EB0u;
label_251eb0:
    // 0x251eb0: 0x8f839450  lw          $v1, -0x6BB0($gp)
    ctx->pc = 0x251eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x251eb4: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x251eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x251eb8: 0xa4700014  sh          $s0, 0x14($v1)
    ctx->pc = 0x251eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 16));
    // 0x251ebc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x251ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x251ec0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x251ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251ec4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x251ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x251EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251EC8u;
            // 0x251ecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x251ED0u;
}
