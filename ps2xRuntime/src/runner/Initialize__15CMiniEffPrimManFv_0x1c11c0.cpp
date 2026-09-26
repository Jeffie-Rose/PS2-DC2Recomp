#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__15CMiniEffPrimManFv
// Address: 0x1c11c0 - 0x1c121c
void Initialize__15CMiniEffPrimManFv_0x1c11c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__15CMiniEffPrimManFv_0x1c11c0");
#endif

    switch (ctx->pc) {
        case 0x1c11e0u: goto label_1c11e0;
        case 0x1c11e8u: goto label_1c11e8;
        default: break;
    }

    ctx->pc = 0x1c11c0u;

    // 0x1c11c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c11c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c11c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c11c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c11c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c11c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c11cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c11ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c11d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c11d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c11d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c11d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c11d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c11dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c11e0:
    // 0x1c11e0: 0xc0703fc  jal         func_1C0FF0
    ctx->pc = 0x1C11E0u;
    SET_GPR_U32(ctx, 31, 0x1C11E8u);
    ctx->pc = 0x1C11E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C11E0u;
            // 0x1c11e4: 0x2512021  addu        $a0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0FF0u;
    if (runtime->hasFunction(0x1C0FF0u)) {
        auto targetFn = runtime->lookupFunction(0x1C0FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C11E8u; }
        if (ctx->pc != 0x1C11E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12CMiniEffPrimFv_0x1c0ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C11E8u; }
        if (ctx->pc != 0x1C11E8u) { return; }
    }
    ctx->pc = 0x1C11E8u;
label_1c11e8:
    // 0x1c11e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c11e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c11ec: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1c11ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1c11f0: 0x2a030040  slti        $v1, $s0, 0x40
    ctx->pc = 0x1c11f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1c11f4: 0x0  nop
    ctx->pc = 0x1c11f4u;
    // NOP
    // 0x1c11f8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C11F8u;
    {
        const bool branch_taken_0x1c11f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c11f8) {
            ctx->pc = 0x1C11E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c11e0;
        }
    }
    ctx->pc = 0x1C1200u;
    // 0x1c1200: 0xae400800  sw          $zero, 0x800($s2)
    ctx->pc = 0x1c1200u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2048), GPR_U32(ctx, 0));
    // 0x1c1204: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c1204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1208: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c1208u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c120c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c120cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1210: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1214: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1214u;
            // 0x1c1218: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C121Cu;
}
