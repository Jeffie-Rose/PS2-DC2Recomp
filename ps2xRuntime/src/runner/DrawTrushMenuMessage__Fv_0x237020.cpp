#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawTrushMenuMessage__Fv
// Address: 0x237020 - 0x2370a8
void DrawTrushMenuMessage__Fv_0x237020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawTrushMenuMessage__Fv_0x237020");
#endif

    switch (ctx->pc) {
        case 0x23704cu: goto label_23704c;
        case 0x237054u: goto label_237054;
        case 0x237074u: goto label_237074;
        case 0x23707cu: goto label_23707c;
        default: break;
    }

    ctx->pc = 0x237020u;

    // 0x237020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x237020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x237024: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x237024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x237028: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x237028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23702c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23702cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237030: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x237030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x237034: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x237034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x237038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x237038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23703c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23703cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x237040: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x237040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x237044: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x237044u;
    SET_GPR_U32(ctx, 31, 0x23704Cu);
    ctx->pc = 0x237048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237044u;
            // 0x237048: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23704Cu; }
        if (ctx->pc != 0x23704Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23704Cu; }
        if (ctx->pc != 0x23704Cu) { return; }
    }
    ctx->pc = 0x23704Cu;
label_23704c:
    // 0x23704c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23704cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237050: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x237050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237054:
    // 0x237054: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x237054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x237058: 0x2463db20  addiu       $v1, $v1, -0x24E0
    ctx->pc = 0x237058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957856));
    // 0x23705c: 0x719021  addu        $s2, $v1, $s1
    ctx->pc = 0x23705cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x237060: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x237060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x237064: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x237064u;
    {
        const bool branch_taken_0x237064 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x237064) {
            ctx->pc = 0x23707Cu;
            goto label_23707c;
        }
    }
    ctx->pc = 0x23706Cu;
    // 0x23706c: 0xc087898  jal         func_21E260
    ctx->pc = 0x23706Cu;
    SET_GPR_U32(ctx, 31, 0x237074u);
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237074u; }
        if (ctx->pc != 0x237074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237074u; }
        if (ctx->pc != 0x237074u) { return; }
    }
    ctx->pc = 0x237074u;
label_237074:
    // 0x237074: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x237074u;
    SET_GPR_U32(ctx, 31, 0x23707Cu);
    ctx->pc = 0x237078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237074u;
            // 0x237078: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23707Cu; }
        if (ctx->pc != 0x23707Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23707Cu; }
        if (ctx->pc != 0x23707Cu) { return; }
    }
    ctx->pc = 0x23707Cu;
label_23707c:
    // 0x23707c: 0x0  nop
    ctx->pc = 0x23707cu;
    // NOP
    // 0x237080: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x237080u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x237084: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x237084u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x237088: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x237088u;
    {
        const bool branch_taken_0x237088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23708Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237088u;
            // 0x23708c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237088) {
            ctx->pc = 0x237054u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_237054;
        }
    }
    ctx->pc = 0x237090u;
    // 0x237090: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x237090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x237094: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x237094u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237098: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x237098u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23709c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23709cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2370a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2370A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2370A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2370A0u;
            // 0x2370a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2370A8u;
}
