#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitInitBuildUpInfoEffectPos__Fv
// Address: 0x22f2b0 - 0x22f35c
void InitInitBuildUpInfoEffectPos__Fv_0x22f2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitInitBuildUpInfoEffectPos__Fv_0x22f2b0");
#endif

    switch (ctx->pc) {
        case 0x22f2ccu: goto label_22f2cc;
        case 0x22f2ecu: goto label_22f2ec;
        case 0x22f2fcu: goto label_22f2fc;
        case 0x22f324u: goto label_22f324;
        default: break;
    }

    ctx->pc = 0x22f2b0u;

    // 0x22f2b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22f2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22f2b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22f2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22f2b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22f2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22f2bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22f2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22f2c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22f2c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f2c4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x22F2C4u;
    {
        const bool branch_taken_0x22f2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F2C4u;
            // 0x22f2c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f2c4) {
            ctx->pc = 0x22F338u;
            goto label_22f338;
        }
    }
    ctx->pc = 0x22F2CCu;
label_22f2cc:
    // 0x22f2cc: 0x8f839480  lw          $v1, -0x6B80($gp)
    ctx->pc = 0x22f2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939776)));
    // 0x22f2d0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x22f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x22f2d4: 0xc78c9490  lwc1        $f12, -0x6B70($gp)
    ctx->pc = 0x22f2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22f2d8: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x22f2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x22f2dc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x22f2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x22f2e0: 0x24a5d430  addiu       $a1, $a1, -0x2BD0
    ctx->pc = 0x22f2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956080));
    // 0x22f2e4: 0xc08bb78  jal         func_22EDE0
    ctx->pc = 0x22F2E4u;
    SET_GPR_U32(ctx, 31, 0x22F2ECu);
    ctx->pc = 0x22F2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F2E4u;
            // 0x22f2e8: 0x712021  addu        $a0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22EDE0u;
    if (runtime->hasFunction(0x22EDE0u)) {
        auto targetFn = runtime->lookupFunction(0x22EDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F2ECu; }
        if (ctx->pc != 0x22F2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Generate__16CEffVerticalLineFPfff_0x22ede0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F2ECu; }
        if (ctx->pc != 0x22F2ECu) { return; }
    }
    ctx->pc = 0x22F2ECu;
label_22f2ec:
    // 0x22f2ec: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x22f2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x22f2f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22f2f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22f2f4: 0xc0941c0  jal         func_250700
    ctx->pc = 0x22F2F4u;
    SET_GPR_U32(ctx, 31, 0x22F2FCu);
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F2FCu; }
        if (ctx->pc != 0x22F2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F2FCu; }
        if (ctx->pc != 0x22F2FCu) { return; }
    }
    ctx->pc = 0x22F2FCu;
label_22f2fc:
    // 0x22f2fc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x22f2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x22f300: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22f300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x22f304: 0xc421d434  lwc1        $f1, -0x2BCC($at)
    ctx->pc = 0x22f304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294956084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f308: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22f308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22f30c: 0x8f839480  lw          $v1, -0x6B80($gp)
    ctx->pc = 0x22f30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939776)));
    // 0x22f310: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22f310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22f314: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22f314u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22f318: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x22f318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x22f31c: 0xc0941c0  jal         func_250700
    ctx->pc = 0x22F31Cu;
    SET_GPR_U32(ctx, 31, 0x22F324u);
    ctx->pc = 0x22F320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F31Cu;
            // 0x22f320: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F324u; }
        if (ctx->pc != 0x22F324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F324u; }
        if (ctx->pc != 0x22F324u) { return; }
    }
    ctx->pc = 0x22F324u;
label_22f324:
    // 0x22f324: 0x8f839480  lw          $v1, -0x6B80($gp)
    ctx->pc = 0x22f324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939776)));
    // 0x22f328: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22f328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x22f32c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x22f32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x22f330: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x22f330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x22f334: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x22f334u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_22f338:
    // 0x22f338: 0x8f839484  lw          $v1, -0x6B7C($gp)
    ctx->pc = 0x22f338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939780)));
    // 0x22f33c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x22f33cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22f340: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x22F340u;
    {
        const bool branch_taken_0x22f340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f340) {
            ctx->pc = 0x22F2CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22f2cc;
        }
    }
    ctx->pc = 0x22F348u;
    // 0x22f348: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22f348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f34c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22f34cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f350: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22f350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f354: 0x3e00008  jr          $ra
    ctx->pc = 0x22F354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F354u;
            // 0x22f358: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22F35Cu;
}
