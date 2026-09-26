#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: voBufGetData__FP5VoBuf
// Address: 0x299ac0 - 0x299b04
void voBufGetData__FP5VoBuf_0x299ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("voBufGetData__FP5VoBuf_0x299ac0");
#endif

    switch (ctx->pc) {
        case 0x299ad0u: goto label_299ad0;
        default: break;
    }

    ctx->pc = 0x299ac0u;

    // 0x299ac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x299ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x299ac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x299ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x299ac8: 0xc0a6688  jal         func_299A20
    ctx->pc = 0x299AC8u;
    SET_GPR_U32(ctx, 31, 0x299AD0u);
    ctx->pc = 0x299A20u;
    if (runtime->hasFunction(0x299A20u)) {
        auto targetFn = runtime->lookupFunction(0x299A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299AD0u; }
        if (ctx->pc != 0x299AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        voBufIsFull__FP5VoBuf_0x299a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299AD0u; }
        if (ctx->pc != 0x299AD0u) { return; }
    }
    ctx->pc = 0x299AD0u;
label_299ad0:
    // 0x299ad0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x299AD0u;
    {
        const bool branch_taken_0x299ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299AD0u;
            // 0x299ad4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299ad0) {
            ctx->pc = 0x299AE0u;
            goto label_299ae0;
        }
    }
    ctx->pc = 0x299AD8u;
    // 0x299ad8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x299AD8u;
    {
        const bool branch_taken_0x299ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299AD8u;
            // 0x299adc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299ad8) {
            ctx->pc = 0x299AFCu;
            goto label_299afc;
        }
    }
    ctx->pc = 0x299AE0u;
label_299ae0:
    // 0x299ae0: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x299ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x299ae4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x299ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x299ae8: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x299ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x299aec: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x299aecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x299af0: 0x31c40  sll         $v1, $v1, 17
    ctx->pc = 0x299af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 17));
    // 0x299af4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x299af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x299af8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x299af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_299afc:
    // 0x299afc: 0x3e00008  jr          $ra
    ctx->pc = 0x299AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299AFCu;
            // 0x299b00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x299B04u;
}
