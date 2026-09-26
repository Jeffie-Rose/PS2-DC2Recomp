#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetWakuWH__12CMenuKeyFuncFiii
// Address: 0x23c160 - 0x23c1dc
void SetWakuWH__12CMenuKeyFuncFiii_0x23c160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetWakuWH__12CMenuKeyFuncFiii_0x23c160");
#endif

    switch (ctx->pc) {
        case 0x23c194u: goto label_23c194;
        case 0x23c1a0u: goto label_23c1a0;
        default: break;
    }

    ctx->pc = 0x23c160u;

    // 0x23c160: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23c160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x23c164: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23c164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23c168: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23c168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23c16c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23c16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23c170: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23c170u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c174: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x23c174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c178: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23c178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23c17c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x23c17cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c180: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x23c180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c184: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23c184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x23c188: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x23c188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23c18c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x23C18Cu;
    SET_GPR_U32(ctx, 31, 0x23C194u);
    ctx->pc = 0x23C190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C18Cu;
            // 0x23c190: 0x24a5ac48  addiu       $a1, $a1, -0x53B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C194u; }
        if (ctx->pc != 0x23C194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C194u; }
        if (ctx->pc != 0x23C194u) { return; }
    }
    ctx->pc = 0x23C194u;
label_23c194:
    // 0x23c194: 0x8e44013c  lw          $a0, 0x13C($s2)
    ctx->pc = 0x23c194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
    // 0x23c198: 0xc089664  jal         func_225990
    ctx->pc = 0x23C198u;
    SET_GPR_U32(ctx, 31, 0x23C1A0u);
    ctx->pc = 0x23C19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C198u;
            // 0x23c19c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C1A0u; }
        if (ctx->pc != 0x23C1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C1A0u; }
        if (ctx->pc != 0x23C1A0u) { return; }
    }
    ctx->pc = 0x23C1A0u;
label_23c1a0:
    // 0x23c1a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23C1A0u;
    {
        const bool branch_taken_0x23c1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c1a0) {
            ctx->pc = 0x23C1C4u;
            goto label_23c1c4;
        }
    }
    ctx->pc = 0x23C1A8u;
    // 0x23c1a8: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x23c1a8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23c1ac: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x23c1acu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c1b0: 0x0  nop
    ctx->pc = 0x23c1b0u;
    // NOP
    // 0x23c1b4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23c1b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23c1b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23c1b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23c1bc: 0xe4410024  swc1        $f1, 0x24($v0)
    ctx->pc = 0x23c1bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x23c1c0: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x23c1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_23c1c4:
    // 0x23c1c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23c1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23c1c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23c1c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c1cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23c1ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c1d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23c1d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x23C1D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C1D4u;
            // 0x23c1d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23C1DCu;
}
