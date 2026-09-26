#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEditAngle__8CEditMapFi
// Address: 0x1b0f00 - 0x1b0f4c
void GetEditAngle__8CEditMapFi_0x1b0f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEditAngle__8CEditMapFi_0x1b0f00");
#endif

    ctx->pc = 0x1b0f00u;

    // 0x1b0f00: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1b0f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1b0f04: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x1b0f04u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b0f08: 0x0  nop
    ctx->pc = 0x1b0f08u;
    // NOP
    // 0x1b0f0c: 0x0  nop
    ctx->pc = 0x1b0f0cu;
    // NOP
    // 0x1b0f10: 0x2810  mfhi        $a1
    ctx->pc = 0x1b0f10u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1b0f14: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b0f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1b0f18: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1b0f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b0f1c: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x1b0f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x1b0f20: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1b0f20u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b0f24: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b0f24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b0f28: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b0f28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b0f2c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1b0f2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1b0f30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b0f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0f34: 0x0  nop
    ctx->pc = 0x1b0f34u;
    // NOP
    // 0x1b0f38: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1b0f38u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b0f3c: 0x0  nop
    ctx->pc = 0x1b0f3cu;
    // NOP
    // 0x1b0f40: 0x0  nop
    ctx->pc = 0x1b0f40u;
    // NOP
    // 0x1b0f44: 0x804c374  j           func_130DD0
    ctx->pc = 0x1B0F44u;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B0F4Cu;
}
