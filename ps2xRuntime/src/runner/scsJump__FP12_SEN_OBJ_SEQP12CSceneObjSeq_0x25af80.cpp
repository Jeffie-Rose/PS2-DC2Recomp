#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsJump__FP12_SEN_OBJ_SEQP12CSceneObjSeq
// Address: 0x25af80 - 0x25b024
void scsJump__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25af80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsJump__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25af80");
#endif

    switch (ctx->pc) {
        case 0x25afacu: goto label_25afac;
        case 0x25afb8u: goto label_25afb8;
        case 0x25afd8u: goto label_25afd8;
        case 0x25b00cu: goto label_25b00c;
        default: break;
    }

    ctx->pc = 0x25af80u;

    // 0x25af80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25af80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25af84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25af84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25af88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25af88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25af8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25af8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25af90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25af90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25af94: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x25af94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x25af98: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25AF98u;
    {
        const bool branch_taken_0x25af98 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x25AF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AF98u;
            // 0x25af9c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25af98) {
            ctx->pc = 0x25AFB8u;
            goto label_25afb8;
        }
    }
    ctx->pc = 0x25AFA0u;
    // 0x25afa0: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x25afa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x25afa4: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25AFA4u;
    SET_GPR_U32(ctx, 31, 0x25AFACu);
    ctx->pc = 0x25AFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AFA4u;
            // 0x25afa8: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AFACu; }
        if (ctx->pc != 0x25AFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AFACu; }
        if (ctx->pc != 0x25AFACu) { return; }
    }
    ctx->pc = 0x25AFACu;
label_25afac:
    // 0x25afac: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x25afacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x25afb0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25AFB0u;
    SET_GPR_U32(ctx, 31, 0x25AFB8u);
    ctx->pc = 0x25AFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AFB0u;
            // 0x25afb4: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AFB8u; }
        if (ctx->pc != 0x25AFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AFB8u; }
        if (ctx->pc != 0x25AFB8u) { return; }
    }
    ctx->pc = 0x25AFB8u;
label_25afb8:
    // 0x25afb8: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x25afb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x25afbc: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x25afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x25afc0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x25afc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25afc4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25AFC4u;
    {
        const bool branch_taken_0x25afc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25AFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AFC4u;
            // 0x25afc8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25afc4) {
            ctx->pc = 0x25AFE4u;
            goto label_25afe4;
        }
    }
    ctx->pc = 0x25AFCCu;
    // 0x25afcc: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x25afccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x25afd0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25AFD0u;
    SET_GPR_U32(ctx, 31, 0x25AFD8u);
    ctx->pc = 0x25AFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AFD0u;
            // 0x25afd4: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AFD8u; }
        if (ctx->pc != 0x25AFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AFD8u; }
        if (ctx->pc != 0x25AFD8u) { return; }
    }
    ctx->pc = 0x25AFD8u;
label_25afd8:
    // 0x25afd8: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x25afd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x25afdc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25AFDCu;
    {
        const bool branch_taken_0x25afdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AFDCu;
            // 0x25afe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25afdc) {
            ctx->pc = 0x25B010u;
            goto label_25b010;
        }
    }
    ctx->pc = 0x25AFE4u;
label_25afe4:
    // 0x25afe4: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x25afe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x25afe8: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x25afe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x25afec: 0x26050100  addiu       $a1, $s0, 0x100
    ctx->pc = 0x25afecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x25aff0: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x25aff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25aff4: 0x26060110  addiu       $a2, $s0, 0x110
    ctx->pc = 0x25aff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x25aff8: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x25aff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25affc: 0xc62c0020  lwc1        $f12, 0x20($s1)
    ctx->pc = 0x25affcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25b000: 0x46800b60  cvt.s.w     $f13, $f1
    ctx->pc = 0x25b000u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x25b004: 0xc0a4020  jal         func_290080
    ctx->pc = 0x25B004u;
    SET_GPR_U32(ctx, 31, 0x25B00Cu);
    ctx->pc = 0x25B008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B004u;
            // 0x25b008: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x290080u;
    if (runtime->hasFunction(0x290080u)) {
        auto targetFn = runtime->lookupFunction(0x290080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B00Cu; }
        if (ctx->pc != 0x25B00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPosParabolicJump__FPfPfPffff_0x290080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B00Cu; }
        if (ctx->pc != 0x25B00Cu) { return; }
    }
    ctx->pc = 0x25B00Cu;
label_25b00c:
    // 0x25b00c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25b00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25b010:
    // 0x25b010: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25b010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b014: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25b014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b018: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25b018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b01c: 0x3e00008  jr          $ra
    ctx->pc = 0x25B01Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B01Cu;
            // 0x25b020: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25B024u;
}
