#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetRotation__9mgCObjectFfff
// Address: 0x1362f0 - 0x136328
void SetRotation__9mgCObjectFfff_0x1362f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetRotation__9mgCObjectFfff_0x1362f0");
#endif

    switch (ctx->pc) {
        case 0x13631cu: goto label_13631c;
        default: break;
    }

    ctx->pc = 0x1362f0u;

    // 0x1362f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1362f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1362f4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1362f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1362f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1362f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1362fc: 0x24420d70  addiu       $v0, $v0, 0xD70
    ctx->pc = 0x1362fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3440));
    // 0x136300: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x136300u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136304: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x136304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x136308: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x136308u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x13630c: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x13630cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x136310: 0xe7ad0014  swc1        $f13, 0x14($sp)
    ctx->pc = 0x136310u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x136314: 0xc04d89c  jal         func_136270
    ctx->pc = 0x136314u;
    SET_GPR_U32(ctx, 31, 0x13631Cu);
    ctx->pc = 0x136318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136314u;
            // 0x136318: 0xe7ae0018  swc1        $f14, 0x18($sp) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x136270u;
    if (runtime->hasFunction(0x136270u)) {
        auto targetFn = runtime->lookupFunction(0x136270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13631Cu; }
        if (ctx->pc != 0x13631Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRotation__9mgCObjectFPf_0x136270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13631Cu; }
        if (ctx->pc != 0x13631Cu) { return; }
    }
    ctx->pc = 0x13631Cu;
label_13631c:
    // 0x13631c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13631cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136320: 0x3e00008  jr          $ra
    ctx->pc = 0x136320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136320u;
            // 0x136324: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x136328u;
}
