#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_STATUS_ATTR__FP12RS_STACKDATAi
// Address: 0x2ce2f0 - 0x2ce340
void ps2__GET_STATUS_ATTR__FP12RS_STACKDATAi_0x2ce2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_STATUS_ATTR__FP12RS_STACKDATAi_0x2ce2f0");
#endif

    switch (ctx->pc) {
        case 0x2ce318u: goto label_2ce318;
        case 0x2ce320u: goto label_2ce320;
        case 0x2ce32cu: goto label_2ce32c;
        default: break;
    }

    ctx->pc = 0x2ce2f0u;

    // 0x2ce2f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ce2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ce2f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce2f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ce2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ce2fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ce2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ce300: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE300u;
    {
        const bool branch_taken_0x2ce300 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CE304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE300u;
            // 0x2ce304: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce300) {
            ctx->pc = 0x2CE310u;
            goto label_2ce310;
        }
    }
    ctx->pc = 0x2CE308u;
    // 0x2ce308: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2CE308u;
    {
        const bool branch_taken_0x2ce308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE308u;
            // 0x2ce30c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce308) {
            ctx->pc = 0x2CE330u;
            goto label_2ce330;
        }
    }
    ctx->pc = 0x2CE310u;
label_2ce310:
    // 0x2ce310: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x2CE310u;
    SET_GPR_U32(ctx, 31, 0x2CE318u);
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE318u; }
        if (ctx->pc != 0x2CE318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE318u; }
        if (ctx->pc != 0x2CE318u) { return; }
    }
    ctx->pc = 0x2CE318u;
label_2ce318:
    // 0x2ce318: 0xc068140  jal         func_1A0500
    ctx->pc = 0x2CE318u;
    SET_GPR_U32(ctx, 31, 0x2CE320u);
    ctx->pc = 0x2CE31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE318u;
            // 0x2ce31c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0500u;
    if (runtime->hasFunction(0x1A0500u)) {
        auto targetFn = runtime->lookupFunction(0x1A0500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE320u; }
        if (ctx->pc != 0x2CE320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAttr__16CBattleCharaInfoFv_0x1a0500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE320u; }
        if (ctx->pc != 0x2CE320u) { return; }
    }
    ctx->pc = 0x2CE320u;
label_2ce320:
    // 0x2ce320: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ce320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce324: 0xc0b37ac  jal         func_2CDEB0
    ctx->pc = 0x2CE324u;
    SET_GPR_U32(ctx, 31, 0x2CE32Cu);
    ctx->pc = 0x2CE328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE324u;
            // 0x2ce328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEB0u;
    if (runtime->hasFunction(0x2CDEB0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE32Cu; }
        if (ctx->pc != 0x2CE32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2cdeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE32Cu; }
        if (ctx->pc != 0x2CE32Cu) { return; }
    }
    ctx->pc = 0x2CE32Cu;
label_2ce32c:
    // 0x2ce32c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce330:
    // 0x2ce330: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ce330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce334: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ce334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce338: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE338u;
            // 0x2ce33c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE340u;
}
