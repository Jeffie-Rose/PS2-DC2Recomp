#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawMenuWakuRect__FP10mgCTexture9mgRect<f>9mgRect<i>iiii
// Address: 0x225050 - 0x2255c0
void DrawMenuWakuRect__FP10mgCTexture9mgRect_f_9mgRect_i_iiii_0x225050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawMenuWakuRect__FP10mgCTexture9mgRect_f_9mgRect_i_iiii_0x225050");
#endif

    switch (ctx->pc) {
        case 0x2250c8u: goto label_2250c8;
        case 0x2250d8u: goto label_2250d8;
        case 0x2250e4u: goto label_2250e4;
        case 0x22510cu: goto label_22510c;
        case 0x22512cu: goto label_22512c;
        case 0x225144u: goto label_225144;
        case 0x22514cu: goto label_22514c;
        case 0x225168u: goto label_225168;
        case 0x225174u: goto label_225174;
        case 0x225180u: goto label_225180;
        case 0x225198u: goto label_225198;
        case 0x2251e8u: goto label_2251e8;
        case 0x225214u: goto label_225214;
        case 0x22526cu: goto label_22526c;
        case 0x22529cu: goto label_22529c;
        case 0x2252b4u: goto label_2252b4;
        case 0x2252c8u: goto label_2252c8;
        case 0x2252dcu: goto label_2252dc;
        case 0x225304u: goto label_225304;
        case 0x22533cu: goto label_22533c;
        case 0x225348u: goto label_225348;
        case 0x2253a0u: goto label_2253a0;
        case 0x2253bcu: goto label_2253bc;
        case 0x225414u: goto label_225414;
        case 0x225444u: goto label_225444;
        case 0x225460u: goto label_225460;
        case 0x225474u: goto label_225474;
        case 0x225484u: goto label_225484;
        case 0x2254a4u: goto label_2254a4;
        case 0x2254bcu: goto label_2254bc;
        case 0x2254dcu: goto label_2254dc;
        case 0x2254ecu: goto label_2254ec;
        case 0x225500u: goto label_225500;
        case 0x225508u: goto label_225508;
        case 0x225574u: goto label_225574;
        case 0x22557cu: goto label_22557c;
        default: break;
    }

    ctx->pc = 0x225050u;

    // 0x225050: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x225050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x225054: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x225054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x225058: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x225058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x22505c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x22505cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x225060: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x225060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x225064: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x225064u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225068: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x225068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x22506c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x22506cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225070: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x225070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x225074: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x225074u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225078: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x225078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x22507c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x22507cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225080: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x225080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x225084: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x225084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x225088: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x225088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x22508c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x22508cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225090: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x225090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x225094: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x225094u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x225098: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x225098u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x22509c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x22509cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2250a0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2250a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2250a4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2250a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2250a8: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2250a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2250ac: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2250acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2250b0: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2250b0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x2250b4: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2250b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2250b8: 0x12800130  beqz        $s4, . + 4 + (0x130 << 2)
    ctx->pc = 0x2250B8u;
    {
        const bool branch_taken_0x2250b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2250BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2250B8u;
            // 0x2250bc: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2250b8) {
            ctx->pc = 0x22557Cu;
            goto label_22557c;
        }
    }
    ctx->pc = 0x2250C0u;
    // 0x2250c0: 0xc08cb14  jal         func_232C50
    ctx->pc = 0x2250C0u;
    SET_GPR_U32(ctx, 31, 0x2250C8u);
    ctx->pc = 0x232C50u;
    if (runtime->hasFunction(0x232C50u)) {
        auto targetFn = runtime->lookupFunction(0x232C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2250C8u; }
        if (ctx->pc != 0x2250C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuPrim__Fv_0x232c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2250C8u; }
        if (ctx->pc != 0x2250C8u) { return; }
    }
    ctx->pc = 0x2250C8u;
label_2250c8:
    // 0x2250c8: 0xc7ac00e0  lwc1        $f12, 0xE0($sp)
    ctx->pc = 0x2250c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2250cc: 0xc7b400e4  lwc1        $f20, 0xE4($sp)
    ctx->pc = 0x2250ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2250d0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2250D0u;
    SET_GPR_U32(ctx, 31, 0x2250D8u);
    ctx->pc = 0x2250D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2250D0u;
            // 0x2250d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2250D8u; }
        if (ctx->pc != 0x2250D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2250D8u; }
        if (ctx->pc != 0x2250D8u) { return; }
    }
    ctx->pc = 0x2250D8u;
label_2250d8:
    // 0x2250d8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2250d8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2250dc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2250DCu;
    SET_GPR_U32(ctx, 31, 0x2250E4u);
    ctx->pc = 0x2250E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2250DCu;
            // 0x2250e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2250E4u; }
        if (ctx->pc != 0x2250E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2250E4u; }
        if (ctx->pc != 0x2250E4u) { return; }
    }
    ctx->pc = 0x2250E4u;
label_2250e4:
    // 0x2250e4: 0x8fb200fc  lw          $s2, 0xFC($sp)
    ctx->pc = 0x2250e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x2250e8: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x2250e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2250ec: 0xc7b600e8  lwc1        $f22, 0xE8($sp)
    ctx->pc = 0x2250ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2250f0: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2250f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x2250f4: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x2250f4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2250f8: 0x0  nop
    ctx->pc = 0x2250f8u;
    // NOP
    // 0x2250fc: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x2250fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x225100: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x225100u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x225104: 0xc0a248c  jal         func_289230
    ctx->pc = 0x225104u;
    SET_GPR_U32(ctx, 31, 0x22510Cu);
    ctx->pc = 0x225108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225104u;
            // 0x225108: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22510Cu; }
        if (ctx->pc != 0x22510Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22510Cu; }
        if (ctx->pc != 0x22510Cu) { return; }
    }
    ctx->pc = 0x22510Cu;
label_22510c:
    // 0x22510c: 0x8fb100f8  lw          $s1, 0xF8($sp)
    ctx->pc = 0x22510cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x225110: 0xc7b700ec  lwc1        $f23, 0xEC($sp)
    ctx->pc = 0x225110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x225114: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x225114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x225118: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x225118u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22511c: 0x4617a000  add.s       $f0, $f20, $f23
    ctx->pc = 0x22511cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[23]);
    // 0x225120: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x225120u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x225124: 0xc0a248c  jal         func_289230
    ctx->pc = 0x225124u;
    SET_GPR_U32(ctx, 31, 0x22512Cu);
    ctx->pc = 0x225128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225124u;
            // 0x225128: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22512Cu; }
        if (ctx->pc != 0x22512Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22512Cu; }
        if (ctx->pc != 0x22512Cu) { return; }
    }
    ctx->pc = 0x22512Cu;
label_22512c:
    // 0x22512c: 0x7ba600d0  lq          $a2, 0xD0($sp)
    ctx->pc = 0x22512cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x225130: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x225130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225134: 0x7ba700c0  lq          $a3, 0xC0($sp)
    ctx->pc = 0x225134u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x225138: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x225138u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22513c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x22513Cu;
    SET_GPR_U32(ctx, 31, 0x225144u);
    ctx->pc = 0x225140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22513Cu;
            // 0x225140: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225144u; }
        if (ctx->pc != 0x225144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225144u; }
        if (ctx->pc != 0x225144u) { return; }
    }
    ctx->pc = 0x225144u;
label_225144:
    // 0x225144: 0xc088038  jal         func_2200E0
    ctx->pc = 0x225144u;
    SET_GPR_U32(ctx, 31, 0x22514Cu);
    ctx->pc = 0x225148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225144u;
            // 0x225148: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2200E0u;
    if (runtime->hasFunction(0x2200E0u)) {
        auto targetFn = runtime->lookupFunction(0x2200E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22514Cu; }
        if (ctx->pc != 0x22514Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuClipRectCheck__FR9mgRect_i__0x2200e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22514Cu; }
        if (ctx->pc != 0x22514Cu) { return; }
    }
    ctx->pc = 0x22514Cu;
label_22514c:
    // 0x22514c: 0x27a30108  addiu       $v1, $sp, 0x108
    ctx->pc = 0x22514cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x225150: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x225150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x225154: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x225154u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x225158: 0x14200108  bnez        $at, . + 4 + (0x108 << 2)
    ctx->pc = 0x225158u;
    {
        const bool branch_taken_0x225158 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x22515Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225158u;
            // 0x22515c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225158) {
            ctx->pc = 0x22557Cu;
            goto label_22557c;
        }
    }
    ctx->pc = 0x225160u;
    // 0x225160: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x225160u;
    SET_GPR_U32(ctx, 31, 0x225168u);
    ctx->pc = 0x225164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225160u;
            // 0x225164: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225168u; }
        if (ctx->pc != 0x225168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225168u; }
        if (ctx->pc != 0x225168u) { return; }
    }
    ctx->pc = 0x225168u;
label_225168:
    // 0x225168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22516c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x22516Cu;
    SET_GPR_U32(ctx, 31, 0x225174u);
    ctx->pc = 0x225170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22516Cu;
            // 0x225170: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225174u; }
        if (ctx->pc != 0x225174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225174u; }
        if (ctx->pc != 0x225174u) { return; }
    }
    ctx->pc = 0x225174u;
label_225174:
    // 0x225174: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x225174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225178: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x225178u;
    SET_GPR_U32(ctx, 31, 0x225180u);
    ctx->pc = 0x22517Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225178u;
            // 0x22517c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225180u; }
        if (ctx->pc != 0x225180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225180u; }
        if (ctx->pc != 0x225180u) { return; }
    }
    ctx->pc = 0x225180u;
label_225180:
    // 0x225180: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x225180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225184: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x225184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225188: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x225188u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22518c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x22518cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225190: 0xc04d320  jal         func_134C80
    ctx->pc = 0x225190u;
    SET_GPR_U32(ctx, 31, 0x225198u);
    ctx->pc = 0x225194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225190u;
            // 0x225194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225198u; }
        if (ctx->pc != 0x225198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225198u; }
        if (ctx->pc != 0x225198u) { return; }
    }
    ctx->pc = 0x225198u;
label_225198:
    // 0x225198: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x225198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x22519c: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x22519cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2251a0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2251a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2251a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2251a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2251a8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2251a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2251ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2251acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2251b0: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x2251b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x2251b4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2251b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2251b8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2251b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2251bc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2251bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2251c0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2251c0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2251c4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2251c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2251c8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2251c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2251cc: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2251ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2251d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2251d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2251d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2251d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2251d8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2251d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2251dc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2251dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2251e0: 0xc04d360  jal         func_134D80
    ctx->pc = 0x2251E0u;
    SET_GPR_U32(ctx, 31, 0x2251E8u);
    ctx->pc = 0x2251E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2251E0u;
            // 0x2251e4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D80u;
    if (runtime->hasFunction(0x134D80u)) {
        auto targetFn = runtime->lookupFunction(0x134D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2251E8u; }
        if (ctx->pc != 0x2251E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Direct__11mgCDrawPrimFUlUl_0x134d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2251E8u; }
        if (ctx->pc != 0x2251E8u) { return; }
    }
    ctx->pc = 0x2251E8u;
label_2251e8:
    // 0x2251e8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2251e8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2251ec: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2251ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2251f0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2251f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2251f4: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x2251f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x2251f8: 0x4615b003  div.s       $f0, $f22, $f21
    ctx->pc = 0x2251f8u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[22], ctx->f[21]); }
    // 0x2251fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2251fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225200: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x225200u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x225204: 0x0  nop
    ctx->pc = 0x225204u;
    // NOP
    // 0x225208: 0x0  nop
    ctx->pc = 0x225208u;
    // NOP
    // 0x22520c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22520Cu;
    SET_GPR_U32(ctx, 31, 0x225214u);
    ctx->pc = 0x225210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22520Cu;
            // 0x225210: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225214u; }
        if (ctx->pc != 0x225214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225214u; }
        if (ctx->pc != 0x225214u) { return; }
    }
    ctx->pc = 0x225214u;
label_225214:
    // 0x225214: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x225214u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225218: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x225218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x22521c: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x22521cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x225220: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x225220u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225224: 0x2442ce80  addiu       $v0, $v0, -0x3180
    ctx->pc = 0x225224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
    // 0x225228: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x225228u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22522c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x22522cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225230: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x225230u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x225234: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x225234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x225238: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x225238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x22523c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22523cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225240: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x225240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x225244: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x225244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x225248: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x225248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x22524c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22524cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225250: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x225250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x225254: 0xafa30118  sw          $v1, 0x118($sp)
    ctx->pc = 0x225254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 3));
    // 0x225258: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x225258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x22525c: 0x27a2010c  addiu       $v0, $sp, 0x10C
    ctx->pc = 0x22525cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x225260: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x225260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225264: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x225264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x225268: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x225268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
label_22526c:
    // 0x22526c: 0x2bd1021  addu        $v0, $s5, $sp
    ctx->pc = 0x22526cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 29)));
    // 0x225270: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x225270u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x225274: 0x24420110  addiu       $v0, $v0, 0x110
    ctx->pc = 0x225274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x225278: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x225278u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22527c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x22527cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225280: 0xc78282d0  lwc1        $f2, -0x7D30($gp)
    ctx->pc = 0x225280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x225284: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x225284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225288: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x225288u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22528c: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x22528cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x225290: 0x46800620  cvt.s.w     $f24, $f0
    ctx->pc = 0x225290u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
    // 0x225294: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x225294u;
    {
        const bool branch_taken_0x225294 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x225298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225294u;
            // 0x225298: 0x46011580  add.s       $f22, $f2, $f1 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x225294) {
            ctx->pc = 0x225318u;
            goto label_225318;
        }
    }
    ctx->pc = 0x22529Cu;
label_22529c:
    // 0x22529c: 0x0  nop
    ctx->pc = 0x22529cu;
    // NOP
    // 0x2252a0: 0x8fb600f4  lw          $s6, 0xF4($sp)
    ctx->pc = 0x2252a0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x2252a4: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x2252a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2252a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2252a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2252ac: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2252ACu;
    SET_GPR_U32(ctx, 31, 0x2252B4u);
    ctx->pc = 0x2252B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2252ACu;
            // 0x2252b0: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2252B4u; }
        if (ctx->pc != 0x2252B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2252B4u; }
        if (ctx->pc != 0x2252B4u) { return; }
    }
    ctx->pc = 0x2252B4u;
label_2252b4:
    // 0x2252b4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2252b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2252b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2252b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2252bc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2252bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2252c0: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x2252C0u;
    SET_GPR_U32(ctx, 31, 0x2252C8u);
    ctx->pc = 0x2252C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2252C0u;
            // 0x2252c4: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2252C8u; }
        if (ctx->pc != 0x2252C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2252C8u; }
        if (ctx->pc != 0x2252C8u) { return; }
    }
    ctx->pc = 0x2252C8u;
label_2252c8:
    // 0x2252c8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2252c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2252cc: 0x2d23021  addu        $a2, $s6, $s2
    ctx->pc = 0x2252ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x2252d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2252d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2252d4: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2252D4u;
    SET_GPR_U32(ctx, 31, 0x2252DCu);
    ctx->pc = 0x2252D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2252D4u;
            // 0x2252d8: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2252DCu; }
        if (ctx->pc != 0x2252DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2252DCu; }
        if (ctx->pc != 0x2252DCu) { return; }
    }
    ctx->pc = 0x2252DCu;
label_2252dc:
    // 0x2252dc: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x2252dcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2252e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2252e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2252e4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2252e4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2252e8: 0x0  nop
    ctx->pc = 0x2252e8u;
    // NOP
    // 0x2252ec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2252ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2252f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2252f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2252f4: 0x4601b300  add.s       $f12, $f22, $f1
    ctx->pc = 0x2252f4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
    // 0x2252f8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2252f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2252fc: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x2252FCu;
    SET_GPR_U32(ctx, 31, 0x225304u);
    ctx->pc = 0x225300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2252FCu;
            // 0x225300: 0x4600c340  add.s       $f13, $f24, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225304u; }
        if (ctx->pc != 0x225304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225304u; }
        if (ctx->pc != 0x225304u) { return; }
    }
    ctx->pc = 0x225304u;
label_225304:
    // 0x225304: 0x4614a802  mul.s       $f0, $f21, $f20
    ctx->pc = 0x225304u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x225308: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x225308u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x22530c: 0x297102a  slt         $v0, $s4, $s7
    ctx->pc = 0x22530cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x225310: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x225310u;
    {
        const bool branch_taken_0x225310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225310u;
            // 0x225314: 0x4600b581  sub.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x225310) {
            ctx->pc = 0x22529Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22529c;
        }
    }
    ctx->pc = 0x225318u;
label_225318:
    // 0x225318: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x225318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x22531c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22531cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225320: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x225320u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x225324: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x225324u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x225328: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x225328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22532c: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x22532Cu;
    {
        const bool branch_taken_0x22532c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22532Cu;
            // 0x225330: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22532c) {
            ctx->pc = 0x22526Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22526c;
        }
    }
    ctx->pc = 0x225334u;
    // 0x225334: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x225334u;
    SET_GPR_U32(ctx, 31, 0x22533Cu);
    ctx->pc = 0x225338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225334u;
            // 0x225338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22533Cu; }
        if (ctx->pc != 0x22533Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22533Cu; }
        if (ctx->pc != 0x22533Cu) { return; }
    }
    ctx->pc = 0x22533Cu;
label_22533c:
    // 0x22533c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22533cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225340: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x225340u;
    SET_GPR_U32(ctx, 31, 0x225348u);
    ctx->pc = 0x225344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225340u;
            // 0x225344: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225348u; }
        if (ctx->pc != 0x225348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225348u; }
        if (ctx->pc != 0x225348u) { return; }
    }
    ctx->pc = 0x225348u;
label_225348:
    // 0x225348: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x225348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x22534c: 0x8f868780  lw          $a2, -0x7880($gp)
    ctx->pc = 0x22534cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x225350: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x225350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225358: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x225358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x22535c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x22535cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x225360: 0x27a2010c  addiu       $v0, $sp, 0x10C
    ctx->pc = 0x225360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x225364: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x225364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x225368: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x225368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22536c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x22536cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x225370: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x225370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x225374: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x225374u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x225378: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x225378u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x22537c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x22537cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x225380: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x225380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x225384: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x225384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x225388: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x225388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22538c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22538cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x225390: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x225390u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x225394: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x225394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x225398: 0xc04d360  jal         func_134D80
    ctx->pc = 0x225398u;
    SET_GPR_U32(ctx, 31, 0x2253A0u);
    ctx->pc = 0x22539Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225398u;
            // 0x22539c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D80u;
    if (runtime->hasFunction(0x134D80u)) {
        auto targetFn = runtime->lookupFunction(0x134D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2253A0u; }
        if (ctx->pc != 0x2253A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Direct__11mgCDrawPrimFUlUl_0x134d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2253A0u; }
        if (ctx->pc != 0x2253A0u) { return; }
    }
    ctx->pc = 0x2253A0u;
label_2253a0:
    // 0x2253a0: 0x0  nop
    ctx->pc = 0x2253a0u;
    // NOP
    // 0x2253a4: 0x0  nop
    ctx->pc = 0x2253a4u;
    // NOP
    // 0x2253a8: 0x4615b843  div.s       $f1, $f23, $f21
    ctx->pc = 0x2253a8u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[23], ctx->f[21]); }
    // 0x2253ac: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2253acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2253b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2253b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2253b4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2253B4u;
    SET_GPR_U32(ctx, 31, 0x2253BCu);
    ctx->pc = 0x2253B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2253B4u;
            // 0x2253b8: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2253BCu; }
        if (ctx->pc != 0x2253BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2253BCu; }
        if (ctx->pc != 0x2253BCu) { return; }
    }
    ctx->pc = 0x2253BCu;
label_2253bc:
    // 0x2253bc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2253bcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2253c0: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x2253c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2253c4: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x2253c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x2253c8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2253c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2253cc: 0x2442ce90  addiu       $v0, $v0, -0x3170
    ctx->pc = 0x2253ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954640));
    // 0x2253d0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2253d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2253d4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2253d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2253d8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2253d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2253dc: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x2253dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2253e0: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x2253e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x2253e4: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x2253e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x2253e8: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x2253e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x2253ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2253ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2253f0: 0x2442fff3  addiu       $v0, $v0, -0xD
    ctx->pc = 0x2253f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967283));
    // 0x2253f4: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x2253f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x2253f8: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x2253f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x2253fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2253fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225400: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x225400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x225404: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x225404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x225408: 0x27a2010c  addiu       $v0, $sp, 0x10C
    ctx->pc = 0x225408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x22540c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22540cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225410: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x225410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
label_225414:
    // 0x225414: 0x2dd1021  addu        $v0, $s6, $sp
    ctx->pc = 0x225414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
    // 0x225418: 0x1e082a  slt         $at, $zero, $fp
    ctx->pc = 0x225418u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x22541c: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x22541cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x225420: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x225420u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225424: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x225424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225428: 0xc78182d4  lwc1        $f1, -0x7D2C($gp)
    ctx->pc = 0x225428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22542c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x22542cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x225430: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x225430u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x225434: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x225434u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x225438: 0x468015a0  cvt.s.w     $f22, $f2
    ctx->pc = 0x225438u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x22543c: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x22543Cu;
    {
        const bool branch_taken_0x22543c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x225440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22543Cu;
            // 0x225440: 0x46000e00  add.s       $f24, $f1, $f0 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22543c) {
            ctx->pc = 0x22551Cu;
            goto label_22551c;
        }
    }
    ctx->pc = 0x225444u;
label_225444:
    // 0x225444: 0x0  nop
    ctx->pc = 0x225444u;
    // NOP
    // 0x225448: 0x8fb500f4  lw          $s5, 0xF4($sp)
    ctx->pc = 0x225448u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x22544c: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x22544cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x225450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225454: 0x2b2b821  addu        $s7, $s5, $s2
    ctx->pc = 0x225454u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x225458: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x225458u;
    SET_GPR_U32(ctx, 31, 0x225460u);
    ctx->pc = 0x22545Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225458u;
            // 0x22545c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225460u; }
        if (ctx->pc != 0x225460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225460u; }
        if (ctx->pc != 0x225460u) { return; }
    }
    ctx->pc = 0x225460u;
label_225460:
    // 0x225460: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x225460u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x225464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225468: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x225468u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x22546c: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x22546Cu;
    SET_GPR_U32(ctx, 31, 0x225474u);
    ctx->pc = 0x225470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22546Cu;
            // 0x225470: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225474u; }
        if (ctx->pc != 0x225474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225474u; }
        if (ctx->pc != 0x225474u) { return; }
    }
    ctx->pc = 0x225474u;
label_225474:
    // 0x225474: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x225474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x225478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22547c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x22547Cu;
    SET_GPR_U32(ctx, 31, 0x225484u);
    ctx->pc = 0x225480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22547Cu;
            // 0x225480: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225484u; }
        if (ctx->pc != 0x225484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225484u; }
        if (ctx->pc != 0x225484u) { return; }
    }
    ctx->pc = 0x225484u;
label_225484:
    // 0x225484: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x225484u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22548c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x22548cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x225490: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x225490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x225494: 0x4600b5c0  add.s       $f23, $f22, $f0
    ctx->pc = 0x225494u;
    ctx->f[23] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x225498: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x225498u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x22549c: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x22549Cu;
    SET_GPR_U32(ctx, 31, 0x2254A4u);
    ctx->pc = 0x2254A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22549Cu;
            // 0x2254a0: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2254A4u; }
        if (ctx->pc != 0x2254A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2254A4u; }
        if (ctx->pc != 0x2254A4u) { return; }
    }
    ctx->pc = 0x2254A4u;
label_2254a4:
    // 0x2254a4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2254a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2254a8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2254a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2254ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2254acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2254b0: 0x51a821  addu        $s5, $v0, $s1
    ctx->pc = 0x2254b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2254b4: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2254B4u;
    SET_GPR_U32(ctx, 31, 0x2254BCu);
    ctx->pc = 0x2254B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2254B4u;
            // 0x2254b8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2254BCu; }
        if (ctx->pc != 0x2254BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2254BCu; }
        if (ctx->pc != 0x2254BCu) { return; }
    }
    ctx->pc = 0x2254BCu;
label_2254bc:
    // 0x2254bc: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2254bcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2254c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2254c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2254c4: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x2254c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x2254c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2254c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2254cc: 0x4600c5c0  add.s       $f23, $f24, $f0
    ctx->pc = 0x2254ccu;
    ctx->f[23] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
    // 0x2254d0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2254d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2254d4: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x2254D4u;
    SET_GPR_U32(ctx, 31, 0x2254DCu);
    ctx->pc = 0x2254D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2254D4u;
            // 0x2254d8: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2254DCu; }
        if (ctx->pc != 0x2254DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2254DCu; }
        if (ctx->pc != 0x2254DCu) { return; }
    }
    ctx->pc = 0x2254DCu;
label_2254dc:
    // 0x2254dc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2254dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2254e0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2254e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2254e4: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2254E4u;
    SET_GPR_U32(ctx, 31, 0x2254ECu);
    ctx->pc = 0x2254E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2254E4u;
            // 0x2254e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2254ECu; }
        if (ctx->pc != 0x2254ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2254ECu; }
        if (ctx->pc != 0x2254ECu) { return; }
    }
    ctx->pc = 0x2254ECu;
label_2254ec:
    // 0x2254ec: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2254ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2254f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2254f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2254f4: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x2254f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x2254f8: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x2254F8u;
    SET_GPR_U32(ctx, 31, 0x225500u);
    ctx->pc = 0x2254FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2254F8u;
            // 0x2254fc: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225500u; }
        if (ctx->pc != 0x225500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225500u; }
        if (ctx->pc != 0x225500u) { return; }
    }
    ctx->pc = 0x225500u;
label_225500:
    // 0x225500: 0xc04d198  jal         func_134660
    ctx->pc = 0x225500u;
    SET_GPR_U32(ctx, 31, 0x225508u);
    ctx->pc = 0x225504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225500u;
            // 0x225504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134660u;
    if (runtime->hasFunction(0x134660u)) {
        auto targetFn = runtime->lookupFunction(0x134660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225508u; }
        if (ctx->pc != 0x225508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Flush__11mgCDrawPrimFv_0x134660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225508u; }
        if (ctx->pc != 0x225508u) { return; }
    }
    ctx->pc = 0x225508u;
label_225508:
    // 0x225508: 0x4614a802  mul.s       $f0, $f21, $f20
    ctx->pc = 0x225508u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x22550c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x22550cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x225510: 0x27e102a  slt         $v0, $s3, $fp
    ctx->pc = 0x225510u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x225514: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x225514u;
    {
        const bool branch_taken_0x225514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225514u;
            // 0x225518: 0x4600c600  add.s       $f24, $f24, $f0 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x225514) {
            ctx->pc = 0x225444u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_225444;
        }
    }
    ctx->pc = 0x22551Cu;
label_22551c:
    // 0x22551c: 0x0  nop
    ctx->pc = 0x22551cu;
    // NOP
    // 0x225520: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x225520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x225524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x225524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225528: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x225528u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x22552c: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x22552cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x225530: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x225530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x225534: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x225534u;
    {
        const bool branch_taken_0x225534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225534u;
            // 0x225538: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x225534) {
            ctx->pc = 0x225414u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_225414;
        }
    }
    ctx->pc = 0x22553Cu;
    // 0x22553c: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x22553cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x225540: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225544: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x225544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x225548: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x225548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x22554c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22554cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x225550: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x225550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x225554: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x225554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x225558: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x225558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22555c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x22555cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x225560: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x225560u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x225564: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x225564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x225568: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x225568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22556c: 0xc04d360  jal         func_134D80
    ctx->pc = 0x22556Cu;
    SET_GPR_U32(ctx, 31, 0x225574u);
    ctx->pc = 0x225570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22556Cu;
            // 0x225570: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D80u;
    if (runtime->hasFunction(0x134D80u)) {
        auto targetFn = runtime->lookupFunction(0x134D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225574u; }
        if (ctx->pc != 0x225574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Direct__11mgCDrawPrimFUlUl_0x134d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225574u; }
        if (ctx->pc != 0x225574u) { return; }
    }
    ctx->pc = 0x225574u;
label_225574:
    // 0x225574: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x225574u;
    SET_GPR_U32(ctx, 31, 0x22557Cu);
    ctx->pc = 0x225578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225574u;
            // 0x225578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22557Cu; }
        if (ctx->pc != 0x22557Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22557Cu; }
        if (ctx->pc != 0x22557Cu) { return; }
    }
    ctx->pc = 0x22557Cu;
label_22557c:
    // 0x22557c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x22557cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x225580: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x225580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x225584: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x225584u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x225588: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x225588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x22558c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x22558cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x225590: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x225590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x225594: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x225594u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x225598: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x225598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22559c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x22559cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2255a0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2255a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2255a4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2255a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2255a8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2255a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2255ac: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2255acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2255b0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2255b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2255b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2255b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2255b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2255B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2255BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2255B8u;
            // 0x2255bc: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2255C0u;
}
