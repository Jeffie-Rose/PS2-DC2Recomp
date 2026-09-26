#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetCheckRef__14CCameraControlFfff
// Address: 0x2ec8d0 - 0x2ec908
void SetCheckRef__14CCameraControlFfff_0x2ec8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCheckRef__14CCameraControlFfff_0x2ec8d0");
#endif

    switch (ctx->pc) {
        case 0x2ec8fcu: goto label_2ec8fc;
        default: break;
    }

    ctx->pc = 0x2ec8d0u;

    // 0x2ec8d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ec8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ec8d4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2ec8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2ec8d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ec8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ec8dc: 0x2442cc00  addiu       $v0, $v0, -0x3400
    ctx->pc = 0x2ec8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953984));
    // 0x2ec8e0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2ec8e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ec8e4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2ec8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ec8e8: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x2ec8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x2ec8ec: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x2ec8ecu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2ec8f0: 0xe7ad0014  swc1        $f13, 0x14($sp)
    ctx->pc = 0x2ec8f0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2ec8f4: 0xc0bb22c  jal         func_2EC8B0
    ctx->pc = 0x2EC8F4u;
    SET_GPR_U32(ctx, 31, 0x2EC8FCu);
    ctx->pc = 0x2EC8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC8F4u;
            // 0x2ec8f8: 0xe7ae0018  swc1        $f14, 0x18($sp) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC8B0u;
    if (runtime->hasFunction(0x2EC8B0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC8FCu; }
        if (ctx->pc != 0x2EC8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCheckRef__14CCameraControlFPf_0x2ec8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC8FCu; }
        if (ctx->pc != 0x2EC8FCu) { return; }
    }
    ctx->pc = 0x2EC8FCu;
label_2ec8fc:
    // 0x2ec8fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ec8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec900: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC900u;
            // 0x2ec904: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EC908u;
}
