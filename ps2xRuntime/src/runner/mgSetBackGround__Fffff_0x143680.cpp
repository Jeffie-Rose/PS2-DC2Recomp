#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSetBackGround__Fffff
// Address: 0x143680 - 0x1436bc
void mgSetBackGround__Fffff_0x143680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSetBackGround__Fffff_0x143680");
#endif

    switch (ctx->pc) {
        case 0x1436b0u: goto label_1436b0;
        default: break;
    }

    ctx->pc = 0x143680u;

    // 0x143680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x143680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x143684: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x143684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x143688: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x143688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14368c: 0x24422500  addiu       $v0, $v0, 0x2500
    ctx->pc = 0x14368cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9472));
    // 0x143690: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x143690u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x143694: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x143694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x143698: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x143698u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x14369c: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x14369cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1436a0: 0xe7ad0014  swc1        $f13, 0x14($sp)
    ctx->pc = 0x1436a0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1436a4: 0xe7ae0018  swc1        $f14, 0x18($sp)
    ctx->pc = 0x1436a4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1436a8: 0xc050d9c  jal         func_143670
    ctx->pc = 0x1436A8u;
    SET_GPR_U32(ctx, 31, 0x1436B0u);
    ctx->pc = 0x1436ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1436A8u;
            // 0x1436ac: 0xe7af001c  swc1        $f15, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x143670u;
    if (runtime->hasFunction(0x143670u)) {
        auto targetFn = runtime->lookupFunction(0x143670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1436B0u; }
        if (ctx->pc != 0x1436B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetBackGround__FPf_0x143670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1436B0u; }
        if (ctx->pc != 0x1436B0u) { return; }
    }
    ctx->pc = 0x1436B0u;
label_1436b0:
    // 0x1436b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1436b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1436b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1436B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1436B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1436B4u;
            // 0x1436b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1436BCu;
}
