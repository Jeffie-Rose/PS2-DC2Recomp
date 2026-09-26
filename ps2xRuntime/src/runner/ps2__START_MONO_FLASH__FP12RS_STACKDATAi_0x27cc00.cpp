#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _START_MONO_FLASH__FP12RS_STACKDATAi
// Address: 0x27cc00 - 0x27cc48
void ps2__START_MONO_FLASH__FP12RS_STACKDATAi_0x27cc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__START_MONO_FLASH__FP12RS_STACKDATAi_0x27cc00");
#endif

    switch (ctx->pc) {
        case 0x27cc10u: goto label_27cc10;
        case 0x27cc20u: goto label_27cc20;
        case 0x27cc34u: goto label_27cc34;
        default: break;
    }

    ctx->pc = 0x27cc00u;

    // 0x27cc00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27cc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27cc04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27cc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27cc08: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27CC08u;
    SET_GPR_U32(ctx, 31, 0x27CC10u);
    ctx->pc = 0x27CC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CC08u;
            // 0x27cc0c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CC10u; }
        if (ctx->pc != 0x27CC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CC10u; }
        if (ctx->pc != 0x27CC10u) { return; }
    }
    ctx->pc = 0x27CC10u;
label_27cc10:
    // 0x27cc10: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x27cc10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x27cc14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27cc14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cc18: 0xc098318  jal         func_260C60
    ctx->pc = 0x27CC18u;
    SET_GPR_U32(ctx, 31, 0x27CC20u);
    ctx->pc = 0x27CC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CC18u;
            // 0x27cc1c: 0x24842a40  addiu       $a0, $a0, 0x2A40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x260C60u;
    if (runtime->hasFunction(0x260C60u)) {
        auto targetFn = runtime->lookupFunction(0x260C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CC20u; }
        if (ctx->pc != 0x27CC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CaptureMonoFlashScreen__13CScreenEffectFv_0x260c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CC20u; }
        if (ctx->pc != 0x27CC20u) { return; }
    }
    ctx->pc = 0x27CC20u;
label_27cc20:
    // 0x27cc20: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x27cc20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x27cc24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27cc24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cc28: 0x24842a40  addiu       $a0, $a0, 0x2A40
    ctx->pc = 0x27cc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10816));
    // 0x27cc2c: 0xc0983cc  jal         func_260F30
    ctx->pc = 0x27CC2Cu;
    SET_GPR_U32(ctx, 31, 0x27CC34u);
    ctx->pc = 0x27CC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CC2Cu;
            // 0x27cc30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x260F30u;
    if (runtime->hasFunction(0x260F30u)) {
        auto targetFn = runtime->lookupFunction(0x260F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CC34u; }
        if (ctx->pc != 0x27CC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMonoFlashFlag__13CScreenEffectFii_0x260f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CC34u; }
        if (ctx->pc != 0x27CC34u) { return; }
    }
    ctx->pc = 0x27CC34u;
label_27cc34:
    // 0x27cc34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27cc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27cc38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27cc3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27cc3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27cc40: 0x3e00008  jr          $ra
    ctx->pc = 0x27CC40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27CC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CC40u;
            // 0x27cc44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27CC48u;
}
