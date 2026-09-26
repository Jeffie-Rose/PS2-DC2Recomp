#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndStopSeSeq__Fi
// Address: 0x190170 - 0x1901f0
void sndStopSeSeq__Fi_0x190170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndStopSeSeq__Fi_0x190170");
#endif

    switch (ctx->pc) {
        case 0x190188u: goto label_190188;
        case 0x19019cu: goto label_19019c;
        case 0x1901c8u: goto label_1901c8;
        default: break;
    }

    ctx->pc = 0x190170u;

    // 0x190170: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x190170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x190174: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x190174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x190178: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x190178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19017c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19017cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x190180: 0xc063288  jal         func_18CA20
    ctx->pc = 0x190180u;
    SET_GPR_U32(ctx, 31, 0x190188u);
    ctx->pc = 0x190184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190180u;
            // 0x190184: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CA20u;
    if (runtime->hasFunction(0x18CA20u)) {
        auto targetFn = runtime->lookupFunction(0x18CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190188u; }
        if (ctx->pc != 0x190188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortInfo__Fi_0x18ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190188u; }
        if (ctx->pc != 0x190188u) { return; }
    }
    ctx->pc = 0x190188u;
label_190188:
    // 0x190188: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x190188u;
    {
        const bool branch_taken_0x190188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190188) {
            ctx->pc = 0x1901D8u;
            goto label_1901d8;
        }
    }
    ctx->pc = 0x190190u;
    // 0x190190: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x190190u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190194: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x190194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190198: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x190198u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19019c:
    // 0x19019c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x19019cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x1901a0: 0x24636040  addiu       $v1, $v1, 0x6040
    ctx->pc = 0x1901a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24640));
    // 0x1901a4: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x1901a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1901a8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1901a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1901ac: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1901ACu;
    {
        const bool branch_taken_0x1901ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1901ac) {
            ctx->pc = 0x1901C8u;
            goto label_1901c8;
        }
    }
    ctx->pc = 0x1901B4u;
    // 0x1901b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1901b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1901b8: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1901B8u;
    {
        const bool branch_taken_0x1901b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1901b8) {
            ctx->pc = 0x1901C8u;
            goto label_1901c8;
        }
    }
    ctx->pc = 0x1901C0u;
    // 0x1901c0: 0xc062e74  jal         func_18B9D0
    ctx->pc = 0x1901C0u;
    SET_GPR_U32(ctx, 31, 0x1901C8u);
    ctx->pc = 0x18B9D0u;
    if (runtime->hasFunction(0x18B9D0u)) {
        auto targetFn = runtime->lookupFunction(0x18B9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1901C8u; }
        if (ctx->pc != 0x1901C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Stop__9sndCSeSeqFv_0x18b9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1901C8u; }
        if (ctx->pc != 0x1901C8u) { return; }
    }
    ctx->pc = 0x1901C8u;
label_1901c8:
    // 0x1901c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1901c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1901cc: 0x2a230020  slti        $v1, $s1, 0x20
    ctx->pc = 0x1901ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1901d0: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1901D0u;
    {
        const bool branch_taken_0x1901d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1901D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1901D0u;
            // 0x1901d4: 0x265200b0  addiu       $s2, $s2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1901d0) {
            ctx->pc = 0x19019Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19019c;
        }
    }
    ctx->pc = 0x1901D8u;
label_1901d8:
    // 0x1901d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1901d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1901dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1901dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1901e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1901e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1901e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1901e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1901e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1901E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1901ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1901E8u;
            // 0x1901ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1901F0u;
}
