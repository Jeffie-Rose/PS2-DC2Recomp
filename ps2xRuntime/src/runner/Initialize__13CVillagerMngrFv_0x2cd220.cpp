#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__13CVillagerMngrFv
// Address: 0x2cd220 - 0x2cd28c
void Initialize__13CVillagerMngrFv_0x2cd220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__13CVillagerMngrFv_0x2cd220");
#endif

    switch (ctx->pc) {
        case 0x2cd24cu: goto label_2cd24c;
        case 0x2cd258u: goto label_2cd258;
        default: break;
    }

    ctx->pc = 0x2cd220u;

    // 0x2cd220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cd220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cd224: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2cd224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2cd228: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2cd228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2cd22c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cd22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cd230: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cd230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cd234: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2cd234u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd238: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cd238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cd23c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2cd23cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd240: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2cd240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd244: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CD244u;
    {
        const bool branch_taken_0x2cd244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD244u;
            // 0x2cd248: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd244) {
            ctx->pc = 0x2CD260u;
            goto label_2cd260;
        }
    }
    ctx->pc = 0x2CD24Cu;
label_2cd24c:
    // 0x2cd24c: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x2cd24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x2cd250: 0xc0b3444  jal         func_2CD110
    ctx->pc = 0x2CD250u;
    SET_GPR_U32(ctx, 31, 0x2CD258u);
    ctx->pc = 0x2CD254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD250u;
            // 0x2cd254: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD110u;
    if (runtime->hasFunction(0x2CD110u)) {
        auto targetFn = runtime->lookupFunction(0x2CD110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD258u; }
        if (ctx->pc != 0x2CD258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CVillagerDataFv_0x2cd110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD258u; }
        if (ctx->pc != 0x2CD258u) { return; }
    }
    ctx->pc = 0x2CD258u;
label_2cd258:
    // 0x2cd258: 0x26310070  addiu       $s1, $s1, 0x70
    ctx->pc = 0x2cd258u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x2cd25c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2cd25cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2cd260:
    // 0x2cd260: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2cd260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2cd264: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x2cd264u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2cd268: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2CD268u;
    {
        const bool branch_taken_0x2cd268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd268) {
            ctx->pc = 0x2CD24Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cd24c;
        }
    }
    ctx->pc = 0x2CD270u;
    // 0x2cd270: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2cd270u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2cd274: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2cd274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cd278: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cd278u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cd27c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cd27cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd280: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cd280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd284: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD284u;
            // 0x2cd288: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CD28Cu;
}
