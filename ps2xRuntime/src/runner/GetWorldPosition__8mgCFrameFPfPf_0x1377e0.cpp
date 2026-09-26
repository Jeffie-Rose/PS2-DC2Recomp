#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetWorldPosition__8mgCFrameFPfPf
// Address: 0x1377e0 - 0x13782c
void GetWorldPosition__8mgCFrameFPfPf_0x1377e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetWorldPosition__8mgCFrameFPfPf_0x1377e0");
#endif

    switch (ctx->pc) {
        case 0x137808u: goto label_137808;
        case 0x137818u: goto label_137818;
        default: break;
    }

    ctx->pc = 0x1377e0u;

    // 0x1377e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1377e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1377e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1377e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1377e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1377e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1377ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1377ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1377f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1377f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1377f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1377f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1377f8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1377f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1377fc: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x1377fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x137800: 0xc04dc0c  jal         func_137030
    ctx->pc = 0x137800u;
    SET_GPR_U32(ctx, 31, 0x137808u);
    ctx->pc = 0x137804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137800u;
            // 0x137804: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137808u; }
        if (ctx->pc != 0x137808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137808u; }
        if (ctx->pc != 0x137808u) { return; }
    }
    ctx->pc = 0x137808u;
label_137808:
    // 0x137808: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x137808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13780c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13780cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137810: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x137810u;
    SET_GPR_U32(ctx, 31, 0x137818u);
    ctx->pc = 0x137814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137810u;
            // 0x137814: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137818u; }
        if (ctx->pc != 0x137818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137818u; }
        if (ctx->pc != 0x137818u) { return; }
    }
    ctx->pc = 0x137818u;
label_137818:
    // 0x137818: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x137818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13781c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13781cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137820: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x137820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137824: 0x3e00008  jr          $ra
    ctx->pc = 0x137824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137824u;
            // 0x137828: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13782Cu;
}
