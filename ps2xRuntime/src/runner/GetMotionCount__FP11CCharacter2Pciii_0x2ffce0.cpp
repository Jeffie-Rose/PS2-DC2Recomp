#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMotionCount__FP11CCharacter2Pciii
// Address: 0x2ffce0 - 0x2ffd9c
void GetMotionCount__FP11CCharacter2Pciii_0x2ffce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMotionCount__FP11CCharacter2Pciii_0x2ffce0");
#endif

    switch (ctx->pc) {
        case 0x2ffd08u: goto label_2ffd08;
        case 0x2ffd64u: goto label_2ffd64;
        default: break;
    }

    ctx->pc = 0x2ffce0u;

    // 0x2ffce0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ffce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ffce4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ffce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ffce8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ffce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ffcec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ffcecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ffcf0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2ffcf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffcf4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ffcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ffcf8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2ffcf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffcfc: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2ffcfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffd00: 0xc05d2b4  jal         func_174AD0
    ctx->pc = 0x2FFD00u;
    SET_GPR_U32(ctx, 31, 0x2FFD08u);
    ctx->pc = 0x2FFD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFD00u;
            // 0x2ffd04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174AD0u;
    if (runtime->hasFunction(0x174AD0u)) {
        auto targetFn = runtime->lookupFunction(0x174AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFD08u; }
        if (ctx->pc != 0x2FFD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetKeyListPtr__11CCharacter2FPcPi_0x174ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFD08u; }
        if (ctx->pc != 0x2FFD08u) { return; }
    }
    ctx->pc = 0x2FFD08u;
label_2ffd08:
    // 0x2ffd08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FFD08u;
    {
        const bool branch_taken_0x2ffd08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ffd08) {
            ctx->pc = 0x2FFD18u;
            goto label_2ffd18;
        }
    }
    ctx->pc = 0x2FFD10u;
    // 0x2ffd10: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2FFD10u;
    {
        const bool branch_taken_0x2ffd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFD10u;
            // 0x2ffd14: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffd10) {
            ctx->pc = 0x2FFD84u;
            goto label_2ffd84;
        }
    }
    ctx->pc = 0x2FFD18u;
label_2ffd18:
    // 0x2ffd18: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2ffd18u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ffd1c: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x2ffd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ffd20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ffd20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ffd24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ffd24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ffd28: 0x0  nop
    ctx->pc = 0x2ffd28u;
    // NOP
    // 0x2ffd2c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2FFD2Cu;
    {
        const bool branch_taken_0x2ffd2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ffd2c) {
            ctx->pc = 0x2FFD38u;
            goto label_2ffd38;
        }
    }
    ctx->pc = 0x2FFD34u;
    // 0x2ffd34: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2ffd34u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2ffd38:
    // 0x2ffd38: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x2ffd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2ffd3c: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x2ffd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2ffd40: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2ffd40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ffd44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ffd44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ffd48: 0x0  nop
    ctx->pc = 0x2ffd48u;
    // NOP
    // 0x2ffd4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ffd4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ffd50: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x2ffd50u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2ffd54: 0x0  nop
    ctx->pc = 0x2ffd54u;
    // NOP
    // 0x2ffd58: 0x0  nop
    ctx->pc = 0x2ffd58u;
    // NOP
    // 0x2ffd5c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2FFD5Cu;
    SET_GPR_U32(ctx, 31, 0x2FFD64u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFD64u; }
        if (ctx->pc != 0x2FFD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFD64u; }
        if (ctx->pc != 0x2FFD64u) { return; }
    }
    ctx->pc = 0x2FFD64u;
label_2ffd64:
    // 0x2ffd64: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x2ffd64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ffd68: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FFD68u;
    {
        const bool branch_taken_0x2ffd68 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFD68u;
            // 0x2ffd6c: 0x51182a  slt         $v1, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffd68) {
            ctx->pc = 0x2FFD78u;
            goto label_2ffd78;
        }
    }
    ctx->pc = 0x2FFD70u;
    // 0x2ffd70: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2ffd70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffd74: 0x51182a  slt         $v1, $v0, $s1
    ctx->pc = 0x2ffd74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2ffd78:
    // 0x2ffd78: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FFD78u;
    {
        const bool branch_taken_0x2ffd78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ffd78) {
            ctx->pc = 0x2FFD84u;
            goto label_2ffd84;
        }
    }
    ctx->pc = 0x2FFD80u;
    // 0x2ffd80: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ffd80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ffd84:
    // 0x2ffd84: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ffd84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ffd88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ffd88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ffd8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ffd8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ffd90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ffd90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ffd94: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFD94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFD94u;
            // 0x2ffd98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FFD9Cu;
}
