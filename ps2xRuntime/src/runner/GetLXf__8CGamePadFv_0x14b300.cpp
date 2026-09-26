#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetLXf__8CGamePadFv
// Address: 0x14b300 - 0x14b33c
void GetLXf__8CGamePadFv_0x14b300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLXf__8CGamePadFv_0x14b300");
#endif

    switch (ctx->pc) {
        case 0x14b310u: goto label_14b310;
        default: break;
    }

    ctx->pc = 0x14b300u;

    // 0x14b300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14b300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14b304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b308: 0xc052be8  jal         func_14AFA0
    ctx->pc = 0x14B308u;
    SET_GPR_U32(ctx, 31, 0x14B310u);
    ctx->pc = 0x14AFA0u;
    if (runtime->hasFunction(0x14AFA0u)) {
        auto targetFn = runtime->lookupFunction(0x14AFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B310u; }
        if (ctx->pc != 0x14B310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLX__8CGamePadFv_0x14afa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B310u; }
        if (ctx->pc != 0x14B310u) { return; }
    }
    ctx->pc = 0x14B310u;
label_14b310:
    // 0x14b310: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14b310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14b314: 0x0  nop
    ctx->pc = 0x14b314u;
    // NOP
    // 0x14b318: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14b318u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14b31c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x14b31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x14b320: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b324: 0x0  nop
    ctx->pc = 0x14b324u;
    // NOP
    // 0x14b328: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x14b328u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x14b32c: 0x0  nop
    ctx->pc = 0x14b32cu;
    // NOP
    // 0x14b330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b334: 0x3e00008  jr          $ra
    ctx->pc = 0x14B334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B334u;
            // 0x14b338: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B33Cu;
}
