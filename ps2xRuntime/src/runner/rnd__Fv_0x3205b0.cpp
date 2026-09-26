#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: rnd__Fv
// Address: 0x3205b0 - 0x3205f0
void rnd__Fv_0x3205b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("rnd__Fv_0x3205b0");
#endif

    switch (ctx->pc) {
        case 0x3205c0u: goto label_3205c0;
        default: break;
    }

    ctx->pc = 0x3205b0u;

    // 0x3205b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3205b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3205b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3205b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3205b8: 0xc0c8158  jal         func_320560
    ctx->pc = 0x3205B8u;
    SET_GPR_U32(ctx, 31, 0x3205C0u);
    ctx->pc = 0x320560u;
    if (runtime->hasFunction(0x320560u)) {
        auto targetFn = runtime->lookupFunction(0x320560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3205C0u; }
        if (ctx->pc != 0x3205C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        irnd__Fv_0x320560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3205C0u; }
        if (ctx->pc != 0x3205C0u) { return; }
    }
    ctx->pc = 0x3205C0u;
label_3205c0:
    // 0x3205c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3205c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3205c4: 0x0  nop
    ctx->pc = 0x3205c4u;
    // NOP
    // 0x3205c8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3205c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3205cc: 0x3c024e6e  lui         $v0, 0x4E6E
    ctx->pc = 0x3205ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20078 << 16));
    // 0x3205d0: 0x34426b28  ori         $v0, $v0, 0x6B28
    ctx->pc = 0x3205d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27432);
    // 0x3205d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3205d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3205d8: 0x0  nop
    ctx->pc = 0x3205d8u;
    // NOP
    // 0x3205dc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3205dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3205e0: 0x0  nop
    ctx->pc = 0x3205e0u;
    // NOP
    // 0x3205e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3205e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3205e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3205E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3205ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3205E8u;
            // 0x3205ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3205F0u;
}
