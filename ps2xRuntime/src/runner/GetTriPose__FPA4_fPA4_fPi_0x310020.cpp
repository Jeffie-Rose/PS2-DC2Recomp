#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetTriPose__FPA4_fPA4_fPi
// Address: 0x310020 - 0x3101f0
void GetTriPose__FPA4_fPA4_fPi_0x310020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTriPose__FPA4_fPA4_fPi_0x310020");
#endif

    switch (ctx->pc) {
        case 0x31008cu: goto label_31008c;
        case 0x3100b8u: goto label_3100b8;
        case 0x3100e4u: goto label_3100e4;
        case 0x310100u: goto label_310100;
        case 0x31010cu: goto label_31010c;
        case 0x310128u: goto label_310128;
        case 0x310134u: goto label_310134;
        case 0x31014cu: goto label_31014c;
        case 0x310158u: goto label_310158;
        case 0x310164u: goto label_310164;
        case 0x310170u: goto label_310170;
        case 0x310190u: goto label_310190;
        case 0x3101b0u: goto label_3101b0;
        case 0x3101d0u: goto label_3101d0;
        default: break;
    }

    ctx->pc = 0x310020u;

    // 0x310020: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x310020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x310024: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x310024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x310028: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x310028u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31002c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x31002cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x310030: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x310030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x310034: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x310034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x310038: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x310038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31003c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31003cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x310040: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x310040u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x310044: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x310044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x310048: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x310048u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31004c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31004cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x310050: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x310050u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x310054: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x310054u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x310058: 0x78a70010  lq          $a3, 0x10($a1)
    ctx->pc = 0x310058u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x31005c: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x31005cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    // 0x310060: 0x78a30020  lq          $v1, 0x20($a1)
    ctx->pc = 0x310060u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x310064: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x310064u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x310068: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x310068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31006c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x31006cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x310070: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x310070u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310074: 0x0  nop
    ctx->pc = 0x310074u;
    // NOP
    // 0x310078: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x310078u;
    {
        const bool branch_taken_0x310078 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31007Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310078u;
            // 0x31007c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310078) {
            ctx->pc = 0x310084u;
            goto label_310084;
        }
    }
    ctx->pc = 0x310080u;
    // 0x310080: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x310080u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
label_310084:
    // 0x310084: 0xc0a248c  jal         func_289230
    ctx->pc = 0x310084u;
    SET_GPR_U32(ctx, 31, 0x31008Cu);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31008Cu; }
        if (ctx->pc != 0x31008Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31008Cu; }
        if (ctx->pc != 0x31008Cu) { return; }
    }
    ctx->pc = 0x31008Cu;
label_31008c:
    // 0x31008c: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x31008cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310090: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x310090u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310094: 0x0  nop
    ctx->pc = 0x310094u;
    // NOP
    // 0x310098: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x310098u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x31009c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x31009cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3100a0: 0x0  nop
    ctx->pc = 0x3100a0u;
    // NOP
    // 0x3100a4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3100A4u;
    {
        const bool branch_taken_0x3100a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3100A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3100A4u;
            // 0x3100a8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3100a4) {
            ctx->pc = 0x3100B0u;
            goto label_3100b0;
        }
    }
    ctx->pc = 0x3100ACu;
    // 0x3100ac: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x3100acu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
label_3100b0:
    // 0x3100b0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x3100B0u;
    SET_GPR_U32(ctx, 31, 0x3100B8u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3100B8u; }
        if (ctx->pc != 0x3100B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3100B8u; }
        if (ctx->pc != 0x3100B8u) { return; }
    }
    ctx->pc = 0x3100B8u;
label_3100b8:
    // 0x3100b8: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x3100b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3100bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3100bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3100c0: 0x0  nop
    ctx->pc = 0x3100c0u;
    // NOP
    // 0x3100c4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x3100c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x3100c8: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x3100c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3100cc: 0x0  nop
    ctx->pc = 0x3100ccu;
    // NOP
    // 0x3100d0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3100D0u;
    {
        const bool branch_taken_0x3100d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3100D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3100D0u;
            // 0x3100d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3100d0) {
            ctx->pc = 0x3100DCu;
            goto label_3100dc;
        }
    }
    ctx->pc = 0x3100D8u;
    // 0x3100d8: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x3100d8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
label_3100dc:
    // 0x3100dc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x3100DCu;
    SET_GPR_U32(ctx, 31, 0x3100E4u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3100E4u; }
        if (ctx->pc != 0x3100E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3100E4u; }
        if (ctx->pc != 0x3100E4u) { return; }
    }
    ctx->pc = 0x3100E4u;
label_3100e4:
    // 0x3100e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3100e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3100e8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3100e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3100ec: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x3100ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x3100f0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3100f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3100f4: 0x2828821  addu        $s1, $s4, $v0
    ctx->pc = 0x3100f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x3100f8: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x3100F8u;
    SET_GPR_U32(ctx, 31, 0x310100u);
    ctx->pc = 0x3100FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3100F8u;
            // 0x3100fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310100u; }
        if (ctx->pc != 0x310100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310100u; }
        if (ctx->pc != 0x310100u) { return; }
    }
    ctx->pc = 0x310100u;
label_310100:
    // 0x310100: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x310100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310104: 0xc041be0  jal         func_106F80
    ctx->pc = 0x310104u;
    SET_GPR_U32(ctx, 31, 0x31010Cu);
    ctx->pc = 0x310108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310104u;
            // 0x310108: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31010Cu; }
        if (ctx->pc != 0x31010Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31010Cu; }
        if (ctx->pc != 0x31010Cu) { return; }
    }
    ctx->pc = 0x31010Cu;
label_31010c:
    // 0x31010c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x31010cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x310110: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x310110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x310114: 0x2829021  addu        $s2, $s4, $v0
    ctx->pc = 0x310114u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x310118: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x310118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x31011c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31011cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310120: 0xc04bd60  jal         func_12F580
    ctx->pc = 0x310120u;
    SET_GPR_U32(ctx, 31, 0x310128u);
    ctx->pc = 0x310124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310120u;
            // 0x310124: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F580u;
    if (runtime->hasFunction(0x12F580u)) {
        auto targetFn = runtime->lookupFunction(0x12F580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310128u; }
        if (ctx->pc != 0x310128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPlaneNormal__FPfPfPfPf_0x12f580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310128u; }
        if (ctx->pc != 0x310128u) { return; }
    }
    ctx->pc = 0x310128u;
label_310128:
    // 0x310128: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x310128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31012c: 0xc041be0  jal         func_106F80
    ctx->pc = 0x31012Cu;
    SET_GPR_U32(ctx, 31, 0x310134u);
    ctx->pc = 0x310130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31012Cu;
            // 0x310130: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310134u; }
        if (ctx->pc != 0x310134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310134u; }
        if (ctx->pc != 0x310134u) { return; }
    }
    ctx->pc = 0x310134u;
label_310134:
    // 0x310134: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x310134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x310138: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x310138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31013c: 0x2828021  addu        $s0, $s4, $v0
    ctx->pc = 0x31013cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x310140: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x310140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310144: 0xc041bce  jal         func_106F38
    ctx->pc = 0x310144u;
    SET_GPR_U32(ctx, 31, 0x31014Cu);
    ctx->pc = 0x310148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310144u;
            // 0x310148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F38u;
    if (runtime->hasFunction(0x106F38u)) {
        auto targetFn = runtime->lookupFunction(0x106F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31014Cu; }
        if (ctx->pc != 0x31014Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0OuterProduct_0x106f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31014Cu; }
        if (ctx->pc != 0x31014Cu) { return; }
    }
    ctx->pc = 0x31014Cu;
label_31014c:
    // 0x31014c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31014cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310150: 0xc041be0  jal         func_106F80
    ctx->pc = 0x310150u;
    SET_GPR_U32(ctx, 31, 0x310158u);
    ctx->pc = 0x310154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310150u;
            // 0x310154: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310158u; }
        if (ctx->pc != 0x310158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310158u; }
        if (ctx->pc != 0x310158u) { return; }
    }
    ctx->pc = 0x310158u;
label_310158:
    // 0x310158: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x310158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x31015c: 0xc041be0  jal         func_106F80
    ctx->pc = 0x31015Cu;
    SET_GPR_U32(ctx, 31, 0x310164u);
    ctx->pc = 0x310160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31015Cu;
            // 0x310160: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310164u; }
        if (ctx->pc != 0x310164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310164u; }
        if (ctx->pc != 0x310164u) { return; }
    }
    ctx->pc = 0x310164u;
label_310164:
    // 0x310164: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x310164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x310168: 0xc041be0  jal         func_106F80
    ctx->pc = 0x310168u;
    SET_GPR_U32(ctx, 31, 0x310170u);
    ctx->pc = 0x31016Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310168u;
            // 0x31016c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310170u; }
        if (ctx->pc != 0x310170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310170u; }
        if (ctx->pc != 0x310170u) { return; }
    }
    ctx->pc = 0x310170u;
label_310170:
    // 0x310170: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x310170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x310174: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x310174u;
    {
        const bool branch_taken_0x310174 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x310174) {
            ctx->pc = 0x310190u;
            goto label_310190;
        }
    }
    ctx->pc = 0x31017Cu;
    // 0x31017c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x31017cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x310180: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x310180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310184: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x310184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x310188: 0xc041c4a  jal         func_107128
    ctx->pc = 0x310188u;
    SET_GPR_U32(ctx, 31, 0x310190u);
    ctx->pc = 0x31018Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310188u;
            // 0x31018c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310190u; }
        if (ctx->pc != 0x310190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310190u; }
        if (ctx->pc != 0x310190u) { return; }
    }
    ctx->pc = 0x310190u;
label_310190:
    // 0x310190: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x310190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x310194: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x310194u;
    {
        const bool branch_taken_0x310194 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x310194) {
            ctx->pc = 0x3101B0u;
            goto label_3101b0;
        }
    }
    ctx->pc = 0x31019Cu;
    // 0x31019c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x31019cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3101a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3101a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3101a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3101a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3101a8: 0xc041c4a  jal         func_107128
    ctx->pc = 0x3101A8u;
    SET_GPR_U32(ctx, 31, 0x3101B0u);
    ctx->pc = 0x3101ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3101A8u;
            // 0x3101ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3101B0u; }
        if (ctx->pc != 0x3101B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3101B0u; }
        if (ctx->pc != 0x3101B0u) { return; }
    }
    ctx->pc = 0x3101B0u;
label_3101b0:
    // 0x3101b0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x3101b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3101b4: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3101B4u;
    {
        const bool branch_taken_0x3101b4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x3101b4) {
            ctx->pc = 0x3101D0u;
            goto label_3101d0;
        }
    }
    ctx->pc = 0x3101BCu;
    // 0x3101bc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3101bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3101c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3101c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3101c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3101c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3101c8: 0xc041c4a  jal         func_107128
    ctx->pc = 0x3101C8u;
    SET_GPR_U32(ctx, 31, 0x3101D0u);
    ctx->pc = 0x3101CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3101C8u;
            // 0x3101cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3101D0u; }
        if (ctx->pc != 0x3101D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3101D0u; }
        if (ctx->pc != 0x3101D0u) { return; }
    }
    ctx->pc = 0x3101D0u;
label_3101d0:
    // 0x3101d0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3101d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3101d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3101d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3101d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3101d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3101dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3101dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3101e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3101e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3101e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3101e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3101e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3101E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3101ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3101E8u;
            // 0x3101ec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3101F0u;
}
