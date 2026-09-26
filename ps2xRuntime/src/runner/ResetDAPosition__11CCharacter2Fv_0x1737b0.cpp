#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetDAPosition__11CCharacter2Fv
// Address: 0x1737b0 - 0x173838
void ResetDAPosition__11CCharacter2Fv_0x1737b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetDAPosition__11CCharacter2Fv_0x1737b0");
#endif

    switch (ctx->pc) {
        case 0x1737ccu: goto label_1737cc;
        case 0x1737f8u: goto label_1737f8;
        case 0x173804u: goto label_173804;
        default: break;
    }

    ctx->pc = 0x1737b0u;

    // 0x1737b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1737b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1737b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1737b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1737b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1737b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1737bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1737bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1737c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1737c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1737c4: 0xc05cdc0  jal         func_173700
    ctx->pc = 0x1737C4u;
    SET_GPR_U32(ctx, 31, 0x1737CCu);
    ctx->pc = 0x1737C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1737C4u;
            // 0x1737c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173700u;
    if (runtime->hasFunction(0x173700u)) {
        auto targetFn = runtime->lookupFunction(0x173700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1737CCu; }
        if (ctx->pc != 0x1737CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdatePosition__11CCharacter2Fv_0x173700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1737CCu; }
        if (ctx->pc != 0x1737CCu) { return; }
    }
    ctx->pc = 0x1737CCu;
label_1737cc:
    // 0x1737cc: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x1737ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x1737d0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1737D0u;
    {
        const bool branch_taken_0x1737d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1737d0) {
            ctx->pc = 0x173820u;
            goto label_173820;
        }
    }
    ctx->pc = 0x1737D8u;
    // 0x1737d8: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x1737d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1737dc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1737DCu;
    {
        const bool branch_taken_0x1737dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1737E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1737DCu;
            // 0x1737e0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1737dc) {
            ctx->pc = 0x1737F0u;
            goto label_1737f0;
        }
    }
    ctx->pc = 0x1737E4u;
    // 0x1737e4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1737E4u;
    {
        const bool branch_taken_0x1737e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1737E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1737E4u;
            // 0x1737e8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1737e4) {
            ctx->pc = 0x173824u;
            goto label_173824;
        }
    }
    ctx->pc = 0x1737ECu;
    // 0x1737ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1737ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1737f0:
    // 0x1737f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1737F0u;
    {
        const bool branch_taken_0x1737f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1737F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1737F0u;
            // 0x1737f4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1737f0) {
            ctx->pc = 0x17380Cu;
            goto label_17380c;
        }
    }
    ctx->pc = 0x1737F8u;
label_1737f8:
    // 0x1737f8: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x1737f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1737fc: 0xc05e61c  jal         func_179870
    ctx->pc = 0x1737FCu;
    SET_GPR_U32(ctx, 31, 0x173804u);
    ctx->pc = 0x173800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1737FCu;
            // 0x173800: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x179870u;
    if (runtime->hasFunction(0x179870u)) {
        auto targetFn = runtime->lookupFunction(0x179870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173804u; }
        if (ctx->pc != 0x173804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetPosition__13CDynamicAnimeFv_0x179870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173804u; }
        if (ctx->pc != 0x173804u) { return; }
    }
    ctx->pc = 0x173804u;
label_173804:
    // 0x173804: 0x26520090  addiu       $s2, $s2, 0x90
    ctx->pc = 0x173804u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x173808: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x173808u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_17380c:
    // 0x17380c: 0x0  nop
    ctx->pc = 0x17380cu;
    // NOP
    // 0x173810: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x173810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x173814: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x173814u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x173818: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x173818u;
    {
        const bool branch_taken_0x173818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x173818) {
            ctx->pc = 0x1737F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1737f8;
        }
    }
    ctx->pc = 0x173820u;
label_173820:
    // 0x173820: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x173820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_173824:
    // 0x173824: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x173824u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173828: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x173828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17382c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17382cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173830: 0x3e00008  jr          $ra
    ctx->pc = 0x173830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173830u;
            // 0x173834: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173838u;
}
