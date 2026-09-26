#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPictureNum__15CInventUserDataFPi
// Address: 0x1fee80 - 0x1feeb4
void GetPictureNum__15CInventUserDataFPi_0x1fee80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPictureNum__15CInventUserDataFPi_0x1fee80");
#endif

    switch (ctx->pc) {
        case 0x1fee94u: goto label_1fee94;
        default: break;
    }

    ctx->pc = 0x1fee80u;

    // 0x1fee80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fee80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fee84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fee84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fee88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fee88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fee8c: 0xc07fb90  jal         func_1FEE40
    ctx->pc = 0x1FEE8Cu;
    SET_GPR_U32(ctx, 31, 0x1FEE94u);
    ctx->pc = 0x1FEE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEE8Cu;
            // 0x1fee90: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEE40u;
    if (runtime->hasFunction(0x1FEE40u)) {
        auto targetFn = runtime->lookupFunction(0x1FEE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEE94u; }
        if (ctx->pc != 0x1FEE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowHavePictureNum__15CInventUserDataFv_0x1fee40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEE94u; }
        if (ctx->pc != 0x1FEE94u) { return; }
    }
    ctx->pc = 0x1FEE94u;
label_1fee94:
    // 0x1fee94: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fee94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1fee98: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1fee98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1fee9c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1fee9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1feea0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1feea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1feea4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1feea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1feea8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1feea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1feeac: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEEACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEEACu;
            // 0x1feeb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FEEB4u;
}
