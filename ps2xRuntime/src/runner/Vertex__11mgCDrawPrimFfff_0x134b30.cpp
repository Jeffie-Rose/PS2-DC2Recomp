#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Vertex__11mgCDrawPrimFfff
// Address: 0x134b30 - 0x134b68
void Vertex__11mgCDrawPrimFfff_0x134b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Vertex__11mgCDrawPrimFfff_0x134b30");
#endif

    switch (ctx->pc) {
        case 0x134b5cu: goto label_134b5c;
        default: break;
    }

    ctx->pc = 0x134b30u;

    // 0x134b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x134b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x134b34: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x134b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x134b38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x134b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x134b3c: 0x24420d60  addiu       $v0, $v0, 0xD60
    ctx->pc = 0x134b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3424));
    // 0x134b40: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x134b40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134b44: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x134b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x134b48: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x134b48u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x134b4c: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x134b4cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x134b50: 0xe7ad0014  swc1        $f13, 0x14($sp)
    ctx->pc = 0x134b50u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x134b54: 0xc04d2dc  jal         func_134B70
    ctx->pc = 0x134B54u;
    SET_GPR_U32(ctx, 31, 0x134B5Cu);
    ctx->pc = 0x134B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134B54u;
            // 0x134b58: 0xe7ae0018  swc1        $f14, 0x18($sp) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B70u;
    if (runtime->hasFunction(0x134B70u)) {
        auto targetFn = runtime->lookupFunction(0x134B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134B5Cu; }
        if (ctx->pc != 0x134B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFPf_0x134b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134B5Cu; }
        if (ctx->pc != 0x134B5Cu) { return; }
    }
    ctx->pc = 0x134B5Cu;
label_134b5c:
    // 0x134b5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x134b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134b60: 0x3e00008  jr          $ra
    ctx->pc = 0x134B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134B60u;
            // 0x134b64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x134B68u;
}
