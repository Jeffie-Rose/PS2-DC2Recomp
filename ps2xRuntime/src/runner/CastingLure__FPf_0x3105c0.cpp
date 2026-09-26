#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CastingLure__FPf
// Address: 0x3105c0 - 0x31072c
void CastingLure__FPf_0x3105c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CastingLure__FPf_0x3105c0");
#endif

    switch (ctx->pc) {
        case 0x31063cu: goto label_31063c;
        case 0x31064cu: goto label_31064c;
        case 0x310654u: goto label_310654;
        case 0x310698u: goto label_310698;
        case 0x3106c0u: goto label_3106c0;
        case 0x3106d4u: goto label_3106d4;
        case 0x3106e8u: goto label_3106e8;
        default: break;
    }

    ctx->pc = 0x3105c0u;

    // 0x3105c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3105c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3105c4: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3105c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x3105c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3105c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3105cc: 0x3c0601f6  lui         $a2, 0x1F6
    ctx->pc = 0x3105ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)502 << 16));
    // 0x3105d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3105d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3105d4: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x3105d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x3105d8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3105d8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3105dc: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x3105dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x3105e0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3105e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3105e4: 0x2442ec70  addiu       $v0, $v0, -0x1390
    ctx->pc = 0x3105e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962288));
    // 0x3105e8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3105e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3105ec: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x3105ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3105f0: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x3105f0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3105f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3105f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3105f8: 0x24c6ed90  addiu       $a2, $a2, -0x1270
    ctx->pc = 0x3105f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962576));
    // 0x3105fc: 0x24a5eda0  addiu       $a1, $a1, -0x1260
    ctx->pc = 0x3105fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962592));
    // 0x310600: 0x2463ed30  addiu       $v1, $v1, -0x12D0
    ctx->pc = 0x310600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962480));
    // 0x310604: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x310604u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x310608: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x310608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x31060c: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x31060cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x310610: 0x2442ed40  addiu       $v0, $v0, -0x12C0
    ctx->pc = 0x310610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962496));
    // 0x310614: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x310614u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x310618: 0x78e60000  lq          $a2, 0x0($a3)
    ctx->pc = 0x310618u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x31061c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x31061cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x310620: 0x2484ed50  addiu       $a0, $a0, -0x12B0
    ctx->pc = 0x310620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962512));
    // 0x310624: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x310624u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x310628: 0x78e50000  lq          $a1, 0x0($a3)
    ctx->pc = 0x310628u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x31062c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x31062cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x310630: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x310630u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x310634: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x310634u;
    SET_GPR_U32(ctx, 31, 0x31063Cu);
    ctx->pc = 0x310638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310634u;
            // 0x310638: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31063Cu; }
        if (ctx->pc != 0x31063Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31063Cu; }
        if (ctx->pc != 0x31063Cu) { return; }
    }
    ctx->pc = 0x31063Cu;
label_31063c:
    // 0x31063c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31063cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310640: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x310640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x310644: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x310644u;
    SET_GPR_U32(ctx, 31, 0x31064Cu);
    ctx->pc = 0x310648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310644u;
            // 0x310648: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31064Cu; }
        if (ctx->pc != 0x31064Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31064Cu; }
        if (ctx->pc != 0x31064Cu) { return; }
    }
    ctx->pc = 0x31064Cu;
label_31064c:
    // 0x31064c: 0xc04c000  jal         func_130000
    ctx->pc = 0x31064Cu;
    SET_GPR_U32(ctx, 31, 0x310654u);
    ctx->pc = 0x310650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31064Cu;
            // 0x310650: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130000u;
    if (runtime->hasFunction(0x130000u)) {
        auto targetFn = runtime->lookupFunction(0x130000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310654u; }
        if (ctx->pc != 0x310654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPf_0x130000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310654u; }
        if (ctx->pc != 0x310654u) { return; }
    }
    ctx->pc = 0x310654u;
label_310654:
    // 0x310654: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x310654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x310658: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x310658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x31065c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x31065cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x310660: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x310660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x310664: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x310664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x310668: 0x0  nop
    ctx->pc = 0x310668u;
    // NOP
    // 0x31066c: 0x46001502  mul.s       $f20, $f2, $f0
    ctx->pc = 0x31066cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x310670: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x310670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
    // 0x310674: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x310674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x310678: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x310678u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x31067c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31067cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310680: 0x0  nop
    ctx->pc = 0x310680u;
    // NOP
    // 0x310684: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x310684u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x310688: 0x0  nop
    ctx->pc = 0x310688u;
    // NOP
    // 0x31068c: 0x0  nop
    ctx->pc = 0x31068cu;
    // NOP
    // 0x310690: 0xc047cc0  jal         func_11F300
    ctx->pc = 0x310690u;
    SET_GPR_U32(ctx, 31, 0x310698u);
    ctx->pc = 0x11F300u;
    if (runtime->hasFunction(0x11F300u)) {
        auto targetFn = runtime->lookupFunction(0x11F300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310698u; }
        if (ctx->pc != 0x310698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x11f300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310698u; }
        if (ctx->pc != 0x310698u) { return; }
    }
    ctx->pc = 0x310698u;
label_310698:
    // 0x310698: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x310698u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x31069c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31069cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3106a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3106a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3106a4: 0x0  nop
    ctx->pc = 0x3106a4u;
    // NOP
    // 0x3106a8: 0x4600b542  mul.s       $f21, $f22, $f0
    ctx->pc = 0x3106a8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x3106ac: 0x4615a303  div.s       $f12, $f20, $f21
    ctx->pc = 0x3106acu;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[21]); }
    // 0x3106b0: 0x0  nop
    ctx->pc = 0x3106b0u;
    // NOP
    // 0x3106b4: 0x0  nop
    ctx->pc = 0x3106b4u;
    // NOP
    // 0x3106b8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x3106B8u;
    SET_GPR_U32(ctx, 31, 0x3106C0u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3106C0u; }
        if (ctx->pc != 0x3106C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3106C0u; }
        if (ctx->pc != 0x3106C0u) { return; }
    }
    ctx->pc = 0x3106C0u;
label_3106c0:
    // 0x3106c0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3106c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3106c4: 0xaf82a254  sw          $v0, -0x5DAC($gp)
    ctx->pc = 0x3106c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943316), GPR_U32(ctx, 2));
    // 0x3106c8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3106c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3106cc: 0xc041be0  jal         func_106F80
    ctx->pc = 0x3106CCu;
    SET_GPR_U32(ctx, 31, 0x3106D4u);
    ctx->pc = 0x3106D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3106CCu;
            // 0x3106d0: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3106D4u; }
        if (ctx->pc != 0x3106D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3106D4u; }
        if (ctx->pc != 0x3106D4u) { return; }
    }
    ctx->pc = 0x3106D4u;
label_3106d4:
    // 0x3106d4: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x3106d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x3106d8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3106d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3106dc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3106dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x3106e0: 0xc041c4a  jal         func_107128
    ctx->pc = 0x3106E0u;
    SET_GPR_U32(ctx, 31, 0x3106E8u);
    ctx->pc = 0x3106E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3106E0u;
            // 0x3106e4: 0x2484ed50  addiu       $a0, $a0, -0x12B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3106E8u; }
        if (ctx->pc != 0x3106E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3106E8u; }
        if (ctx->pc != 0x3106E8u) { return; }
    }
    ctx->pc = 0x3106E8u;
label_3106e8:
    // 0x3106e8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x3106e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x3106ec: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3106ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x3106f0: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x3106f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3106f4: 0xaf80a258  sw          $zero, -0x5DA8($gp)
    ctx->pc = 0x3106f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943320), GPR_U32(ctx, 0));
    // 0x3106f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3106f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3106fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3106fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310700: 0xaf82a250  sw          $v0, -0x5DB0($gp)
    ctx->pc = 0x310700u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943312), GPR_U32(ctx, 2));
    // 0x310704: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x310704u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x310708: 0x8f82a254  lw          $v0, -0x5DAC($gp)
    ctx->pc = 0x310708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943316)));
    // 0x31070c: 0xe420ed54  swc1        $f0, -0x12AC($at)
    ctx->pc = 0x31070cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294962516), bits); }
    // 0x310710: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x310710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x310714: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x310714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x310718: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x310718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31071c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x31071cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x310720: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x310720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x310724: 0x3e00008  jr          $ra
    ctx->pc = 0x310724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310724u;
            // 0x310728: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31072Cu;
}
