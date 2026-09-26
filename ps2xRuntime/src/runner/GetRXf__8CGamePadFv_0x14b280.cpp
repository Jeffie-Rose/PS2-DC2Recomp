#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRXf__8CGamePadFv
// Address: 0x14b280 - 0x14b2bc
void GetRXf__8CGamePadFv_0x14b280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRXf__8CGamePadFv_0x14b280");
#endif

    switch (ctx->pc) {
        case 0x14b290u: goto label_14b290;
        default: break;
    }

    ctx->pc = 0x14b280u;

    // 0x14b280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14b280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14b284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b288: 0xc052be0  jal         func_14AF80
    ctx->pc = 0x14B288u;
    SET_GPR_U32(ctx, 31, 0x14B290u);
    ctx->pc = 0x14AF80u;
    if (runtime->hasFunction(0x14AF80u)) {
        auto targetFn = runtime->lookupFunction(0x14AF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B290u; }
        if (ctx->pc != 0x14B290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRX__8CGamePadFv_0x14af80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B290u; }
        if (ctx->pc != 0x14B290u) { return; }
    }
    ctx->pc = 0x14B290u;
label_14b290:
    // 0x14b290: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14b290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14b294: 0x0  nop
    ctx->pc = 0x14b294u;
    // NOP
    // 0x14b298: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14b298u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14b29c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x14b29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x14b2a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b2a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b2a4: 0x0  nop
    ctx->pc = 0x14b2a4u;
    // NOP
    // 0x14b2a8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x14b2a8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x14b2ac: 0x0  nop
    ctx->pc = 0x14b2acu;
    // NOP
    // 0x14b2b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b2b4: 0x3e00008  jr          $ra
    ctx->pc = 0x14B2B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B2B4u;
            // 0x14b2b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B2BCu;
}
