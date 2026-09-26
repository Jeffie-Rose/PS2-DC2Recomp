#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetCamWorldCoordGyaku__FP9mgCCamera
// Address: 0x25d850 - 0x25d8bc
void SetCamWorldCoordGyaku__FP9mgCCamera_0x25d850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCamWorldCoordGyaku__FP9mgCCamera_0x25d850");
#endif

    switch (ctx->pc) {
        case 0x25d878u: goto label_25d878;
        case 0x25d884u: goto label_25d884;
        case 0x25d88cu: goto label_25d88c;
        case 0x25d894u: goto label_25d894;
        case 0x25d8a0u: goto label_25d8a0;
        case 0x25d8acu: goto label_25d8ac;
        default: break;
    }

    ctx->pc = 0x25d850u;

    // 0x25d850: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25d850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25d854: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25d854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25d858: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25d858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25d85c: 0x8f8397f4  lw          $v1, -0x680C($gp)
    ctx->pc = 0x25d85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940660)));
    // 0x25d860: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x25D860u;
    {
        const bool branch_taken_0x25d860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D860u;
            // 0x25d864: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d860) {
            ctx->pc = 0x25D8ACu;
            goto label_25d8ac;
        }
    }
    ctx->pc = 0x25D868u;
    // 0x25d868: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x25D868u;
    {
        const bool branch_taken_0x25d868 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D868u;
            // 0x25d86c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d868) {
            ctx->pc = 0x25D8ACu;
            goto label_25d8ac;
        }
    }
    ctx->pc = 0x25D870u;
    // 0x25d870: 0xc04c574  jal         func_1315D0
    ctx->pc = 0x25D870u;
    SET_GPR_U32(ctx, 31, 0x25D878u);
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D878u; }
        if (ctx->pc != 0x25D878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D878u; }
        if (ctx->pc != 0x25D878u) { return; }
    }
    ctx->pc = 0x25D878u;
label_25d878:
    // 0x25d878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d87c: 0xc04c578  jal         func_1315E0
    ctx->pc = 0x25D87Cu;
    SET_GPR_U32(ctx, 31, 0x25D884u);
    ctx->pc = 0x25D880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D87Cu;
            // 0x25d880: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315E0u;
    if (runtime->hasFunction(0x1315E0u)) {
        auto targetFn = runtime->lookupFunction(0x1315E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D884u; }
        if (ctx->pc != 0x25D884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRef__9mgCCameraFPf_0x1315e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D884u; }
        if (ctx->pc != 0x25D884u) { return; }
    }
    ctx->pc = 0x25D884u;
label_25d884:
    // 0x25d884: 0xc0975d8  jal         func_25D760
    ctx->pc = 0x25D884u;
    SET_GPR_U32(ctx, 31, 0x25D88Cu);
    ctx->pc = 0x25D888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D884u;
            // 0x25d888: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D760u;
    if (runtime->hasFunction(0x25D760u)) {
        auto targetFn = runtime->lookupFunction(0x25D760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D88Cu; }
        if (ctx->pc != 0x25D88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPosWorldCoordGyaku__FPf_0x25d760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D88Cu; }
        if (ctx->pc != 0x25D88Cu) { return; }
    }
    ctx->pc = 0x25D88Cu;
label_25d88c:
    // 0x25d88c: 0xc0975d8  jal         func_25D760
    ctx->pc = 0x25D88Cu;
    SET_GPR_U32(ctx, 31, 0x25D894u);
    ctx->pc = 0x25D890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D88Cu;
            // 0x25d890: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D760u;
    if (runtime->hasFunction(0x25D760u)) {
        auto targetFn = runtime->lookupFunction(0x25D760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D894u; }
        if (ctx->pc != 0x25D894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPosWorldCoordGyaku__FPf_0x25d760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D894u; }
        if (ctx->pc != 0x25D894u) { return; }
    }
    ctx->pc = 0x25D894u;
label_25d894:
    // 0x25d894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d898: 0xc04c504  jal         func_131410
    ctx->pc = 0x25D898u;
    SET_GPR_U32(ctx, 31, 0x25D8A0u);
    ctx->pc = 0x25D89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D898u;
            // 0x25d89c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131410u;
    if (runtime->hasFunction(0x131410u)) {
        auto targetFn = runtime->lookupFunction(0x131410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D8A0u; }
        if (ctx->pc != 0x25D8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFPf_0x131410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D8A0u; }
        if (ctx->pc != 0x25D8A0u) { return; }
    }
    ctx->pc = 0x25D8A0u;
label_25d8a0:
    // 0x25d8a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d8a4: 0xc04c518  jal         func_131460
    ctx->pc = 0x25D8A4u;
    SET_GPR_U32(ctx, 31, 0x25D8ACu);
    ctx->pc = 0x25D8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D8A4u;
            // 0x25d8a8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D8ACu; }
        if (ctx->pc != 0x25D8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFPf_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D8ACu; }
        if (ctx->pc != 0x25D8ACu) { return; }
    }
    ctx->pc = 0x25D8ACu;
label_25d8ac:
    // 0x25d8ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25d8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d8b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25d8b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x25D8B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D8B4u;
            // 0x25d8b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25D8BCu;
}
