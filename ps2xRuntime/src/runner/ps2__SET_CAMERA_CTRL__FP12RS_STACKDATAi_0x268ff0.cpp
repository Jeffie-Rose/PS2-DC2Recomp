#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_CAMERA_CTRL__FP12RS_STACKDATAi
// Address: 0x268ff0 - 0x269074
void ps2__SET_CAMERA_CTRL__FP12RS_STACKDATAi_0x268ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_CAMERA_CTRL__FP12RS_STACKDATAi_0x268ff0");
#endif

    switch (ctx->pc) {
        case 0x269010u: goto label_269010;
        case 0x26902cu: goto label_26902c;
        case 0x26903cu: goto label_26903c;
        case 0x269044u: goto label_269044;
        case 0x269054u: goto label_269054;
        case 0x26905cu: goto label_26905c;
        default: break;
    }

    ctx->pc = 0x268ff0u;

    // 0x268ff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x268ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x268ff4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x268ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x268ff8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x268ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x268ffc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x268ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x269000: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x269000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269004: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x269004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x269008: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x269008u;
    SET_GPR_U32(ctx, 31, 0x269010u);
    ctx->pc = 0x26900Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269008u;
            // 0x26900c: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269010u; }
        if (ctx->pc != 0x269010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269010u; }
        if (ctx->pc != 0x269010u) { return; }
    }
    ctx->pc = 0x269010u;
label_269010:
    // 0x269010: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x269010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269014: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x269014u;
    {
        const bool branch_taken_0x269014 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x269018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269014u;
            // 0x269018: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269014) {
            ctx->pc = 0x269024u;
            goto label_269024;
        }
    }
    ctx->pc = 0x26901Cu;
    // 0x26901c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x26901Cu;
    {
        const bool branch_taken_0x26901c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26901Cu;
            // 0x269020: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26901c) {
            ctx->pc = 0x269060u;
            goto label_269060;
        }
    }
    ctx->pc = 0x269024u;
label_269024:
    // 0x269024: 0xc097e18  jal         func_25F860
    ctx->pc = 0x269024u;
    SET_GPR_U32(ctx, 31, 0x26902Cu);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26902Cu; }
        if (ctx->pc != 0x26902Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26902Cu; }
        if (ctx->pc != 0x26902Cu) { return; }
    }
    ctx->pc = 0x26902Cu;
label_26902c:
    // 0x26902c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26902Cu;
    {
        const bool branch_taken_0x26902c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26902Cu;
            // 0x269030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26902c) {
            ctx->pc = 0x26904Cu;
            goto label_26904c;
        }
    }
    ctx->pc = 0x269034u;
    // 0x269034: 0xc04c668  jal         func_1319A0
    ctx->pc = 0x269034u;
    SET_GPR_U32(ctx, 31, 0x26903Cu);
    ctx->pc = 0x269038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269034u;
            // 0x269038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319A0u;
    if (runtime->hasFunction(0x1319A0u)) {
        auto targetFn = runtime->lookupFunction(0x1319A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26903Cu; }
        if (ctx->pc != 0x26903Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FollowOn__15mgCCameraFollowFv_0x1319a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26903Cu; }
        if (ctx->pc != 0x26903Cu) { return; }
    }
    ctx->pc = 0x26903Cu;
label_26903c:
    // 0x26903c: 0xc0bb00c  jal         func_2EC030
    ctx->pc = 0x26903Cu;
    SET_GPR_U32(ctx, 31, 0x269044u);
    ctx->pc = 0x269040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26903Cu;
            // 0x269040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC030u;
    if (runtime->hasFunction(0x2EC030u)) {
        auto targetFn = runtime->lookupFunction(0x2EC030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269044u; }
        if (ctx->pc != 0x269044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ControlOn__14CCameraControlFv_0x2ec030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269044u; }
        if (ctx->pc != 0x269044u) { return; }
    }
    ctx->pc = 0x269044u;
label_269044:
    // 0x269044: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x269044u;
    {
        const bool branch_taken_0x269044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269044u;
            // 0x269048: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269044) {
            ctx->pc = 0x269060u;
            goto label_269060;
        }
    }
    ctx->pc = 0x26904Cu;
label_26904c:
    // 0x26904c: 0xc04c66c  jal         func_1319B0
    ctx->pc = 0x26904Cu;
    SET_GPR_U32(ctx, 31, 0x269054u);
    ctx->pc = 0x1319B0u;
    if (runtime->hasFunction(0x1319B0u)) {
        auto targetFn = runtime->lookupFunction(0x1319B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269054u; }
        if (ctx->pc != 0x269054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FollowOff__15mgCCameraFollowFv_0x1319b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269054u; }
        if (ctx->pc != 0x269054u) { return; }
    }
    ctx->pc = 0x269054u;
label_269054:
    // 0x269054: 0xc0bb030  jal         func_2EC0C0
    ctx->pc = 0x269054u;
    SET_GPR_U32(ctx, 31, 0x26905Cu);
    ctx->pc = 0x269058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269054u;
            // 0x269058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC0C0u;
    if (runtime->hasFunction(0x2EC0C0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26905Cu; }
        if (ctx->pc != 0x26905Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ControlOff__14CCameraControlFv_0x2ec0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26905Cu; }
        if (ctx->pc != 0x26905Cu) { return; }
    }
    ctx->pc = 0x26905Cu;
label_26905c:
    // 0x26905c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26905cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_269060:
    // 0x269060: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x269060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x269064: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x269064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269068: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x269068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26906c: 0x3e00008  jr          $ra
    ctx->pc = 0x26906Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26906Cu;
            // 0x269070: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x269074u;
}
