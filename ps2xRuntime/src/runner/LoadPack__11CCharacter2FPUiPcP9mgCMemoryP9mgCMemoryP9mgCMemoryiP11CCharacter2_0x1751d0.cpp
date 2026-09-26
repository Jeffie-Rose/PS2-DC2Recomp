#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadPack__11CCharacter2FPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryiP11CCharacter2
// Address: 0x1751d0 - 0x1751fc
void LoadPack__11CCharacter2FPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryiP11CCharacter2_0x1751d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadPack__11CCharacter2FPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryiP11CCharacter2_0x1751d0");
#endif

    switch (ctx->pc) {
        case 0x1751d0u: goto label_1751d0;
        case 0x1751d4u: goto label_1751d4;
        case 0x1751d8u: goto label_1751d8;
        case 0x1751dcu: goto label_1751dc;
        case 0x1751e0u: goto label_1751e0;
        case 0x1751e4u: goto label_1751e4;
        case 0x1751e8u: goto label_1751e8;
        case 0x1751ecu: goto label_1751ec;
        case 0x1751f0u: goto label_1751f0;
        case 0x1751f4u: goto label_1751f4;
        case 0x1751f8u: goto label_1751f8;
        default: break;
    }

    ctx->pc = 0x1751d0u;

label_1751d0:
    // 0x1751d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1751d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1751d4:
    // 0x1751d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1751d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1751d8:
    // 0x1751d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1751d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1751dc:
    // 0x1751dc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1751dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1751e0:
    // 0x1751e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1751e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1751e4:
    // 0x1751e4: 0x8f390084  lw          $t9, 0x84($t9)
    ctx->pc = 0x1751e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 132)));
label_1751e8:
    // 0x1751e8: 0x320f809  jalr        $t9
label_1751ec:
    if (ctx->pc == 0x1751ECu) {
        ctx->pc = 0x1751F0u;
        goto label_1751f0;
    }
    ctx->pc = 0x1751E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1751F0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1751F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1751F0u; }
            if (ctx->pc != 0x1751F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1751F0u;
label_1751f0:
    // 0x1751f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1751f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1751f4:
    // 0x1751f4: 0x3e00008  jr          $ra
label_1751f8:
    if (ctx->pc == 0x1751F8u) {
        ctx->pc = 0x1751F8u;
            // 0x1751f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1751FCu;
        goto label_fallthrough_0x1751f4;
    }
    ctx->pc = 0x1751F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1751F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1751F4u;
            // 0x1751f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1751f4:
    ctx->pc = 0x1751FCu;
}
