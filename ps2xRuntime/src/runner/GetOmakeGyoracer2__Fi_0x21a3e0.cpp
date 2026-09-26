#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetOmakeGyoracer2__Fi
// Address: 0x21a3e0 - 0x21a444
void GetOmakeGyoracer2__Fi_0x21a3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOmakeGyoracer2__Fi_0x21a3e0");
#endif

    switch (ctx->pc) {
        case 0x21a3f0u: goto label_21a3f0;
        case 0x21a40cu: goto label_21a40c;
        default: break;
    }

    ctx->pc = 0x21a3e0u;

    // 0x21a3e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21a3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21a3e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21a3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21a3e8: 0xc0868c8  jal         func_21A320
    ctx->pc = 0x21A3E8u;
    SET_GPR_U32(ctx, 31, 0x21A3F0u);
    ctx->pc = 0x21A320u;
    if (runtime->hasFunction(0x21A320u)) {
        auto targetFn = runtime->lookupFunction(0x21A320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A3F0u; }
        if (ctx->pc != 0x21A3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchOmakeGyoracer__Fi_0x21a320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A3F0u; }
        if (ctx->pc != 0x21A3F0u) { return; }
    }
    ctx->pc = 0x21A3F0u;
label_21a3f0:
    // 0x21a3f0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A3F0u;
    {
        const bool branch_taken_0x21a3f0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x21a3f0) {
            ctx->pc = 0x21A400u;
            goto label_21a400;
        }
    }
    ctx->pc = 0x21A3F8u;
    // 0x21a3f8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x21A3F8u;
    {
        const bool branch_taken_0x21a3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A3F8u;
            // 0x21a3fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a3f8) {
            ctx->pc = 0x21A438u;
            goto label_21a438;
        }
    }
    ctx->pc = 0x21A400u;
label_21a400:
    // 0x21a400: 0x8f849290  lw          $a0, -0x6D70($gp)
    ctx->pc = 0x21a400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
    // 0x21a404: 0xc0bdc30  jal         func_2F70C0
    ctx->pc = 0x21A404u;
    SET_GPR_U32(ctx, 31, 0x21A40Cu);
    ctx->pc = 0x21A408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A404u;
            // 0x21a408: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F70C0u;
    if (runtime->hasFunction(0x2F70C0u)) {
        auto targetFn = runtime->lookupFunction(0x2F70C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A40Cu; }
        if (ctx->pc != 0x21A40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetData__12CGyoRaceDataFi_0x2f70c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A40Cu; }
        if (ctx->pc != 0x21A40Cu) { return; }
    }
    ctx->pc = 0x21A40Cu;
label_21a40c:
    // 0x21a40c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A40Cu;
    {
        const bool branch_taken_0x21a40c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a40c) {
            ctx->pc = 0x21A41Cu;
            goto label_21a41c;
        }
    }
    ctx->pc = 0x21A414u;
    // 0x21a414: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21A414u;
    {
        const bool branch_taken_0x21a414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A414u;
            // 0x21a418: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a414) {
            ctx->pc = 0x21A438u;
            goto label_21a438;
        }
    }
    ctx->pc = 0x21A41Cu;
label_21a41c:
    // 0x21a41c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x21a41cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21a420: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x21a420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21a424: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A424u;
    {
        const bool branch_taken_0x21a424 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21a424) {
            ctx->pc = 0x21A434u;
            goto label_21a434;
        }
    }
    ctx->pc = 0x21A42Cu;
    // 0x21a42c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21A42Cu;
    {
        const bool branch_taken_0x21a42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a42c) {
            ctx->pc = 0x21A438u;
            goto label_21a438;
        }
    }
    ctx->pc = 0x21A434u;
label_21a434:
    // 0x21a434: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21a434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a438:
    // 0x21a438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21a438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a43c: 0x3e00008  jr          $ra
    ctx->pc = 0x21A43Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A43Cu;
            // 0x21a440: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21A444u;
}
