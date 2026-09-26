#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPassword__FPc
// Address: 0x31b830 - 0x31b88c
void GetPassword__FPc_0x31b830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPassword__FPc_0x31b830");
#endif

    switch (ctx->pc) {
        case 0x31b84cu: goto label_31b84c;
        case 0x31b854u: goto label_31b854;
        default: break;
    }

    ctx->pc = 0x31b830u;

    // 0x31b830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31b830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31b834: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x31b834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x31b838: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31b838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31b83c: 0x24a5e8b0  addiu       $a1, $a1, -0x1750
    ctx->pc = 0x31b83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961328));
    // 0x31b840: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31b840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31b844: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x31B844u;
    SET_GPR_U32(ctx, 31, 0x31B84Cu);
    ctx->pc = 0x31B848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B844u;
            // 0x31b848: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B84Cu; }
        if (ctx->pc != 0x31B84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B84Cu; }
        if (ctx->pc != 0x31B84Cu) { return; }
    }
    ctx->pc = 0x31B84Cu;
label_31b84c:
    // 0x31b84c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31B84Cu;
    {
        const bool branch_taken_0x31b84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B84Cu;
            // 0x31b850: 0x24030055  addiu       $v1, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b84c) {
            ctx->pc = 0x31B86Cu;
            goto label_31b86c;
        }
    }
    ctx->pc = 0x31B854u;
label_31b854:
    // 0x31b854: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x31b854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
    // 0x31b858: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x31b858u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x31b85c: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x31b85cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x31b860: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x31b860u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x31b864: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x31b864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x31b868: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31b868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_31b86c:
    // 0x31b86c: 0x0  nop
    ctx->pc = 0x31b86cu;
    // NOP
    // 0x31b870: 0x82040000  lb          $a0, 0x0($s0)
    ctx->pc = 0x31b870u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31b874: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x31B874u;
    {
        const bool branch_taken_0x31b874 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b874) {
            ctx->pc = 0x31B854u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31b854;
        }
    }
    ctx->pc = 0x31B87Cu;
    // 0x31b87c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31b87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31b880: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31b880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b884: 0x3e00008  jr          $ra
    ctx->pc = 0x31B884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B884u;
            // 0x31b888: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31B88Cu;
}
