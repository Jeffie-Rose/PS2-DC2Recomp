#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TexAnimeOff__17mgCTextureManagerFiPc
// Address: 0x12efe0 - 0x12f048
void TexAnimeOff__17mgCTextureManagerFiPc_0x12efe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TexAnimeOff__17mgCTextureManagerFiPc_0x12efe0");
#endif

    switch (ctx->pc) {
        case 0x12effcu: goto label_12effc;
        case 0x12f020u: goto label_12f020;
        case 0x12f030u: goto label_12f030;
        default: break;
    }

    ctx->pc = 0x12efe0u;

    // 0x12efe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12efe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12efe4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12efe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12efe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12efe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12efec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12efecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12eff0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12eff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eff4: 0xc04b41c  jal         func_12D070
    ctx->pc = 0x12EFF4u;
    SET_GPR_U32(ctx, 31, 0x12EFFCu);
    ctx->pc = 0x12D070u;
    if (runtime->hasFunction(0x12D070u)) {
        auto targetFn = runtime->lookupFunction(0x12D070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EFFCu; }
        if (ctx->pc != 0x12EFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTextureBlock__17mgCTextureManagerFi_0x12d070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EFFCu; }
        if (ctx->pc != 0x12EFFCu) { return; }
    }
    ctx->pc = 0x12EFFCu;
label_12effc:
    // 0x12effc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x12EFFCu;
    {
        const bool branch_taken_0x12effc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12effc) {
            ctx->pc = 0x12F030u;
            goto label_12f030;
        }
    }
    ctx->pc = 0x12F004u;
    // 0x12f004: 0x8c50000c  lw          $s0, 0xC($v0)
    ctx->pc = 0x12f004u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12f008: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12F008u;
    {
        const bool branch_taken_0x12f008 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f008) {
            ctx->pc = 0x12F030u;
            goto label_12f030;
        }
    }
    ctx->pc = 0x12F010u;
    // 0x12f010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f014: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12f014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f018: 0xc04f4c8  jal         func_13D320
    ctx->pc = 0x12F018u;
    SET_GPR_U32(ctx, 31, 0x12F020u);
    ctx->pc = 0x13D320u;
    if (runtime->hasFunction(0x13D320u)) {
        auto targetFn = runtime->lookupFunction(0x13D320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F020u; }
        if (ctx->pc != 0x12F020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchGroupName__15mgCTextureAnimeFPc_0x13d320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F020u; }
        if (ctx->pc != 0x12F020u) { return; }
    }
    ctx->pc = 0x12F020u;
label_12f020:
    // 0x12f020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f024: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12f024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f028: 0xc04f610  jal         func_13D840
    ctx->pc = 0x12F028u;
    SET_GPR_U32(ctx, 31, 0x12F030u);
    ctx->pc = 0x13D840u;
    if (runtime->hasFunction(0x13D840u)) {
        auto targetFn = runtime->lookupFunction(0x13D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F030u; }
        if (ctx->pc != 0x12F030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Disable__15mgCTextureAnimeFi_0x13d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F030u; }
        if (ctx->pc != 0x12F030u) { return; }
    }
    ctx->pc = 0x12F030u;
label_12f030:
    // 0x12f030: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12f030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f034: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12f034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f038: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12f038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f03c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12f03cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12f040: 0x3e00008  jr          $ra
    ctx->pc = 0x12F040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F048u;
}
