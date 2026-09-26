#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _WMAP_POSNUM__FP9SPI_STACKi
// Address: 0x2ab570 - 0x2ab5c4
void ps2__WMAP_POSNUM__FP9SPI_STACKi_0x2ab570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__WMAP_POSNUM__FP9SPI_STACKi_0x2ab570");
#endif

    switch (ctx->pc) {
        case 0x2ab580u: goto label_2ab580;
        case 0x2ab5b0u: goto label_2ab5b0;
        default: break;
    }

    ctx->pc = 0x2ab570u;

    // 0x2ab570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ab570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ab574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ab574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ab578: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2AB578u;
    SET_GPR_U32(ctx, 31, 0x2AB580u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB580u; }
        if (ctx->pc != 0x2AB580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB580u; }
        if (ctx->pc != 0x2AB580u) { return; }
    }
    ctx->pc = 0x2AB580u;
label_2ab580:
    // 0x2ab580: 0xa7829ad8  sh          $v0, -0x6528($gp)
    ctx->pc = 0x2ab580u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941400), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ab584: 0x87839ad8  lh          $v1, -0x6528($gp)
    ctx->pc = 0x2ab584u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941400)));
    // 0x2ab588: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ab588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ab58c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ab58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ab590: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2ab590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ab594: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2ab594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2ab598: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AB598u;
    {
        const bool branch_taken_0x2ab598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB598u;
            // 0x2ab59c: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab598) {
            ctx->pc = 0x2AB5A8u;
            goto label_2ab5a8;
        }
    }
    ctx->pc = 0x2AB5A0u;
    // 0x2ab5a0: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2ab5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2ab5a4: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2ab5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2ab5a8:
    // 0x2ab5a8: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2AB5A8u;
    SET_GPR_U32(ctx, 31, 0x2AB5B0u);
    ctx->pc = 0x2AB5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB5A8u;
            // 0x2ab5ac: 0x8f849acc  lw          $a0, -0x6534($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941388)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB5B0u; }
        if (ctx->pc != 0x2AB5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB5B0u; }
        if (ctx->pc != 0x2AB5B0u) { return; }
    }
    ctx->pc = 0x2AB5B0u;
label_2ab5b0:
    // 0x2ab5b0: 0xaf829adc  sw          $v0, -0x6524($gp)
    ctx->pc = 0x2ab5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941404), GPR_U32(ctx, 2));
    // 0x2ab5b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ab5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab5b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ab5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB5BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB5BCu;
            // 0x2ab5c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB5C4u;
}
