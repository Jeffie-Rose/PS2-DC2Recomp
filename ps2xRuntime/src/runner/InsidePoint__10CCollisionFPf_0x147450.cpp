#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InsidePoint__10CCollisionFPf
// Address: 0x147450 - 0x14747c
void InsidePoint__10CCollisionFPf_0x147450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InsidePoint__10CCollisionFPf_0x147450");
#endif

    switch (ctx->pc) {
        case 0x14746cu: goto label_14746c;
        default: break;
    }

    ctx->pc = 0x147450u;

    // 0x147450: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x147450u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147454: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x147454u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x147458: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x147458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14745c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14745cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x147460: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x147460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x147464: 0xc04bc94  jal         func_12F250
    ctx->pc = 0x147464u;
    SET_GPR_U32(ctx, 31, 0x14746Cu);
    ctx->pc = 0x147468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147464u;
            // 0x147468: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F250u;
    if (runtime->hasFunction(0x12F250u)) {
        auto targetFn = runtime->lookupFunction(0x12F250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14746Cu; }
        if (ctx->pc != 0x14746Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgClipBoxVertex__FPfPfPf_0x12f250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14746Cu; }
        if (ctx->pc != 0x14746Cu) { return; }
    }
    ctx->pc = 0x14746Cu;
label_14746c:
    // 0x14746c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14746cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147470: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x147470u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x147474: 0x3e00008  jr          $ra
    ctx->pc = 0x147474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147474u;
            // 0x147478: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14747Cu;
}
