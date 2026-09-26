#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPartyCharaMessage__Fiii
// Address: 0x2ab310 - 0x2ab398
void GetPartyCharaMessage__Fiii_0x2ab310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPartyCharaMessage__Fiii_0x2ab310");
#endif

    switch (ctx->pc) {
        case 0x2ab334u: goto label_2ab334;
        default: break;
    }

    ctx->pc = 0x2ab310u;

    // 0x2ab310: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ab310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ab314: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ab314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ab318: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ab318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ab31c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ab31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ab320: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ab320u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab324: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ab324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ab328: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ab328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab32c: 0xc0aad44  jal         func_2AB510
    ctx->pc = 0x2AB32Cu;
    SET_GPR_U32(ctx, 31, 0x2AB334u);
    ctx->pc = 0x2AB330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB32Cu;
            // 0x2ab330: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB510u;
    if (runtime->hasFunction(0x2AB510u)) {
        auto targetFn = runtime->lookupFunction(0x2AB510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB334u; }
        if (ctx->pc != 0x2AB334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyNPCData__Fi_0x2ab510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB334u; }
        if (ctx->pc != 0x2AB334u) { return; }
    }
    ctx->pc = 0x2AB334u;
label_2ab334:
    // 0x2ab334: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AB334u;
    {
        const bool branch_taken_0x2ab334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AB338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB334u;
            // 0x2ab338: 0x3c030035  lui         $v1, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab334) {
            ctx->pc = 0x2AB344u;
            goto label_2ab344;
        }
    }
    ctx->pc = 0x2AB33Cu;
    // 0x2ab33c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2AB33Cu;
    {
        const bool branch_taken_0x2ab33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB33Cu;
            // 0x2ab340: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab33c) {
            ctx->pc = 0x2AB380u;
            goto label_2ab380;
        }
    }
    ctx->pc = 0x2AB344u;
label_2ab344:
    // 0x2ab344: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2ab344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2ab348: 0x24634540  addiu       $v1, $v1, 0x4540
    ctx->pc = 0x2ab348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17728));
    // 0x2ab34c: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x2ab34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2ab350: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x2ab350u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ab354: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x2ab354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2ab358: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ab358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ab35c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ab35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ab360: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ab360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ab364: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2ab364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ab368: 0x16230002  bne         $s1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AB368u;
    {
        const bool branch_taken_0x2ab368 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x2AB36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB368u;
            // 0x2ab36c: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab368) {
            ctx->pc = 0x2AB374u;
            goto label_2ab374;
        }
    }
    ctx->pc = 0x2AB370u;
    // 0x2ab370: 0x26420bb8  addiu       $v0, $s2, 0xBB8
    ctx->pc = 0x2ab370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3000));
label_2ab374:
    // 0x2ab374: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AB374u;
    {
        const bool branch_taken_0x2ab374 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab374) {
            ctx->pc = 0x2AB380u;
            goto label_2ab380;
        }
    }
    ctx->pc = 0x2AB37Cu;
    // 0x2ab37c: 0x24427530  addiu       $v0, $v0, 0x7530
    ctx->pc = 0x2ab37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30000));
label_2ab380:
    // 0x2ab380: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ab380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ab384: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ab384u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ab388: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ab388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab38c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ab38cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab390: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB390u;
            // 0x2ab394: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB398u;
}
