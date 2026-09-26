#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetVolfBGM__6CSceneFf
// Address: 0x2a63a0 - 0x2a6418
void SetVolfBGM__6CSceneFf_0x2a63a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetVolfBGM__6CSceneFf_0x2a63a0");
#endif

    switch (ctx->pc) {
        case 0x2a63b8u: goto label_2a63b8;
        case 0x2a63e0u: goto label_2a63e0;
        case 0x2a6404u: goto label_2a6404;
        default: break;
    }

    ctx->pc = 0x2a63a0u;

    // 0x2a63a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a63a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a63a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a63a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a63a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a63a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a63ac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2a63acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a63b0: 0xc0a9838  jal         func_2A60E0
    ctx->pc = 0x2A63B0u;
    SET_GPR_U32(ctx, 31, 0x2A63B8u);
    ctx->pc = 0x2A63B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A63B0u;
            // 0x2a63b4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A60E0u;
    if (runtime->hasFunction(0x2A60E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A63B8u; }
        if (ctx->pc != 0x2A63B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmInfo__6CSceneFv_0x2a60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A63B8u; }
        if (ctx->pc != 0x2A63B8u) { return; }
    }
    ctx->pc = 0x2A63B8u;
label_2a63b8:
    // 0x2a63b8: 0xe4540014  swc1        $f20, 0x14($v0)
    ctx->pc = 0x2a63b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2a63bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a63bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a63c0: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x2a63c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a63c4: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2a63c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a63c8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x2a63c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a63cc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2a63ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2a63d0: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x2a63d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2a63d4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2a63d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2a63d8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2A63D8u;
    SET_GPR_U32(ctx, 31, 0x2A63E0u);
    ctx->pc = 0x2A63DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A63D8u;
            // 0x2a63dc: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A63E0u; }
        if (ctx->pc != 0x2A63E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A63E0u; }
        if (ctx->pc != 0x2A63E0u) { return; }
    }
    ctx->pc = 0x2A63E0u;
label_2a63e0:
    // 0x2a63e0: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x2a63e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2a63e4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A63E4u;
    {
        const bool branch_taken_0x2a63e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a63e4) {
            ctx->pc = 0x2A63F0u;
            goto label_2a63f0;
        }
    }
    ctx->pc = 0x2A63ECu;
    // 0x2a63ec: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x2a63ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_2a63f0:
    // 0x2a63f0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2a63f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a63f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a63f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a63f8: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x2a63f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a63fc: 0xc063a7c  jal         func_18E9F0
    ctx->pc = 0x2A63FCu;
    SET_GPR_U32(ctx, 31, 0x2A6404u);
    ctx->pc = 0x2A6400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A63FCu;
            // 0x2a6400: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E9F0u;
    if (runtime->hasFunction(0x18E9F0u)) {
        auto targetFn = runtime->lookupFunction(0x18E9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6404u; }
        if (ctx->pc != 0x2A6404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSeVol__FUiiii_0x18e9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6404u; }
        if (ctx->pc != 0x2A6404u) { return; }
    }
    ctx->pc = 0x2A6404u;
label_2a6404:
    // 0x2a6404: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a6404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a6408: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2a6408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a640c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a640cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6410: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6410u;
            // 0x2a6414: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6418u;
}
