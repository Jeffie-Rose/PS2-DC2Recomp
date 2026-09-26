#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__15CMiniEffPrimManFv
// Address: 0x1c1150 - 0x1c11c0
void Step__15CMiniEffPrimManFv_0x1c1150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__15CMiniEffPrimManFv_0x1c1150");
#endif

    switch (ctx->pc) {
        case 0x1c1178u: goto label_1c1178;
        case 0x1c1180u: goto label_1c1180;
        default: break;
    }

    ctx->pc = 0x1c1150u;

    // 0x1c1150: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c1150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c1154: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c1154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c1158: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c1158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c115c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c115cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c1160: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c1160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c1164: 0x8c830800  lw          $v1, 0x800($a0)
    ctx->pc = 0x1c1164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2048)));
    // 0x1c1168: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C1168u;
    {
        const bool branch_taken_0x1c1168 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1C116Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1168u;
            // 0x1c116c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1168) {
            ctx->pc = 0x1C11A8u;
            goto label_1c11a8;
        }
    }
    ctx->pc = 0x1C1170u;
    // 0x1c1170: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c1170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1174: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c1174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1178:
    // 0x1c1178: 0xc0703dc  jal         func_1C0F70
    ctx->pc = 0x1C1178u;
    SET_GPR_U32(ctx, 31, 0x1C1180u);
    ctx->pc = 0x1C117Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1178u;
            // 0x1c117c: 0x2512021  addu        $a0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F70u;
    if (runtime->hasFunction(0x1C0F70u)) {
        auto targetFn = runtime->lookupFunction(0x1C0F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1180u; }
        if (ctx->pc != 0x1C1180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__12CMiniEffPrimFv_0x1c0f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1180u; }
        if (ctx->pc != 0x1C1180u) { return; }
    }
    ctx->pc = 0x1C1180u;
label_1c1180:
    // 0x1c1180: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1180u;
    {
        const bool branch_taken_0x1c1180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1180) {
            ctx->pc = 0x1C1194u;
            goto label_1c1194;
        }
    }
    ctx->pc = 0x1C1188u;
    // 0x1c1188: 0x8e430800  lw          $v1, 0x800($s2)
    ctx->pc = 0x1c1188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2048)));
    // 0x1c118c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c118cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c1190: 0xae430800  sw          $v1, 0x800($s2)
    ctx->pc = 0x1c1190u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2048), GPR_U32(ctx, 3));
label_1c1194:
    // 0x1c1194: 0x0  nop
    ctx->pc = 0x1c1194u;
    // NOP
    // 0x1c1198: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c1198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c119c: 0x2a030040  slti        $v1, $s0, 0x40
    ctx->pc = 0x1c119cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1c11a0: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1C11A0u;
    {
        const bool branch_taken_0x1c11a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C11A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C11A0u;
            // 0x1c11a4: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11a0) {
            ctx->pc = 0x1C1178u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c1178;
        }
    }
    ctx->pc = 0x1C11A8u;
label_1c11a8:
    // 0x1c11a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c11a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c11ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c11acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c11b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c11b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c11b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c11b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c11b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C11B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C11BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C11B8u;
            // 0x1c11bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C11C0u;
}
