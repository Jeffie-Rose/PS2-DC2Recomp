#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_NOW_PARTY_CHARA__FP12RS_STACKDATAi
// Address: 0x266500 - 0x266568
void ps2__GET_NOW_PARTY_CHARA__FP12RS_STACKDATAi_0x266500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_NOW_PARTY_CHARA__FP12RS_STACKDATAi_0x266500");
#endif

    switch (ctx->pc) {
        case 0x26651cu: goto label_26651c;
        case 0x266544u: goto label_266544;
        case 0x266550u: goto label_266550;
        default: break;
    }

    ctx->pc = 0x266500u;

    // 0x266500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x266500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x266504: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x266504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x266508: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x266508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26650c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26650cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x266510: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x266510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266514: 0xc064220  jal         func_190880
    ctx->pc = 0x266514u;
    SET_GPR_U32(ctx, 31, 0x26651Cu);
    ctx->pc = 0x266518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266514u;
            // 0x266518: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26651Cu; }
        if (ctx->pc != 0x26651Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26651Cu; }
        if (ctx->pc != 0x26651Cu) { return; }
    }
    ctx->pc = 0x26651Cu;
label_26651c:
    // 0x26651c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26651Cu;
    {
        const bool branch_taken_0x26651c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26651Cu;
            // 0x266520: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26651c) {
            ctx->pc = 0x26652Cu;
            goto label_26652c;
        }
    }
    ctx->pc = 0x266524u;
    // 0x266524: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x266524u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x266528: 0x418021  addu        $s0, $v0, $at
    ctx->pc = 0x266528u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_26652c:
    // 0x26652c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26652Cu;
    {
        const bool branch_taken_0x26652c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x266530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26652Cu;
            // 0x266530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26652c) {
            ctx->pc = 0x26653Cu;
            goto label_26653c;
        }
    }
    ctx->pc = 0x266534u;
    // 0x266534: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x266534u;
    {
        const bool branch_taken_0x266534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266534u;
            // 0x266538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266534) {
            ctx->pc = 0x266554u;
            goto label_266554;
        }
    }
    ctx->pc = 0x26653Cu;
label_26653c:
    // 0x26653c: 0xc06724c  jal         func_19C930
    ctx->pc = 0x26653Cu;
    SET_GPR_U32(ctx, 31, 0x266544u);
    ctx->pc = 0x19C930u;
    if (runtime->hasFunction(0x19C930u)) {
        auto targetFn = runtime->lookupFunction(0x19C930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266544u; }
        if (ctx->pc != 0x266544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowPartyCharaID__16CUserDataManagerFv_0x19c930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266544u; }
        if (ctx->pc != 0x266544u) { return; }
    }
    ctx->pc = 0x266544u;
label_266544:
    // 0x266544: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x266544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266548: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x266548u;
    SET_GPR_U32(ctx, 31, 0x266550u);
    ctx->pc = 0x26654Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266548u;
            // 0x26654c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266550u; }
        if (ctx->pc != 0x266550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266550u; }
        if (ctx->pc != 0x266550u) { return; }
    }
    ctx->pc = 0x266550u;
label_266550:
    // 0x266550: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x266550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266554:
    // 0x266554: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x266554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266558: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x266558u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26655c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26655cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266560: 0x3e00008  jr          $ra
    ctx->pc = 0x266560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266560u;
            // 0x266564: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x266568u;
}
