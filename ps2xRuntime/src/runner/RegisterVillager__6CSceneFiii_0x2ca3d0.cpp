#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RegisterVillager__6CSceneFiii
// Address: 0x2ca3d0 - 0x2ca424
void RegisterVillager__6CSceneFiii_0x2ca3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RegisterVillager__6CSceneFiii_0x2ca3d0");
#endif

    switch (ctx->pc) {
        case 0x2ca3f8u: goto label_2ca3f8;
        case 0x2ca40cu: goto label_2ca40c;
        default: break;
    }

    ctx->pc = 0x2ca3d0u;

    // 0x2ca3d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ca3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ca3d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ca3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ca3d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ca3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ca3dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ca3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ca3e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ca3e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca3e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ca3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ca3e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ca3e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca3ec: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2ca3ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca3f0: 0xc0c65ac  jal         func_3196B0
    ctx->pc = 0x2CA3F0u;
    SET_GPR_U32(ctx, 31, 0x2CA3F8u);
    ctx->pc = 0x2CA3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA3F0u;
            // 0x2ca3f4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3196B0u;
    if (runtime->hasFunction(0x3196B0u)) {
        auto targetFn = runtime->lookupFunction(0x3196B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA3F8u; }
        if (ctx->pc != 0x2CA3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetVlgrPlaceInfo__Fi_0x3196b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA3F8u; }
        if (ctx->pc != 0x2CA3F8u) { return; }
    }
    ctx->pc = 0x2CA3F8u;
label_2ca3f8:
    // 0x2ca3f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ca3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca3fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ca3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca400: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ca400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca404: 0xc0b290c  jal         func_2CA430
    ctx->pc = 0x2CA404u;
    SET_GPR_U32(ctx, 31, 0x2CA40Cu);
    ctx->pc = 0x2CA408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA404u;
            // 0x2ca408: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA430u;
    if (runtime->hasFunction(0x2CA430u)) {
        auto targetFn = runtime->lookupFunction(0x2CA430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA40Cu; }
        if (ctx->pc != 0x2CA40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegisterVillager__6CSceneFiiP18CVillagerPlaceInfo_0x2ca430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA40Cu; }
        if (ctx->pc != 0x2CA40Cu) { return; }
    }
    ctx->pc = 0x2CA40Cu;
label_2ca40c:
    // 0x2ca40c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ca40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ca410: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ca410u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ca414: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ca414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca418: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ca418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca41c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA41Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA41Cu;
            // 0x2ca420: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CA424u;
}
