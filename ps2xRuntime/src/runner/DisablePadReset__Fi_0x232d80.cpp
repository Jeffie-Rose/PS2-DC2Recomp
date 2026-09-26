#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DisablePadReset__Fi
// Address: 0x232d80 - 0x232dec
void DisablePadReset__Fi_0x232d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DisablePadReset__Fi_0x232d80");
#endif

    switch (ctx->pc) {
        case 0x232d94u: goto label_232d94;
        case 0x232da8u: goto label_232da8;
        default: break;
    }

    ctx->pc = 0x232d80u;

    // 0x232d80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x232d84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x232d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x232d88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x232d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x232d8c: 0xc064268  jal         func_1909A0
    ctx->pc = 0x232D8Cu;
    SET_GPR_U32(ctx, 31, 0x232D94u);
    ctx->pc = 0x232D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232D8Cu;
            // 0x232d90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1909A0u;
    if (runtime->hasFunction(0x1909A0u)) {
        auto targetFn = runtime->lookupFunction(0x1909A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232D94u; }
        if (ctx->pc != 0x232D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowLoopNo__Fv_0x1909a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232D94u; }
        if (ctx->pc != 0x232D94u) { return; }
    }
    ctx->pc = 0x232D94u;
label_232d94:
    // 0x232d94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x232d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x232d98: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x232D98u;
    {
        const bool branch_taken_0x232d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x232d98) {
            ctx->pc = 0x232DDCu;
            goto label_232ddc;
        }
    }
    ctx->pc = 0x232DA0u;
    // 0x232da0: 0xc08caa8  jal         func_232AA0
    ctx->pc = 0x232DA0u;
    SET_GPR_U32(ctx, 31, 0x232DA8u);
    ctx->pc = 0x232AA0u;
    if (runtime->hasFunction(0x232AA0u)) {
        auto targetFn = runtime->lookupFunction(0x232AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232DA8u; }
        if (ctx->pc != 0x232DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_GetBattleAreaScene__Fv_0x232aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232DA8u; }
        if (ctx->pc != 0x232DA8u) { return; }
    }
    ctx->pc = 0x232DA8u;
label_232da8:
    // 0x232da8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x232DA8u;
    {
        const bool branch_taken_0x232da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232da8) {
            ctx->pc = 0x232DDCu;
            goto label_232ddc;
        }
    }
    ctx->pc = 0x232DB0u;
    // 0x232db0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x232DB0u;
    {
        const bool branch_taken_0x232db0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x232db0) {
            ctx->pc = 0x232DC8u;
            goto label_232dc8;
        }
    }
    ctx->pc = 0x232DB8u;
    // 0x232db8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x232db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x232dbc: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x232dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x232dc0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x232DC0u;
    {
        const bool branch_taken_0x232dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232DC0u;
            // 0x232dc4: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232dc0) {
            ctx->pc = 0x232DDCu;
            goto label_232ddc;
        }
    }
    ctx->pc = 0x232DC8u;
label_232dc8:
    // 0x232dc8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x232dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x232dcc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x232dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x232dd0: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x232dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x232dd4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x232dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x232dd8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x232dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_232ddc:
    // 0x232ddc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x232ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232de0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x232de0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232de4: 0x3e00008  jr          $ra
    ctx->pc = 0x232DE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232DE4u;
            // 0x232de8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x232DECu;
}
