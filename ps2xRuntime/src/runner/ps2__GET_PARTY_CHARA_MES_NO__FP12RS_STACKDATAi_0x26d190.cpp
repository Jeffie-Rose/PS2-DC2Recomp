#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_PARTY_CHARA_MES_NO__FP12RS_STACKDATAi
// Address: 0x26d190 - 0x26d220
void ps2__GET_PARTY_CHARA_MES_NO__FP12RS_STACKDATAi_0x26d190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_PARTY_CHARA_MES_NO__FP12RS_STACKDATAi_0x26d190");
#endif

    switch (ctx->pc) {
        case 0x26d1acu: goto label_26d1ac;
        case 0x26d1bcu: goto label_26d1bc;
        case 0x26d1d0u: goto label_26d1d0;
        case 0x26d1e0u: goto label_26d1e0;
        case 0x26d1f4u: goto label_26d1f4;
        case 0x26d204u: goto label_26d204;
        default: break;
    }

    ctx->pc = 0x26d190u;

    // 0x26d190: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26d190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26d194: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26d194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26d198: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26d198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26d19c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26d19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26d1a0: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x26d1a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26d1a4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D1A4u;
    SET_GPR_U32(ctx, 31, 0x26D1ACu);
    ctx->pc = 0x26D1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D1A4u;
            // 0x26d1a8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D1ACu; }
        if (ctx->pc != 0x26D1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D1ACu; }
        if (ctx->pc != 0x26D1ACu) { return; }
    }
    ctx->pc = 0x26D1ACu;
label_26d1ac:
    // 0x26d1ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d1b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26d1b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d1b4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D1B4u;
    SET_GPR_U32(ctx, 31, 0x26D1BCu);
    ctx->pc = 0x26D1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D1B4u;
            // 0x26d1b8: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D1BCu; }
        if (ctx->pc != 0x26D1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D1BCu; }
        if (ctx->pc != 0x26D1BCu) { return; }
    }
    ctx->pc = 0x26D1BCu;
label_26d1bc:
    // 0x26d1bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26d1bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d1c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d1c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26d1c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d1c8: 0xc0aacc4  jal         func_2AB310
    ctx->pc = 0x26D1C8u;
    SET_GPR_U32(ctx, 31, 0x26D1D0u);
    ctx->pc = 0x26D1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D1C8u;
            // 0x26d1cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB310u;
    if (runtime->hasFunction(0x2AB310u)) {
        auto targetFn = runtime->lookupFunction(0x2AB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D1D0u; }
        if (ctx->pc != 0x26D1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaMessage__Fiii_0x2ab310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D1D0u; }
        if (ctx->pc != 0x26D1D0u) { return; }
    }
    ctx->pc = 0x26D1D0u;
label_26d1d0:
    // 0x26d1d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d1d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26d1d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d1d8: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26D1D8u;
    SET_GPR_U32(ctx, 31, 0x26D1E0u);
    ctx->pc = 0x26D1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D1D8u;
            // 0x26d1dc: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D1E0u; }
        if (ctx->pc != 0x26D1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D1E0u; }
        if (ctx->pc != 0x26D1E0u) { return; }
    }
    ctx->pc = 0x26D1E0u;
label_26d1e0:
    // 0x26d1e0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26d1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26d1e4: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26D1E4u;
    {
        const bool branch_taken_0x26d1e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x26D1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D1E4u;
            // 0x26d1e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d1e4) {
            ctx->pc = 0x26D204u;
            goto label_26d204;
        }
    }
    ctx->pc = 0x26D1ECu;
    // 0x26d1ec: 0xc0aad44  jal         func_2AB510
    ctx->pc = 0x26D1ECu;
    SET_GPR_U32(ctx, 31, 0x26D1F4u);
    ctx->pc = 0x2AB510u;
    if (runtime->hasFunction(0x2AB510u)) {
        auto targetFn = runtime->lookupFunction(0x2AB510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D1F4u; }
        if (ctx->pc != 0x26D1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyNPCData__Fi_0x2ab510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D1F4u; }
        if (ctx->pc != 0x26D1F4u) { return; }
    }
    ctx->pc = 0x26D1F4u;
label_26d1f4:
    // 0x26d1f4: 0x80420031  lb          $v0, 0x31($v0)
    ctx->pc = 0x26d1f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 49)));
    // 0x26d1f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d1fc: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26D1FCu;
    SET_GPR_U32(ctx, 31, 0x26D204u);
    ctx->pc = 0x26D200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D1FCu;
            // 0x26d200: 0x24450003  addiu       $a1, $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D204u; }
        if (ctx->pc != 0x26D204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D204u; }
        if (ctx->pc != 0x26D204u) { return; }
    }
    ctx->pc = 0x26D204u;
label_26d204:
    // 0x26d204: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26d204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26d208: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26d208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d20c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26d20cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26d210: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26d210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26d214: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26d214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d218: 0x3e00008  jr          $ra
    ctx->pc = 0x26D218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D218u;
            // 0x26d21c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26D220u;
}
