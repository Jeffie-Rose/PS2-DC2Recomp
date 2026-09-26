#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__15mgCTextureAnimeFv
// Address: 0x13d1f0 - 0x13d254
void Initialize__15mgCTextureAnimeFv_0x13d1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__15mgCTextureAnimeFv_0x13d1f0");
#endif

    switch (ctx->pc) {
        case 0x13d218u: goto label_13d218;
        case 0x13d228u: goto label_13d228;
        default: break;
    }

    ctx->pc = 0x13d1f0u;

    // 0x13d1f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13d1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13d1f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13d1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13d1f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13d1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13d1fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13d200: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13d200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d204: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x13d204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x13d208: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x13d208u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x13d20c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13d20cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d210: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13D210u;
    {
        const bool branch_taken_0x13d210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d210) {
            ctx->pc = 0x13D22Cu;
            goto label_13d22c;
        }
    }
    ctx->pc = 0x13D218u;
label_13d218:
    // 0x13d218: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d21c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13d21cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d220: 0xc04f5cc  jal         func_13D730
    ctx->pc = 0x13D220u;
    SET_GPR_U32(ctx, 31, 0x13D228u);
    ctx->pc = 0x13D730u;
    if (runtime->hasFunction(0x13D730u)) {
        auto targetFn = runtime->lookupFunction(0x13D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D228u; }
        if (ctx->pc != 0x13D228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteGroup__15mgCTextureAnimeFi_0x13d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D228u; }
        if (ctx->pc != 0x13D228u) { return; }
    }
    ctx->pc = 0x13D228u;
label_13d228:
    // 0x13d228: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13d228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_13d22c:
    // 0x13d22c: 0x0  nop
    ctx->pc = 0x13d22cu;
    // NOP
    // 0x13d230: 0x2a030018  slti        $v1, $s0, 0x18
    ctx->pc = 0x13d230u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x13d234: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x13D234u;
    {
        const bool branch_taken_0x13d234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d234) {
            ctx->pc = 0x13D218u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13d218;
        }
    }
    ctx->pc = 0x13D23Cu;
    // 0x13d23c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13d23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d240: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13d240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d244: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d248: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13d248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13d24c: 0x3e00008  jr          $ra
    ctx->pc = 0x13D24Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13D254u;
}
