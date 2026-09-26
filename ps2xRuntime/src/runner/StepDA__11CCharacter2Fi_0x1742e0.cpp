#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StepDA__11CCharacter2Fi
// Address: 0x1742e0 - 0x1743c0
void StepDA__11CCharacter2Fi_0x1742e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepDA__11CCharacter2Fi_0x1742e0");
#endif

    switch (ctx->pc) {
        case 0x17433cu: goto label_17433c;
        case 0x174350u: goto label_174350;
        case 0x174364u: goto label_174364;
        case 0x174374u: goto label_174374;
        default: break;
    }

    ctx->pc = 0x1742e0u;

    // 0x1742e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1742e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1742e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1742e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1742e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1742e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1742ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1742ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1742f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1742f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1742f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1742f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1742f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1742f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1742fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1742fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x174300: 0x84830120  lh          $v1, 0x120($a0)
    ctx->pc = 0x174300u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 288)));
    // 0x174304: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x174304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x174308: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x174308u;
    {
        const bool branch_taken_0x174308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17430Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174308u;
            // 0x17430c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174308) {
            ctx->pc = 0x1743A0u;
            goto label_1743a0;
        }
    }
    ctx->pc = 0x174310u;
    // 0x174310: 0x8e63012c  lw          $v1, 0x12C($s3)
    ctx->pc = 0x174310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 300)));
    // 0x174314: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x174314u;
    {
        const bool branch_taken_0x174314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x174314) {
            ctx->pc = 0x1743A0u;
            goto label_1743a0;
        }
    }
    ctx->pc = 0x17431Cu;
    // 0x17431c: 0x8e630130  lw          $v1, 0x130($s3)
    ctx->pc = 0x17431cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x174320: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x174320u;
    {
        const bool branch_taken_0x174320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x174324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174320u;
            // 0x174324: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174320) {
            ctx->pc = 0x174334u;
            goto label_174334;
        }
    }
    ctx->pc = 0x174328u;
    // 0x174328: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x174328u;
    {
        const bool branch_taken_0x174328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17432Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174328u;
            // 0x17432c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174328) {
            ctx->pc = 0x1743A4u;
            goto label_1743a4;
        }
    }
    ctx->pc = 0x174330u;
    // 0x174330: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x174330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174334:
    // 0x174334: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x174334u;
    {
        const bool branch_taken_0x174334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174334u;
            // 0x174338: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174334) {
            ctx->pc = 0x174390u;
            goto label_174390;
        }
    }
    ctx->pc = 0x17433Cu;
label_17433c:
    // 0x17433c: 0x6410006  bgez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x17433Cu;
    {
        const bool branch_taken_0x17433c = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x17433c) {
            ctx->pc = 0x174358u;
            goto label_174358;
        }
    }
    ctx->pc = 0x174344u;
    // 0x174344: 0x8e620130  lw          $v0, 0x130($s3)
    ctx->pc = 0x174344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x174348: 0xc05e61c  jal         func_179870
    ctx->pc = 0x174348u;
    SET_GPR_U32(ctx, 31, 0x174350u);
    ctx->pc = 0x17434Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174348u;
            // 0x17434c: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x179870u;
    if (runtime->hasFunction(0x179870u)) {
        auto targetFn = runtime->lookupFunction(0x179870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174350u; }
        if (ctx->pc != 0x174350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetPosition__13CDynamicAnimeFv_0x179870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174350u; }
        if (ctx->pc != 0x174350u) { return; }
    }
    ctx->pc = 0x174350u;
label_174350:
    // 0x174350: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x174350u;
    {
        const bool branch_taken_0x174350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174350) {
            ctx->pc = 0x174384u;
            goto label_174384;
        }
    }
    ctx->pc = 0x174358u;
label_174358:
    // 0x174358: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x174358u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x17435c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x17435Cu;
    {
        const bool branch_taken_0x17435c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x174360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17435Cu;
            // 0x174360: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17435c) {
            ctx->pc = 0x174384u;
            goto label_174384;
        }
    }
    ctx->pc = 0x174364u;
label_174364:
    // 0x174364: 0x0  nop
    ctx->pc = 0x174364u;
    // NOP
    // 0x174368: 0x8e620130  lw          $v0, 0x130($s3)
    ctx->pc = 0x174368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x17436c: 0xc05e644  jal         func_179910
    ctx->pc = 0x17436Cu;
    SET_GPR_U32(ctx, 31, 0x174374u);
    ctx->pc = 0x174370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17436Cu;
            // 0x174370: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x179910u;
    if (runtime->hasFunction(0x179910u)) {
        auto targetFn = runtime->lookupFunction(0x179910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174374u; }
        if (ctx->pc != 0x174374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__13CDynamicAnimeFv_0x179910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174374u; }
        if (ctx->pc != 0x174374u) { return; }
    }
    ctx->pc = 0x174374u;
label_174374:
    // 0x174374: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x174374u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x174378: 0x292182a  slt         $v1, $s4, $s2
    ctx->pc = 0x174378u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x17437c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17437Cu;
    {
        const bool branch_taken_0x17437c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17437c) {
            ctx->pc = 0x174364u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_174364;
        }
    }
    ctx->pc = 0x174384u;
label_174384:
    // 0x174384: 0x0  nop
    ctx->pc = 0x174384u;
    // NOP
    // 0x174388: 0x26310090  addiu       $s1, $s1, 0x90
    ctx->pc = 0x174388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x17438c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17438cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_174390:
    // 0x174390: 0x8e63012c  lw          $v1, 0x12C($s3)
    ctx->pc = 0x174390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 300)));
    // 0x174394: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x174394u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x174398: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x174398u;
    {
        const bool branch_taken_0x174398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x174398) {
            ctx->pc = 0x17433Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17433c;
        }
    }
    ctx->pc = 0x1743A0u;
label_1743a0:
    // 0x1743a0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1743a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1743a4:
    // 0x1743a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1743a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1743a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1743a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1743ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1743acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1743b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1743b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1743b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1743b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1743b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1743B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1743BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1743B8u;
            // 0x1743bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1743C0u;
}
