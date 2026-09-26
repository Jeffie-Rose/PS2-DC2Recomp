#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ATRAMIRIA_ON_OFF__FP12RS_STACKDATAi
// Address: 0x27d070 - 0x27d0d8
void ps2__ATRAMIRIA_ON_OFF__FP12RS_STACKDATAi_0x27d070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ATRAMIRIA_ON_OFF__FP12RS_STACKDATAi_0x27d070");
#endif

    switch (ctx->pc) {
        case 0x27d088u: goto label_27d088;
        case 0x27d098u: goto label_27d098;
        case 0x27d0a4u: goto label_27d0a4;
        case 0x27d0b0u: goto label_27d0b0;
        case 0x27d0c0u: goto label_27d0c0;
        default: break;
    }

    ctx->pc = 0x27d070u;

    // 0x27d070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27d070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27d074: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27d074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27d078: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27d078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27d07c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x27d07cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x27d080: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27D080u;
    SET_GPR_U32(ctx, 31, 0x27D088u);
    ctx->pc = 0x27D084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D080u;
            // 0x27d084: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D088u; }
        if (ctx->pc != 0x27D088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D088u; }
        if (ctx->pc != 0x27D088u) { return; }
    }
    ctx->pc = 0x27D088u;
label_27d088:
    // 0x27d088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27d088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d08c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27d08cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d090: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27D090u;
    SET_GPR_U32(ctx, 31, 0x27D098u);
    ctx->pc = 0x27D094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D090u;
            // 0x27d094: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D098u; }
        if (ctx->pc != 0x27D098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D098u; }
        if (ctx->pc != 0x27D098u) { return; }
    }
    ctx->pc = 0x27D098u;
label_27d098:
    // 0x27d098: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27d098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d09c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27D09Cu;
    SET_GPR_U32(ctx, 31, 0x27D0A4u);
    ctx->pc = 0x27D0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D09Cu;
            // 0x27d0a0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D0A4u; }
        if (ctx->pc != 0x27D0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D0A4u; }
        if (ctx->pc != 0x27D0A4u) { return; }
    }
    ctx->pc = 0x27D0A4u;
label_27d0a4:
    // 0x27d0a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27d0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d0a8: 0xc0956d4  jal         func_255B50
    ctx->pc = 0x27D0A8u;
    SET_GPR_U32(ctx, 31, 0x27D0B0u);
    ctx->pc = 0x27D0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D0A8u;
            // 0x27d0ac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D0B0u; }
        if (ctx->pc != 0x27D0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D0B0u; }
        if (ctx->pc != 0x27D0B0u) { return; }
    }
    ctx->pc = 0x27D0B0u;
label_27d0b0:
    // 0x27d0b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27d0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d0b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27d0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d0b8: 0xc0b4ff0  jal         func_2D3FC0
    ctx->pc = 0x27D0B8u;
    SET_GPR_U32(ctx, 31, 0x27D0C0u);
    ctx->pc = 0x27D0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D0B8u;
            // 0x27d0bc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D3FC0u;
    if (runtime->hasFunction(0x2D3FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D3FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D0C0u; }
        if (ctx->pc != 0x27D0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AtraMiriaOnOff__FiP11CCharacter2i_0x2d3fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D0C0u; }
        if (ctx->pc != 0x27D0C0u) { return; }
    }
    ctx->pc = 0x27D0C0u;
label_27d0c0:
    // 0x27d0c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27d0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27d0c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d0c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27d0c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d0cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27d0ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x27D0D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D0D0u;
            // 0x27d0d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D0D8u;
}
