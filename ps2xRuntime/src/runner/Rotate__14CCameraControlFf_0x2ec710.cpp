#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Rotate__14CCameraControlFf
// Address: 0x2ec710 - 0x2ec790
void Rotate__14CCameraControlFf_0x2ec710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Rotate__14CCameraControlFf_0x2ec710");
#endif

    switch (ctx->pc) {
        case 0x2ec738u: goto label_2ec738;
        case 0x2ec744u: goto label_2ec744;
        case 0x2ec74cu: goto label_2ec74c;
        case 0x2ec75cu: goto label_2ec75c;
        case 0x2ec76cu: goto label_2ec76c;
        case 0x2ec77cu: goto label_2ec77c;
        default: break;
    }

    ctx->pc = 0x2ec710u;

    // 0x2ec710: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ec710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2ec714: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ec714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ec718: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ec718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ec71c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ec71cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec720: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2ec720u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ec724: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2ec724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ec728: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2ec728u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2ec72c: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x2ec72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2ec730: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2EC730u;
    SET_GPR_U32(ctx, 31, 0x2EC738u);
    ctx->pc = 0x2EC734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC730u;
            // 0x2ec734: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC738u; }
        if (ctx->pc != 0x2EC738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC738u; }
        if (ctx->pc != 0x2EC738u) { return; }
    }
    ctx->pc = 0x2EC738u;
label_2ec738:
    // 0x2ec738: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2ec738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ec73c: 0xc04c050  jal         func_130140
    ctx->pc = 0x2EC73Cu;
    SET_GPR_U32(ctx, 31, 0x2EC744u);
    ctx->pc = 0x2EC740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC73Cu;
            // 0x2ec740: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC744u; }
        if (ctx->pc != 0x2EC744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC744u; }
        if (ctx->pc != 0x2EC744u) { return; }
    }
    ctx->pc = 0x2EC744u;
label_2ec744:
    // 0x2ec744: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x2EC744u;
    SET_GPR_U32(ctx, 31, 0x2EC74Cu);
    ctx->pc = 0x2EC748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC744u;
            // 0x2ec748: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC74Cu; }
        if (ctx->pc != 0x2EC74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC74Cu; }
        if (ctx->pc != 0x2EC74Cu) { return; }
    }
    ctx->pc = 0x2EC74Cu;
label_2ec74c:
    // 0x2ec74c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2ec74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ec750: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ec750u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2ec754: 0xc041cf6  jal         func_1073D8
    ctx->pc = 0x2EC754u;
    SET_GPR_U32(ctx, 31, 0x2EC75Cu);
    ctx->pc = 0x2EC758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC754u;
            // 0x2ec758: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC75Cu; }
        if (ctx->pc != 0x2EC75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC75Cu; }
        if (ctx->pc != 0x2EC75Cu) { return; }
    }
    ctx->pc = 0x2EC75Cu;
label_2ec75c:
    // 0x2ec75c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2ec75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ec760: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2ec760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ec764: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x2EC764u;
    SET_GPR_U32(ctx, 31, 0x2EC76Cu);
    ctx->pc = 0x2EC768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC764u;
            // 0x2ec768: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC76Cu; }
        if (ctx->pc != 0x2EC76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC76Cu; }
        if (ctx->pc != 0x2EC76Cu) { return; }
    }
    ctx->pc = 0x2EC76Cu;
label_2ec76c:
    // 0x2ec76c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2ec76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2ec770: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x2ec770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2ec774: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x2EC774u;
    SET_GPR_U32(ctx, 31, 0x2EC77Cu);
    ctx->pc = 0x2EC778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC774u;
            // 0x2ec778: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC77Cu; }
        if (ctx->pc != 0x2EC77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC77Cu; }
        if (ctx->pc != 0x2EC77Cu) { return; }
    }
    ctx->pc = 0x2EC77Cu;
label_2ec77c:
    // 0x2ec77c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ec77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ec780: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2ec780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ec784: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ec784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ec788: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC788u;
            // 0x2ec78c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EC790u;
}
