#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetScale__9mgCObjectFfff
// Address: 0x1363c0 - 0x1363f8
void SetScale__9mgCObjectFfff_0x1363c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetScale__9mgCObjectFfff_0x1363c0");
#endif

    switch (ctx->pc) {
        case 0x1363ecu: goto label_1363ec;
        default: break;
    }

    ctx->pc = 0x1363c0u;

    // 0x1363c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1363c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1363c4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1363c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1363c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1363c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1363cc: 0x24420d80  addiu       $v0, $v0, 0xD80
    ctx->pc = 0x1363ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3456));
    // 0x1363d0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1363d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1363d4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1363d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1363d8: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1363d8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x1363dc: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x1363dcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1363e0: 0xe7ad0014  swc1        $f13, 0x14($sp)
    ctx->pc = 0x1363e0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1363e4: 0xc04d8d0  jal         func_136340
    ctx->pc = 0x1363E4u;
    SET_GPR_U32(ctx, 31, 0x1363ECu);
    ctx->pc = 0x1363E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1363E4u;
            // 0x1363e8: 0xe7ae0018  swc1        $f14, 0x18($sp) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x136340u;
    if (runtime->hasFunction(0x136340u)) {
        auto targetFn = runtime->lookupFunction(0x136340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1363ECu; }
        if (ctx->pc != 0x1363ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScale__9mgCObjectFPf_0x136340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1363ECu; }
        if (ctx->pc != 0x1363ECu) { return; }
    }
    ctx->pc = 0x1363ECu;
label_1363ec:
    // 0x1363ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1363ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1363f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1363F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1363F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1363F0u;
            // 0x1363f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1363F8u;
}
