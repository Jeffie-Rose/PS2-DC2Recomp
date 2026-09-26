#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: KillMonsterCount__Fii
// Address: 0x1a1110 - 0x1a1174
void KillMonsterCount__Fii_0x1a1110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KillMonsterCount__Fii_0x1a1110");
#endif

    switch (ctx->pc) {
        case 0x1a112cu: goto label_1a112c;
        case 0x1a1158u: goto label_1a1158;
        default: break;
    }

    ctx->pc = 0x1a1110u;

    // 0x1a1110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a1110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a1114: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a1114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a1118: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a1118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a111c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a111cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a1120: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a1120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1124: 0xc064220  jal         func_190880
    ctx->pc = 0x1A1124u;
    SET_GPR_U32(ctx, 31, 0x1A112Cu);
    ctx->pc = 0x1A1128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1124u;
            // 0x1a1128: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A112Cu; }
        if (ctx->pc != 0x1A112Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A112Cu; }
        if (ctx->pc != 0x1A112Cu) { return; }
    }
    ctx->pc = 0x1A112Cu;
label_1a112c:
    // 0x1a112c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A112Cu;
    {
        const bool branch_taken_0x1a112c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A112Cu;
            // 0x1a1130: 0x3c010006  lui         $at, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a112c) {
            ctx->pc = 0x1A113Cu;
            goto label_1a113c;
        }
    }
    ctx->pc = 0x1A1134u;
    // 0x1a1134: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A1134u;
    {
        const bool branch_taken_0x1a1134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1134u;
            // 0x1a1138: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1134) {
            ctx->pc = 0x1A1160u;
            goto label_1a1160;
        }
    }
    ctx->pc = 0x1A113Cu;
label_1a113c:
    // 0x1a113c: 0x34212ec0  ori         $at, $at, 0x2EC0
    ctx->pc = 0x1a113cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11968);
    // 0x1a1140: 0x412021  addu        $a0, $v0, $at
    ctx->pc = 0x1a1140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1a1144: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A1144u;
    {
        const bool branch_taken_0x1a1144 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1144u;
            // 0x1a1148: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1144) {
            ctx->pc = 0x1A1160u;
            goto label_1a1160;
        }
    }
    ctx->pc = 0x1A114Cu;
    // 0x1a114c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a114cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1150: 0xc0c6af8  jal         func_31ABE0
    ctx->pc = 0x1A1150u;
    SET_GPR_U32(ctx, 31, 0x1A1158u);
    ctx->pc = 0x1A1154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1150u;
            // 0x1a1154: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31ABE0u;
    if (runtime->hasFunction(0x31ABE0u)) {
        auto targetFn = runtime->lookupFunction(0x31ABE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1158u; }
        if (ctx->pc != 0x1A1158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CountKill__12CMonsterBookFii_0x31abe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1158u; }
        if (ctx->pc != 0x1A1158u) { return; }
    }
    ctx->pc = 0x1A1158u;
label_1a1158:
    // 0x1a1158: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1A1158u;
    {
        const bool branch_taken_0x1a1158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1158) {
            ctx->pc = 0x1A1160u;
            goto label_1a1160;
        }
    }
    ctx->pc = 0x1A1160u;
label_1a1160:
    // 0x1a1160: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a1160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1164: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a1164u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1168: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a1168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a116c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A116Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A116Cu;
            // 0x1a1170: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1174u;
}
