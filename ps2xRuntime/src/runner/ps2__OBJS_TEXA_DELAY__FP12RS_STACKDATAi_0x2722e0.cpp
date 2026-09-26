#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_TEXA_DELAY__FP12RS_STACKDATAi
// Address: 0x2722e0 - 0x272338
void ps2__OBJS_TEXA_DELAY__FP12RS_STACKDATAi_0x2722e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_TEXA_DELAY__FP12RS_STACKDATAi_0x2722e0");
#endif

    switch (ctx->pc) {
        case 0x2722f4u: goto label_2722f4;
        case 0x272300u: goto label_272300;
        case 0x27230cu: goto label_27230c;
        case 0x272324u: goto label_272324;
        default: break;
    }

    ctx->pc = 0x2722e0u;

    // 0x2722e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2722e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2722e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2722e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2722e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2722e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2722ec: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2722ECu;
    SET_GPR_U32(ctx, 31, 0x2722F4u);
    ctx->pc = 0x2722F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2722ECu;
            // 0x2722f0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2722F4u; }
        if (ctx->pc != 0x2722F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2722F4u; }
        if (ctx->pc != 0x2722F4u) { return; }
    }
    ctx->pc = 0x2722F4u;
label_2722f4:
    // 0x2722f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2722f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2722f8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2722F8u;
    SET_GPR_U32(ctx, 31, 0x272300u);
    ctx->pc = 0x2722FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2722F8u;
            // 0x2722fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272300u; }
        if (ctx->pc != 0x272300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272300u; }
        if (ctx->pc != 0x272300u) { return; }
    }
    ctx->pc = 0x272300u;
label_272300:
    // 0x272300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x272300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272304: 0xc098a44  jal         func_262910
    ctx->pc = 0x272304u;
    SET_GPR_U32(ctx, 31, 0x27230Cu);
    ctx->pc = 0x272308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272304u;
            // 0x272308: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27230Cu; }
        if (ctx->pc != 0x27230Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27230Cu; }
        if (ctx->pc != 0x27230Cu) { return; }
    }
    ctx->pc = 0x27230Cu;
label_27230c:
    // 0x27230c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27230Cu;
    {
        const bool branch_taken_0x27230c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27230Cu;
            // 0x272310: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27230c) {
            ctx->pc = 0x27231Cu;
            goto label_27231c;
        }
    }
    ctx->pc = 0x272314u;
    // 0x272314: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x272314u;
    {
        const bool branch_taken_0x272314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272314u;
            // 0x272318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272314) {
            ctx->pc = 0x272328u;
            goto label_272328;
        }
    }
    ctx->pc = 0x27231Cu;
label_27231c:
    // 0x27231c: 0xc09747c  jal         func_25D1F0
    ctx->pc = 0x27231Cu;
    SET_GPR_U32(ctx, 31, 0x272324u);
    ctx->pc = 0x25D1F0u;
    if (runtime->hasFunction(0x25D1F0u)) {
        auto targetFn = runtime->lookupFunction(0x25D1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272324u; }
        if (ctx->pc != 0x272324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TexAnimeDelay__12CSceneObjSeqFi_0x25d1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272324u; }
        if (ctx->pc != 0x272324u) { return; }
    }
    ctx->pc = 0x272324u;
label_272324:
    // 0x272324: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272328:
    // 0x272328: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x272328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27232c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27232cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272330: 0x3e00008  jr          $ra
    ctx->pc = 0x272330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272330u;
            // 0x272334: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272338u;
}
