#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcScrlBarPutPos__FRiifif
// Address: 0x2517b0 - 0x251800
void CalcScrlBarPutPos__FRiifif_0x2517b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcScrlBarPutPos__FRiifif_0x2517b0");
#endif

    switch (ctx->pc) {
        case 0x2517e8u: goto label_2517e8;
        default: break;
    }

    ctx->pc = 0x2517b0u;

    // 0x2517b0: 0x460d6003  div.s       $f0, $f12, $f13
    ctx->pc = 0x2517b0u;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[12], ctx->f[13]); }
    // 0x2517b4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2517b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2517b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2517b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2517bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2517bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2517c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2517c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2517c4: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2517c4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2517c8: 0x0  nop
    ctx->pc = 0x2517c8u;
    // NOP
    // 0x2517cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2517ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2517d0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2517d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2517d4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2517d4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2517d8: 0x0  nop
    ctx->pc = 0x2517d8u;
    // NOP
    // 0x2517dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2517dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2517e0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2517E0u;
    SET_GPR_U32(ctx, 31, 0x2517E8u);
    ctx->pc = 0x2517E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2517E0u;
            // 0x2517e4: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2517E8u; }
        if (ctx->pc != 0x2517E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2517E8u; }
        if (ctx->pc != 0x2517E8u) { return; }
    }
    ctx->pc = 0x2517E8u;
label_2517e8:
    // 0x2517e8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2517e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2517ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2517ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2517f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2517f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2517f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2517f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2517f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2517F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2517FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2517F8u;
            // 0x2517fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x251800u;
}
