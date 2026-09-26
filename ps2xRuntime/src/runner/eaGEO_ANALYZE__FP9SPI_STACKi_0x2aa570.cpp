#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: eaGEO_ANALYZE__FP9SPI_STACKi
// Address: 0x2aa570 - 0x2aa5d4
void eaGEO_ANALYZE__FP9SPI_STACKi_0x2aa570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eaGEO_ANALYZE__FP9SPI_STACKi_0x2aa570");
#endif

    switch (ctx->pc) {
        case 0x2aa580u: goto label_2aa580;
        case 0x2aa5c0u: goto label_2aa5c0;
        default: break;
    }

    ctx->pc = 0x2aa570u;

    // 0x2aa570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2aa570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2aa574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aa574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aa578: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2AA578u;
    SET_GPR_U32(ctx, 31, 0x2AA580u);
    ctx->pc = 0x2AA57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA578u;
            // 0x2aa57c: 0xaf809a84  sw          $zero, -0x657C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941316), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA580u; }
        if (ctx->pc != 0x2AA580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA580u; }
        if (ctx->pc != 0x2AA580u) { return; }
    }
    ctx->pc = 0x2AA580u;
label_2aa580:
    // 0x2aa580: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA580u;
    {
        const bool branch_taken_0x2aa580 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2AA584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA580u;
            // 0x2aa584: 0x28430005  slti        $v1, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa580) {
            ctx->pc = 0x2AA590u;
            goto label_2aa590;
        }
    }
    ctx->pc = 0x2AA588u;
    // 0x2aa588: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA588u;
    {
        const bool branch_taken_0x2aa588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA588u;
            // 0x2aa58c: 0x22040  sll         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa588) {
            ctx->pc = 0x2AA598u;
            goto label_2aa598;
        }
    }
    ctx->pc = 0x2AA590u;
label_2aa590:
    // 0x2aa590: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2AA590u;
    {
        const bool branch_taken_0x2aa590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA590u;
            // 0x2aa594: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa590) {
            ctx->pc = 0x2AA5C8u;
            goto label_2aa5c8;
        }
    }
    ctx->pc = 0x2AA598u;
label_2aa598:
    // 0x2aa598: 0x3c0301f0  lui         $v1, 0x1F0
    ctx->pc = 0x2aa598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)496 << 16));
    // 0x2aa59c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2aa59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2aa5a0: 0x24636300  addiu       $v1, $v1, 0x6300
    ctx->pc = 0x2aa5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25344));
    // 0x2aa5a4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2aa5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aa5a8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2aa5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2aa5ac: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2aa5acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2aa5b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2aa5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2aa5b4: 0xaf829a84  sw          $v0, -0x657C($gp)
    ctx->pc = 0x2aa5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941316), GPR_U32(ctx, 2));
    // 0x2aa5b8: 0xc0aa208  jal         func_2A8820
    ctx->pc = 0x2AA5B8u;
    SET_GPR_U32(ctx, 31, 0x2AA5C0u);
    ctx->pc = 0x2AA5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA5B8u;
            // 0x2aa5bc: 0x8f849a84  lw          $a0, -0x657C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941316)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A8820u;
    if (runtime->hasFunction(0x2A8820u)) {
        auto targetFn = runtime->lookupFunction(0x2A8820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA5C0u; }
        if (ctx->pc != 0x2AA5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__14EditAnalyzeSrcFv_0x2a8820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA5C0u; }
        if (ctx->pc != 0x2AA5C0u) { return; }
    }
    ctx->pc = 0x2AA5C0u;
label_2aa5c0:
    // 0x2aa5c0: 0xaf809a88  sw          $zero, -0x6578($gp)
    ctx->pc = 0x2aa5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941320), GPR_U32(ctx, 0));
    // 0x2aa5c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aa5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aa5c8:
    // 0x2aa5c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aa5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA5CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA5CCu;
            // 0x2aa5d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AA5D4u;
}
