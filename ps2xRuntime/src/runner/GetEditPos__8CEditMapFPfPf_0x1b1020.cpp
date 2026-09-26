#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEditPos__8CEditMapFPfPf
// Address: 0x1b1020 - 0x1b11cc
void GetEditPos__8CEditMapFPfPf_0x1b1020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEditPos__8CEditMapFPfPf_0x1b1020");
#endif

    switch (ctx->pc) {
        case 0x1b1060u: goto label_1b1060;
        case 0x1b10a0u: goto label_1b10a0;
        case 0x1b10e0u: goto label_1b10e0;
        case 0x1b1120u: goto label_1b1120;
        case 0x1b1160u: goto label_1b1160;
        case 0x1b11a0u: goto label_1b11a0;
        default: break;
    }

    ctx->pc = 0x1b1020u;

    // 0x1b1020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b1020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b1024: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b1024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b1028: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b1028u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b102c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b102cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b1030: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b1030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b1034: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b1034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1038: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x1b1038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b103c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b103cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1040: 0x0  nop
    ctx->pc = 0x1b1040u;
    // NOP
    // 0x1b1044: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1B1044u;
    {
        const bool branch_taken_0x1b1044 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B1048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1044u;
            // 0x1b1048: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1044) {
            ctx->pc = 0x1B1070u;
            goto label_1b1070;
        }
    }
    ctx->pc = 0x1B104Cu;
    // 0x1b104c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1b104cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1b1050: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b1050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1b1054: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1058: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1B1058u;
    SET_GPR_U32(ctx, 31, 0x1B1060u);
    ctx->pc = 0x1B105Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1058u;
            // 0x1b105c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1060u; }
        if (ctx->pc != 0x1B1060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1060u; }
        if (ctx->pc != 0x1B1060u) { return; }
    }
    ctx->pc = 0x1B1060u;
label_1b1060:
    // 0x1b1060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1064: 0x0  nop
    ctx->pc = 0x1b1064u;
    // NOP
    // 0x1b1068: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b1068u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b106c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1b106cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1b1070:
    // 0x1b1070: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1b1070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1074: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b1074u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1078: 0x0  nop
    ctx->pc = 0x1b1078u;
    // NOP
    // 0x1b107c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b107cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1080: 0x0  nop
    ctx->pc = 0x1b1080u;
    // NOP
    // 0x1b1084: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1B1084u;
    {
        const bool branch_taken_0x1b1084 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b1084) {
            ctx->pc = 0x1B10B0u;
            goto label_1b10b0;
        }
    }
    ctx->pc = 0x1B108Cu;
    // 0x1b108c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1b108cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1b1090: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b1090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1b1094: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1098: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1B1098u;
    SET_GPR_U32(ctx, 31, 0x1B10A0u);
    ctx->pc = 0x1B109Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1098u;
            // 0x1b109c: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B10A0u; }
        if (ctx->pc != 0x1B10A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B10A0u; }
        if (ctx->pc != 0x1B10A0u) { return; }
    }
    ctx->pc = 0x1B10A0u;
label_1b10a0:
    // 0x1b10a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b10a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b10a4: 0x0  nop
    ctx->pc = 0x1b10a4u;
    // NOP
    // 0x1b10a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b10a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b10ac: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1b10acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1b10b0:
    // 0x1b10b0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b10b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b10b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b10b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b10b8: 0x0  nop
    ctx->pc = 0x1b10b8u;
    // NOP
    // 0x1b10bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b10bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b10c0: 0x0  nop
    ctx->pc = 0x1b10c0u;
    // NOP
    // 0x1b10c4: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1B10C4u;
    {
        const bool branch_taken_0x1b10c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b10c4) {
            ctx->pc = 0x1B10F0u;
            goto label_1b10f0;
        }
    }
    ctx->pc = 0x1B10CCu;
    // 0x1b10cc: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1b10ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1b10d0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b10d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1b10d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b10d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b10d8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1B10D8u;
    SET_GPR_U32(ctx, 31, 0x1B10E0u);
    ctx->pc = 0x1B10DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B10D8u;
            // 0x1b10dc: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B10E0u; }
        if (ctx->pc != 0x1B10E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B10E0u; }
        if (ctx->pc != 0x1B10E0u) { return; }
    }
    ctx->pc = 0x1B10E0u;
label_1b10e0:
    // 0x1b10e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b10e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b10e4: 0x0  nop
    ctx->pc = 0x1b10e4u;
    // NOP
    // 0x1b10e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b10e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b10ec: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1b10ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1b10f0:
    // 0x1b10f0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b10f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b10f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b10f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b10f8: 0x0  nop
    ctx->pc = 0x1b10f8u;
    // NOP
    // 0x1b10fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b10fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1100: 0x0  nop
    ctx->pc = 0x1b1100u;
    // NOP
    // 0x1b1104: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1B1104u;
    {
        const bool branch_taken_0x1b1104 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b1104) {
            ctx->pc = 0x1B1130u;
            goto label_1b1130;
        }
    }
    ctx->pc = 0x1B110Cu;
    // 0x1b110c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1b110cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1b1110: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b1110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1b1114: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1118: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1B1118u;
    SET_GPR_U32(ctx, 31, 0x1B1120u);
    ctx->pc = 0x1B111Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1118u;
            // 0x1b111c: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1120u; }
        if (ctx->pc != 0x1B1120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1120u; }
        if (ctx->pc != 0x1B1120u) { return; }
    }
    ctx->pc = 0x1B1120u;
label_1b1120:
    // 0x1b1120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1124: 0x0  nop
    ctx->pc = 0x1b1124u;
    // NOP
    // 0x1b1128: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b1128u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b112c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1b112cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1b1130:
    // 0x1b1130: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1b1130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1134: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b1134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1138: 0x0  nop
    ctx->pc = 0x1b1138u;
    // NOP
    // 0x1b113c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b113cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1140: 0x0  nop
    ctx->pc = 0x1b1140u;
    // NOP
    // 0x1b1144: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1B1144u;
    {
        const bool branch_taken_0x1b1144 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b1144) {
            ctx->pc = 0x1B1170u;
            goto label_1b1170;
        }
    }
    ctx->pc = 0x1B114Cu;
    // 0x1b114c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1b114cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1b1150: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b1150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1b1154: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1158: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1B1158u;
    SET_GPR_U32(ctx, 31, 0x1B1160u);
    ctx->pc = 0x1B115Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1158u;
            // 0x1b115c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1160u; }
        if (ctx->pc != 0x1B1160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1160u; }
        if (ctx->pc != 0x1B1160u) { return; }
    }
    ctx->pc = 0x1B1160u;
label_1b1160:
    // 0x1b1160: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1164: 0x0  nop
    ctx->pc = 0x1b1164u;
    // NOP
    // 0x1b1168: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b1168u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b116c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1b116cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1b1170:
    // 0x1b1170: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1b1170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1174: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b1174u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1178: 0x0  nop
    ctx->pc = 0x1b1178u;
    // NOP
    // 0x1b117c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b117cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1180: 0x0  nop
    ctx->pc = 0x1b1180u;
    // NOP
    // 0x1b1184: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1B1184u;
    {
        const bool branch_taken_0x1b1184 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b1184) {
            ctx->pc = 0x1B11B0u;
            goto label_1b11b0;
        }
    }
    ctx->pc = 0x1B118Cu;
    // 0x1b118c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1b118cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1b1190: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b1190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1b1194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1198: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1B1198u;
    SET_GPR_U32(ctx, 31, 0x1B11A0u);
    ctx->pc = 0x1B119Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1198u;
            // 0x1b119c: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B11A0u; }
        if (ctx->pc != 0x1B11A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B11A0u; }
        if (ctx->pc != 0x1B11A0u) { return; }
    }
    ctx->pc = 0x1B11A0u;
label_1b11a0:
    // 0x1b11a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b11a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b11a4: 0x0  nop
    ctx->pc = 0x1b11a4u;
    // NOP
    // 0x1b11a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b11a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b11ac: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1b11acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1b11b0:
    // 0x1b11b0: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1b11b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b11b4: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x1b11b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x1b11b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b11b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b11bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b11bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b11c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b11c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b11c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B11C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B11C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B11C4u;
            // 0x1b11c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B11CCu;
}
