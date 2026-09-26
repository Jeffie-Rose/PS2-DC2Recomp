#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateRenderInfoPacket__18mgCVisualMotionMDTFPUiPA4_fP13mgRENDER_INFO
// Address: 0x28a660 - 0x28a690
void CreateRenderInfoPacket__18mgCVisualMotionMDTFPUiPA4_fP13mgRENDER_INFO_0x28a660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateRenderInfoPacket__18mgCVisualMotionMDTFPUiPA4_fP13mgRENDER_INFO_0x28a660");
#endif

    switch (ctx->pc) {
        case 0x28a67cu: goto label_28a67c;
        default: break;
    }

    ctx->pc = 0x28a660u;

    // 0x28a660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28a660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28a664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28a664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a668: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28a668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28a66c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28a66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28a670: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x28a670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a674: 0xc050134  jal         func_1404D0
    ctx->pc = 0x28A674u;
    SET_GPR_U32(ctx, 31, 0x28A67Cu);
    ctx->pc = 0x28A678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A674u;
            // 0x28a678: 0xace21010  sw          $v0, 0x1010($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1404D0u;
    if (runtime->hasFunction(0x1404D0u)) {
        auto targetFn = runtime->lookupFunction(0x1404D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A67Cu; }
        if (ctx->pc != 0x28A67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateRenderInfoPacket__12mgCVisualMDTFPUiPA4_fP13mgRENDER_INFO_0x1404d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A67Cu; }
        if (ctx->pc != 0x28A67Cu) { return; }
    }
    ctx->pc = 0x28A67Cu;
label_28a67c:
    // 0x28a67c: 0xae001010  sw          $zero, 0x1010($s0)
    ctx->pc = 0x28a67cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4112), GPR_U32(ctx, 0));
    // 0x28a680: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28a680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a684: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28a684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a688: 0x3e00008  jr          $ra
    ctx->pc = 0x28A688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A688u;
            // 0x28a68c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28A690u;
}
