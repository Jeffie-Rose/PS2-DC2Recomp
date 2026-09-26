#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetAmbient__13mgRENDER_INFOFPf
// Address: 0x1394b0 - 0x1394e0
void SetAmbient__13mgRENDER_INFOFPf_0x1394b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetAmbient__13mgRENDER_INFOFPf_0x1394b0");
#endif

    switch (ctx->pc) {
        case 0x1394c4u: goto label_1394c4;
        case 0x1394d0u: goto label_1394d0;
        default: break;
    }

    ctx->pc = 0x1394b0u;

    // 0x1394b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1394b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1394b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1394b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1394b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1394b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1394bc: 0xc04e494  jal         func_139250
    ctx->pc = 0x1394BCu;
    SET_GPR_U32(ctx, 31, 0x1394C4u);
    ctx->pc = 0x1394C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1394BCu;
            // 0x1394c0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139250u;
    if (runtime->hasFunction(0x139250u)) {
        auto targetFn = runtime->lookupFunction(0x139250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1394C4u; }
        if (ctx->pc != 0x1394C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetpLightInfo__13mgRENDER_INFOFv_0x139250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1394C4u; }
        if (ctx->pc != 0x1394C4u) { return; }
    }
    ctx->pc = 0x1394C4u;
label_1394c4:
    // 0x1394c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1394c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1394c8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1394C8u;
    SET_GPR_U32(ctx, 31, 0x1394D0u);
    ctx->pc = 0x1394CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1394C8u;
            // 0x1394cc: 0x24440080  addiu       $a0, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1394D0u; }
        if (ctx->pc != 0x1394D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1394D0u; }
        if (ctx->pc != 0x1394D0u) { return; }
    }
    ctx->pc = 0x1394D0u;
label_1394d0:
    // 0x1394d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1394d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1394d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1394d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1394d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1394D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1394DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1394D8u;
            // 0x1394dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1394E0u;
}
