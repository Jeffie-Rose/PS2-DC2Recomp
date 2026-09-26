#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SQ_RePlay__6CSoundFi
// Address: 0x189bb0 - 0x189c10
void SQ_RePlay__6CSoundFi_0x189bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SQ_RePlay__6CSoundFi_0x189bb0");
#endif

    switch (ctx->pc) {
        case 0x189bf4u: goto label_189bf4;
        case 0x189c00u: goto label_189c00;
        default: break;
    }

    ctx->pc = 0x189bb0u;

    // 0x189bb0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x189bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x189bb4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x189bb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x189bb8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x189bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x189bbc: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x189bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x189bc0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x189bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x189bc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x189bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x189bc8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x189bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x189bcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x189bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x189bd0: 0x24632484  addiu       $v1, $v1, 0x2484
    ctx->pc = 0x189bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9348));
    // 0x189bd4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x189bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x189bd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x189bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x189bdc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x189bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x189be0: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x189BE0u;
    {
        const bool branch_taken_0x189be0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x189BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189BE0u;
            // 0x189be4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189be0) {
            ctx->pc = 0x189C00u;
            goto label_189c00;
        }
    }
    ctx->pc = 0x189BE8u;
    // 0x189be8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x189be8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x189bec: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x189BECu;
    SET_GPR_U32(ctx, 31, 0x189BF4u);
    ctx->pc = 0x189BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189BECu;
            // 0x189bf0: 0x24844790  addiu       $a0, $a0, 0x4790 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189BF4u; }
        if (ctx->pc != 0x189BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189BF4u; }
        if (ctx->pc != 0x189BF4u) { return; }
    }
    ctx->pc = 0x189BF4u;
label_189bf4:
    // 0x189bf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189bf8: 0xc062c94  jal         func_18B250
    ctx->pc = 0x189BF8u;
    SET_GPR_U32(ctx, 31, 0x189C00u);
    ctx->pc = 0x189BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189BF8u;
            // 0x189bfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B250u;
    if (runtime->hasFunction(0x18B250u)) {
        auto targetFn = runtime->lookupFunction(0x18B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189C00u; }
        if (ctx->pc != 0x189C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezMidi__Fii_0x18b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189C00u; }
        if (ctx->pc != 0x189C00u) { return; }
    }
    ctx->pc = 0x189C00u;
label_189c00:
    // 0x189c00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x189c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189c04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x189c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189c08: 0x3e00008  jr          $ra
    ctx->pc = 0x189C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189C08u;
            // 0x189c0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x189C10u;
}
