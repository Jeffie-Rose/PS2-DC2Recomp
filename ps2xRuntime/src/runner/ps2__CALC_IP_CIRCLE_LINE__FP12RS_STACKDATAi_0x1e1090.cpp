#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CALC_IP_CIRCLE_LINE__FP12RS_STACKDATAi
// Address: 0x1e1090 - 0x1e11e8
void ps2__CALC_IP_CIRCLE_LINE__FP12RS_STACKDATAi_0x1e1090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CALC_IP_CIRCLE_LINE__FP12RS_STACKDATAi_0x1e1090");
#endif

    switch (ctx->pc) {
        case 0x1e10a4u: goto label_1e10a4;
        case 0x1e10b4u: goto label_1e10b4;
        case 0x1e10c4u: goto label_1e10c4;
        case 0x1e10d4u: goto label_1e10d4;
        case 0x1e10e4u: goto label_1e10e4;
        case 0x1e10f4u: goto label_1e10f4;
        case 0x1e1104u: goto label_1e1104;
        case 0x1e1150u: goto label_1e1150;
        case 0x1e1160u: goto label_1e1160;
        case 0x1e117cu: goto label_1e117c;
        case 0x1e118cu: goto label_1e118c;
        case 0x1e119cu: goto label_1e119c;
        case 0x1e11acu: goto label_1e11ac;
        case 0x1e11c8u: goto label_1e11c8;
        case 0x1e11d4u: goto label_1e11d4;
        default: break;
    }

    ctx->pc = 0x1e1090u;

    // 0x1e1090: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e1090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e1094: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e1098: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e109c: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E109Cu;
    SET_GPR_U32(ctx, 31, 0x1E10A4u);
    ctx->pc = 0x1E10A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E109Cu;
            // 0x1e10a0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E10A4u; }
        if (ctx->pc != 0x1E10A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E10A4u; }
        if (ctx->pc != 0x1E10A4u) { return; }
    }
    ctx->pc = 0x1E10A4u;
label_1e10a4:
    // 0x1e10a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e10a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e10a8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1e10a8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1e10ac: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E10ACu;
    SET_GPR_U32(ctx, 31, 0x1E10B4u);
    ctx->pc = 0x1E10B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E10ACu;
            // 0x1e10b0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E10B4u; }
        if (ctx->pc != 0x1E10B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E10B4u; }
        if (ctx->pc != 0x1E10B4u) { return; }
    }
    ctx->pc = 0x1E10B4u;
label_1e10b4:
    // 0x1e10b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e10b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e10b8: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1e10b8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x1e10bc: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E10BCu;
    SET_GPR_U32(ctx, 31, 0x1E10C4u);
    ctx->pc = 0x1E10C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E10BCu;
            // 0x1e10c0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E10C4u; }
        if (ctx->pc != 0x1E10C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E10C4u; }
        if (ctx->pc != 0x1E10C4u) { return; }
    }
    ctx->pc = 0x1E10C4u;
label_1e10c4:
    // 0x1e10c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e10c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e10c8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1e10c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1e10cc: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E10CCu;
    SET_GPR_U32(ctx, 31, 0x1E10D4u);
    ctx->pc = 0x1E10D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E10CCu;
            // 0x1e10d0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E10D4u; }
        if (ctx->pc != 0x1E10D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E10D4u; }
        if (ctx->pc != 0x1E10D4u) { return; }
    }
    ctx->pc = 0x1E10D4u;
label_1e10d4:
    // 0x1e10d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e10d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e10d8: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x1e10d8u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x1e10dc: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E10DCu;
    SET_GPR_U32(ctx, 31, 0x1E10E4u);
    ctx->pc = 0x1E10E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E10DCu;
            // 0x1e10e0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E10E4u; }
        if (ctx->pc != 0x1E10E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E10E4u; }
        if (ctx->pc != 0x1E10E4u) { return; }
    }
    ctx->pc = 0x1E10E4u;
label_1e10e4:
    // 0x1e10e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e10e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e10e8: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x1e10e8u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x1e10ec: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E10ECu;
    SET_GPR_U32(ctx, 31, 0x1E10F4u);
    ctx->pc = 0x1E10F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E10ECu;
            // 0x1e10f0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E10F4u; }
        if (ctx->pc != 0x1E10F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E10F4u; }
        if (ctx->pc != 0x1E10F4u) { return; }
    }
    ctx->pc = 0x1E10F4u;
label_1e10f4:
    // 0x1e10f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e10f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e10f8: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x1e10f8u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x1e10fc: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E10FCu;
    SET_GPR_U32(ctx, 31, 0x1E1104u);
    ctx->pc = 0x1E1100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E10FCu;
            // 0x1e1100: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1104u; }
        if (ctx->pc != 0x1E1104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1104u; }
        if (ctx->pc != 0x1E1104u) { return; }
    }
    ctx->pc = 0x1E1104u;
label_1e1104:
    // 0x1e1104: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e1104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e1108: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1e1108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e110c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1e110cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1e1110: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1e1110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e1114: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1e1114u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1e1118: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1e1118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e111c: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x1e111cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1e1120: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x1e1120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e1124: 0xe7a40038  swc1        $f4, 0x38($sp)
    ctx->pc = 0x1e1124u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1e1128: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x1e1128u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e112c: 0xe7a50040  swc1        $f5, 0x40($sp)
    ctx->pc = 0x1e112cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1e1130: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x1e1130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1e1134: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1e1134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1e1138: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x1e1138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x1e113c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1e113cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1e1140: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1e1140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1e1144: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1e1144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1e1148: 0xc056f64  jal         func_15BD90
    ctx->pc = 0x1E1148u;
    SET_GPR_U32(ctx, 31, 0x1E1150u);
    ctx->pc = 0x1E114Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1148u;
            // 0x1e114c: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BD90u;
    if (runtime->hasFunction(0x15BD90u)) {
        auto targetFn = runtime->lookupFunction(0x15BD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1150u; }
        if (ctx->pc != 0x1E1150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcIntersectionPointSphereAndLine__FPffPfPfPfPf_0x15bd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1150u; }
        if (ctx->pc != 0x1E1150u) { return; }
    }
    ctx->pc = 0x1E1150u;
label_1e1150:
    // 0x1e1150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e1150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1154: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e1154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1158: 0xc0781bc  jal         func_1E06F0
    ctx->pc = 0x1E1158u;
    SET_GPR_U32(ctx, 31, 0x1E1160u);
    ctx->pc = 0x1E115Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1158u;
            // 0x1e115c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1160u; }
        if (ctx->pc != 0x1E1160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1160u; }
        if (ctx->pc != 0x1E1160u) { return; }
    }
    ctx->pc = 0x1E1160u;
label_1e1160:
    // 0x1e1160: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e1160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e1164: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E1164u;
    {
        const bool branch_taken_0x1e1164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E1168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1164u;
            // 0x1e1168: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1164) {
            ctx->pc = 0x1E11B0u;
            goto label_1e11b0;
        }
    }
    ctx->pc = 0x1E116Cu;
    // 0x1e116c: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x1e116cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e1170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e1170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1174: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E1174u;
    SET_GPR_U32(ctx, 31, 0x1E117Cu);
    ctx->pc = 0x1E1178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1174u;
            // 0x1e1178: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E117Cu; }
        if (ctx->pc != 0x1E117Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E117Cu; }
        if (ctx->pc != 0x1E117Cu) { return; }
    }
    ctx->pc = 0x1E117Cu;
label_1e117c:
    // 0x1e117c: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x1e117cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e1180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e1180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1184: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E1184u;
    SET_GPR_U32(ctx, 31, 0x1E118Cu);
    ctx->pc = 0x1E1188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1184u;
            // 0x1e1188: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E118Cu; }
        if (ctx->pc != 0x1E118Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E118Cu; }
        if (ctx->pc != 0x1E118Cu) { return; }
    }
    ctx->pc = 0x1E118Cu;
label_1e118c:
    // 0x1e118c: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x1e118cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e1190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e1190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1194: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E1194u;
    SET_GPR_U32(ctx, 31, 0x1E119Cu);
    ctx->pc = 0x1E1198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1194u;
            // 0x1e1198: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E119Cu; }
        if (ctx->pc != 0x1E119Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E119Cu; }
        if (ctx->pc != 0x1E119Cu) { return; }
    }
    ctx->pc = 0x1E119Cu;
label_1e119c:
    // 0x1e119c: 0xc7ac0068  lwc1        $f12, 0x68($sp)
    ctx->pc = 0x1e119cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e11a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e11a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e11a4: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E11A4u;
    SET_GPR_U32(ctx, 31, 0x1E11ACu);
    ctx->pc = 0x1E11A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E11A4u;
            // 0x1e11a8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E11ACu; }
        if (ctx->pc != 0x1E11ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E11ACu; }
        if (ctx->pc != 0x1E11ACu) { return; }
    }
    ctx->pc = 0x1E11ACu;
label_1e11ac:
    // 0x1e11ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e11acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e11b0:
    // 0x1e11b0: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E11B0u;
    {
        const bool branch_taken_0x1e11b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e11b0) {
            ctx->pc = 0x1E11D4u;
            goto label_1e11d4;
        }
    }
    ctx->pc = 0x1E11B8u;
    // 0x1e11b8: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x1e11b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e11bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e11bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e11c0: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E11C0u;
    SET_GPR_U32(ctx, 31, 0x1E11C8u);
    ctx->pc = 0x1E11C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E11C0u;
            // 0x1e11c4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E11C8u; }
        if (ctx->pc != 0x1E11C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E11C8u; }
        if (ctx->pc != 0x1E11C8u) { return; }
    }
    ctx->pc = 0x1E11C8u;
label_1e11c8:
    // 0x1e11c8: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x1e11c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e11cc: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E11CCu;
    SET_GPR_U32(ctx, 31, 0x1E11D4u);
    ctx->pc = 0x1E11D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E11CCu;
            // 0x1e11d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E11D4u; }
        if (ctx->pc != 0x1E11D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E11D4u; }
        if (ctx->pc != 0x1E11D4u) { return; }
    }
    ctx->pc = 0x1E11D4u;
label_1e11d4:
    // 0x1e11d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e11d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e11d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e11d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e11dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e11dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e11e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E11E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E11E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E11E0u;
            // 0x1e11e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E11E8u;
}
