#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetHold__12CActionCharaFv
// Address: 0x1711c0 - 0x171210
void SetHold__12CActionCharaFv_0x1711c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetHold__12CActionCharaFv_0x1711c0");
#endif

    switch (ctx->pc) {
        case 0x1711dcu: goto label_1711dc;
        case 0x1711ecu: goto label_1711ec;
        case 0x1711f4u: goto label_1711f4;
        default: break;
    }

    ctx->pc = 0x1711c0u;

    // 0x1711c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1711c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1711c4: 0x24050226  addiu       $a1, $zero, 0x226
    ctx->pc = 0x1711c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    // 0x1711c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1711c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1711cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1711ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1711d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1711d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1711d4: 0xc061cd8  jal         func_187360
    ctx->pc = 0x1711D4u;
    SET_GPR_U32(ctx, 31, 0x1711DCu);
    ctx->pc = 0x1711D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1711D4u;
            // 0x1711d8: 0x260406bc  addiu       $a0, $s0, 0x6BC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1724));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187360u;
    if (runtime->hasFunction(0x187360u)) {
        auto targetFn = runtime->lookupFunction(0x187360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1711DCu; }
        if (ctx->pc != 0x1711DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        check_program__10CRunScriptFi_0x187360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1711DCu; }
        if (ctx->pc != 0x1711DCu) { return; }
    }
    ctx->pc = 0x1711DCu;
label_1711dc:
    // 0x1711dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1711DCu;
    {
        const bool branch_taken_0x1711dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1711E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1711DCu;
            // 0x1711e0: 0x260406bc  addiu       $a0, $s0, 0x6BC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1724));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1711dc) {
            ctx->pc = 0x171200u;
            goto label_171200;
        }
    }
    ctx->pc = 0x1711E4u;
    // 0x1711e4: 0xc061c84  jal         func_187210
    ctx->pc = 0x1711E4u;
    SET_GPR_U32(ctx, 31, 0x1711ECu);
    ctx->pc = 0x1711E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1711E4u;
            // 0x1711e8: 0x24050226  addiu       $a1, $zero, 0x226 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187210u;
    if (runtime->hasFunction(0x187210u)) {
        auto targetFn = runtime->lookupFunction(0x187210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1711ECu; }
        if (ctx->pc != 0x1711ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        run__10CRunScriptFi_0x187210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1711ECu; }
        if (ctx->pc != 0x1711ECu) { return; }
    }
    ctx->pc = 0x1711ECu;
label_1711ec:
    // 0x1711ec: 0xc05aa6c  jal         func_16A9B0
    ctx->pc = 0x1711ECu;
    SET_GPR_U32(ctx, 31, 0x1711F4u);
    ctx->pc = 0x1711F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1711ECu;
            // 0x1711f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A9B0u;
    if (runtime->hasFunction(0x16A9B0u)) {
        auto targetFn = runtime->lookupFunction(0x16A9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1711F4u; }
        if (ctx->pc != 0x1711F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AllDeleteDamage__12CActionCharaFv_0x16a9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1711F4u; }
        if (ctx->pc != 0x1711F4u) { return; }
    }
    ctx->pc = 0x1711F4u;
label_1711f4:
    // 0x1711f4: 0xae000bdc  sw          $zero, 0xBDC($s0)
    ctx->pc = 0x1711f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3036), GPR_U32(ctx, 0));
    // 0x1711f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1711f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1711fc: 0xa6030710  sh          $v1, 0x710($s0)
    ctx->pc = 0x1711fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1808), (uint16_t)GPR_U32(ctx, 3));
label_171200:
    // 0x171200: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x171200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171204: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x171204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171208: 0x3e00008  jr          $ra
    ctx->pc = 0x171208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17120Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171208u;
            // 0x17120c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171210u;
}
