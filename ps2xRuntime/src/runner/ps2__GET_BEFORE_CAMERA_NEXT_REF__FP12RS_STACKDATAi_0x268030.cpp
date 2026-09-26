#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_BEFORE_CAMERA_NEXT_REF__FP12RS_STACKDATAi
// Address: 0x268030 - 0x2680a4
void ps2__GET_BEFORE_CAMERA_NEXT_REF__FP12RS_STACKDATAi_0x268030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_BEFORE_CAMERA_NEXT_REF__FP12RS_STACKDATAi_0x268030");
#endif

    switch (ctx->pc) {
        case 0x26804cu: goto label_26804c;
        case 0x268064u: goto label_268064;
        case 0x268074u: goto label_268074;
        case 0x268084u: goto label_268084;
        case 0x268090u: goto label_268090;
        default: break;
    }

    ctx->pc = 0x268030u;

    // 0x268030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x268030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x268034: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x268034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x268038: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x268038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26803c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26803cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268040: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x268040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x268044: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x268044u;
    SET_GPR_U32(ctx, 31, 0x26804Cu);
    ctx->pc = 0x268048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268044u;
            // 0x268048: 0x8c852e58  lw          $a1, 0x2E58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11864)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26804Cu; }
        if (ctx->pc != 0x26804Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26804Cu; }
        if (ctx->pc != 0x26804Cu) { return; }
    }
    ctx->pc = 0x26804Cu;
label_26804c:
    // 0x26804c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26804Cu;
    {
        const bool branch_taken_0x26804c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x268050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26804Cu;
            // 0x268050: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26804c) {
            ctx->pc = 0x26805Cu;
            goto label_26805c;
        }
    }
    ctx->pc = 0x268054u;
    // 0x268054: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x268054u;
    {
        const bool branch_taken_0x268054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268054u;
            // 0x268058: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268054) {
            ctx->pc = 0x268094u;
            goto label_268094;
        }
    }
    ctx->pc = 0x26805Cu;
label_26805c:
    // 0x26805c: 0xc04c580  jal         func_131600
    ctx->pc = 0x26805Cu;
    SET_GPR_U32(ctx, 31, 0x268064u);
    ctx->pc = 0x268060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26805Cu;
            // 0x268060: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131600u;
    if (runtime->hasFunction(0x131600u)) {
        auto targetFn = runtime->lookupFunction(0x131600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268064u; }
        if (ctx->pc != 0x268064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNextRef__9mgCCameraFPf_0x131600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268064u; }
        if (ctx->pc != 0x268064u) { return; }
    }
    ctx->pc = 0x268064u;
label_268064:
    // 0x268064: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x268064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x268068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x268068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26806c: 0xc097e54  jal         func_25F950
    ctx->pc = 0x26806Cu;
    SET_GPR_U32(ctx, 31, 0x268074u);
    ctx->pc = 0x268070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26806Cu;
            // 0x268070: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268074u; }
        if (ctx->pc != 0x268074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268074u; }
        if (ctx->pc != 0x268074u) { return; }
    }
    ctx->pc = 0x268074u;
label_268074:
    // 0x268074: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x268074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x268078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x268078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26807c: 0xc097e54  jal         func_25F950
    ctx->pc = 0x26807Cu;
    SET_GPR_U32(ctx, 31, 0x268084u);
    ctx->pc = 0x268080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26807Cu;
            // 0x268080: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268084u; }
        if (ctx->pc != 0x268084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268084u; }
        if (ctx->pc != 0x268084u) { return; }
    }
    ctx->pc = 0x268084u;
label_268084:
    // 0x268084: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x268084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x268088: 0xc097e54  jal         func_25F950
    ctx->pc = 0x268088u;
    SET_GPR_U32(ctx, 31, 0x268090u);
    ctx->pc = 0x26808Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268088u;
            // 0x26808c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268090u; }
        if (ctx->pc != 0x268090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268090u; }
        if (ctx->pc != 0x268090u) { return; }
    }
    ctx->pc = 0x268090u;
label_268090:
    // 0x268090: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x268090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_268094:
    // 0x268094: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x268094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268098: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x268098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26809c: 0x3e00008  jr          $ra
    ctx->pc = 0x26809Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2680A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26809Cu;
            // 0x2680a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2680A4u;
}
