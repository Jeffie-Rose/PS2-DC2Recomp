#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__12CSubGameDataFv
// Address: 0x2f7100 - 0x2f7178
void ps2___ct__12CSubGameDataFv_0x2f7100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__12CSubGameDataFv_0x2f7100");
#endif

    switch (ctx->pc) {
        case 0x2f711cu: goto label_2f711c;
        case 0x2f7120u: goto label_2f7120;
        case 0x2f7128u: goto label_2f7128;
        case 0x2f7148u: goto label_2f7148;
        case 0x2f7150u: goto label_2f7150;
        case 0x2f7158u: goto label_2f7158;
        case 0x2f7160u: goto label_2f7160;
        default: break;
    }

    ctx->pc = 0x2f7100u;

    // 0x2f7100: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f7100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f7104: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f7104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f7108: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f7108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f710c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f710cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7110: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f7110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f7114: 0xc0bdaec  jal         func_2F6BB0
    ctx->pc = 0x2F7114u;
    SET_GPR_U32(ctx, 31, 0x2F711Cu);
    ctx->pc = 0x2F7118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7114u;
            // 0x2f7118: 0x26240100  addiu       $a0, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BB0u;
    if (runtime->hasFunction(0x2F6BB0u)) {
        auto targetFn = runtime->lookupFunction(0x2F6BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F711Cu; }
        if (ctx->pc != 0x2F711Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CSphidaDataFv_0x2f6bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F711Cu; }
        if (ctx->pc != 0x2F711Cu) { return; }
    }
    ctx->pc = 0x2F711Cu;
label_2f711c:
    // 0x2f711c: 0x26301970  addiu       $s0, $s1, 0x1970
    ctx->pc = 0x2f711cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 6512));
label_2f7120:
    // 0x2f7120: 0xc065c24  jal         func_197090
    ctx->pc = 0x2F7120u;
    SET_GPR_U32(ctx, 31, 0x2F7128u);
    ctx->pc = 0x2F7124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7120u;
            // 0x2f7124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7128u; }
        if (ctx->pc != 0x2F7128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7128u; }
        if (ctx->pc != 0x2F7128u) { return; }
    }
    ctx->pc = 0x2F7128u;
label_2f7128:
    // 0x2f7128: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x2f7128u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2f712c: 0x26224170  addiu       $v0, $s1, 0x4170
    ctx->pc = 0x2f712cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16752));
    // 0x2f7130: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2f7130u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f7134: 0x0  nop
    ctx->pc = 0x2f7134u;
    // NOP
    // 0x2f7138: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F7138u;
    {
        const bool branch_taken_0x2f7138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7138) {
            ctx->pc = 0x2F7120u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f7120;
        }
    }
    ctx->pc = 0x2F7140u;
    // 0x2f7140: 0xc0bdc04  jal         func_2F7010
    ctx->pc = 0x2F7140u;
    SET_GPR_U32(ctx, 31, 0x2F7148u);
    ctx->pc = 0x2F7144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7140u;
            // 0x2f7144: 0x26241948  addiu       $a0, $s1, 0x1948 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 6472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7010u;
    if (runtime->hasFunction(0x2F7010u)) {
        auto targetFn = runtime->lookupFunction(0x2F7010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7148u; }
        if (ctx->pc != 0x2F7148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12CGyoRaceDataFv_0x2f7010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7148u; }
        if (ctx->pc != 0x2F7148u) { return; }
    }
    ctx->pc = 0x2F7148u;
label_2f7148:
    // 0x2f7148: 0xc0bdc60  jal         func_2F7180
    ctx->pc = 0x2F7148u;
    SET_GPR_U32(ctx, 31, 0x2F7150u);
    ctx->pc = 0x2F714Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7148u;
            // 0x2f714c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7180u;
    if (runtime->hasFunction(0x2F7180u)) {
        auto targetFn = runtime->lookupFunction(0x2F7180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7150u; }
        if (ctx->pc != 0x2F7150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12CSubGameDataFv_0x2f7180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7150u; }
        if (ctx->pc != 0x2F7150u) { return; }
    }
    ctx->pc = 0x2F7150u;
label_2f7150:
    // 0x2f7150: 0xc0bdaec  jal         func_2F6BB0
    ctx->pc = 0x2F7150u;
    SET_GPR_U32(ctx, 31, 0x2F7158u);
    ctx->pc = 0x2F7154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7150u;
            // 0x2f7154: 0x26240100  addiu       $a0, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BB0u;
    if (runtime->hasFunction(0x2F6BB0u)) {
        auto targetFn = runtime->lookupFunction(0x2F6BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7158u; }
        if (ctx->pc != 0x2F7158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CSphidaDataFv_0x2f6bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7158u; }
        if (ctx->pc != 0x2F7158u) { return; }
    }
    ctx->pc = 0x2F7158u;
label_2f7158:
    // 0x2f7158: 0xc0bdc04  jal         func_2F7010
    ctx->pc = 0x2F7158u;
    SET_GPR_U32(ctx, 31, 0x2F7160u);
    ctx->pc = 0x2F715Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7158u;
            // 0x2f715c: 0x26241948  addiu       $a0, $s1, 0x1948 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 6472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7010u;
    if (runtime->hasFunction(0x2F7010u)) {
        auto targetFn = runtime->lookupFunction(0x2F7010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7160u; }
        if (ctx->pc != 0x2F7160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12CGyoRaceDataFv_0x2f7010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7160u; }
        if (ctx->pc != 0x2F7160u) { return; }
    }
    ctx->pc = 0x2F7160u;
label_2f7160:
    // 0x2f7160: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2f7160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7164: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f7164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7168: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f7168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f716c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f716cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f7170: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7170u;
            // 0x2f7174: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F7178u;
}
