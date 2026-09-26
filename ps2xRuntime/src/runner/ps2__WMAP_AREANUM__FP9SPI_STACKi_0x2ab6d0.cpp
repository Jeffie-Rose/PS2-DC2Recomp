#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _WMAP_AREANUM__FP9SPI_STACKi
// Address: 0x2ab6d0 - 0x2ab72c
void ps2__WMAP_AREANUM__FP9SPI_STACKi_0x2ab6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__WMAP_AREANUM__FP9SPI_STACKi_0x2ab6d0");
#endif

    switch (ctx->pc) {
        case 0x2ab6e0u: goto label_2ab6e0;
        case 0x2ab718u: goto label_2ab718;
        default: break;
    }

    ctx->pc = 0x2ab6d0u;

    // 0x2ab6d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ab6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ab6d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ab6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ab6d8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2AB6D8u;
    SET_GPR_U32(ctx, 31, 0x2AB6E0u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB6E0u; }
        if (ctx->pc != 0x2AB6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB6E0u; }
        if (ctx->pc != 0x2AB6E0u) { return; }
    }
    ctx->pc = 0x2AB6E0u;
label_2ab6e0:
    // 0x2ab6e0: 0xa7829ad0  sh          $v0, -0x6530($gp)
    ctx->pc = 0x2ab6e0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941392), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ab6e4: 0x87839ad0  lh          $v1, -0x6530($gp)
    ctx->pc = 0x2ab6e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941392)));
    // 0x2ab6e8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2ab6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2ab6ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ab6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ab6f0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2ab6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ab6f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ab6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ab6f8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2ab6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ab6fc: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2ab6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2ab700: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AB700u;
    {
        const bool branch_taken_0x2ab700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB700u;
            // 0x2ab704: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab700) {
            ctx->pc = 0x2AB710u;
            goto label_2ab710;
        }
    }
    ctx->pc = 0x2AB708u;
    // 0x2ab708: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2ab708u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2ab70c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2ab70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2ab710:
    // 0x2ab710: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2AB710u;
    SET_GPR_U32(ctx, 31, 0x2AB718u);
    ctx->pc = 0x2AB714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB710u;
            // 0x2ab714: 0x8f849acc  lw          $a0, -0x6534($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941388)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB718u; }
        if (ctx->pc != 0x2AB718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB718u; }
        if (ctx->pc != 0x2AB718u) { return; }
    }
    ctx->pc = 0x2AB718u;
label_2ab718:
    // 0x2ab718: 0xaf829ad4  sw          $v0, -0x652C($gp)
    ctx->pc = 0x2ab718u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941396), GPR_U32(ctx, 2));
    // 0x2ab71c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ab71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab720: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ab720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab724: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB724u;
            // 0x2ab728: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB72Cu;
}
