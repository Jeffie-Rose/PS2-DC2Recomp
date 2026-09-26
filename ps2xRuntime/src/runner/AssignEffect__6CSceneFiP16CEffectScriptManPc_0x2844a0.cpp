#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AssignEffect__6CSceneFiP16CEffectScriptManPc
// Address: 0x2844a0 - 0x284510
void AssignEffect__6CSceneFiP16CEffectScriptManPc_0x2844a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AssignEffect__6CSceneFiP16CEffectScriptManPc_0x2844a0");
#endif

    switch (ctx->pc) {
        case 0x2844c4u: goto label_2844c4;
        case 0x2844ecu: goto label_2844ec;
        default: break;
    }

    ctx->pc = 0x2844a0u;

    // 0x2844a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2844a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2844a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2844a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2844a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2844a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2844ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2844acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2844b0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2844b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2844b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2844b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2844b8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2844b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2844bc: 0xc0a0d30  jal         func_2834C0
    ctx->pc = 0x2844BCu;
    SET_GPR_U32(ctx, 31, 0x2844C4u);
    ctx->pc = 0x2844C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2844BCu;
            // 0x2844c0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2834C0u;
    if (runtime->hasFunction(0x2834C0u)) {
        auto targetFn = runtime->lookupFunction(0x2834C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2844C4u; }
        if (ctx->pc != 0x2844C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneEffect__6CSceneFi_0x2834c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2844C4u; }
        if (ctx->pc != 0x2844C4u) { return; }
    }
    ctx->pc = 0x2844C4u;
label_2844c4:
    // 0x2844c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2844C4u;
    {
        const bool branch_taken_0x2844c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2844c4) {
            ctx->pc = 0x2844D4u;
            goto label_2844d4;
        }
    }
    ctx->pc = 0x2844CCu;
    // 0x2844cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2844CCu;
    {
        const bool branch_taken_0x2844cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2844D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2844CCu;
            // 0x2844d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2844cc) {
            ctx->pc = 0x2844F8u;
            goto label_2844f8;
        }
    }
    ctx->pc = 0x2844D4u;
label_2844d4:
    // 0x2844d4: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2844D4u;
    {
        const bool branch_taken_0x2844d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2844D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2844D4u;
            // 0x2844d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2844d4) {
            ctx->pc = 0x2844E0u;
            goto label_2844e0;
        }
    }
    ctx->pc = 0x2844DCu;
    // 0x2844dc: 0x27908420  addiu       $s0, $gp, -0x7BE0
    ctx->pc = 0x2844dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935584));
label_2844e0:
    // 0x2844e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2844e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2844e4: 0xc0a0b70  jal         func_282DC0
    ctx->pc = 0x2844E4u;
    SET_GPR_U32(ctx, 31, 0x2844ECu);
    ctx->pc = 0x2844E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2844E4u;
            // 0x2844e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282DC0u;
    if (runtime->hasFunction(0x282DC0u)) {
        auto targetFn = runtime->lookupFunction(0x282DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2844ECu; }
        if (ctx->pc != 0x2844ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignData__12CSceneEffectFP16CEffectScriptManPc_0x282dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2844ECu; }
        if (ctx->pc != 0x2844ECu) { return; }
    }
    ctx->pc = 0x2844ECu;
label_2844ec:
    // 0x2844ec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2844ECu;
    {
        const bool branch_taken_0x2844ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2844F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2844ECu;
            // 0x2844f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2844ec) {
            ctx->pc = 0x2844F8u;
            goto label_2844f8;
        }
    }
    ctx->pc = 0x2844F4u;
    // 0x2844f4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2844f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2844f8:
    // 0x2844f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2844f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2844fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2844fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284500: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x284500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284504: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x284504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284508: 0x3e00008  jr          $ra
    ctx->pc = 0x284508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28450Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284508u;
            // 0x28450c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x284510u;
}
