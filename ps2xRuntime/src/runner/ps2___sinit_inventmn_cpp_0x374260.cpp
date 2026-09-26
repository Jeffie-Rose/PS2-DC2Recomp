#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_inventmn.cpp
// Address: 0x374260 - 0x3742a4
void ps2___sinit_inventmn_cpp_0x374260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_inventmn_cpp_0x374260");
#endif

    switch (ctx->pc) {
        case 0x374274u: goto label_374274;
        case 0x374280u: goto label_374280;
        case 0x37428cu: goto label_37428c;
        case 0x374298u: goto label_374298;
        default: break;
    }

    ctx->pc = 0x374260u;

    // 0x374260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374264: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x374264u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x374268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37426c: 0xc04e640  jal         func_139900
    ctx->pc = 0x37426Cu;
    SET_GPR_U32(ctx, 31, 0x374274u);
    ctx->pc = 0x374270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37426Cu;
            // 0x374270: 0x248496e0  addiu       $a0, $a0, -0x6920 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374274u; }
        if (ctx->pc != 0x374274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374274u; }
        if (ctx->pc != 0x374274u) { return; }
    }
    ctx->pc = 0x374274u;
label_374274:
    // 0x374274: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x374274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x374278: 0xc04e640  jal         func_139900
    ctx->pc = 0x374278u;
    SET_GPR_U32(ctx, 31, 0x374280u);
    ctx->pc = 0x37427Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374278u;
            // 0x37427c: 0x24849710  addiu       $a0, $a0, -0x68F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374280u; }
        if (ctx->pc != 0x374280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374280u; }
        if (ctx->pc != 0x374280u) { return; }
    }
    ctx->pc = 0x374280u;
label_374280:
    // 0x374280: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x374280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x374284: 0xc04e640  jal         func_139900
    ctx->pc = 0x374284u;
    SET_GPR_U32(ctx, 31, 0x37428Cu);
    ctx->pc = 0x374288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374284u;
            // 0x374288: 0x24849740  addiu       $a0, $a0, -0x68C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37428Cu; }
        if (ctx->pc != 0x37428Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37428Cu; }
        if (ctx->pc != 0x37428Cu) { return; }
    }
    ctx->pc = 0x37428Cu;
label_37428c:
    // 0x37428c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x37428cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x374290: 0xc04e640  jal         func_139900
    ctx->pc = 0x374290u;
    SET_GPR_U32(ctx, 31, 0x374298u);
    ctx->pc = 0x374294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374290u;
            // 0x374294: 0x2484b7a0  addiu       $a0, $a0, -0x4860 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374298u; }
        if (ctx->pc != 0x374298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374298u; }
        if (ctx->pc != 0x374298u) { return; }
    }
    ctx->pc = 0x374298u;
label_374298:
    // 0x374298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37429c: 0x3e00008  jr          $ra
    ctx->pc = 0x37429Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3742A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37429Cu;
            // 0x3742a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3742A4u;
}
