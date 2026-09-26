#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetEnvBGMVol__6CSceneFf
// Address: 0x2a6720 - 0x2a67a4
void SetEnvBGMVol__6CSceneFf_0x2a6720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetEnvBGMVol__6CSceneFf_0x2a6720");
#endif

    switch (ctx->pc) {
        case 0x2a6798u: goto label_2a6798;
        default: break;
    }

    ctx->pc = 0x2a6720u;

    // 0x2a6720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a6720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a6724: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a6724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a6728: 0x3403a484  ori         $v1, $zero, 0xA484
    ctx->pc = 0x2a6728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42116);
    // 0x2a672c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a672cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a6730: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2a6730u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2a6734: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2a6734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a6738: 0xe42ca48c  swc1        $f12, -0x5B74($at)
    ctx->pc = 0x2a6738u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294943884), bits); }
    // 0x2a673c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2a673cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a6740: 0x4600015  bltz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A6740u;
    {
        const bool branch_taken_0x2a6740 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2A6744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6740u;
            // 0x2a6744: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6740) {
            ctx->pc = 0x2A6798u;
            goto label_2a6798;
        }
    }
    ctx->pc = 0x2A6748u;
    // 0x2a6748: 0x3403a488  ori         $v1, $zero, 0xA488
    ctx->pc = 0x2a6748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42120);
    // 0x2a674c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2a674cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2a6750: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2a6750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6754: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x2a6754u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a6758: 0x0  nop
    ctx->pc = 0x2a6758u;
    // NOP
    // 0x2a675c: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x2A675Cu;
    {
        const bool branch_taken_0x2a675c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A6760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A675Cu;
            // 0x2a6760: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a675c) {
            ctx->pc = 0x2A6798u;
            goto label_2a6798;
        }
    }
    ctx->pc = 0x2A6764u;
    // 0x2a6764: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x2a6764u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x2a6768: 0xe42ca488  swc1        $f12, -0x5B78($at)
    ctx->pc = 0x2a6768u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294943880), bits); }
    // 0x2a676c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a676cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a6770: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x2a6770u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x2a6774: 0x8c24a040  lw          $a0, -0x5FC0($at)
    ctx->pc = 0x2a6774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942784)));
    // 0x2a6778: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a6778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a677c: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x2a677cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x2a6780: 0x8c25a484  lw          $a1, -0x5B7C($at)
    ctx->pc = 0x2a6780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943876)));
    // 0x2a6784: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a6784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a6788: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x2a6788u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x2a678c: 0xc42ca488  lwc1        $f12, -0x5B78($at)
    ctx->pc = 0x2a678cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294943880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a6790: 0xc063b38  jal         func_18ECE0
    ctx->pc = 0x2A6790u;
    SET_GPR_U32(ctx, 31, 0x2A6798u);
    ctx->pc = 0x2A6794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6790u;
            // 0x2a6794: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ECE0u;
    if (runtime->hasFunction(0x18ECE0u)) {
        auto targetFn = runtime->lookupFunction(0x18ECE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6798u; }
        if (ctx->pc != 0x2A6798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSeVolf__FUiifi_0x18ece0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6798u; }
        if (ctx->pc != 0x2A6798u) { return; }
    }
    ctx->pc = 0x2A6798u;
label_2a6798:
    // 0x2a6798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a6798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a679c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A679Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A67A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A679Cu;
            // 0x2a67a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A67A4u;
}
