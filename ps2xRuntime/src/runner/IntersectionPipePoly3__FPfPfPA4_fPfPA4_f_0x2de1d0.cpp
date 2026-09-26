#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IntersectionPipePoly3__FPfPfPA4_fPfPA4_f
// Address: 0x2de1d0 - 0x2de438
void IntersectionPipePoly3__FPfPfPA4_fPfPA4_f_0x2de1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IntersectionPipePoly3__FPfPfPA4_fPfPA4_f_0x2de1d0");
#endif

    switch (ctx->pc) {
        case 0x2de218u: goto label_2de218;
        case 0x2de224u: goto label_2de224;
        case 0x2de284u: goto label_2de284;
        case 0x2de298u: goto label_2de298;
        case 0x2de2a4u: goto label_2de2a4;
        case 0x2de2b0u: goto label_2de2b0;
        case 0x2de318u: goto label_2de318;
        case 0x2de32cu: goto label_2de32c;
        case 0x2de338u: goto label_2de338;
        case 0x2de354u: goto label_2de354;
        case 0x2de384u: goto label_2de384;
        case 0x2de3d0u: goto label_2de3d0;
        case 0x2de404u: goto label_2de404;
        default: break;
    }

    ctx->pc = 0x2de1d0u;

    // 0x2de1d0: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x2de1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
    // 0x2de1d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2de1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2de1d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2de1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2de1dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2de1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2de1e0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2de1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2de1e4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2de1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2de1e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2de1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2de1ec: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2de1ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de1f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2de1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2de1f4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2de1f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de1f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2de1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2de1fc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2de1fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de200: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2de200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2de204: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2de204u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de208: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2de208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2de20c: 0x27b000b0  addiu       $s0, $sp, 0xB0
    ctx->pc = 0x2de20cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2de210: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2DE210u;
    SET_GPR_U32(ctx, 31, 0x2DE218u);
    ctx->pc = 0x2DE214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE210u;
            // 0x2de214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE218u; }
        if (ctx->pc != 0x2DE218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE218u; }
        if (ctx->pc != 0x2DE218u) { return; }
    }
    ctx->pc = 0x2DE218u;
label_2de218:
    // 0x2de218: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2de218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2de21c: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2DE21Cu;
    SET_GPR_U32(ctx, 31, 0x2DE224u);
    ctx->pc = 0x2DE220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE21Cu;
            // 0x2de220: 0xafa000bc  sw          $zero, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE224u; }
        if (ctx->pc != 0x2DE224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE224u; }
        if (ctx->pc != 0x2DE224u) { return; }
    }
    ctx->pc = 0x2DE224u;
label_2de224:
    // 0x2de224: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x2de224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2de228: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2de228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2de22c: 0x0  nop
    ctx->pc = 0x2de22cu;
    // NOP
    // 0x2de230: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2de230u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2de234: 0x0  nop
    ctx->pc = 0x2de234u;
    // NOP
    // 0x2de238: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2DE238u;
    {
        const bool branch_taken_0x2de238 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2de238) {
            ctx->pc = 0x2DE244u;
            goto label_2de244;
        }
    }
    ctx->pc = 0x2DE240u;
    // 0x2de240: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2de240u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2de244:
    // 0x2de244: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2de244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2de248: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2de248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2de24c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2de24cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2de250: 0x0  nop
    ctx->pc = 0x2de250u;
    // NOP
    // 0x2de254: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2de254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2de258: 0x0  nop
    ctx->pc = 0x2de258u;
    // NOP
    // 0x2de25c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2DE25Cu;
    {
        const bool branch_taken_0x2de25c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DE260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE25Cu;
            // 0x2de260: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de25c) {
            ctx->pc = 0x2DE270u;
            goto label_2de270;
        }
    }
    ctx->pc = 0x2DE264u;
    // 0x2de264: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2de264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2de268: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DE268u;
    {
        const bool branch_taken_0x2de268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE268u;
            // 0x2de26c: 0xafa20124  sw          $v0, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de268) {
            ctx->pc = 0x2DE274u;
            goto label_2de274;
        }
    }
    ctx->pc = 0x2DE270u;
label_2de270:
    // 0x2de270: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x2de270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
label_2de274:
    // 0x2de274: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2de274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2de278: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2de278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de27c: 0xc041bce  jal         func_106F38
    ctx->pc = 0x2DE27Cu;
    SET_GPR_U32(ctx, 31, 0x2DE284u);
    ctx->pc = 0x2DE280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE27Cu;
            // 0x2de280: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F38u;
    if (runtime->hasFunction(0x106F38u)) {
        auto targetFn = runtime->lookupFunction(0x106F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE284u; }
        if (ctx->pc != 0x2DE284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0OuterProduct_0x106f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE284u; }
        if (ctx->pc != 0x2DE284u) { return; }
    }
    ctx->pc = 0x2DE284u;
label_2de284:
    // 0x2de284: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2de284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de288: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2de288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2de28c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2de28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2de290: 0xc041bce  jal         func_106F38
    ctx->pc = 0x2DE290u;
    SET_GPR_U32(ctx, 31, 0x2DE298u);
    ctx->pc = 0x2DE294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE290u;
            // 0x2de294: 0xafa000ac  sw          $zero, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F38u;
    if (runtime->hasFunction(0x106F38u)) {
        auto targetFn = runtime->lookupFunction(0x106F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE298u; }
        if (ctx->pc != 0x2DE298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0OuterProduct_0x106f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE298u; }
        if (ctx->pc != 0x2DE298u) { return; }
    }
    ctx->pc = 0x2DE298u;
label_2de298:
    // 0x2de298: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2de298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2de29c: 0xc04bc90  jal         func_12F240
    ctx->pc = 0x2DE29Cu;
    SET_GPR_U32(ctx, 31, 0x2DE2A4u);
    ctx->pc = 0x2DE2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE29Cu;
            // 0x2de2a0: 0xafa000cc  sw          $zero, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F240u;
    if (runtime->hasFunction(0x12F240u)) {
        auto targetFn = runtime->lookupFunction(0x12F240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE2A4u; }
        if (ctx->pc != 0x2DE2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVectorW__FPf_0x12f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE2A4u; }
        if (ctx->pc != 0x2DE2A4u) { return; }
    }
    ctx->pc = 0x2DE2A4u;
label_2de2a4:
    // 0x2de2a4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2de2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2de2a8: 0xc041bf0  jal         func_106FC0
    ctx->pc = 0x2DE2A8u;
    SET_GPR_U32(ctx, 31, 0x2DE2B0u);
    ctx->pc = 0x2DE2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE2A8u;
            // 0x2de2ac: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106FC0u;
    if (runtime->hasFunction(0x106FC0u)) {
        auto targetFn = runtime->lookupFunction(0x106FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE2B0u; }
        if (ctx->pc != 0x2DE2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransposeMatrix_0x106fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE2B0u; }
        if (ctx->pc != 0x2DE2B0u) { return; }
    }
    ctx->pc = 0x2DE2B0u;
label_2de2b0:
    // 0x2de2b0: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x2de2b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2de2b4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2de2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2de2b8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2de2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2de2bc: 0x27b70140  addiu       $s7, $sp, 0x140
    ctx->pc = 0x2de2bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2de2c0: 0x27be0150  addiu       $fp, $sp, 0x150
    ctx->pc = 0x2de2c0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2de2c4: 0x27b00160  addiu       $s0, $sp, 0x160
    ctx->pc = 0x2de2c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2de2c8: 0x27b10170  addiu       $s1, $sp, 0x170
    ctx->pc = 0x2de2c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2de2cc: 0x27b6017c  addiu       $s6, $sp, 0x17C
    ctx->pc = 0x2de2ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
    // 0x2de2d0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2de2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2de2d4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2de2d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de2d8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2de2d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2de2dc: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2de2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x2de2e0: 0xafa3013c  sw          $v1, 0x13C($sp)
    ctx->pc = 0x2de2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 3));
    // 0x2de2e4: 0x7a820010  lq          $v0, 0x10($s4)
    ctx->pc = 0x2de2e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2de2e8: 0x7ee20000  sq          $v0, 0x0($s7)
    ctx->pc = 0x2de2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 2));
    // 0x2de2ec: 0xafa3014c  sw          $v1, 0x14C($sp)
    ctx->pc = 0x2de2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 3));
    // 0x2de2f0: 0x7a820020  lq          $v0, 0x20($s4)
    ctx->pc = 0x2de2f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2de2f4: 0x7fc20000  sq          $v0, 0x0($fp)
    ctx->pc = 0x2de2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), GPR_VEC(ctx, 2));
    // 0x2de2f8: 0xafa3015c  sw          $v1, 0x15C($sp)
    ctx->pc = 0x2de2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 3));
    // 0x2de2fc: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x2de2fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2de300: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x2de300u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x2de304: 0xafa0016c  sw          $zero, 0x16C($sp)
    ctx->pc = 0x2de304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 0));
    // 0x2de308: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x2de308u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2de30c: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x2de30cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x2de310: 0xc04c228  jal         func_1308A0
    ctx->pc = 0x2DE310u;
    SET_GPR_U32(ctx, 31, 0x2DE318u);
    ctx->pc = 0x2DE314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE310u;
            // 0x2de314: 0xaec30000  sw          $v1, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1308A0u;
    if (runtime->hasFunction(0x1308A0u)) {
        auto targetFn = runtime->lookupFunction(0x1308A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE318u; }
        if (ctx->pc != 0x2DE318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgApplyMatrixN__FPA4_fPA4_fPA4_fi_0x1308a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE318u; }
        if (ctx->pc != 0x2DE318u) { return; }
    }
    ctx->pc = 0x2DE318u;
label_2de318:
    // 0x2de318: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2de318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de31c: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2de31cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2de320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de324: 0xc04bd60  jal         func_12F580
    ctx->pc = 0x2DE324u;
    SET_GPR_U32(ctx, 31, 0x2DE32Cu);
    ctx->pc = 0x2DE328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE324u;
            // 0x2de328: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F580u;
    if (runtime->hasFunction(0x12F580u)) {
        auto targetFn = runtime->lookupFunction(0x12F580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE32Cu; }
        if (ctx->pc != 0x2DE32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPlaneNormal__FPfPfPfPf_0x12f580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE32Cu; }
        if (ctx->pc != 0x2DE32Cu) { return; }
    }
    ctx->pc = 0x2DE32Cu;
label_2de32c:
    // 0x2de32c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2de32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de330: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2DE330u;
    SET_GPR_U32(ctx, 31, 0x2DE338u);
    ctx->pc = 0x2DE334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE330u;
            // 0x2de334: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE338u; }
        if (ctx->pc != 0x2DE338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE338u; }
        if (ctx->pc != 0x2DE338u) { return; }
    }
    ctx->pc = 0x2DE338u;
label_2de338:
    // 0x2de338: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x2de338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de33c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2de33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de340: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2de340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de344: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x2de344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2de348: 0x27a70180  addiu       $a3, $sp, 0x180
    ctx->pc = 0x2de348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2de34c: 0xc0b7778  jal         func_2DDDE0
    ctx->pc = 0x2DE34Cu;
    SET_GPR_U32(ctx, 31, 0x2DE354u);
    ctx->pc = 0x2DE350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE34Cu;
            // 0x2de350: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DDDE0u;
    if (runtime->hasFunction(0x2DDDE0u)) {
        auto targetFn = runtime->lookupFunction(0x2DDDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE354u; }
        if (ctx->pc != 0x2DE354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IntersectionPipeYPoly3__FPfPA4_fPfPA4_f_0x2ddde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE354u; }
        if (ctx->pc != 0x2DE354u) { return; }
    }
    ctx->pc = 0x2DE354u;
label_2de354:
    // 0x2de354: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2de354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de358: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DE358u;
    {
        const bool branch_taken_0x2de358 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE358u;
            // 0x2de35c: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de358) {
            ctx->pc = 0x2DE368u;
            goto label_2de368;
        }
    }
    ctx->pc = 0x2DE360u;
    // 0x2de360: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2DE360u;
    {
        const bool branch_taken_0x2de360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE360u;
            // 0x2de364: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de360) {
            ctx->pc = 0x2DE408u;
            goto label_2de408;
        }
    }
    ctx->pc = 0x2DE368u;
label_2de368:
    // 0x2de368: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x2DE368u;
    {
        const bool branch_taken_0x2de368 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE368u;
            // 0x2de36c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de368) {
            ctx->pc = 0x2DE3F0u;
            goto label_2de3f0;
        }
    }
    ctx->pc = 0x2DE370u;
    // 0x2de370: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x2de370u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2de374: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DE374u;
    {
        const bool branch_taken_0x2de374 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE374u;
            // 0x2de378: 0x2605fff8  addiu       $a1, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de374) {
            ctx->pc = 0x2DE3BCu;
            goto label_2de3bc;
        }
    }
    ctx->pc = 0x2DE37Cu;
    // 0x2de37c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2de37cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de380: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2de380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2de384:
    // 0x2de384: 0xdd1021  addu        $v0, $a2, $sp
    ctx->pc = 0x2de384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x2de388: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2de388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2de38c: 0x24470180  addiu       $a3, $v0, 0x180
    ctx->pc = 0x2de38cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2de390: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x2de390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x2de394: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x2de394u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x2de398: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x2de398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2de39c: 0xace3001c  sw          $v1, 0x1C($a3)
    ctx->pc = 0x2de39cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 3));
    // 0x2de3a0: 0xace3002c  sw          $v1, 0x2C($a3)
    ctx->pc = 0x2de3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 3));
    // 0x2de3a4: 0xace3003c  sw          $v1, 0x3C($a3)
    ctx->pc = 0x2de3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 3));
    // 0x2de3a8: 0xace3004c  sw          $v1, 0x4C($a3)
    ctx->pc = 0x2de3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 3));
    // 0x2de3ac: 0xace3005c  sw          $v1, 0x5C($a3)
    ctx->pc = 0x2de3acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 92), GPR_U32(ctx, 3));
    // 0x2de3b0: 0xace3006c  sw          $v1, 0x6C($a3)
    ctx->pc = 0x2de3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 108), GPR_U32(ctx, 3));
    // 0x2de3b4: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2DE3B4u;
    {
        const bool branch_taken_0x2de3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE3B4u;
            // 0x2de3b8: 0xace3007c  sw          $v1, 0x7C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de3b4) {
            ctx->pc = 0x2DE384u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2de384;
        }
    }
    ctx->pc = 0x2DE3BCu;
label_2de3bc:
    // 0x2de3bc: 0x0  nop
    ctx->pc = 0x2de3bcu;
    // NOP
    // 0x2de3c0: 0x90082a  slt         $at, $a0, $s0
    ctx->pc = 0x2de3c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2de3c4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2DE3C4u;
    {
        const bool branch_taken_0x2de3c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE3C4u;
            // 0x2de3c8: 0x42900  sll         $a1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de3c4) {
            ctx->pc = 0x2DE3F0u;
            goto label_2de3f0;
        }
    }
    ctx->pc = 0x2DE3CCu;
    // 0x2de3cc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2de3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2de3d0:
    // 0x2de3d0: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x2de3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x2de3d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2de3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2de3d8: 0xac43018c  sw          $v1, 0x18C($v0)
    ctx->pc = 0x2de3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 396), GPR_U32(ctx, 3));
    // 0x2de3dc: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2de3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2de3e0: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x2de3e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2de3e4: 0x0  nop
    ctx->pc = 0x2de3e4u;
    // NOP
    // 0x2de3e8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2DE3E8u;
    {
        const bool branch_taken_0x2de3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de3e8) {
            ctx->pc = 0x2DE3D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2de3d0;
        }
    }
    ctx->pc = 0x2DE3F0u;
label_2de3f0:
    // 0x2de3f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2de3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de3f4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2de3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2de3f8: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x2de3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2de3fc: 0xc04c228  jal         func_1308A0
    ctx->pc = 0x2DE3FCu;
    SET_GPR_U32(ctx, 31, 0x2DE404u);
    ctx->pc = 0x2DE400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE3FCu;
            // 0x2de400: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1308A0u;
    if (runtime->hasFunction(0x1308A0u)) {
        auto targetFn = runtime->lookupFunction(0x1308A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE404u; }
        if (ctx->pc != 0x2DE404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgApplyMatrixN__FPA4_fPA4_fPA4_fi_0x1308a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE404u; }
        if (ctx->pc != 0x2DE404u) { return; }
    }
    ctx->pc = 0x2DE404u;
label_2de404:
    // 0x2de404: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2de404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2de408:
    // 0x2de408: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2de408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2de40c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2de40cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2de410: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2de410u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2de414: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2de414u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2de418: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2de418u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2de41c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2de41cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2de420: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2de420u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de424: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2de424u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de428: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2de428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de42c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2de42cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de430: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE430u;
            // 0x2de434: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DE438u;
}
