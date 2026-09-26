#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcTex__11CMenuOptionFv
// Address: 0x2c1fe0 - 0x2c2428
void CalcTex__11CMenuOptionFv_0x2c1fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcTex__11CMenuOptionFv_0x2c1fe0");
#endif

    switch (ctx->pc) {
        case 0x2c2024u: goto label_2c2024;
        case 0x2c2030u: goto label_2c2030;
        case 0x2c2048u: goto label_2c2048;
        case 0x2c2054u: goto label_2c2054;
        case 0x2c20a4u: goto label_2c20a4;
        case 0x2c20f8u: goto label_2c20f8;
        case 0x2c2120u: goto label_2c2120;
        case 0x2c2130u: goto label_2c2130;
        case 0x2c2134u: goto label_2c2134;
        case 0x2c223cu: goto label_2c223c;
        case 0x2c22a0u: goto label_2c22a0;
        case 0x2c22d0u: goto label_2c22d0;
        case 0x2c2304u: goto label_2c2304;
        case 0x2c2338u: goto label_2c2338;
        case 0x2c234cu: goto label_2c234c;
        case 0x2c2360u: goto label_2c2360;
        case 0x2c237cu: goto label_2c237c;
        case 0x2c2394u: goto label_2c2394;
        case 0x2c23c0u: goto label_2c23c0;
        case 0x2c23e0u: goto label_2c23e0;
        default: break;
    }

    ctx->pc = 0x2c1fe0u;

    // 0x2c1fe0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2c1fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2c1fe4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2c1fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2c1fe8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2c1fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2c1fec: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2c1fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2c1ff0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2c1ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2c1ff4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2c1ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2c1ff8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2c1ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2c1ffc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c1ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2c2000: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c2000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c2004: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2c2004u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c2008: 0x8f929c54  lw          $s2, -0x63AC($gp)
    ctx->pc = 0x2c2008u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941780)));
    // 0x2c200c: 0x124000fb  beqz        $s2, . + 4 + (0xFB << 2)
    ctx->pc = 0x2C200Cu;
    {
        const bool branch_taken_0x2c200c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C200Cu;
            // 0x2c2010: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c200c) {
            ctx->pc = 0x2C23FCu;
            goto label_2c23fc;
        }
    }
    ctx->pc = 0x2C2014u;
    // 0x2c2014: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c2014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2018: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2c2018u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c201c: 0xc088ffc  jal         func_223FF0
    ctx->pc = 0x2C201Cu;
    SET_GPR_U32(ctx, 31, 0x2C2024u);
    ctx->pc = 0x2C2020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C201Cu;
            // 0x2c2020: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223FF0u;
    if (runtime->hasFunction(0x223FF0u)) {
        auto targetFn = runtime->lookupFunction(0x223FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2024u; }
        if (ctx->pc != 0x2C2024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainFrameLeftTopPos__Fi_0x223ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2024u; }
        if (ctx->pc != 0x2C2024u) { return; }
    }
    ctx->pc = 0x2C2024u;
label_2c2024:
    // 0x2c2024: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2c2024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c2028: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2C2028u;
    SET_GPR_U32(ctx, 31, 0x2C2030u);
    ctx->pc = 0x2C202Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2028u;
            // 0x2c202c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2030u; }
        if (ctx->pc != 0x2C2030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2030u; }
        if (ctx->pc != 0x2C2030u) { return; }
    }
    ctx->pc = 0x2C2030u;
label_2c2030:
    // 0x2c2030: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x2c2030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x2c2034: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2c2034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c2038: 0x3c0243ce  lui         $v0, 0x43CE
    ctx->pc = 0x2c2038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17358 << 16));
    // 0x2c203c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c203cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2040: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2C2040u;
    SET_GPR_U32(ctx, 31, 0x2C2048u);
    ctx->pc = 0x2C2044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2040u;
            // 0x2c2044: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2048u; }
        if (ctx->pc != 0x2C2048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2048u; }
        if (ctx->pc != 0x2C2048u) { return; }
    }
    ctx->pc = 0x2C2048u;
label_2c2048:
    // 0x2c2048: 0x27b300e4  addiu       $s3, $sp, 0xE4
    ctx->pc = 0x2c2048u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x2c204c: 0xc088ff8  jal         func_223FE0
    ctx->pc = 0x2C204Cu;
    SET_GPR_U32(ctx, 31, 0x2C2054u);
    ctx->pc = 0x2C2050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C204Cu;
            // 0x2c2050: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223FE0u;
    if (runtime->hasFunction(0x223FE0u)) {
        auto targetFn = runtime->lookupFunction(0x223FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2054u; }
        if (ctx->pc != 0x2C2054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainFrameEndFlag__Fv_0x223fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2054u; }
        if (ctx->pc != 0x2C2054u) { return; }
    }
    ctx->pc = 0x2C2054u;
label_2c2054:
    // 0x2c2054: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C2054u;
    {
        const bool branch_taken_0x2c2054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2054) {
            ctx->pc = 0x2C2080u;
            goto label_2c2080;
        }
    }
    ctx->pc = 0x2C205Cu;
    // 0x2c205c: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x2c205cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2060: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2c2060u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2064: 0x2a0b02d  daddu       $s6, $s5, $zero
    ctx->pc = 0x2c2064u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2068: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c2068u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c206c: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x2c206cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x2c2070: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2c2070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2074: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c2074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c2078: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2078u;
    {
        const bool branch_taken_0x2c2078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C207Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2078u;
            // 0x2c207c: 0xe6400010  swc1        $f0, 0x10($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2078) {
            ctx->pc = 0x2C208Cu;
            goto label_2c208c;
        }
    }
    ctx->pc = 0x2C2080u;
label_2c2080:
    // 0x2c2080: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x2c2080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2084: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c2084u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c2088: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x2c2088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_2c208c:
    // 0x2c208c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c208cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c2090: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c2090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2094: 0x24a5f9e8  addiu       $a1, $a1, -0x618
    ctx->pc = 0x2c2094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965736));
    // 0x2c2098: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2c2098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2c209c: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2C209Cu;
    SET_GPR_U32(ctx, 31, 0x2C20A4u);
    ctx->pc = 0x2C20A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C209Cu;
            // 0x2c20a0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C20A4u; }
        if (ctx->pc != 0x2C20A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C20A4u; }
        if (ctx->pc != 0x2C20A4u) { return; }
    }
    ctx->pc = 0x2C20A4u;
label_2c20a4:
    // 0x2c20a4: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x2c20a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c20a8: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x2c20a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x2c20ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2c20acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c20b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c20b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c20b4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C20B4u;
    {
        const bool branch_taken_0x2c20b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C20B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C20B4u;
            // 0x2c20b8: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c20b4) {
            ctx->pc = 0x2C20C0u;
            goto label_2c20c0;
        }
    }
    ctx->pc = 0x2C20BCu;
    // 0x2c20bc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2c20bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2c20c0:
    // 0x2c20c0: 0x8e860378  lw          $a2, 0x378($s4)
    ctx->pc = 0x2c20c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 888)));
    // 0x2c20c4: 0x26840110  addiu       $a0, $s4, 0x110
    ctx->pc = 0x2c20c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
    // 0x2c20c8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2c20c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c20cc: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x2c20ccu;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x2c20d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c20d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c20d4: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2c20d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2c20d8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2c20d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2c20dc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2c20dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2c20e0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2c20e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c20e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c20e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c20e8: 0x0  nop
    ctx->pc = 0x2c20e8u;
    // NOP
    // 0x2c20ec: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x2c20ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x2c20f0: 0xc094514  jal         func_251450
    ctx->pc = 0x2C20F0u;
    SET_GPR_U32(ctx, 31, 0x2C20F8u);
    ctx->pc = 0x2C20F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C20F0u;
            // 0x2c20f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x251450u;
    if (runtime->hasFunction(0x251450u)) {
        auto targetFn = runtime->lookupFunction(0x251450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C20F8u; }
        if (ctx->pc != 0x2C20F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FfPfffi_0x251450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C20F8u; }
        if (ctx->pc != 0x2C20F8u) { return; }
    }
    ctx->pc = 0x2C20F8u;
label_2c20f8:
    // 0x2c20f8: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x2c20f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c20fc: 0xc6800110  lwc1        $f0, 0x110($s4)
    ctx->pc = 0x2c20fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2100: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c2100u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c2104: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c2104u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c2108: 0x0  nop
    ctx->pc = 0x2c2108u;
    // NOP
    // 0x2c210c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C210Cu;
    {
        const bool branch_taken_0x2c210c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c210c) {
            ctx->pc = 0x2C2118u;
            goto label_2c2118;
        }
    }
    ctx->pc = 0x2C2114u;
    // 0x2c2114: 0xe6940110  swc1        $f20, 0x110($s4)
    ctx->pc = 0x2c2114u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 272), bits); }
label_2c2118:
    // 0x2c2118: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2C2118u;
    SET_GPR_U32(ctx, 31, 0x2C2120u);
    ctx->pc = 0x2C211Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2118u;
            // 0x2c211c: 0xc68c0110  lwc1        $f12, 0x110($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2120u; }
        if (ctx->pc != 0x2C2120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2120u; }
        if (ctx->pc != 0x2C2120u) { return; }
    }
    ctx->pc = 0x2C2120u;
label_2c2120:
    // 0x2c2120: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2c2120u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2c2124: 0x27908500  addiu       $s0, $gp, -0x7B00
    ctx->pc = 0x2c2124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935808));
    // 0x2c2128: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c2128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c212c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c212cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c2130:
    // 0x2c2130: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2c2130u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c2134:
    // 0x2c2134: 0x0  nop
    ctx->pc = 0x2c2134u;
    // NOP
    // 0x2c2138: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x2c2138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2c213c: 0x7d2021  addu        $a0, $v1, $sp
    ctx->pc = 0x2c213cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2c2140: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2c2140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2c2144: 0x24840090  addiu       $a0, $a0, 0x90
    ctx->pc = 0x2c2144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x2c2148: 0x28450002  slti        $a1, $v0, 0x2
    ctx->pc = 0x2c2148u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c214c: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x2c214cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2c2150: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x2c2150u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x2c2154: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x2c2154u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c2158: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x2c2158u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x2c215c: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x2c215cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c2160: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x2c2160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x2c2164: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x2c2164u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x2c2168: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x2c2168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2c216c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2c216cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x2c2170: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x2c2170u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c2174: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x2c2174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x2c2178: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x2c2178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c217c: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x2c217cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x2c2180: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x2c2180u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x2c2184: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x2c2184u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2c2188: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x2c2188u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x2c218c: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x2c218cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c2190: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x2c2190u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x2c2194: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x2c2194u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c2198: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x2c2198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x2c219c: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x2c219cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x2c21a0: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x2c21a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2c21a4: 0xac860018  sw          $a2, 0x18($a0)
    ctx->pc = 0x2c21a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
    // 0x2c21a8: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x2c21a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c21ac: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x2c21acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x2c21b0: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x2c21b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c21b4: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x2c21b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x2c21b8: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x2c21b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x2c21bc: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x2c21bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2c21c0: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x2c21c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x2c21c4: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x2c21c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c21c8: 0xac860024  sw          $a2, 0x24($a0)
    ctx->pc = 0x2c21c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 6));
    // 0x2c21cc: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x2c21ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c21d0: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x2c21d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x2c21d4: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x2c21d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x2c21d8: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x2c21d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2c21dc: 0xac860028  sw          $a2, 0x28($a0)
    ctx->pc = 0x2c21dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 6));
    // 0x2c21e0: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x2c21e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c21e4: 0xac86002c  sw          $a2, 0x2C($a0)
    ctx->pc = 0x2c21e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 6));
    // 0x2c21e8: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x2c21e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c21ec: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x2c21ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x2c21f0: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x2c21f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x2c21f4: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x2c21f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2c21f8: 0xac860030  sw          $a2, 0x30($a0)
    ctx->pc = 0x2c21f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 6));
    // 0x2c21fc: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x2c21fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c2200: 0xac860034  sw          $a2, 0x34($a0)
    ctx->pc = 0x2c2200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 6));
    // 0x2c2204: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x2c2204u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c2208: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x2c2208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x2c220c: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x2c220cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x2c2210: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x2c2210u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2c2214: 0xac860038  sw          $a2, 0x38($a0)
    ctx->pc = 0x2c2214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 6));
    // 0x2c2218: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x2c2218u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c221c: 0xac86003c  sw          $a2, 0x3C($a0)
    ctx->pc = 0x2c221cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 6));
    // 0x2c2220: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2c2220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c2224: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x2c2224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x2c2228: 0x14a0ffc2  bnez        $a1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x2C2228u;
    {
        const bool branch_taken_0x2c2228 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C222Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2228u;
            // 0x2c222c: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2228) {
            ctx->pc = 0x2C2134u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c2134;
        }
    }
    ctx->pc = 0x2C2230u;
    // 0x2c2230: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x2c2230u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2c2234: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x2C2234u;
    {
        const bool branch_taken_0x2c2234 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2234u;
            // 0x2c2238: 0x228c0  sll         $a1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2234) {
            ctx->pc = 0x2C2274u;
            goto label_2c2274;
        }
    }
    ctx->pc = 0x2C223Cu;
label_2c223c:
    // 0x2c223c: 0x0  nop
    ctx->pc = 0x2c223cu;
    // NOP
    // 0x2c2240: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x2c2240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2c2244: 0xbd1821  addu        $v1, $a1, $sp
    ctx->pc = 0x2c2244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x2c2248: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c2248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c224c: 0x24660090  addiu       $a2, $v1, 0x90
    ctx->pc = 0x2c224cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x2c2250: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2c2250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2c2254: 0x2843000a  slti        $v1, $v0, 0xA
    ctx->pc = 0x2c2254u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2c2258: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x2c2258u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x2c225c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2c225cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c2260: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x2c2260u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x2c2264: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2c2264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c2268: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x2c2268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x2c226c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2C226Cu;
    {
        const bool branch_taken_0x2c226c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C226Cu;
            // 0x2c2270: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c226c) {
            ctx->pc = 0x2C223Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c223c;
        }
    }
    ctx->pc = 0x2C2274u;
label_2c2274:
    // 0x2c2274: 0x0  nop
    ctx->pc = 0x2c2274u;
    // NOP
    // 0x2c2278: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x2c2278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2c227c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2c227cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c2280: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2c2280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2c2284: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x2c2284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x2c2288: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c2288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c228c: 0x2442ca40  addiu       $v0, $v0, -0x35C0
    ctx->pc = 0x2c228cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953536));
    // 0x2c2290: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c2290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c2294: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c2294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c2298: 0xc0877c4  jal         func_21DF10
    ctx->pc = 0x2C2298u;
    SET_GPR_U32(ctx, 31, 0x2C22A0u);
    ctx->pc = 0x2C229Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2298u;
            // 0x2c229c: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF10u;
    if (runtime->hasFunction(0x21DF10u)) {
        auto targetFn = runtime->lookupFunction(0x21DF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C22A0u; }
        if (ctx->pc != 0x2C22A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemPos__7CDC2MesFPii_0x21df10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C22A0u; }
        if (ctx->pc != 0x2C22A0u) { return; }
    }
    ctx->pc = 0x2C22A0u;
label_2c22a0:
    // 0x2c22a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c22a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c22a4: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x2c22a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c22a8: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x2C22A8u;
    {
        const bool branch_taken_0x2c22a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C22ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C22A8u;
            // 0x2c22ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c22a8) {
            ctx->pc = 0x2C2130u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c2130;
        }
    }
    ctx->pc = 0x2C22B0u;
    // 0x2c22b0: 0x8f909ca8  lw          $s0, -0x6358($gp)
    ctx->pc = 0x2c22b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941864)));
    // 0x2c22b4: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C22B4u;
    {
        const bool branch_taken_0x2c22b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c22b4) {
            ctx->pc = 0x2C22ECu;
            goto label_2c22ec;
        }
    }
    ctx->pc = 0x2C22BCu;
    // 0x2c22bc: 0xc6810110  lwc1        $f1, 0x110($s4)
    ctx->pc = 0x2c22bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c22c0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2c22c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2c22c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c22c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c22c8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2C22C8u;
    SET_GPR_U32(ctx, 31, 0x2C22D0u);
    ctx->pc = 0x2C22CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C22C8u;
            // 0x2c22cc: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C22D0u; }
        if (ctx->pc != 0x2C22D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C22D0u; }
        if (ctx->pc != 0x2C22D0u) { return; }
    }
    ctx->pc = 0x2C22D0u;
label_2c22d0:
    // 0x2c22d0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2c22d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2c22d4: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x2c22d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c22d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c22d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c22dc: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2c22dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2c22e0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2c22e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c22e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c22e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c22e8: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2c22e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_2c22ec:
    // 0x2c22ec: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c22ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c22f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c22f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c22f4: 0x24a5f9f8  addiu       $a1, $a1, -0x608
    ctx->pc = 0x2c22f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965752));
    // 0x2c22f8: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2c22f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2c22fc: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2C22FCu;
    SET_GPR_U32(ctx, 31, 0x2C2304u);
    ctx->pc = 0x2C2300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C22FCu;
            // 0x2c2300: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2304u; }
        if (ctx->pc != 0x2C2304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2304u; }
        if (ctx->pc != 0x2C2304u) { return; }
    }
    ctx->pc = 0x2C2304u;
label_2c2304:
    // 0x2c2304: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c2304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c2308: 0x8c22cb3c  lw          $v0, -0x34C4($at)
    ctx->pc = 0x2c2308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953788)));
    // 0x2c230c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C230Cu;
    {
        const bool branch_taken_0x2c230c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C230Cu;
            // 0x2c2310: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c230c) {
            ctx->pc = 0x2C232Cu;
            goto label_2c232c;
        }
    }
    ctx->pc = 0x2C2314u;
    // 0x2c2314: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x2c2314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2318: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c2318u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c231c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2c231cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2c2320: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2c2320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2324: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c2324u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c2328: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2c2328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_2c232c:
    // 0x2c232c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c232cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2330: 0xc089664  jal         func_225990
    ctx->pc = 0x2C2330u;
    SET_GPR_U32(ctx, 31, 0x2C2338u);
    ctx->pc = 0x2C2334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2330u;
            // 0x2c2334: 0x24a5fa08  addiu       $a1, $a1, -0x5F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2338u; }
        if (ctx->pc != 0x2C2338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2338u; }
        if (ctx->pc != 0x2C2338u) { return; }
    }
    ctx->pc = 0x2C2338u;
label_2c2338:
    // 0x2c2338: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c2338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c233c: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x2c233cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x2c2340: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c2340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2344: 0xc089664  jal         func_225990
    ctx->pc = 0x2C2344u;
    SET_GPR_U32(ctx, 31, 0x2C234Cu);
    ctx->pc = 0x2C2348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2344u;
            // 0x2c2348: 0x24a5fa10  addiu       $a1, $a1, -0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C234Cu; }
        if (ctx->pc != 0x2C234Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C234Cu; }
        if (ctx->pc != 0x2C234Cu) { return; }
    }
    ctx->pc = 0x2C234Cu;
label_2c234c:
    // 0x2c234c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c234cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c2350: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x2c2350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x2c2354: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c2354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2358: 0xc089664  jal         func_225990
    ctx->pc = 0x2C2358u;
    SET_GPR_U32(ctx, 31, 0x2C2360u);
    ctx->pc = 0x2C235Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2358u;
            // 0x2c235c: 0x24a5fa18  addiu       $a1, $a1, -0x5E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2360u; }
        if (ctx->pc != 0x2C2360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2360u; }
        if (ctx->pc != 0x2C2360u) { return; }
    }
    ctx->pc = 0x2C2360u;
label_2c2360:
    // 0x2c2360: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c2360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c2364: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x2c2364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x2c2368: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c2368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c236c: 0x24a5fa20  addiu       $a1, $a1, -0x5E0
    ctx->pc = 0x2c236cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965792));
    // 0x2c2370: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2c2370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2c2374: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2C2374u;
    SET_GPR_U32(ctx, 31, 0x2C237Cu);
    ctx->pc = 0x2C2378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2374u;
            // 0x2c2378: 0x27a70094  addiu       $a3, $sp, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C237Cu; }
        if (ctx->pc != 0x2C237Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C237Cu; }
        if (ctx->pc != 0x2C237Cu) { return; }
    }
    ctx->pc = 0x2C237Cu;
label_2c237c:
    // 0x2c237c: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2c237cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2c2380: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c2380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c2384: 0x24a5fa30  addiu       $a1, $a1, -0x5D0
    ctx->pc = 0x2c2384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965808));
    // 0x2c2388: 0x27a600f8  addiu       $a2, $sp, 0xF8
    ctx->pc = 0x2c2388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x2c238c: 0xc08aaec  jal         func_22ABB0
    ctx->pc = 0x2C238Cu;
    SET_GPR_U32(ctx, 31, 0x2C2394u);
    ctx->pc = 0x2C2390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C238Cu;
            // 0x2c2390: 0x27a700fc  addiu       $a3, $sp, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22ABB0u;
    if (runtime->hasFunction(0x22ABB0u)) {
        auto targetFn = runtime->lookupFunction(0x22ABB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2394u; }
        if (ctx->pc != 0x2C2394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEtcTblValue__14CPosDataManageFPcRiRi_0x22abb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2394u; }
        if (ctx->pc != 0x2C2394u) { return; }
    }
    ctx->pc = 0x2C2394u;
label_2c2394:
    // 0x2c2394: 0x16c0000a  bnez        $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x2C2394u;
    {
        const bool branch_taken_0x2c2394 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2394) {
            ctx->pc = 0x2C23C0u;
            goto label_2c23c0;
        }
    }
    ctx->pc = 0x2C239Cu;
    // 0x2c239c: 0x8e870378  lw          $a3, 0x378($s4)
    ctx->pc = 0x2c239cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 888)));
    // 0x2c23a0: 0xc78c850c  lwc1        $f12, -0x7AF4($gp)
    ctx->pc = 0x2c23a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c23a4: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x2c23a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x2c23a8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2c23a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c23ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2c23acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c23b0: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x2c23b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x2c23b4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2c23b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2c23b8: 0xc0b0b74  jal         func_2C2DD0
    ctx->pc = 0x2C23B8u;
    SET_GPR_U32(ctx, 31, 0x2C23C0u);
    ctx->pc = 0x2C23BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C23B8u;
            // 0x2c23bc: 0x27a600f8  addiu       $a2, $sp, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2DD0u;
    if (runtime->hasFunction(0x2C2DD0u)) {
        auto targetFn = runtime->lookupFunction(0x2C2DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C23C0u; }
        if (ctx->pc != 0x2C23C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LocalFunc_AdjustScrlBar__FPP18MENUFORMPARTS_TYPEPiPiiffi_0x2c2dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C23C0u; }
        if (ctx->pc != 0x2C23C0u) { return; }
    }
    ctx->pc = 0x2C23C0u;
label_2c23c0:
    // 0x2c23c0: 0x8f839c58  lw          $v1, -0x63A8($gp)
    ctx->pc = 0x2c23c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941784)));
    // 0x2c23c4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C23C4u;
    {
        const bool branch_taken_0x2c23c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C23C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C23C4u;
            // 0x2c23c8: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c23c4) {
            ctx->pc = 0x2C23FCu;
            goto label_2c23fc;
        }
    }
    ctx->pc = 0x2C23CCu;
    // 0x2c23cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c23ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c23d0: 0x24a5fa40  addiu       $a1, $a1, -0x5C0
    ctx->pc = 0x2c23d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965824));
    // 0x2c23d4: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2c23d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2c23d8: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2C23D8u;
    SET_GPR_U32(ctx, 31, 0x2C23E0u);
    ctx->pc = 0x2C23DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C23D8u;
            // 0x2c23dc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C23E0u; }
        if (ctx->pc != 0x2C23E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C23E0u; }
        if (ctx->pc != 0x2C23E0u) { return; }
    }
    ctx->pc = 0x2C23E0u;
label_2c23e0:
    // 0x2c23e0: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x2c23e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c23e4: 0x8f839c58  lw          $v1, -0x63A8($gp)
    ctx->pc = 0x2c23e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941784)));
    // 0x2c23e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c23e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c23ec: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2c23ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2c23f0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2c23f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c23f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c23f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c23f8: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x2c23f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_2c23fc:
    // 0x2c23fc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2c23fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c2400: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2c2400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c2404: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2c2404u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c2408: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2c2408u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c240c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2c240cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c2410: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2c2410u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c2414: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c2414u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c2418: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c2418u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c241c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c241cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2420: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2420u;
            // 0x2c2424: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C2428u;
}
