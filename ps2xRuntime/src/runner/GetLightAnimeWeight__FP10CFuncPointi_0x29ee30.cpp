#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetLightAnimeWeight__FP10CFuncPointi
// Address: 0x29ee30 - 0x29f050
void GetLightAnimeWeight__FP10CFuncPointi_0x29ee30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLightAnimeWeight__FP10CFuncPointi_0x29ee30");
#endif

    switch (ctx->pc) {
        case 0x29ee58u: goto label_29ee58;
        case 0x29eec4u: goto label_29eec4;
        case 0x29ef50u: goto label_29ef50;
        case 0x29eff0u: goto label_29eff0;
        default: break;
    }

    ctx->pc = 0x29ee30u;

    // 0x29ee30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29ee30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29ee34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29ee34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29ee38: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x29ee38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x29ee3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29ee3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x29ee40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29ee40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ee44: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x29ee44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29ee48: 0xc4940050  lwc1        $f20, 0x50($a0)
    ctx->pc = 0x29ee48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29ee4c: 0xc48c0054  lwc1        $f12, 0x54($a0)
    ctx->pc = 0x29ee4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29ee50: 0xc0a248c  jal         func_289230
    ctx->pc = 0x29EE50u;
    SET_GPR_U32(ctx, 31, 0x29EE58u);
    ctx->pc = 0x29EE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29EE50u;
            // 0x29ee54: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EE58u; }
        if (ctx->pc != 0x29EE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EE58u; }
        if (ctx->pc != 0x29EE58u) { return; }
    }
    ctx->pc = 0x29EE58u;
label_29ee58:
    // 0x29ee58: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x29ee58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29ee5c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29ee5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29ee60: 0x10c50061  beq         $a2, $a1, . + 4 + (0x61 << 2)
    ctx->pc = 0x29EE60u;
    {
        const bool branch_taken_0x29ee60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x29EE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EE60u;
            // 0x29ee64: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ee60) {
            ctx->pc = 0x29EFE8u;
            goto label_29efe8;
        }
    }
    ctx->pc = 0x29EE68u;
    // 0x29ee68: 0x10c4005f  beq         $a2, $a0, . + 4 + (0x5F << 2)
    ctx->pc = 0x29EE68u;
    {
        const bool branch_taken_0x29ee68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x29EE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EE68u;
            // 0x29ee6c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ee68) {
            ctx->pc = 0x29EFE8u;
            goto label_29efe8;
        }
    }
    ctx->pc = 0x29EE70u;
    // 0x29ee70: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29EE70u;
    {
        const bool branch_taken_0x29ee70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x29ee70) {
            ctx->pc = 0x29EE80u;
            goto label_29ee80;
        }
    }
    ctx->pc = 0x29EE78u;
    // 0x29ee78: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x29EE78u;
    {
        const bool branch_taken_0x29ee78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EE78u;
            // 0x29ee7c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ee78) {
            ctx->pc = 0x29F034u;
            goto label_29f034;
        }
    }
    ctx->pc = 0x29EE80u;
label_29ee80:
    // 0x29ee80: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x29ee80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x29ee84: 0x10650041  beq         $v1, $a1, . + 4 + (0x41 << 2)
    ctx->pc = 0x29EE84u;
    {
        const bool branch_taken_0x29ee84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x29ee84) {
            ctx->pc = 0x29EF8Cu;
            goto label_29ef8c;
        }
    }
    ctx->pc = 0x29EE8Cu;
    // 0x29ee8c: 0x1064001c  beq         $v1, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x29EE8Cu;
    {
        const bool branch_taken_0x29ee8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x29ee8c) {
            ctx->pc = 0x29EF00u;
            goto label_29ef00;
        }
    }
    ctx->pc = 0x29EE94u;
    // 0x29ee94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29ee94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ee98: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29EE98u;
    {
        const bool branch_taken_0x29ee98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29ee98) {
            ctx->pc = 0x29EEBCu;
            goto label_29eebc;
        }
    }
    ctx->pc = 0x29EEA0u;
    // 0x29eea0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29EEA0u;
    {
        const bool branch_taken_0x29eea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EEA0u;
            // 0x29eea4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eea0) {
            ctx->pc = 0x29EEB0u;
            goto label_29eeb0;
        }
    }
    ctx->pc = 0x29EEA8u;
    // 0x29eea8: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x29EEA8u;
    {
        const bool branch_taken_0x29eea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29eea8) {
            ctx->pc = 0x29F030u;
            goto label_29f030;
        }
    }
    ctx->pc = 0x29EEB0u;
label_29eeb0:
    // 0x29eeb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29eeb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29eeb4: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x29EEB4u;
    {
        const bool branch_taken_0x29eeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EEB4u;
            // 0x29eeb8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eeb4) {
            ctx->pc = 0x29F03Cu;
            goto label_29f03c;
        }
    }
    ctx->pc = 0x29EEBCu;
label_29eebc:
    // 0x29eebc: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x29EEBCu;
    SET_GPR_U32(ctx, 31, 0x29EEC4u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EEC4u; }
        if (ctx->pc != 0x29EEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EEC4u; }
        if (ctx->pc != 0x29EEC4u) { return; }
    }
    ctx->pc = 0x29EEC4u;
label_29eec4:
    // 0x29eec4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29eec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29eec8: 0x0  nop
    ctx->pc = 0x29eec8u;
    // NOP
    // 0x29eecc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x29eeccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29eed0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x29eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x29eed4: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x29eed4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x29eed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29eed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29eedc: 0x0  nop
    ctx->pc = 0x29eedcu;
    // NOP
    // 0x29eee0: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x29eee0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29eee4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29eee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29eee8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29eee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29eeec: 0x0  nop
    ctx->pc = 0x29eeecu;
    // NOP
    // 0x29eef0: 0x46140801  sub.s       $f0, $f1, $f20
    ctx->pc = 0x29eef0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x29eef4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x29eef4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x29eef8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x29EEF8u;
    {
        const bool branch_taken_0x29eef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EEF8u;
            // 0x29eefc: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eef8) {
            ctx->pc = 0x29F038u;
            goto label_29f038;
        }
    }
    ctx->pc = 0x29EF00u;
label_29ef00:
    // 0x29ef00: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x29EF00u;
    {
        const bool branch_taken_0x29ef00 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29ef00) {
            ctx->pc = 0x29EF7Cu;
            goto label_29ef7c;
        }
    }
    ctx->pc = 0x29EF08u;
    // 0x29ef08: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29EF08u;
    {
        const bool branch_taken_0x29ef08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EF08u;
            // 0x29ef0c: 0x202001a  div         $zero, $s0, $v0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ef08) {
            ctx->pc = 0x29EF14u;
            goto label_29ef14;
        }
    }
    ctx->pc = 0x29EF10u;
    // 0x29ef10: 0x1cd  break       0, 7
    ctx->pc = 0x29ef10u;
    runtime->handleBreak(rdram, ctx);
label_29ef14:
    // 0x29ef14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29ef14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ef18: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x29ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x29ef1c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x29ef1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x29ef20: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x29ef20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29ef24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29ef24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29ef28: 0x1010  mfhi        $v0
    ctx->pc = 0x29ef28u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x29ef2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29ef2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29ef30: 0x0  nop
    ctx->pc = 0x29ef30u;
    // NOP
    // 0x29ef34: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x29ef34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29ef38: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x29ef38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x29ef3c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x29ef3cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29ef40: 0x0  nop
    ctx->pc = 0x29ef40u;
    // NOP
    // 0x29ef44: 0x0  nop
    ctx->pc = 0x29ef44u;
    // NOP
    // 0x29ef48: 0xc047a42  jal         func_11E908
    ctx->pc = 0x29EF48u;
    SET_GPR_U32(ctx, 31, 0x29EF50u);
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EF50u; }
        if (ctx->pc != 0x29EF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EF50u; }
        if (ctx->pc != 0x29EF50u) { return; }
    }
    ctx->pc = 0x29EF50u;
label_29ef50:
    // 0x29ef50: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x29ef50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x29ef54: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x29ef54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x29ef58: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x29ef58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29ef5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29ef5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29ef60: 0x0  nop
    ctx->pc = 0x29ef60u;
    // NOP
    // 0x29ef64: 0x46001880  add.s       $f2, $f3, $f0
    ctx->pc = 0x29ef64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x29ef68: 0x46140802  mul.s       $f0, $f1, $f20
    ctx->pc = 0x29ef68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x29ef6c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x29ef6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29ef70: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x29ef70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x29ef74: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x29EF74u;
    {
        const bool branch_taken_0x29ef74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EF74u;
            // 0x29ef78: 0x46001802  mul.s       $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ef74) {
            ctx->pc = 0x29F038u;
            goto label_29f038;
        }
    }
    ctx->pc = 0x29EF7Cu;
label_29ef7c:
    // 0x29ef7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29ef7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29ef80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29ef80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ef84: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x29EF84u;
    {
        const bool branch_taken_0x29ef84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ef84) {
            ctx->pc = 0x29F038u;
            goto label_29f038;
        }
    }
    ctx->pc = 0x29EF8Cu;
label_29ef8c:
    // 0x29ef8c: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x29EF8Cu;
    {
        const bool branch_taken_0x29ef8c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29ef8c) {
            ctx->pc = 0x29EFD8u;
            goto label_29efd8;
        }
    }
    ctx->pc = 0x29EF94u;
    // 0x29ef94: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29EF94u;
    {
        const bool branch_taken_0x29ef94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EF94u;
            // 0x29ef98: 0x202001a  div         $zero, $s0, $v0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ef94) {
            ctx->pc = 0x29EFA0u;
            goto label_29efa0;
        }
    }
    ctx->pc = 0x29EF9Cu;
    // 0x29ef9c: 0x1cd  break       0, 7
    ctx->pc = 0x29ef9cu;
    runtime->handleBreak(rdram, ctx);
label_29efa0:
    // 0x29efa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29efa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29efa4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29efa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29efa8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x29efa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29efac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29efacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29efb0: 0x1010  mfhi        $v0
    ctx->pc = 0x29efb0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x29efb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29efb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29efb8: 0x0  nop
    ctx->pc = 0x29efb8u;
    // NOP
    // 0x29efbc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x29efbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29efc0: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x29efc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x29efc4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x29efc4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29efc8: 0x0  nop
    ctx->pc = 0x29efc8u;
    // NOP
    // 0x29efcc: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x29efccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x29efd0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x29EFD0u;
    {
        const bool branch_taken_0x29efd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EFD0u;
            // 0x29efd4: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29efd0) {
            ctx->pc = 0x29F038u;
            goto label_29f038;
        }
    }
    ctx->pc = 0x29EFD8u;
label_29efd8:
    // 0x29efd8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29efd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29efdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29efdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29efe0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x29EFE0u;
    {
        const bool branch_taken_0x29efe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29efe0) {
            ctx->pc = 0x29F038u;
            goto label_29f038;
        }
    }
    ctx->pc = 0x29EFE8u;
label_29efe8:
    // 0x29efe8: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x29EFE8u;
    SET_GPR_U32(ctx, 31, 0x29EFF0u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EFF0u; }
        if (ctx->pc != 0x29EFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EFF0u; }
        if (ctx->pc != 0x29EFF0u) { return; }
    }
    ctx->pc = 0x29EFF0u;
label_29eff0:
    // 0x29eff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29eff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29eff4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x29eff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x29eff8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x29eff8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x29effc: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x29effcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x29f000: 0x3444999a  ori         $a0, $v0, 0x999A
    ctx->pc = 0x29f000u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x29f004: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x29f004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x29f008: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x29f008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x29f00c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x29f00cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29f010: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29f010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29f014: 0x0  nop
    ctx->pc = 0x29f014u;
    // NOP
    // 0x29f018: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x29f018u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x29f01c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x29f01cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29f020: 0x0  nop
    ctx->pc = 0x29f020u;
    // NOP
    // 0x29f024: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29f024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29f028: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29F028u;
    {
        const bool branch_taken_0x29f028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F028u;
            // 0x29f02c: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f028) {
            ctx->pc = 0x29F038u;
            goto label_29f038;
        }
    }
    ctx->pc = 0x29F030u;
label_29f030:
    // 0x29f030: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29f030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_29f034:
    // 0x29f034: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29f034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29f038:
    // 0x29f038: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29f038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29f03c:
    // 0x29f03c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x29f03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29f040: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x29f040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29f044: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29f044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29f048: 0x3e00008  jr          $ra
    ctx->pc = 0x29F048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F048u;
            // 0x29f04c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29F050u;
}
