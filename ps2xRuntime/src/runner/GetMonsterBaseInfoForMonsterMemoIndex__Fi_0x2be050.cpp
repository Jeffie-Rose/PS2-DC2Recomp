#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMonsterBaseInfoForMonsterMemoIndex__Fi
// Address: 0x2be050 - 0x2be0a4
void GetMonsterBaseInfoForMonsterMemoIndex__Fi_0x2be050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMonsterBaseInfoForMonsterMemoIndex__Fi_0x2be050");
#endif

    switch (ctx->pc) {
        case 0x2be068u: goto label_2be068;
        case 0x2be06cu: goto label_2be06c;
        default: break;
    }

    ctx->pc = 0x2be050u;

    // 0x2be050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2be050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2be054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2be054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2be058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2be058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2be05c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2be05cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be060: 0xc066a20  jal         func_19A880
    ctx->pc = 0x2BE060u;
    SET_GPR_U32(ctx, 31, 0x2BE068u);
    ctx->pc = 0x2BE064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE060u;
            // 0x2be064: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A880u;
    if (runtime->hasFunction(0x19A880u)) {
        auto targetFn = runtime->lookupFunction(0x19A880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE068u; }
        if (ctx->pc != 0x2BE068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterBaseInfo__Fi_0x19a880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE068u; }
        if (ctx->pc != 0x2BE068u) { return; }
    }
    ctx->pc = 0x2BE068u;
label_2be068:
    // 0x2be068: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2be068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2be06c:
    // 0x2be06c: 0x844300b2  lh          $v1, 0xB2($v0)
    ctx->pc = 0x2be06cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 178)));
    // 0x2be070: 0x14700003  bne         $v1, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BE070u;
    {
        const bool branch_taken_0x2be070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x2be070) {
            ctx->pc = 0x2BE080u;
            goto label_2be080;
        }
    }
    ctx->pc = 0x2BE078u;
    // 0x2be078: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BE078u;
    {
        const bool branch_taken_0x2be078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE078u;
            // 0x2be07c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be078) {
            ctx->pc = 0x2BE098u;
            goto label_2be098;
        }
    }
    ctx->pc = 0x2BE080u;
label_2be080:
    // 0x2be080: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2be080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2be084: 0x2883014a  slti        $v1, $a0, 0x14A
    ctx->pc = 0x2be084u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)330) ? 1 : 0);
    // 0x2be088: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2BE088u;
    {
        const bool branch_taken_0x2be088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE088u;
            // 0x2be08c: 0x244200b8  addiu       $v0, $v0, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be088) {
            ctx->pc = 0x2BE06Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2be06c;
        }
    }
    ctx->pc = 0x2BE090u;
    // 0x2be090: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2be090u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be094: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2be094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2be098:
    // 0x2be098: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2be098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be09c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE09Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE09Cu;
            // 0x2be0a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BE0A4u;
}
