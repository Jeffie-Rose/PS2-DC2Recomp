#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetAmbient__13mgRENDER_INFOFPf
// Address: 0x1394e0 - 0x139510
void GetAmbient__13mgRENDER_INFOFPf_0x1394e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetAmbient__13mgRENDER_INFOFPf_0x1394e0");
#endif

    switch (ctx->pc) {
        case 0x1394f4u: goto label_1394f4;
        case 0x139500u: goto label_139500;
        default: break;
    }

    ctx->pc = 0x1394e0u;

    // 0x1394e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1394e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1394e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1394e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1394e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1394e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1394ec: 0xc04e494  jal         func_139250
    ctx->pc = 0x1394ECu;
    SET_GPR_U32(ctx, 31, 0x1394F4u);
    ctx->pc = 0x1394F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1394ECu;
            // 0x1394f0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139250u;
    if (runtime->hasFunction(0x139250u)) {
        auto targetFn = runtime->lookupFunction(0x139250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1394F4u; }
        if (ctx->pc != 0x1394F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetpLightInfo__13mgRENDER_INFOFv_0x139250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1394F4u; }
        if (ctx->pc != 0x1394F4u) { return; }
    }
    ctx->pc = 0x1394F4u;
label_1394f4:
    // 0x1394f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1394f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1394f8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1394F8u;
    SET_GPR_U32(ctx, 31, 0x139500u);
    ctx->pc = 0x1394FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1394F8u;
            // 0x1394fc: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139500u; }
        if (ctx->pc != 0x139500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139500u; }
        if (ctx->pc != 0x139500u) { return; }
    }
    ctx->pc = 0x139500u;
label_139500:
    // 0x139500: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x139500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139504: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x139504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139508: 0x3e00008  jr          $ra
    ctx->pc = 0x139508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13950Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139508u;
            // 0x13950c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139510u;
}
