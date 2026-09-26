#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEffect__10CWaveTableFv
// Address: 0x1a2610 - 0x1a275c
void GetEffect__10CWaveTableFv_0x1a2610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEffect__10CWaveTableFv_0x1a2610");
#endif

    switch (ctx->pc) {
        case 0x1a264cu: goto label_1a264c;
        case 0x1a2654u: goto label_1a2654;
        case 0x1a2670u: goto label_1a2670;
        case 0x1a268cu: goto label_1a268c;
        case 0x1a2730u: goto label_1a2730;
        default: break;
    }

    ctx->pc = 0x1a2610u;

    // 0x1a2610: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a2610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a2614: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a2614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a2618: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a2618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a261c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a261cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a2620: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a2620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a2624: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a2624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a2628: 0x83828b94  lb          $v0, -0x746C($gp)
    ctx->pc = 0x1a2628u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937492)));
    // 0x1a262c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A262Cu;
    {
        const bool branch_taken_0x1a262c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A262Cu;
            // 0x1a2630: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a262c) {
            ctx->pc = 0x1A2640u;
            goto label_1a2640;
        }
    }
    ctx->pc = 0x1A2634u;
    // 0x1a2634: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2638: 0xaf808b90  sw          $zero, -0x7470($gp)
    ctx->pc = 0x1a2638u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937488), GPR_U32(ctx, 0));
    // 0x1a263c: 0xa3828b94  sb          $v0, -0x746C($gp)
    ctx->pc = 0x1a263cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937492), (uint8_t)GPR_U32(ctx, 2));
label_1a2640:
    // 0x1a2640: 0x8f828b90  lw          $v0, -0x7470($gp)
    ctx->pc = 0x1a2640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937488)));
    // 0x1a2644: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1A2644u;
    {
        const bool branch_taken_0x1a2644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2644u;
            // 0x1a2648: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2644) {
            ctx->pc = 0x1A2704u;
            goto label_1a2704;
        }
    }
    ctx->pc = 0x1A264Cu;
label_1a264c:
    // 0x1a264c: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1A264Cu;
    SET_GPR_U32(ctx, 31, 0x1A2654u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2654u; }
        if (ctx->pc != 0x1A2654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2654u; }
        if (ctx->pc != 0x1A2654u) { return; }
    }
    ctx->pc = 0x1A2654u;
label_1a2654:
    // 0x1a2654: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x1a2654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1a2658: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1a2658u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a265c: 0x0  nop
    ctx->pc = 0x1a265cu;
    // NOP
    // 0x1a2660: 0x0  nop
    ctx->pc = 0x1a2660u;
    // NOP
    // 0x1a2664: 0x1010  mfhi        $v0
    ctx->pc = 0x1a2664u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a2668: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1A2668u;
    SET_GPR_U32(ctx, 31, 0x1A2670u);
    ctx->pc = 0x1A266Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2668u;
            // 0x1a266c: 0x24530001  addiu       $s3, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2670u; }
        if (ctx->pc != 0x1A2670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2670u; }
        if (ctx->pc != 0x1A2670u) { return; }
    }
    ctx->pc = 0x1A2670u;
label_1a2670:
    // 0x1a2670: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x1a2670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1a2674: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1a2674u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a2678: 0x0  nop
    ctx->pc = 0x1a2678u;
    // NOP
    // 0x1a267c: 0x0  nop
    ctx->pc = 0x1a267cu;
    // NOP
    // 0x1a2680: 0x1010  mfhi        $v0
    ctx->pc = 0x1a2680u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a2684: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1A2684u;
    SET_GPR_U32(ctx, 31, 0x1A268Cu);
    ctx->pc = 0x1A2688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2684u;
            // 0x1a2688: 0x24510001  addiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A268Cu; }
        if (ctx->pc != 0x1A268Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A268Cu; }
        if (ctx->pc != 0x1A268Cu) { return; }
    }
    ctx->pc = 0x1A268Cu;
label_1a268c:
    // 0x1a268c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a268cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2690: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x1a2690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
    // 0x1a2694: 0x3c084f00  lui         $t0, 0x4F00
    ctx->pc = 0x1a2694u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20224 << 16));
    // 0x1a2698: 0x8e461200  lw          $a2, 0x1200($s2)
    ctx->pc = 0x1a2698u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4608)));
    // 0x1a269c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1a269cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a26a0: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x1a26a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x1a26a4: 0x3447d70a  ori         $a3, $v0, 0xD70A
    ctx->pc = 0x1a26a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1a26a8: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1a26a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1a26ac: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1a26acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1a26b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a26b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a26b4: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1a26b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a26b8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1a26b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1a26bc: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1a26bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a26c0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1a26c0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a26c4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1a26c4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a26c8: 0x0  nop
    ctx->pc = 0x1a26c8u;
    // NOP
    // 0x1a26cc: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x1a26ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1a26d0: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1a26d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1a26d4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1a26d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1a26d8: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1a26d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x1a26dc: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x1a26dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1a26e0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1a26e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a26e4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a26e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a26e8: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1a26e8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1a26ec: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1a26ecu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a26f0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1a26f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a26f4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1a26f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1a26f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a26f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a26fc: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1A26FCu;
    {
        const bool branch_taken_0x1a26fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A26FCu;
            // 0x1a2700: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a26fc) {
            ctx->pc = 0x1A264Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a264c;
        }
    }
    ctx->pc = 0x1A2704u;
label_1a2704:
    // 0x1a2704: 0x0  nop
    ctx->pc = 0x1a2704u;
    // NOP
    // 0x1a2708: 0x8f828b90  lw          $v0, -0x7470($gp)
    ctx->pc = 0x1a2708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937488)));
    // 0x1a270c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a270cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a2710: 0xaf828b90  sw          $v0, -0x7470($gp)
    ctx->pc = 0x1a2710u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937488), GPR_U32(ctx, 2));
    // 0x1a2714: 0x8f828b90  lw          $v0, -0x7470($gp)
    ctx->pc = 0x1a2714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937488)));
    // 0x1a2718: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x1a2718u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1a271c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A271Cu;
    {
        const bool branch_taken_0x1a271c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A271Cu;
            // 0x1a2720: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a271c) {
            ctx->pc = 0x1A2728u;
            goto label_1a2728;
        }
    }
    ctx->pc = 0x1A2724u;
    // 0x1a2724: 0xaf808b90  sw          $zero, -0x7470($gp)
    ctx->pc = 0x1a2724u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937488), GPR_U32(ctx, 0));
label_1a2728:
    // 0x1a2728: 0xc0689d8  jal         func_1A2760
    ctx->pc = 0x1A2728u;
    SET_GPR_U32(ctx, 31, 0x1A2730u);
    ctx->pc = 0x1A2760u;
    if (runtime->hasFunction(0x1A2760u)) {
        auto targetFn = runtime->lookupFunction(0x1A2760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2730u; }
        if (ctx->pc != 0x1A2730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Effect__10CWaveTableFv_0x1a2760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2730u; }
        if (ctx->pc != 0x1A2730u) { return; }
    }
    ctx->pc = 0x1A2730u;
label_1a2730:
    // 0x1a2730: 0x8e441200  lw          $a0, 0x1200($s2)
    ctx->pc = 0x1a2730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4608)));
    // 0x1a2734: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2738: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1a2738u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a273c: 0xae431200  sw          $v1, 0x1200($s2)
    ctx->pc = 0x1a273cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4608), GPR_U32(ctx, 3));
    // 0x1a2740: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a2740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a2744: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a2744u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a2748: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a2748u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a274c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a274cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2750: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a2750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2754: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2754u;
            // 0x1a2758: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A275Cu;
}
