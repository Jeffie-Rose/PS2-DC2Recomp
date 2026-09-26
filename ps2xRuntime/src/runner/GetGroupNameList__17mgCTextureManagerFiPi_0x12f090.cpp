#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetGroupNameList__17mgCTextureManagerFiPi
// Address: 0x12f090 - 0x12f0f4
void GetGroupNameList__17mgCTextureManagerFiPi_0x12f090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetGroupNameList__17mgCTextureManagerFiPi_0x12f090");
#endif

    switch (ctx->pc) {
        case 0x12f0a8u: goto label_12f0a8;
        default: break;
    }

    ctx->pc = 0x12f090u;

    // 0x12f090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12f090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12f094: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12f094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12f098: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12f098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12f09c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x12f09cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f0a0: 0xc04b41c  jal         func_12D070
    ctx->pc = 0x12F0A0u;
    SET_GPR_U32(ctx, 31, 0x12F0A8u);
    ctx->pc = 0x12D070u;
    if (runtime->hasFunction(0x12D070u)) {
        auto targetFn = runtime->lookupFunction(0x12D070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F0A8u; }
        if (ctx->pc != 0x12F0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTextureBlock__17mgCTextureManagerFi_0x12d070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F0A8u; }
        if (ctx->pc != 0x12F0A8u) { return; }
    }
    ctx->pc = 0x12F0A8u;
label_12f0a8:
    // 0x12f0a8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F0A8u;
    {
        const bool branch_taken_0x12f0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f0a8) {
            ctx->pc = 0x12F0BCu;
            goto label_12f0bc;
        }
    }
    ctx->pc = 0x12F0B0u;
    // 0x12f0b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12f0b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f0b4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x12F0B4u;
    {
        const bool branch_taken_0x12f0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f0b4) {
            ctx->pc = 0x12F0E0u;
            goto label_12f0e0;
        }
    }
    ctx->pc = 0x12F0BCu;
label_12f0bc:
    // 0x12f0bc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x12f0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12f0c0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F0C0u;
    {
        const bool branch_taken_0x12f0c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f0c0) {
            ctx->pc = 0x12F0D4u;
            goto label_12f0d4;
        }
    }
    ctx->pc = 0x12F0C8u;
    // 0x12f0c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12f0c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f0cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12F0CCu;
    {
        const bool branch_taken_0x12f0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f0cc) {
            ctx->pc = 0x12F0E0u;
            goto label_12f0e0;
        }
    }
    ctx->pc = 0x12F0D4u;
label_12f0d4:
    // 0x12f0d4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x12f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12f0d8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x12f0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x12f0dc: 0x24620124  addiu       $v0, $v1, 0x124
    ctx->pc = 0x12f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 292));
label_12f0e0:
    // 0x12f0e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12f0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f0e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12f0e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f0e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x12f0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12f0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x12F0ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F0F4u;
}
