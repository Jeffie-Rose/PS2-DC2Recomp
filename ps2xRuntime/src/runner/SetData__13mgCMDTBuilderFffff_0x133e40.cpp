#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetData__13mgCMDTBuilderFffff
// Address: 0x133e40 - 0x133e9c
void SetData__13mgCMDTBuilderFffff_0x133e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetData__13mgCMDTBuilderFffff_0x133e40");
#endif

    switch (ctx->pc) {
        case 0x133e8cu: goto label_133e8c;
        default: break;
    }

    ctx->pc = 0x133e40u;

    // 0x133e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x133e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x133e44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x133e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x133e48: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x133e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x133e4c: 0x24420d50  addiu       $v0, $v0, 0xD50
    ctx->pc = 0x133e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3408));
    // 0x133e50: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x133e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x133e54: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x133e54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x133e58: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x133e58u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x133e5c: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x133e5cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x133e60: 0xe7ad0014  swc1        $f13, 0x14($sp)
    ctx->pc = 0x133e60u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x133e64: 0xe7ae0018  swc1        $f14, 0x18($sp)
    ctx->pc = 0x133e64u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x133e68: 0xe7af001c  swc1        $f15, 0x1C($sp)
    ctx->pc = 0x133e68u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x133e6c: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x133e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x133e70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x133e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x133e74: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x133E74u;
    {
        const bool branch_taken_0x133e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x133e74) {
            ctx->pc = 0x133E80u;
            goto label_133e80;
        }
    }
    ctx->pc = 0x133E7Cu;
    // 0x133e7c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x133e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_133e80:
    // 0x133e80: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x133e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x133e84: 0xc04cf70  jal         func_133DC0
    ctx->pc = 0x133E84u;
    SET_GPR_U32(ctx, 31, 0x133E8Cu);
    ctx->pc = 0x133DC0u;
    if (runtime->hasFunction(0x133DC0u)) {
        auto targetFn = runtime->lookupFunction(0x133DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133E8Cu; }
        if (ctx->pc != 0x133E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetData__13mgCMDTBuilderFPf_0x133dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133E8Cu; }
        if (ctx->pc != 0x133E8Cu) { return; }
    }
    ctx->pc = 0x133E8Cu;
label_133e8c:
    // 0x133e8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x133e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133e90: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x133e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x133e94: 0x3e00008  jr          $ra
    ctx->pc = 0x133E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x133E9Cu;
}
