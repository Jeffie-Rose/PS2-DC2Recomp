#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StepEffectScript__6CSceneFi
// Address: 0x284570 - 0x284600
void StepEffectScript__6CSceneFi_0x284570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepEffectScript__6CSceneFi_0x284570");
#endif

    switch (ctx->pc) {
        case 0x284590u: goto label_284590;
        case 0x284598u: goto label_284598;
        case 0x2845acu: goto label_2845ac;
        case 0x2845d8u: goto label_2845d8;
        case 0x2845ecu: goto label_2845ec;
        default: break;
    }

    ctx->pc = 0x284570u;

    // 0x284570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x284570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x284574: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x284574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x284578: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x284578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28457c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28457cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x284580: 0x4a10013  bgez        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x284580u;
    {
        const bool branch_taken_0x284580 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x284584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284580u;
            // 0x284584: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284580) {
            ctx->pc = 0x2845D0u;
            goto label_2845d0;
        }
    }
    ctx->pc = 0x284588u;
    // 0x284588: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x284588u;
    {
        const bool branch_taken_0x284588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28458Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284588u;
            // 0x28458c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284588) {
            ctx->pc = 0x2845B4u;
            goto label_2845b4;
        }
    }
    ctx->pc = 0x284590u;
label_284590:
    // 0x284590: 0xc0a1150  jal         func_284540
    ctx->pc = 0x284590u;
    SET_GPR_U32(ctx, 31, 0x284598u);
    ctx->pc = 0x284594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284590u;
            // 0x284594: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284540u;
    if (runtime->hasFunction(0x284540u)) {
        auto targetFn = runtime->lookupFunction(0x284540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284598u; }
        if (ctx->pc != 0x284598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEffect__6CSceneFi_0x284540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284598u; }
        if (ctx->pc != 0x284598u) { return; }
    }
    ctx->pc = 0x284598u;
label_284598:
    // 0x284598: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x284598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28459c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28459Cu;
    {
        const bool branch_taken_0x28459c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28459c) {
            ctx->pc = 0x2845ACu;
            goto label_2845ac;
        }
    }
    ctx->pc = 0x2845A4u;
    // 0x2845a4: 0xc0b8580  jal         func_2E1600
    ctx->pc = 0x2845A4u;
    SET_GPR_U32(ctx, 31, 0x2845ACu);
    ctx->pc = 0x2E1600u;
    if (runtime->hasFunction(0x2E1600u)) {
        auto targetFn = runtime->lookupFunction(0x2E1600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2845ACu; }
        if (ctx->pc != 0x2845ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__16CEffectScriptManFv_0x2e1600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2845ACu; }
        if (ctx->pc != 0x2845ACu) { return; }
    }
    ctx->pc = 0x2845ACu;
label_2845ac:
    // 0x2845ac: 0x0  nop
    ctx->pc = 0x2845acu;
    // NOP
    // 0x2845b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2845b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2845b4:
    // 0x2845b4: 0x0  nop
    ctx->pc = 0x2845b4u;
    // NOP
    // 0x2845b8: 0x8e232aac  lw          $v1, 0x2AAC($s1)
    ctx->pc = 0x2845b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10924)));
    // 0x2845bc: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x2845bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2845c0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2845C0u;
    {
        const bool branch_taken_0x2845c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2845C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2845C0u;
            // 0x2845c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2845c0) {
            ctx->pc = 0x284590u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_284590;
        }
    }
    ctx->pc = 0x2845C8u;
    // 0x2845c8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2845C8u;
    {
        const bool branch_taken_0x2845c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2845CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2845C8u;
            // 0x2845cc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2845c8) {
            ctx->pc = 0x2845F0u;
            goto label_2845f0;
        }
    }
    ctx->pc = 0x2845D0u;
label_2845d0:
    // 0x2845d0: 0xc0a1150  jal         func_284540
    ctx->pc = 0x2845D0u;
    SET_GPR_U32(ctx, 31, 0x2845D8u);
    ctx->pc = 0x284540u;
    if (runtime->hasFunction(0x284540u)) {
        auto targetFn = runtime->lookupFunction(0x284540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2845D8u; }
        if (ctx->pc != 0x2845D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEffect__6CSceneFi_0x284540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2845D8u; }
        if (ctx->pc != 0x2845D8u) { return; }
    }
    ctx->pc = 0x2845D8u;
label_2845d8:
    // 0x2845d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2845d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2845dc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2845DCu;
    {
        const bool branch_taken_0x2845dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2845dc) {
            ctx->pc = 0x2845ECu;
            goto label_2845ec;
        }
    }
    ctx->pc = 0x2845E4u;
    // 0x2845e4: 0xc0b8580  jal         func_2E1600
    ctx->pc = 0x2845E4u;
    SET_GPR_U32(ctx, 31, 0x2845ECu);
    ctx->pc = 0x2E1600u;
    if (runtime->hasFunction(0x2E1600u)) {
        auto targetFn = runtime->lookupFunction(0x2E1600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2845ECu; }
        if (ctx->pc != 0x2845ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__16CEffectScriptManFv_0x2e1600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2845ECu; }
        if (ctx->pc != 0x2845ECu) { return; }
    }
    ctx->pc = 0x2845ECu;
label_2845ec:
    // 0x2845ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2845ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2845f0:
    // 0x2845f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2845f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2845f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2845f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2845f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2845F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2845FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2845F8u;
            // 0x2845fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x284600u;
}
