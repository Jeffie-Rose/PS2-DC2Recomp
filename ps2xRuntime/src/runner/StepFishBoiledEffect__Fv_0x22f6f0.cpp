#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StepFishBoiledEffect__Fv
// Address: 0x22f6f0 - 0x22f7ec
void StepFishBoiledEffect__Fv_0x22f6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepFishBoiledEffect__Fv_0x22f6f0");
#endif

    switch (ctx->pc) {
        case 0x22f72cu: goto label_22f72c;
        case 0x22f774u: goto label_22f774;
        case 0x22f794u: goto label_22f794;
        default: break;
    }

    ctx->pc = 0x22f6f0u;

    // 0x22f6f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22f6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22f6f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22f6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x22f6f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22f6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x22f6fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22f6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22f700: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22f700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22f704: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22f704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22f708: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22f708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22f70c: 0x87829498  lh          $v0, -0x6B68($gp)
    ctx->pc = 0x22f70cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939800)));
    // 0x22f710: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F710u;
    {
        const bool branch_taken_0x22f710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F710u;
            // 0x22f714: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f710) {
            ctx->pc = 0x22F720u;
            goto label_22f720;
        }
    }
    ctx->pc = 0x22F718u;
    // 0x22f718: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x22F718u;
    {
        const bool branch_taken_0x22f718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F718u;
            // 0x22f71c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f718) {
            ctx->pc = 0x22F7CCu;
            goto label_22f7cc;
        }
    }
    ctx->pc = 0x22F720u;
label_22f720:
    // 0x22f720: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22f720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f724: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22f724u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f728: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22f728u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f72c:
    // 0x22f72c: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x22f72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x22f730: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x22f730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x22f734: 0x2442d450  addiu       $v0, $v0, -0x2BB0
    ctx->pc = 0x22f734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956112));
    // 0x22f738: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x22f738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x22f73c: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x22f73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22f740: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x22f740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x22f744: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22f744u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f748: 0x2442d490  addiu       $v0, $v0, -0x2B70
    ctx->pc = 0x22f748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956176));
    // 0x22f74c: 0x53a021  addu        $s4, $v0, $s3
    ctx->pc = 0x22f74cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x22f750: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x22f750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x22f754: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x22f754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x22f758: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22f758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22f75c: 0x0  nop
    ctx->pc = 0x22f75cu;
    // NOP
    // 0x22f760: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x22f760u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x22f764: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x22f764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x22f768: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x22f768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f76c: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x22F76Cu;
    SET_GPR_U32(ctx, 31, 0x22F774u);
    ctx->pc = 0x22F770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F76Cu;
            // 0x22f770: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F774u; }
        if (ctx->pc != 0x22F774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F774u; }
        if (ctx->pc != 0x22F774u) { return; }
    }
    ctx->pc = 0x22F774u;
label_22f774:
    // 0x22f774: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x22f774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x22f778: 0x2442d4d0  addiu       $v0, $v0, -0x2B30
    ctx->pc = 0x22f778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956240));
    // 0x22f77c: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x22f77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x22f780: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x22f780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x22f784: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22f784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22f788: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x22f788u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x22f78c: 0xc094570  jal         func_2515C0
    ctx->pc = 0x22F78Cu;
    SET_GPR_U32(ctx, 31, 0x22F794u);
    ctx->pc = 0x22F790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F78Cu;
            // 0x22f790: 0xe6800000  swc1        $f0, 0x0($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2515C0u;
    if (runtime->hasFunction(0x2515C0u)) {
        auto targetFn = runtime->lookupFunction(0x2515C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F794u; }
        if (ctx->pc != 0x22F794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPfff_0x2515c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F794u; }
        if (ctx->pc != 0x22F794u) { return; }
    }
    ctx->pc = 0x22F794u;
label_22f794:
    // 0x22f794: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22F794u;
    {
        const bool branch_taken_0x22f794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f794) {
            ctx->pc = 0x22F7A0u;
            goto label_22f7a0;
        }
    }
    ctx->pc = 0x22F79Cu;
    // 0x22f79c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22f79cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_22f7a0:
    // 0x22f7a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22f7a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x22f7a4: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x22f7a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x22f7a8: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x22f7a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x22f7ac: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x22F7ACu;
    {
        const bool branch_taken_0x22f7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F7ACu;
            // 0x22f7b0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f7ac) {
            ctx->pc = 0x22F72Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22f72c;
        }
    }
    ctx->pc = 0x22F7B4u;
    // 0x22f7b4: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x22f7b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x22f7b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22F7B8u;
    {
        const bool branch_taken_0x22f7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F7B8u;
            // 0x22f7bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f7b8) {
            ctx->pc = 0x22F7CCu;
            goto label_22f7cc;
        }
    }
    ctx->pc = 0x22F7C0u;
    // 0x22f7c0: 0xa7809498  sh          $zero, -0x6B68($gp)
    ctx->pc = 0x22f7c0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939800), (uint16_t)GPR_U32(ctx, 0));
    // 0x22f7c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22f7c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f7c8: 0xaf80949c  sw          $zero, -0x6B64($gp)
    ctx->pc = 0x22f7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939804), GPR_U32(ctx, 0));
label_22f7cc:
    // 0x22f7cc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22f7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22f7d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22f7d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22f7d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22f7d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22f7d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22f7d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f7dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22f7dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f7e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22f7e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f7e4: 0x3e00008  jr          $ra
    ctx->pc = 0x22F7E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F7E4u;
            // 0x22f7e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22F7ECu;
}
