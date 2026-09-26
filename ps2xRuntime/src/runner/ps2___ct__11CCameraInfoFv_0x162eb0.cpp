#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__11CCameraInfoFv
// Address: 0x162eb0 - 0x162f08
void ps2___ct__11CCameraInfoFv_0x162eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__11CCameraInfoFv_0x162eb0");
#endif

    switch (ctx->pc) {
        case 0x162ec8u: goto label_162ec8;
        case 0x162ed0u: goto label_162ed0;
        case 0x162ef0u: goto label_162ef0;
        default: break;
    }

    ctx->pc = 0x162eb0u;

    // 0x162eb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x162eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x162eb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x162eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x162eb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x162eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x162ebc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x162ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x162ec0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x162ec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162ec4: 0x263000a8  addiu       $s0, $s1, 0xA8
    ctx->pc = 0x162ec4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
label_162ec8:
    // 0x162ec8: 0xc058bc4  jal         func_162F10
    ctx->pc = 0x162EC8u;
    SET_GPR_U32(ctx, 31, 0x162ED0u);
    ctx->pc = 0x162ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162EC8u;
            // 0x162ecc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162F10u;
    if (runtime->hasFunction(0x162F10u)) {
        auto targetFn = runtime->lookupFunction(0x162F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162ED0u; }
        if (ctx->pc != 0x162ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__15CCameraDrawInfoFv_0x162f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162ED0u; }
        if (ctx->pc != 0x162ED0u) { return; }
    }
    ctx->pc = 0x162ED0u;
label_162ed0:
    // 0x162ed0: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x162ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x162ed4: 0x262200c8  addiu       $v0, $s1, 0xC8
    ctx->pc = 0x162ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
    // 0x162ed8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x162ed8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x162edc: 0x0  nop
    ctx->pc = 0x162edcu;
    // NOP
    // 0x162ee0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x162EE0u;
    {
        const bool branch_taken_0x162ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162ee0) {
            ctx->pc = 0x162EC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_162ec8;
        }
    }
    ctx->pc = 0x162EE8u;
    // 0x162ee8: 0xc059390  jal         func_164E40
    ctx->pc = 0x162EE8u;
    SET_GPR_U32(ctx, 31, 0x162EF0u);
    ctx->pc = 0x162EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162EE8u;
            // 0x162eec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164E40u;
    if (runtime->hasFunction(0x164E40u)) {
        auto targetFn = runtime->lookupFunction(0x164E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162EF0u; }
        if (ctx->pc != 0x162EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CCameraInfoFv_0x164e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162EF0u; }
        if (ctx->pc != 0x162EF0u) { return; }
    }
    ctx->pc = 0x162EF0u;
label_162ef0:
    // 0x162ef0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x162ef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162ef4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x162ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162ef8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x162ef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162efc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x162efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162f00: 0x3e00008  jr          $ra
    ctx->pc = 0x162F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162F00u;
            // 0x162f04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162F08u;
}
