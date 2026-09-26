#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitSpectolRasterTable__FP9mgCMemory
// Address: 0x220700 - 0x2207f0
void InitSpectolRasterTable__FP9mgCMemory_0x220700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitSpectolRasterTable__FP9mgCMemory_0x220700");
#endif

    switch (ctx->pc) {
        case 0x220720u: goto label_220720;
        case 0x22072cu: goto label_22072c;
        case 0x220760u: goto label_220760;
        case 0x220780u: goto label_220780;
        case 0x220788u: goto label_220788;
        default: break;
    }

    ctx->pc = 0x220700u;

    // 0x220700: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x220700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x220704: 0x240504e0  addiu       $a1, $zero, 0x4E0
    ctx->pc = 0x220704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1248));
    // 0x220708: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x220708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22070c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22070cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x220710: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x220710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x220714: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x220714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x220718: 0xc04e748  jal         func_139D20
    ctx->pc = 0x220718u;
    SET_GPR_U32(ctx, 31, 0x220720u);
    ctx->pc = 0x22071Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220718u;
            // 0x22071c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220720u; }
        if (ctx->pc != 0x220720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220720u; }
        if (ctx->pc != 0x220720u) { return; }
    }
    ctx->pc = 0x220720u;
label_220720:
    // 0x220720: 0xaf829354  sw          $v0, -0x6CAC($gp)
    ctx->pc = 0x220720u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939476), GPR_U32(ctx, 2));
    // 0x220724: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x220724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220728: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x220728u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22072c:
    // 0x22072c: 0x44901000  mtc1        $s0, $f2
    ctx->pc = 0x22072cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x220730: 0x3c033d2b  lui         $v1, 0x3D2B
    ctx->pc = 0x220730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15659 << 16));
    // 0x220734: 0x346492a6  ori         $a0, $v1, 0x92A6
    ctx->pc = 0x220734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37542);
    // 0x220738: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x220738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x22073c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x22073cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x220740: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x220740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x220744: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x220744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x220748: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x220748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22074c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x22074cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x220750: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x220750u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x220754: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x220754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220758: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x220758u;
    {
        const bool branch_taken_0x220758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22075Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220758u;
            // 0x22075c: 0x46021d02  mul.s       $f20, $f3, $f2 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220758) {
            ctx->pc = 0x220764u;
            goto label_220764;
        }
    }
    ctx->pc = 0x220760u;
label_220760:
    // 0x220760: 0x4601a501  sub.s       $f20, $f20, $f1
    ctx->pc = 0x220760u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_220764:
    // 0x220764: 0x0  nop
    ctx->pc = 0x220764u;
    // NOP
    // 0x220768: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x220768u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22076c: 0x0  nop
    ctx->pc = 0x22076cu;
    // NOP
    // 0x220770: 0x0  nop
    ctx->pc = 0x220770u;
    // NOP
    // 0x220774: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x220774u;
    {
        const bool branch_taken_0x220774 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x220774) {
            ctx->pc = 0x220760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220760;
        }
    }
    ctx->pc = 0x22077Cu;
    // 0x22077c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22077cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220780:
    // 0x220780: 0xc047a42  jal         func_11E908
    ctx->pc = 0x220780u;
    SET_GPR_U32(ctx, 31, 0x220788u);
    ctx->pc = 0x220784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220780u;
            // 0x220784: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220788u; }
        if (ctx->pc != 0x220788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220788u; }
        if (ctx->pc != 0x220788u) { return; }
    }
    ctx->pc = 0x220788u;
label_220788:
    // 0x220788: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x220788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
    // 0x22078c: 0x2511821  addu        $v1, $s2, $s1
    ctx->pc = 0x22078cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x220790: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x220790u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x220794: 0x8f859354  lw          $a1, -0x6CAC($gp)
    ctx->pc = 0x220794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x220798: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x220798u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22079c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22079cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2207a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2207a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2207a4: 0x3c033e20  lui         $v1, 0x3E20
    ctx->pc = 0x2207a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15904 << 16));
    // 0x2207a8: 0x3464d97c  ori         $a0, $v1, 0xD97C
    ctx->pc = 0x2207a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55676);
    // 0x2207ac: 0x2a230020  slti        $v1, $s1, 0x20
    ctx->pc = 0x2207acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2207b0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2207b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2207b4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2207b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2207b8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2207b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2207bc: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2207BCu;
    {
        const bool branch_taken_0x2207bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2207C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2207BCu;
            // 0x2207c0: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2207bc) {
            ctx->pc = 0x220780u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220780;
        }
    }
    ctx->pc = 0x2207C4u;
    // 0x2207c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2207c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2207c8: 0x2a03009c  slti        $v1, $s0, 0x9C
    ctx->pc = 0x2207c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)156) ? 1 : 0);
    // 0x2207cc: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2207CCu;
    {
        const bool branch_taken_0x2207cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2207D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2207CCu;
            // 0x2207d0: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2207cc) {
            ctx->pc = 0x22072Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22072c;
        }
    }
    ctx->pc = 0x2207D4u;
    // 0x2207d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2207d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2207d8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2207d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2207dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2207dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2207e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2207e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2207e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2207e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2207e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2207E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2207ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2207E8u;
            // 0x2207ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2207F0u;
}
