#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSetDataBuffer__FP9mgCMemoryP9mgCMemoryi
// Address: 0x142040 - 0x1420fc
void mgSetDataBuffer__FP9mgCMemoryP9mgCMemoryi_0x142040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSetDataBuffer__FP9mgCMemoryP9mgCMemoryi_0x142040");
#endif

    switch (ctx->pc) {
        case 0x142068u: goto label_142068;
        case 0x142090u: goto label_142090;
        case 0x14209cu: goto label_14209c;
        case 0x1420c4u: goto label_1420c4;
        default: break;
    }

    ctx->pc = 0x142040u;

    // 0x142040: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x142040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x142044: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x142044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x142048: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x142048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14204c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14204cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x142050: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x142050u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142054: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x142054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x142058: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x142058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14205c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x14205cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142060: 0xc04e714  jal         func_139C50
    ctx->pc = 0x142060u;
    SET_GPR_U32(ctx, 31, 0x142068u);
    ctx->pc = 0x142064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142060u;
            // 0x142064: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C50u;
    if (runtime->hasFunction(0x139C50u)) {
        auto targetFn = runtime->lookupFunction(0x139C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142068u; }
        if (ctx->pc != 0x142068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAllocTest__9mgCMemoryFi_0x139c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142068u; }
        if (ctx->pc != 0x142068u) { return; }
    }
    ctx->pc = 0x142068u;
label_142068:
    // 0x142068: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x142068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x14206c: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x14206cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x142070: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x142070u;
    {
        const bool branch_taken_0x142070 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x142074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142070u;
            // 0x142074: 0x833023  subu        $a2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142070) {
            ctx->pc = 0x142080u;
            goto label_142080;
        }
    }
    ctx->pc = 0x142078u;
    // 0x142078: 0x24424000  addiu       $v0, $v0, 0x4000
    ctx->pc = 0x142078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16384));
    // 0x14207c: 0x24c6f800  addiu       $a2, $a2, -0x800
    ctx->pc = 0x14207cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965248));
label_142080:
    // 0x142080: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x142080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x142084: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x142084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142088: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x142088u;
    SET_GPR_U32(ctx, 31, 0x142090u);
    ctx->pc = 0x14208Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142088u;
            // 0x14208c: 0x24842430  addiu       $a0, $a0, 0x2430 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142090u; }
        if (ctx->pc != 0x142090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142090u; }
        if (ctx->pc != 0x142090u) { return; }
    }
    ctx->pc = 0x142090u;
label_142090:
    // 0x142090: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142094: 0xc04e714  jal         func_139C50
    ctx->pc = 0x142094u;
    SET_GPR_U32(ctx, 31, 0x14209Cu);
    ctx->pc = 0x142098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142094u;
            // 0x142098: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C50u;
    if (runtime->hasFunction(0x139C50u)) {
        auto targetFn = runtime->lookupFunction(0x139C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14209Cu; }
        if (ctx->pc != 0x14209Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAllocTest__9mgCMemoryFi_0x139c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14209Cu; }
        if (ctx->pc != 0x14209Cu) { return; }
    }
    ctx->pc = 0x14209Cu;
label_14209c:
    // 0x14209c: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x14209cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1420a0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1420a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1420a4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1420A4u;
    {
        const bool branch_taken_0x1420a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1420A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1420A4u;
            // 0x1420a8: 0x833023  subu        $a2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1420a4) {
            ctx->pc = 0x1420B4u;
            goto label_1420b4;
        }
    }
    ctx->pc = 0x1420ACu;
    // 0x1420ac: 0x24424000  addiu       $v0, $v0, 0x4000
    ctx->pc = 0x1420acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16384));
    // 0x1420b0: 0x24c6f800  addiu       $a2, $a2, -0x800
    ctx->pc = 0x1420b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965248));
label_1420b4:
    // 0x1420b4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1420b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1420b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1420b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1420bc: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x1420BCu;
    SET_GPR_U32(ctx, 31, 0x1420C4u);
    ctx->pc = 0x1420C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1420BCu;
            // 0x1420c0: 0x24842460  addiu       $a0, $a0, 0x2460 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1420C4u; }
        if (ctx->pc != 0x1420C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1420C4u; }
        if (ctx->pc != 0x1420C4u) { return; }
    }
    ctx->pc = 0x1420C4u;
label_1420c4:
    // 0x1420c4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1420c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1420c8: 0xac202454  sw          $zero, 0x2454($at)
    ctx->pc = 0x1420c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9300), GPR_U32(ctx, 0));
    // 0x1420cc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1420ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1420d0: 0xac20244c  sw          $zero, 0x244C($at)
    ctx->pc = 0x1420d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9292), GPR_U32(ctx, 0));
    // 0x1420d4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1420d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1420d8: 0xac202484  sw          $zero, 0x2484($at)
    ctx->pc = 0x1420d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9348), GPR_U32(ctx, 0));
    // 0x1420dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1420dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1420e0: 0xac20247c  sw          $zero, 0x247C($at)
    ctx->pc = 0x1420e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9340), GPR_U32(ctx, 0));
    // 0x1420e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1420e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1420e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1420e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1420ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1420ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1420f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1420f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1420f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1420F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1420F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1420F4u;
            // 0x1420f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1420FCu;
}
