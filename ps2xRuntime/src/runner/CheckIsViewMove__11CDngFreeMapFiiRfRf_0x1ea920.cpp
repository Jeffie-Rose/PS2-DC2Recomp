#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckIsViewMove__11CDngFreeMapFiiRfRf
// Address: 0x1ea920 - 0x1eaa60
void CheckIsViewMove__11CDngFreeMapFiiRfRf_0x1ea920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckIsViewMove__11CDngFreeMapFiiRfRf_0x1ea920");
#endif

    switch (ctx->pc) {
        case 0x1ea980u: goto label_1ea980;
        case 0x1ea9b4u: goto label_1ea9b4;
        case 0x1ea9dcu: goto label_1ea9dc;
        case 0x1eaa10u: goto label_1eaa10;
        default: break;
    }

    ctx->pc = 0x1ea920u;

    // 0x1ea920: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ea920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1ea924: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1ea924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1ea928: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1ea928u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea92c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1ea92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1ea930: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ea930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1ea934: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ea934u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ea938: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ea938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ea93c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1ea93cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea940: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ea940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ea944: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1ea944u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea948: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ea948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ea94c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1ea94cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea950: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ea950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ea954: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1ea954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea958: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ea958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ea95c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1ea95cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea960: 0xc48c0020  lwc1        $f12, 0x20($a0)
    ctx->pc = 0x1ea960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ea964: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x1ea964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea968: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1ea968u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ea96c: 0x0  nop
    ctx->pc = 0x1ea96cu;
    // NOP
    // 0x1ea970: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1EA970u;
    {
        const bool branch_taken_0x1ea970 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EA974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA970u;
            // 0x1ea974: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea970) {
            ctx->pc = 0x1EA984u;
            goto label_1ea984;
        }
    }
    ctx->pc = 0x1EA978u;
    // 0x1ea978: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1EA978u;
    SET_GPR_U32(ctx, 31, 0x1EA980u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA980u; }
        if (ctx->pc != 0x1EA980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA980u; }
        if (ctx->pc != 0x1EA980u) { return; }
    }
    ctx->pc = 0x1EA980u;
label_1ea980:
    // 0x1ea980: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ea980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea984:
    // 0x1ea984: 0xc6c10028  lwc1        $f1, 0x28($s6)
    ctx->pc = 0x1ea984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ea988: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x1ea988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x1ea98c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1ea98cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea990: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1ea990u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ea994: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ea994u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ea998: 0x46011300  add.s       $f12, $f2, $f1
    ctx->pc = 0x1ea998u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1ea99c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1ea99cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ea9a0: 0x0  nop
    ctx->pc = 0x1ea9a0u;
    // NOP
    // 0x1ea9a4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1EA9A4u;
    {
        const bool branch_taken_0x1ea9a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ea9a4) {
            ctx->pc = 0x1EA9B8u;
            goto label_1ea9b8;
        }
    }
    ctx->pc = 0x1EA9ACu;
    // 0x1ea9ac: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1EA9ACu;
    SET_GPR_U32(ctx, 31, 0x1EA9B4u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA9B4u; }
        if (ctx->pc != 0x1EA9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA9B4u; }
        if (ctx->pc != 0x1EA9B4u) { return; }
    }
    ctx->pc = 0x1EA9B4u;
label_1ea9b4:
    // 0x1ea9b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ea9b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea9b8:
    // 0x1ea9b8: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1ea9b8u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea9bc: 0xc6cc0024  lwc1        $f12, 0x24($s6)
    ctx->pc = 0x1ea9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ea9c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ea9c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ea9c4: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1ea9c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ea9c8: 0x0  nop
    ctx->pc = 0x1ea9c8u;
    // NOP
    // 0x1ea9cc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1EA9CCu;
    {
        const bool branch_taken_0x1ea9cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EA9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA9CCu;
            // 0x1ea9d0: 0x2623fff6  addiu       $v1, $s1, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea9cc) {
            ctx->pc = 0x1EA9E4u;
            goto label_1ea9e4;
        }
    }
    ctx->pc = 0x1EA9D4u;
    // 0x1ea9d4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1EA9D4u;
    SET_GPR_U32(ctx, 31, 0x1EA9DCu);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA9DCu; }
        if (ctx->pc != 0x1EA9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA9DCu; }
        if (ctx->pc != 0x1EA9DCu) { return; }
    }
    ctx->pc = 0x1EA9DCu;
label_1ea9dc:
    // 0x1ea9dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ea9dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea9e0: 0x2623fff6  addiu       $v1, $s1, -0xA
    ctx->pc = 0x1ea9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967286));
label_1ea9e4:
    // 0x1ea9e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ea9e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea9e8: 0xc6c1002c  lwc1        $f1, 0x2C($s6)
    ctx->pc = 0x1ea9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ea9ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ea9ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ea9f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ea9f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ea9f4: 0x0  nop
    ctx->pc = 0x1ea9f4u;
    // NOP
    // 0x1ea9f8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1EA9F8u;
    {
        const bool branch_taken_0x1ea9f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ea9f8) {
            ctx->pc = 0x1EAA14u;
            goto label_1eaa14;
        }
    }
    ctx->pc = 0x1EAA00u;
    // 0x1eaa00: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x1eaa00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x1eaa04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eaa04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eaa08: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1EAA08u;
    SET_GPR_U32(ctx, 31, 0x1EAA10u);
    ctx->pc = 0x1EAA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAA08u;
            // 0x1eaa0c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAA10u; }
        if (ctx->pc != 0x1EAA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAA10u; }
        if (ctx->pc != 0x1EAA10u) { return; }
    }
    ctx->pc = 0x1EAA10u;
label_1eaa10:
    // 0x1eaa10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1eaa10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eaa14:
    // 0x1eaa14: 0x2152023  subu        $a0, $s0, $s5
    ctx->pc = 0x1eaa14u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x1eaa18: 0x2341823  subu        $v1, $s1, $s4
    ctx->pc = 0x1eaa18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1eaa1c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1eaa1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eaa20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eaa20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eaa24: 0x0  nop
    ctx->pc = 0x1eaa24u;
    // NOP
    // 0x1eaa28: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1eaa28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1eaa2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eaa2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1eaa30: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x1eaa30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1eaa34: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1eaa34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1eaa38: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1eaa38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1eaa3c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1eaa3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1eaa40: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1eaa40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1eaa44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1eaa44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1eaa48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1eaa48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eaa4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1eaa4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eaa50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eaa50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eaa54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eaa54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eaa58: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAA58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAA58u;
            // 0x1eaa5c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EAA60u;
}
