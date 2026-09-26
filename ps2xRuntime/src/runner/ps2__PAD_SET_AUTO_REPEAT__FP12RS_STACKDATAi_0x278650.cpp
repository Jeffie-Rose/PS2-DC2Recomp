#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _PAD_SET_AUTO_REPEAT__FP12RS_STACKDATAi
// Address: 0x278650 - 0x2786b4
void ps2__PAD_SET_AUTO_REPEAT__FP12RS_STACKDATAi_0x278650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__PAD_SET_AUTO_REPEAT__FP12RS_STACKDATAi_0x278650");
#endif

    switch (ctx->pc) {
        case 0x278668u: goto label_278668;
        case 0x278678u: goto label_278678;
        case 0x278684u: goto label_278684;
        case 0x27869cu: goto label_27869c;
        default: break;
    }

    ctx->pc = 0x278650u;

    // 0x278650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x278650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x278654: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x278654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x278658: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x278658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27865c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x27865cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x278660: 0xc097e18  jal         func_25F860
    ctx->pc = 0x278660u;
    SET_GPR_U32(ctx, 31, 0x278668u);
    ctx->pc = 0x278664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278660u;
            // 0x278664: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278668u; }
        if (ctx->pc != 0x278668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278668u; }
        if (ctx->pc != 0x278668u) { return; }
    }
    ctx->pc = 0x278668u;
label_278668:
    // 0x278668: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27866c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27866cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278670: 0xc097e18  jal         func_25F860
    ctx->pc = 0x278670u;
    SET_GPR_U32(ctx, 31, 0x278678u);
    ctx->pc = 0x278674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278670u;
            // 0x278674: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278678u; }
        if (ctx->pc != 0x278678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278678u; }
        if (ctx->pc != 0x278678u) { return; }
    }
    ctx->pc = 0x278678u;
label_278678:
    // 0x278678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27867c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27867Cu;
    SET_GPR_U32(ctx, 31, 0x278684u);
    ctx->pc = 0x278680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27867Cu;
            // 0x278680: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278684u; }
        if (ctx->pc != 0x278684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278684u; }
        if (ctx->pc != 0x278684u) { return; }
    }
    ctx->pc = 0x278684u;
label_278684:
    // 0x278684: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x278684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x278688: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x278688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27868c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27868cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278690: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x278690u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278694: 0xc052c2c  jal         func_14B0B0
    ctx->pc = 0x278694u;
    SET_GPR_U32(ctx, 31, 0x27869Cu);
    ctx->pc = 0x278698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278694u;
            // 0x278698: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B0B0u;
    if (runtime->hasFunction(0x14B0B0u)) {
        auto targetFn = runtime->lookupFunction(0x14B0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27869Cu; }
        if (ctx->pc != 0x27869Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAutoRepeat__8CGamePadFiii_0x14b0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27869Cu; }
        if (ctx->pc != 0x27869Cu) { return; }
    }
    ctx->pc = 0x27869Cu;
label_27869c:
    // 0x27869c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27869cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2786a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2786a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2786a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2786a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2786a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2786a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2786ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2786ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2786B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2786ACu;
            // 0x2786b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2786B4u;
}
