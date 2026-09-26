#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsBroken__13CGameDataUsedFv
// Address: 0x198550 - 0x198594
void IsBroken__13CGameDataUsedFv_0x198550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsBroken__13CGameDataUsedFv_0x198550");
#endif

    switch (ctx->pc) {
        case 0x198570u: goto label_198570;
        default: break;
    }

    ctx->pc = 0x198550u;

    // 0x198550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x198550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x198554: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x198554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x198558: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19855c: 0x80830004  lb          $v1, 0x4($a0)
    ctx->pc = 0x19855cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x198560: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x198560u;
    {
        const bool branch_taken_0x198560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x198564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198560u;
            // 0x198564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198560) {
            ctx->pc = 0x198588u;
            goto label_198588;
        }
    }
    ctx->pc = 0x198568u;
    // 0x198568: 0xc066030  jal         func_1980C0
    ctx->pc = 0x198568u;
    SET_GPR_U32(ctx, 31, 0x198570u);
    ctx->pc = 0x19856Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198568u;
            // 0x19856c: 0x27a50018  addiu       $a1, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1980C0u;
    if (runtime->hasFunction(0x1980C0u)) {
        auto targetFn = runtime->lookupFunction(0x1980C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198570u; }
        if (ctx->pc != 0x198570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWHp__13CGameDataUsedFPi_0x1980c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198570u; }
        if (ctx->pc != 0x198570u) { return; }
    }
    ctx->pc = 0x198570u;
label_198570:
    // 0x198570: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198574: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x198574u;
    {
        const bool branch_taken_0x198574 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x198578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198574u;
            // 0x198578: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198574) {
            ctx->pc = 0x198584u;
            goto label_198584;
        }
    }
    ctx->pc = 0x19857Cu;
    // 0x19857c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19857Cu;
    {
        const bool branch_taken_0x19857c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19857Cu;
            // 0x198580: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19857c) {
            ctx->pc = 0x19858Cu;
            goto label_19858c;
        }
    }
    ctx->pc = 0x198584u;
label_198584:
    // 0x198584: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x198584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198588:
    // 0x198588: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19858c:
    // 0x19858c: 0x3e00008  jr          $ra
    ctx->pc = 0x19858Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19858Cu;
            // 0x198590: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198594u;
}
