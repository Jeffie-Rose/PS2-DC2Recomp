#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetLYf__8CGamePadFv
// Address: 0x14b340 - 0x14b37c
void GetLYf__8CGamePadFv_0x14b340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLYf__8CGamePadFv_0x14b340");
#endif

    switch (ctx->pc) {
        case 0x14b350u: goto label_14b350;
        default: break;
    }

    ctx->pc = 0x14b340u;

    // 0x14b340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14b340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14b344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b348: 0xc052bec  jal         func_14AFB0
    ctx->pc = 0x14B348u;
    SET_GPR_U32(ctx, 31, 0x14B350u);
    ctx->pc = 0x14AFB0u;
    if (runtime->hasFunction(0x14AFB0u)) {
        auto targetFn = runtime->lookupFunction(0x14AFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B350u; }
        if (ctx->pc != 0x14B350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLY__8CGamePadFv_0x14afb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B350u; }
        if (ctx->pc != 0x14B350u) { return; }
    }
    ctx->pc = 0x14B350u;
label_14b350:
    // 0x14b350: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14b350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14b354: 0x0  nop
    ctx->pc = 0x14b354u;
    // NOP
    // 0x14b358: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14b358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14b35c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x14b35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x14b360: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b364: 0x0  nop
    ctx->pc = 0x14b364u;
    // NOP
    // 0x14b368: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x14b368u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x14b36c: 0x0  nop
    ctx->pc = 0x14b36cu;
    // NOP
    // 0x14b370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b374: 0x3e00008  jr          $ra
    ctx->pc = 0x14B374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B374u;
            // 0x14b378: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B37Cu;
}
