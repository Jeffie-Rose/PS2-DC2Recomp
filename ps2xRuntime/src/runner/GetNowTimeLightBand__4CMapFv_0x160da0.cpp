#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNowTimeLightBand__4CMapFv
// Address: 0x160da0 - 0x160e64
void GetNowTimeLightBand__4CMapFv_0x160da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNowTimeLightBand__4CMapFv_0x160da0");
#endif

    switch (ctx->pc) {
        case 0x160dd4u: goto label_160dd4;
        case 0x160de4u: goto label_160de4;
        case 0x160e44u: goto label_160e44;
        default: break;
    }

    ctx->pc = 0x160da0u;

    // 0x160da0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x160da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x160da4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x160da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x160da8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x160da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x160dac: 0x8c9000d0  lw          $s0, 0xD0($a0)
    ctx->pc = 0x160dacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x160db0: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x160db0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x160db4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x160DB4u;
    {
        const bool branch_taken_0x160db4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x160DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160DB4u;
            // 0x160db8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160db4) {
            ctx->pc = 0x160DC4u;
            goto label_160dc4;
        }
    }
    ctx->pc = 0x160DBCu;
    // 0x160dbc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x160DBCu;
    {
        const bool branch_taken_0x160dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160DBCu;
            // 0x160dc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160dbc) {
            ctx->pc = 0x160E54u;
            goto label_160e54;
        }
    }
    ctx->pc = 0x160DC4u;
label_160dc4:
    // 0x160dc4: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x160DC4u;
    {
        const bool branch_taken_0x160dc4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x160dc4) {
            ctx->pc = 0x160DDCu;
            goto label_160ddc;
        }
    }
    ctx->pc = 0x160DCCu;
    // 0x160dcc: 0xc05835c  jal         func_160D70
    ctx->pc = 0x160DCCu;
    SET_GPR_U32(ctx, 31, 0x160DD4u);
    ctx->pc = 0x160D70u;
    if (runtime->hasFunction(0x160D70u)) {
        auto targetFn = runtime->lookupFunction(0x160D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160DD4u; }
        if (ctx->pc != 0x160DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowTimeBand__4CMapFv_0x160d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160DD4u; }
        if (ctx->pc != 0x160DD4u) { return; }
    }
    ctx->pc = 0x160DD4u;
label_160dd4:
    // 0x160dd4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x160DD4u;
    {
        const bool branch_taken_0x160dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160DD4u;
            // 0x160dd8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160dd4) {
            ctx->pc = 0x160E58u;
            goto label_160e58;
        }
    }
    ctx->pc = 0x160DDCu;
label_160ddc:
    // 0x160ddc: 0xc05834c  jal         func_160D30
    ctx->pc = 0x160DDCu;
    SET_GPR_U32(ctx, 31, 0x160DE4u);
    ctx->pc = 0x160D30u;
    if (runtime->hasFunction(0x160D30u)) {
        auto targetFn = runtime->lookupFunction(0x160D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160DE4u; }
        if (ctx->pc != 0x160DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowTime__4CMapFv_0x160d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160DE4u; }
        if (ctx->pc != 0x160DE4u) { return; }
    }
    ctx->pc = 0x160DE4u;
label_160de4:
    // 0x160de4: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x160de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x160de8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x160de8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x160dec: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x160decu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160df0: 0x0  nop
    ctx->pc = 0x160df0u;
    // NOP
    // 0x160df4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x160df4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x160df8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x160df8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160dfc: 0x0  nop
    ctx->pc = 0x160dfcu;
    // NOP
    // 0x160e00: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x160E00u;
    {
        const bool branch_taken_0x160e00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x160E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160E00u;
            // 0x160e04: 0x3c0241c0  lui         $v0, 0x41C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160e00) {
            ctx->pc = 0x160E14u;
            goto label_160e14;
        }
    }
    ctx->pc = 0x160E08u;
    // 0x160e08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160e08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160e0c: 0x0  nop
    ctx->pc = 0x160e0cu;
    // NOP
    // 0x160e10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x160e10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_160e14:
    // 0x160e14: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x160e14u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160e18: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x160e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x160e1c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x160e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x160e20: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x160e20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x160e24: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x160e24u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x160e28: 0x0  nop
    ctx->pc = 0x160e28u;
    // NOP
    // 0x160e2c: 0x0  nop
    ctx->pc = 0x160e2cu;
    // NOP
    // 0x160e30: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x160e30u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x160e34: 0x0  nop
    ctx->pc = 0x160e34u;
    // NOP
    // 0x160e38: 0x0  nop
    ctx->pc = 0x160e38u;
    // NOP
    // 0x160e3c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x160E3Cu;
    SET_GPR_U32(ctx, 31, 0x160E44u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160E44u; }
        if (ctx->pc != 0x160E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160E44u; }
        if (ctx->pc != 0x160E44u) { return; }
    }
    ctx->pc = 0x160E44u;
label_160e44:
    // 0x160e44: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x160E44u;
    {
        const bool branch_taken_0x160e44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x160E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160E44u;
            // 0x160e48: 0x50001a  div         $zero, $v0, $s0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x160e44) {
            ctx->pc = 0x160E50u;
            goto label_160e50;
        }
    }
    ctx->pc = 0x160E4Cu;
    // 0x160e4c: 0x1cd  break       0, 7
    ctx->pc = 0x160e4cu;
    runtime->handleBreak(rdram, ctx);
label_160e50:
    // 0x160e50: 0x1010  mfhi        $v0
    ctx->pc = 0x160e50u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_160e54:
    // 0x160e54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x160e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_160e58:
    // 0x160e58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x160e58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x160E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160E5Cu;
            // 0x160e60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160E64u;
}
