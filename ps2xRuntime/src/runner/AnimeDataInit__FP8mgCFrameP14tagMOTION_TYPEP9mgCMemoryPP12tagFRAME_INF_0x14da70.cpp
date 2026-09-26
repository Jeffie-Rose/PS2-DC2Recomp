#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AnimeDataInit__FP8mgCFrameP14tagMOTION_TYPEP9mgCMemoryPP12tagFRAME_INF
// Address: 0x14da70 - 0x14dae8
void AnimeDataInit__FP8mgCFrameP14tagMOTION_TYPEP9mgCMemoryPP12tagFRAME_INF_0x14da70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AnimeDataInit__FP8mgCFrameP14tagMOTION_TYPEP9mgCMemoryPP12tagFRAME_INF_0x14da70");
#endif

    switch (ctx->pc) {
        case 0x14da9cu: goto label_14da9c;
        case 0x14dab4u: goto label_14dab4;
        case 0x14daccu: goto label_14dacc;
        default: break;
    }

    ctx->pc = 0x14da70u;

    // 0x14da70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14da70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14da74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14da74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14da78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14da78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14da7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14da7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14da80: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14da80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14da84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14da84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14da88: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14da88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14da8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14da8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14da90: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x14da90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14da94: 0xc04daa0  jal         func_136A80
    ctx->pc = 0x14DA94u;
    SET_GPR_U32(ctx, 31, 0x14DA9Cu);
    ctx->pc = 0x14DA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DA94u;
            // 0x14da98: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136A80u;
    if (runtime->hasFunction(0x136A80u)) {
        auto targetFn = runtime->lookupFunction(0x136A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DA9Cu; }
        if (ctx->pc != 0x14DA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrameNum__8mgCFrameFv_0x136a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DA9Cu; }
        if (ctx->pc != 0x14DA9Cu) { return; }
    }
    ctx->pc = 0x14DA9Cu;
label_14da9c:
    // 0x14da9c: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x14da9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x14daa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14daa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14daa4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x14daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x14daa8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x14daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x14daac: 0xc04e704  jal         func_139C10
    ctx->pc = 0x14DAACu;
    SET_GPR_U32(ctx, 31, 0x14DAB4u);
    ctx->pc = 0x14DAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DAACu;
            // 0x14dab0: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DAB4u; }
        if (ctx->pc != 0x14DAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DAB4u; }
        if (ctx->pc != 0x14DAB4u) { return; }
    }
    ctx->pc = 0x14DAB4u;
label_14dab4:
    // 0x14dab4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14dab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14dab8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14dab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dabc: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x14dabcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14dac0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14dac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dac4: 0xc0536bc  jal         func_14DAF0
    ctx->pc = 0x14DAC4u;
    SET_GPR_U32(ctx, 31, 0x14DACCu);
    ctx->pc = 0x14DAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DAC4u;
            // 0x14dac8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DAF0u;
    if (runtime->hasFunction(0x14DAF0u)) {
        auto targetFn = runtime->lookupFunction(0x14DAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DACCu; }
        if (ctx->pc != 0x14DACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AnimeDataInit__FP8mgCFrameP14tagMOTION_TYPEP9mgCMemoryP12tagFRAME_INF_0x14daf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DACCu; }
        if (ctx->pc != 0x14DACCu) { return; }
    }
    ctx->pc = 0x14DACCu;
label_14dacc:
    // 0x14dacc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14daccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14dad0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14dad0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14dad4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14dad4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14dad8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14dad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14dadc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14dadcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14dae0: 0x3e00008  jr          $ra
    ctx->pc = 0x14DAE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DAE0u;
            // 0x14dae4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14DAE8u;
}
