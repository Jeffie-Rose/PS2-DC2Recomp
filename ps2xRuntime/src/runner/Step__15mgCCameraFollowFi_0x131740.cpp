#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__15mgCCameraFollowFi
// Address: 0x131740 - 0x13194c
void Step__15mgCCameraFollowFi_0x131740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__15mgCCameraFollowFi_0x131740");
#endif

    switch (ctx->pc) {
        case 0x13177cu: goto label_13177c;
        case 0x1317a4u: goto label_1317a4;
        case 0x1317b0u: goto label_1317b0;
        case 0x1317c4u: goto label_1317c4;
        case 0x1317d0u: goto label_1317d0;
        case 0x131844u: goto label_131844;
        case 0x131898u: goto label_131898;
        case 0x1318d4u: goto label_1318d4;
        case 0x1318e0u: goto label_1318e0;
        case 0x1318f4u: goto label_1318f4;
        case 0x131904u: goto label_131904;
        default: break;
    }

    ctx->pc = 0x131740u;

    // 0x131740: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x131740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x131744: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x131744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x131748: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x131748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13174c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13174cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x131750: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x131750u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131754: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x131754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x131758: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x131758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x13175c: 0x14600075  bnez        $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x13175Cu;
    {
        const bool branch_taken_0x13175c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x131760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13175Cu;
            // 0x131760: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13175c) {
            ctx->pc = 0x131934u;
            goto label_131934;
        }
    }
    ctx->pc = 0x131764u;
    // 0x131764: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x131764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x131768: 0x14600072  bnez        $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x131768u;
    {
        const bool branch_taken_0x131768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13176Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131768u;
            // 0x13176c: 0x264400b0  addiu       $a0, $s2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131768) {
            ctx->pc = 0x131934u;
            goto label_131934;
        }
    }
    ctx->pc = 0x131770u;
    // 0x131770: 0x26450070  addiu       $a1, $s2, 0x70
    ctx->pc = 0x131770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x131774: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x131774u;
    SET_GPR_U32(ctx, 31, 0x13177Cu);
    ctx->pc = 0x131778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131774u;
            // 0x131778: 0x26460080  addiu       $a2, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13177Cu; }
        if (ctx->pc != 0x13177Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13177Cu; }
        if (ctx->pc != 0x13177Cu) { return; }
    }
    ctx->pc = 0x13177Cu;
label_13177c:
    // 0x13177c: 0x6210016  bgez        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x13177Cu;
    {
        const bool branch_taken_0x13177c = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x13177c) {
            ctx->pc = 0x1317D8u;
            goto label_1317d8;
        }
    }
    ctx->pc = 0x131784u;
    // 0x131784: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x131784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x131788: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x131788u;
    {
        const bool branch_taken_0x131788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13178Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131788u;
            // 0x13178c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131788) {
            ctx->pc = 0x1317C8u;
            goto label_1317c8;
        }
    }
    ctx->pc = 0x131790u;
    // 0x131790: 0xc6400098  lwc1        $f0, 0x98($s2)
    ctx->pc = 0x131790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131794: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x131794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131798: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x131798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13179c: 0xc04c5a0  jal         func_131680
    ctx->pc = 0x13179Cu;
    SET_GPR_U32(ctx, 31, 0x1317A4u);
    ctx->pc = 0x1317A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13179Cu;
            // 0x1317a0: 0xe640009c  swc1        $f0, 0x9C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 156), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131680u;
    if (runtime->hasFunction(0x131680u)) {
        auto targetFn = runtime->lookupFunction(0x131680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1317A4u; }
        if (ctx->pc != 0x1317A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFollowNextPos__15mgCCameraFollowFPf_0x131680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1317A4u; }
        if (ctx->pc != 0x1317A4u) { return; }
    }
    ctx->pc = 0x1317A4u;
label_1317a4:
    // 0x1317a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1317a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1317a8: 0xc04c50c  jal         func_131430
    ctx->pc = 0x1317A8u;
    SET_GPR_U32(ctx, 31, 0x1317B0u);
    ctx->pc = 0x1317ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1317A8u;
            // 0x1317ac: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131430u;
    if (runtime->hasFunction(0x131430u)) {
        auto targetFn = runtime->lookupFunction(0x131430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1317B0u; }
        if (ctx->pc != 0x1317B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextPos__9mgCCameraFPf_0x131430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1317B0u; }
        if (ctx->pc != 0x1317B0u) { return; }
    }
    ctx->pc = 0x1317B0u;
label_1317b0:
    // 0x1317b0: 0xc64c00b0  lwc1        $f12, 0xB0($s2)
    ctx->pc = 0x1317b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1317b4: 0xc64d00b4  lwc1        $f13, 0xB4($s2)
    ctx->pc = 0x1317b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1317b8: 0xc64e00b8  lwc1        $f14, 0xB8($s2)
    ctx->pc = 0x1317b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1317bc: 0xc04c51c  jal         func_131470
    ctx->pc = 0x1317BCu;
    SET_GPR_U32(ctx, 31, 0x1317C4u);
    ctx->pc = 0x1317C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1317BCu;
            // 0x1317c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131470u;
    if (runtime->hasFunction(0x131470u)) {
        auto targetFn = runtime->lookupFunction(0x131470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1317C4u; }
        if (ctx->pc != 0x1317C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextRef__9mgCCameraFfff_0x131470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1317C4u; }
        if (ctx->pc != 0x1317C4u) { return; }
    }
    ctx->pc = 0x1317C4u;
label_1317c4:
    // 0x1317c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1317c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1317c8:
    // 0x1317c8: 0xc04c444  jal         func_131110
    ctx->pc = 0x1317C8u;
    SET_GPR_U32(ctx, 31, 0x1317D0u);
    ctx->pc = 0x1317CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1317C8u;
            // 0x1317cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131110u;
    if (runtime->hasFunction(0x131110u)) {
        auto targetFn = runtime->lookupFunction(0x131110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1317D0u; }
        if (ctx->pc != 0x1317D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__9mgCCameraFi_0x131110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1317D0u; }
        if (ctx->pc != 0x1317D0u) { return; }
    }
    ctx->pc = 0x1317D0u;
label_1317d0:
    // 0x1317d0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1317D0u;
    {
        const bool branch_taken_0x1317d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1317D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1317D0u;
            // 0x1317d4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1317d0) {
            ctx->pc = 0x131938u;
            goto label_131938;
        }
    }
    ctx->pc = 0x1317D8u;
label_1317d8:
    // 0x1317d8: 0xc6400098  lwc1        $f0, 0x98($s2)
    ctx->pc = 0x1317d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1317dc: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1317dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1317e0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1317e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1317e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1317e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1317e8: 0x0  nop
    ctx->pc = 0x1317e8u;
    // NOP
    // 0x1317ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1317ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1317f0: 0x0  nop
    ctx->pc = 0x1317f0u;
    // NOP
    // 0x1317f4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1317F4u;
    {
        const bool branch_taken_0x1317f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1317f4) {
            ctx->pc = 0x131804u;
            goto label_131804;
        }
    }
    ctx->pc = 0x1317FCu;
    // 0x1317fc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1317fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x131800: 0xe6400098  swc1        $f0, 0x98($s2)
    ctx->pc = 0x131800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 152), bits); }
label_131804:
    // 0x131804: 0xc6410098  lwc1        $f1, 0x98($s2)
    ctx->pc = 0x131804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131808: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x131808u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13180c: 0x0  nop
    ctx->pc = 0x13180cu;
    // NOP
    // 0x131810: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x131810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131814: 0x0  nop
    ctx->pc = 0x131814u;
    // NOP
    // 0x131818: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x131818u;
    {
        const bool branch_taken_0x131818 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13181Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131818u;
            // 0x13181c: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x131818) {
            ctx->pc = 0x13183Cu;
            goto label_13183c;
        }
    }
    ctx->pc = 0x131820u;
    // 0x131820: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x131820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x131824: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x131824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x131828: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x131828u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13182c: 0x0  nop
    ctx->pc = 0x13182cu;
    // NOP
    // 0x131830: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x131830u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x131834: 0xe6400098  swc1        $f0, 0x98($s2)
    ctx->pc = 0x131834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 152), bits); }
    // 0x131838: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x131838u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_13183c:
    // 0x13183c: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x13183Cu;
    {
        const bool branch_taken_0x13183c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x131840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13183Cu;
            // 0x131840: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13183c) {
            ctx->pc = 0x131914u;
            goto label_131914;
        }
    }
    ctx->pc = 0x131844u;
label_131844:
    // 0x131844: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x131844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x131848: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x131848u;
    {
        const bool branch_taken_0x131848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x131848) {
            ctx->pc = 0x1318F4u;
            goto label_1318f4;
        }
    }
    ctx->pc = 0x131850u;
    // 0x131850: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x131850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131854: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x131854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x131858: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x131858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13185c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13185cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x131860: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x131860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x131864: 0x46010383  div.s       $f14, $f0, $f1
    ctx->pc = 0x131864u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x131868: 0x0  nop
    ctx->pc = 0x131868u;
    // NOP
    // 0x13186c: 0x0  nop
    ctx->pc = 0x13186cu;
    // NOP
    // 0x131870: 0x46027034  c.lt.s      $f14, $f2
    ctx->pc = 0x131870u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131874: 0x0  nop
    ctx->pc = 0x131874u;
    // NOP
    // 0x131878: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x131878u;
    {
        const bool branch_taken_0x131878 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x131878) {
            ctx->pc = 0x131884u;
            goto label_131884;
        }
    }
    ctx->pc = 0x131880u;
    // 0x131880: 0x46001386  mov.s       $f14, $f2
    ctx->pc = 0x131880u;
    ctx->f[14] = FPU_MOV_S(ctx->f[2]);
label_131884:
    // 0x131884: 0x0  nop
    ctx->pc = 0x131884u;
    // NOP
    // 0x131888: 0xc64c009c  lwc1        $f12, 0x9C($s2)
    ctx->pc = 0x131888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13188c: 0xc64d0098  lwc1        $f13, 0x98($s2)
    ctx->pc = 0x13188cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x131890: 0xc04c2d8  jal         func_130B60
    ctx->pc = 0x131890u;
    SET_GPR_U32(ctx, 31, 0x131898u);
    ctx->pc = 0x131894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131890u;
            // 0x131894: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130B60u;
    if (runtime->hasFunction(0x130B60u)) {
        auto targetFn = runtime->lookupFunction(0x130B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131898u; }
        if (ctx->pc != 0x131898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleInterpolate__Ffffi_0x130b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131898u; }
        if (ctx->pc != 0x131898u) { return; }
    }
    ctx->pc = 0x131898u;
label_131898:
    // 0x131898: 0xe640009c  swc1        $f0, 0x9C($s2)
    ctx->pc = 0x131898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 156), bits); }
    // 0x13189c: 0x3c023f8c  lui         $v0, 0x3F8C
    ctx->pc = 0x13189cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16268 << 16));
    // 0x1318a0: 0xc6410048  lwc1        $f1, 0x48($s2)
    ctx->pc = 0x1318a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1318a4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1318a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1318a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1318a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1318ac: 0x0  nop
    ctx->pc = 0x1318acu;
    // NOP
    // 0x1318b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1318b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1318b4: 0x0  nop
    ctx->pc = 0x1318b4u;
    // NOP
    // 0x1318b8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1318B8u;
    {
        const bool branch_taken_0x1318b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1318b8) {
            ctx->pc = 0x1318C8u;
            goto label_1318c8;
        }
    }
    ctx->pc = 0x1318C0u;
    // 0x1318c0: 0xc6400098  lwc1        $f0, 0x98($s2)
    ctx->pc = 0x1318c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1318c4: 0xe640009c  swc1        $f0, 0x9C($s2)
    ctx->pc = 0x1318c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 156), bits); }
label_1318c8:
    // 0x1318c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1318c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1318cc: 0xc04c5a0  jal         func_131680
    ctx->pc = 0x1318CCu;
    SET_GPR_U32(ctx, 31, 0x1318D4u);
    ctx->pc = 0x1318D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1318CCu;
            // 0x1318d0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131680u;
    if (runtime->hasFunction(0x131680u)) {
        auto targetFn = runtime->lookupFunction(0x131680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1318D4u; }
        if (ctx->pc != 0x1318D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFollowNextPos__15mgCCameraFollowFPf_0x131680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1318D4u; }
        if (ctx->pc != 0x1318D4u) { return; }
    }
    ctx->pc = 0x1318D4u;
label_1318d4:
    // 0x1318d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1318d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1318d8: 0xc04c50c  jal         func_131430
    ctx->pc = 0x1318D8u;
    SET_GPR_U32(ctx, 31, 0x1318E0u);
    ctx->pc = 0x1318DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1318D8u;
            // 0x1318dc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131430u;
    if (runtime->hasFunction(0x131430u)) {
        auto targetFn = runtime->lookupFunction(0x131430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1318E0u; }
        if (ctx->pc != 0x1318E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextPos__9mgCCameraFPf_0x131430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1318E0u; }
        if (ctx->pc != 0x1318E0u) { return; }
    }
    ctx->pc = 0x1318E0u;
label_1318e0:
    // 0x1318e0: 0xc64c00b0  lwc1        $f12, 0xB0($s2)
    ctx->pc = 0x1318e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1318e4: 0xc64d00b4  lwc1        $f13, 0xB4($s2)
    ctx->pc = 0x1318e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1318e8: 0xc64e00b8  lwc1        $f14, 0xB8($s2)
    ctx->pc = 0x1318e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1318ec: 0xc04c51c  jal         func_131470
    ctx->pc = 0x1318ECu;
    SET_GPR_U32(ctx, 31, 0x1318F4u);
    ctx->pc = 0x1318F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1318ECu;
            // 0x1318f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131470u;
    if (runtime->hasFunction(0x131470u)) {
        auto targetFn = runtime->lookupFunction(0x131470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1318F4u; }
        if (ctx->pc != 0x1318F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextRef__9mgCCameraFfff_0x131470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1318F4u; }
        if (ctx->pc != 0x1318F4u) { return; }
    }
    ctx->pc = 0x1318F4u;
label_1318f4:
    // 0x1318f4: 0x0  nop
    ctx->pc = 0x1318f4u;
    // NOP
    // 0x1318f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1318f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1318fc: 0xc04c444  jal         func_131110
    ctx->pc = 0x1318FCu;
    SET_GPR_U32(ctx, 31, 0x131904u);
    ctx->pc = 0x131900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1318FCu;
            // 0x131900: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131110u;
    if (runtime->hasFunction(0x131110u)) {
        auto targetFn = runtime->lookupFunction(0x131110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131904u; }
        if (ctx->pc != 0x131904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__9mgCCameraFi_0x131110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131904u; }
        if (ctx->pc != 0x131904u) { return; }
    }
    ctx->pc = 0x131904u;
label_131904:
    // 0x131904: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x131904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x131908: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x131908u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x13190c: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x13190Cu;
    {
        const bool branch_taken_0x13190c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13190c) {
            ctx->pc = 0x131844u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_131844;
        }
    }
    ctx->pc = 0x131914u;
label_131914:
    // 0x131914: 0x0  nop
    ctx->pc = 0x131914u;
    // NOP
    // 0x131918: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x131918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x13191c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13191Cu;
    {
        const bool branch_taken_0x13191c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13191c) {
            ctx->pc = 0x131934u;
            goto label_131934;
        }
    }
    ctx->pc = 0x131924u;
    // 0x131924: 0xc6400050  lwc1        $f0, 0x50($s2)
    ctx->pc = 0x131924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131928: 0xe6400098  swc1        $f0, 0x98($s2)
    ctx->pc = 0x131928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 152), bits); }
    // 0x13192c: 0xc6400050  lwc1        $f0, 0x50($s2)
    ctx->pc = 0x13192cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131930: 0xe640009c  swc1        $f0, 0x9C($s2)
    ctx->pc = 0x131930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 156), bits); }
label_131934:
    // 0x131934: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x131934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_131938:
    // 0x131938: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x131938u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13193c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13193cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131940: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131944: 0x3e00008  jr          $ra
    ctx->pc = 0x131944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131944u;
            // 0x131948: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13194Cu;
}
