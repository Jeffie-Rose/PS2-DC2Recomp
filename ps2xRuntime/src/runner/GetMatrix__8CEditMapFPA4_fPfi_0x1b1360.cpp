#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMatrix__8CEditMapFPA4_fPfi
// Address: 0x1b1360 - 0x1b13a4
void GetMatrix__8CEditMapFPA4_fPfi_0x1b1360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMatrix__8CEditMapFPA4_fPfi_0x1b1360");
#endif

    switch (ctx->pc) {
        case 0x1b1380u: goto label_1b1380;
        default: break;
    }

    ctx->pc = 0x1b1360u;

    // 0x1b1360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b1360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b1364: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b1364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b1368: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b1368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b136c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b136cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b1370: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b1370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1374: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1b1374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1378: 0xc06c374  jal         func_1B0DD0
    ctx->pc = 0x1B1378u;
    SET_GPR_U32(ctx, 31, 0x1B1380u);
    ctx->pc = 0x1B137Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1378u;
            // 0x1b137c: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0DD0u;
    if (runtime->hasFunction(0x1B0DD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1380u; }
        if (ctx->pc != 0x1B1380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRotMatrix__8CEditMapFPA4_fi_0x1b0dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1380u; }
        if (ctx->pc != 0x1B1380u) { return; }
    }
    ctx->pc = 0x1B1380u;
label_1b1380:
    // 0x1b1380: 0x7a040000  lq          $a0, 0x0($s0)
    ctx->pc = 0x1b1380u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b1384: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b1384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b1388: 0x7e240030  sq          $a0, 0x30($s1)
    ctx->pc = 0x1b1388u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 4));
    // 0x1b138c: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x1b138cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x1b1390: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b1390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1394: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b1394u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1398: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b1398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b139c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B139Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B13A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B139Cu;
            // 0x1b13a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B13A4u;
}
