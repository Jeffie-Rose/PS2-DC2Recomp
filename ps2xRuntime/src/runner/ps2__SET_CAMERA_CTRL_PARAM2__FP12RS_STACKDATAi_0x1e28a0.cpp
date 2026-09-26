#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_CAMERA_CTRL_PARAM2__FP12RS_STACKDATAi
// Address: 0x1e28a0 - 0x1e2b48
void ps2__SET_CAMERA_CTRL_PARAM2__FP12RS_STACKDATAi_0x1e28a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_CAMERA_CTRL_PARAM2__FP12RS_STACKDATAi_0x1e28a0");
#endif

    switch (ctx->pc) {
        case 0x1e28e8u: goto label_1e28e8;
        case 0x1e28f0u: goto label_1e28f0;
        case 0x1e2904u: goto label_1e2904;
        case 0x1e2928u: goto label_1e2928;
        case 0x1e2934u: goto label_1e2934;
        case 0x1e2960u: goto label_1e2960;
        case 0x1e2984u: goto label_1e2984;
        case 0x1e2990u: goto label_1e2990;
        case 0x1e29c0u: goto label_1e29c0;
        case 0x1e29e4u: goto label_1e29e4;
        case 0x1e29f0u: goto label_1e29f0;
        case 0x1e2a20u: goto label_1e2a20;
        case 0x1e2a44u: goto label_1e2a44;
        case 0x1e2a50u: goto label_1e2a50;
        case 0x1e2a80u: goto label_1e2a80;
        case 0x1e2aa4u: goto label_1e2aa4;
        case 0x1e2ab0u: goto label_1e2ab0;
        case 0x1e2adcu: goto label_1e2adc;
        case 0x1e2b00u: goto label_1e2b00;
        case 0x1e2b0cu: goto label_1e2b0c;
        default: break;
    }

    ctx->pc = 0x1e28a0u;

    // 0x1e28a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e28a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e28a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e28a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1e28a8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e28a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1e28ac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e28acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e28b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e28b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e28b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e28b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e28b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e28b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e28bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e28bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e28c0: 0x1a200006  blez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E28C0u;
    {
        const bool branch_taken_0x1e28c0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1E28C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E28C0u;
            // 0x1e28c4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e28c0) {
            ctx->pc = 0x1E28DCu;
            goto label_1e28dc;
        }
    }
    ctx->pc = 0x1E28C8u;
    // 0x1e28c8: 0x2a210007  slti        $at, $s1, 0x7
    ctx->pc = 0x1e28c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1e28cc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E28CCu;
    {
        const bool branch_taken_0x1e28cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E28D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E28CCu;
            // 0x1e28d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e28cc) {
            ctx->pc = 0x1E28DCu;
            goto label_1e28dc;
        }
    }
    ctx->pc = 0x1E28D4u;
    // 0x1e28d4: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x1E28D4u;
    {
        const bool branch_taken_0x1e28d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E28D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E28D4u;
            // 0x1e28d8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e28d4) {
            ctx->pc = 0x1E2B2Cu;
            goto label_1e2b2c;
        }
    }
    ctx->pc = 0x1E28DCu;
label_1e28dc:
    // 0x1e28dc: 0x8f848e6c  lw          $a0, -0x7194($gp)
    ctx->pc = 0x1e28dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
    // 0x1e28e0: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x1E28E0u;
    SET_GPR_U32(ctx, 31, 0x1E28E8u);
    ctx->pc = 0x1E28E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E28E0u;
            // 0x1e28e4: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E28E8u; }
        if (ctx->pc != 0x1E28E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E28E8u; }
        if (ctx->pc != 0x1E28E8u) { return; }
    }
    ctx->pc = 0x1E28E8u;
label_1e28e8:
    // 0x1e28e8: 0xc0bafe8  jal         func_2EBFA0
    ctx->pc = 0x1E28E8u;
    SET_GPR_U32(ctx, 31, 0x1E28F0u);
    ctx->pc = 0x1E28ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E28E8u;
            // 0x1e28ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFA0u;
    if (runtime->hasFunction(0x2EBFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E28F0u; }
        if (ctx->pc != 0x1E28F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveParam__14CCameraControlFv_0x2ebfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E28F0u; }
        if (ctx->pc != 0x1E28F0u) { return; }
    }
    ctx->pc = 0x1E28F0u;
label_1e28f0:
    // 0x1e28f0: 0x1a200005  blez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E28F0u;
    {
        const bool branch_taken_0x1e28f0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1E28F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E28F0u;
            // 0x1e28f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e28f0) {
            ctx->pc = 0x1E2908u;
            goto label_1e2908;
        }
    }
    ctx->pc = 0x1E28F8u;
    // 0x1e28f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e28f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e28fc: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E28FCu;
    SET_GPR_U32(ctx, 31, 0x1E2904u);
    ctx->pc = 0x1E2900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E28FCu;
            // 0x1e2900: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2904u; }
        if (ctx->pc != 0x1E2904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2904u; }
        if (ctx->pc != 0x1E2904u) { return; }
    }
    ctx->pc = 0x1E2904u;
label_1e2904:
    // 0x1e2904: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e2904u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1e2908:
    // 0x1e2908: 0x3c03c0f8  lui         $v1, 0xC0F8
    ctx->pc = 0x1e2908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49400 << 16));
    // 0x1e290c: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x1e290cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x1e2910: 0x346369fe  ori         $v1, $v1, 0x69FE
    ctx->pc = 0x1e2910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)27134);
    // 0x1e2914: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1e2914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1e2918: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1e2918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e291c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e291cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e2920: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x1E2920u;
    SET_GPR_U32(ctx, 31, 0x1E2928u);
    ctx->pc = 0x1E2924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2920u;
            // 0x1e2924: 0x439825  or          $s3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2928u; }
        if (ctx->pc != 0x1E2928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2928u; }
        if (ctx->pc != 0x1E2928u) { return; }
    }
    ctx->pc = 0x1E2928u;
label_1e2928:
    // 0x1e2928: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e2928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e292c: 0xc040034  jal         func_1000D0
    ctx->pc = 0x1E292Cu;
    SET_GPR_U32(ctx, 31, 0x1E2934u);
    ctx->pc = 0x1E2930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E292Cu;
            // 0x1e2930: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1000D0u;
    if (runtime->hasFunction(0x1000D0u)) {
        auto targetFn = runtime->lookupFunction(0x1000D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2934u; }
        if (ctx->pc != 0x1E2934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfne_0x1000d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2934u; }
        if (ctx->pc != 0x1E2934u) { return; }
    }
    ctx->pc = 0x1E2934u;
label_1e2934:
    // 0x1e2934: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E2934u;
    {
        const bool branch_taken_0x1e2934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2934u;
            // 0x1e2938: 0x2a210002  slti        $at, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2934) {
            ctx->pc = 0x1E294Cu;
            goto label_1e294c;
        }
    }
    ctx->pc = 0x1E293Cu;
    // 0x1e293c: 0x1a200002  blez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E293Cu;
    {
        const bool branch_taken_0x1e293c = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x1e293c) {
            ctx->pc = 0x1E2948u;
            goto label_1e2948;
        }
    }
    ctx->pc = 0x1E2944u;
    // 0x1e2944: 0xe6140010  swc1        $f20, 0x10($s0)
    ctx->pc = 0x1e2944u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_1e2948:
    // 0x1e2948: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x1e2948u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e294c:
    // 0x1e294c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E294Cu;
    {
        const bool branch_taken_0x1e294c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E294Cu;
            // 0x1e2950: 0x3c03c0f8  lui         $v1, 0xC0F8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49400 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e294c) {
            ctx->pc = 0x1E2968u;
            goto label_1e2968;
        }
    }
    ctx->pc = 0x1E2954u;
    // 0x1e2954: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e2954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2958: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E2958u;
    SET_GPR_U32(ctx, 31, 0x1E2960u);
    ctx->pc = 0x1E295Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2958u;
            // 0x1e295c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2960u; }
        if (ctx->pc != 0x1E2960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2960u; }
        if (ctx->pc != 0x1E2960u) { return; }
    }
    ctx->pc = 0x1E2960u;
label_1e2960:
    // 0x1e2960: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e2960u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1e2964: 0x3c03c0f8  lui         $v1, 0xC0F8
    ctx->pc = 0x1e2964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49400 << 16));
label_1e2968:
    // 0x1e2968: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x1e2968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x1e296c: 0x346369fe  ori         $v1, $v1, 0x69FE
    ctx->pc = 0x1e296cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)27134);
    // 0x1e2970: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1e2970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1e2974: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1e2974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e2978: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e2978u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e297c: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x1E297Cu;
    SET_GPR_U32(ctx, 31, 0x1E2984u);
    ctx->pc = 0x1E2980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E297Cu;
            // 0x1e2980: 0x439825  or          $s3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2984u; }
        if (ctx->pc != 0x1E2984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2984u; }
        if (ctx->pc != 0x1E2984u) { return; }
    }
    ctx->pc = 0x1E2984u;
label_1e2984:
    // 0x1e2984: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e2984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2988: 0xc040034  jal         func_1000D0
    ctx->pc = 0x1E2988u;
    SET_GPR_U32(ctx, 31, 0x1E2990u);
    ctx->pc = 0x1E298Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2988u;
            // 0x1e298c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1000D0u;
    if (runtime->hasFunction(0x1000D0u)) {
        auto targetFn = runtime->lookupFunction(0x1000D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2990u; }
        if (ctx->pc != 0x1E2990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfne_0x1000d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2990u; }
        if (ctx->pc != 0x1E2990u) { return; }
    }
    ctx->pc = 0x1E2990u;
label_1e2990:
    // 0x1e2990: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E2990u;
    {
        const bool branch_taken_0x1e2990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2990u;
            // 0x1e2994: 0x2a210003  slti        $at, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2990) {
            ctx->pc = 0x1E29ACu;
            goto label_1e29ac;
        }
    }
    ctx->pc = 0x1E2998u;
    // 0x1e2998: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x1e2998u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1e299c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E299Cu;
    {
        const bool branch_taken_0x1e299c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e299c) {
            ctx->pc = 0x1E29A8u;
            goto label_1e29a8;
        }
    }
    ctx->pc = 0x1E29A4u;
    // 0x1e29a4: 0xe6140014  swc1        $f20, 0x14($s0)
    ctx->pc = 0x1e29a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_1e29a8:
    // 0x1e29a8: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x1e29a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_1e29ac:
    // 0x1e29ac: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E29ACu;
    {
        const bool branch_taken_0x1e29ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E29B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E29ACu;
            // 0x1e29b0: 0x3c03c0f8  lui         $v1, 0xC0F8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49400 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e29ac) {
            ctx->pc = 0x1E29C8u;
            goto label_1e29c8;
        }
    }
    ctx->pc = 0x1E29B4u;
    // 0x1e29b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e29b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e29b8: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E29B8u;
    SET_GPR_U32(ctx, 31, 0x1E29C0u);
    ctx->pc = 0x1E29BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E29B8u;
            // 0x1e29bc: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E29C0u; }
        if (ctx->pc != 0x1E29C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E29C0u; }
        if (ctx->pc != 0x1E29C0u) { return; }
    }
    ctx->pc = 0x1E29C0u;
label_1e29c0:
    // 0x1e29c0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e29c0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1e29c4: 0x3c03c0f8  lui         $v1, 0xC0F8
    ctx->pc = 0x1e29c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49400 << 16));
label_1e29c8:
    // 0x1e29c8: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x1e29c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x1e29cc: 0x346369fe  ori         $v1, $v1, 0x69FE
    ctx->pc = 0x1e29ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)27134);
    // 0x1e29d0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1e29d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1e29d4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1e29d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e29d8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e29d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e29dc: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x1E29DCu;
    SET_GPR_U32(ctx, 31, 0x1E29E4u);
    ctx->pc = 0x1E29E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E29DCu;
            // 0x1e29e0: 0x439825  or          $s3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E29E4u; }
        if (ctx->pc != 0x1E29E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E29E4u; }
        if (ctx->pc != 0x1E29E4u) { return; }
    }
    ctx->pc = 0x1E29E4u;
label_1e29e4:
    // 0x1e29e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e29e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e29e8: 0xc040034  jal         func_1000D0
    ctx->pc = 0x1E29E8u;
    SET_GPR_U32(ctx, 31, 0x1E29F0u);
    ctx->pc = 0x1E29ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E29E8u;
            // 0x1e29ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1000D0u;
    if (runtime->hasFunction(0x1000D0u)) {
        auto targetFn = runtime->lookupFunction(0x1000D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E29F0u; }
        if (ctx->pc != 0x1E29F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfne_0x1000d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E29F0u; }
        if (ctx->pc != 0x1E29F0u) { return; }
    }
    ctx->pc = 0x1E29F0u;
label_1e29f0:
    // 0x1e29f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E29F0u;
    {
        const bool branch_taken_0x1e29f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E29F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E29F0u;
            // 0x1e29f4: 0x2a210004  slti        $at, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e29f0) {
            ctx->pc = 0x1E2A0Cu;
            goto label_1e2a0c;
        }
    }
    ctx->pc = 0x1E29F8u;
    // 0x1e29f8: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x1e29f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1e29fc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E29FCu;
    {
        const bool branch_taken_0x1e29fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e29fc) {
            ctx->pc = 0x1E2A08u;
            goto label_1e2a08;
        }
    }
    ctx->pc = 0x1E2A04u;
    // 0x1e2a04: 0xe6140018  swc1        $f20, 0x18($s0)
    ctx->pc = 0x1e2a04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_1e2a08:
    // 0x1e2a08: 0x2a210004  slti        $at, $s1, 0x4
    ctx->pc = 0x1e2a08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_1e2a0c:
    // 0x1e2a0c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E2A0Cu;
    {
        const bool branch_taken_0x1e2a0c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2A0Cu;
            // 0x1e2a10: 0x3c03c0f8  lui         $v1, 0xC0F8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49400 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2a0c) {
            ctx->pc = 0x1E2A28u;
            goto label_1e2a28;
        }
    }
    ctx->pc = 0x1E2A14u;
    // 0x1e2a14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e2a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2a18: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E2A18u;
    SET_GPR_U32(ctx, 31, 0x1E2A20u);
    ctx->pc = 0x1E2A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2A18u;
            // 0x1e2a1c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2A20u; }
        if (ctx->pc != 0x1E2A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2A20u; }
        if (ctx->pc != 0x1E2A20u) { return; }
    }
    ctx->pc = 0x1E2A20u;
label_1e2a20:
    // 0x1e2a20: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e2a20u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1e2a24: 0x3c03c0f8  lui         $v1, 0xC0F8
    ctx->pc = 0x1e2a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49400 << 16));
label_1e2a28:
    // 0x1e2a28: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x1e2a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x1e2a2c: 0x346369fe  ori         $v1, $v1, 0x69FE
    ctx->pc = 0x1e2a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)27134);
    // 0x1e2a30: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1e2a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1e2a34: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1e2a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e2a38: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e2a38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e2a3c: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x1E2A3Cu;
    SET_GPR_U32(ctx, 31, 0x1E2A44u);
    ctx->pc = 0x1E2A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2A3Cu;
            // 0x1e2a40: 0x439825  or          $s3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2A44u; }
        if (ctx->pc != 0x1E2A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2A44u; }
        if (ctx->pc != 0x1E2A44u) { return; }
    }
    ctx->pc = 0x1E2A44u;
label_1e2a44:
    // 0x1e2a44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e2a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2a48: 0xc040034  jal         func_1000D0
    ctx->pc = 0x1E2A48u;
    SET_GPR_U32(ctx, 31, 0x1E2A50u);
    ctx->pc = 0x1E2A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2A48u;
            // 0x1e2a4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1000D0u;
    if (runtime->hasFunction(0x1000D0u)) {
        auto targetFn = runtime->lookupFunction(0x1000D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2A50u; }
        if (ctx->pc != 0x1E2A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfne_0x1000d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2A50u; }
        if (ctx->pc != 0x1E2A50u) { return; }
    }
    ctx->pc = 0x1E2A50u;
label_1e2a50:
    // 0x1e2a50: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E2A50u;
    {
        const bool branch_taken_0x1e2a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2A50u;
            // 0x1e2a54: 0x2a210005  slti        $at, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2a50) {
            ctx->pc = 0x1E2A6Cu;
            goto label_1e2a6c;
        }
    }
    ctx->pc = 0x1E2A58u;
    // 0x1e2a58: 0x2a210004  slti        $at, $s1, 0x4
    ctx->pc = 0x1e2a58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1e2a5c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2A5Cu;
    {
        const bool branch_taken_0x1e2a5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2a5c) {
            ctx->pc = 0x1E2A68u;
            goto label_1e2a68;
        }
    }
    ctx->pc = 0x1E2A64u;
    // 0x1e2a64: 0xe614001c  swc1        $f20, 0x1C($s0)
    ctx->pc = 0x1e2a64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_1e2a68:
    // 0x1e2a68: 0x2a210005  slti        $at, $s1, 0x5
    ctx->pc = 0x1e2a68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
label_1e2a6c:
    // 0x1e2a6c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E2A6Cu;
    {
        const bool branch_taken_0x1e2a6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2A6Cu;
            // 0x1e2a70: 0x3c03c0f8  lui         $v1, 0xC0F8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49400 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2a6c) {
            ctx->pc = 0x1E2A88u;
            goto label_1e2a88;
        }
    }
    ctx->pc = 0x1E2A74u;
    // 0x1e2a74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e2a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2a78: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E2A78u;
    SET_GPR_U32(ctx, 31, 0x1E2A80u);
    ctx->pc = 0x1E2A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2A78u;
            // 0x1e2a7c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2A80u; }
        if (ctx->pc != 0x1E2A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2A80u; }
        if (ctx->pc != 0x1E2A80u) { return; }
    }
    ctx->pc = 0x1E2A80u;
label_1e2a80:
    // 0x1e2a80: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e2a80u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1e2a84: 0x3c03c0f8  lui         $v1, 0xC0F8
    ctx->pc = 0x1e2a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49400 << 16));
label_1e2a88:
    // 0x1e2a88: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x1e2a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x1e2a8c: 0x346369fe  ori         $v1, $v1, 0x69FE
    ctx->pc = 0x1e2a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)27134);
    // 0x1e2a90: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1e2a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1e2a94: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1e2a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e2a98: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e2a98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e2a9c: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x1E2A9Cu;
    SET_GPR_U32(ctx, 31, 0x1E2AA4u);
    ctx->pc = 0x1E2AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2A9Cu;
            // 0x1e2aa0: 0x439825  or          $s3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2AA4u; }
        if (ctx->pc != 0x1E2AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2AA4u; }
        if (ctx->pc != 0x1E2AA4u) { return; }
    }
    ctx->pc = 0x1E2AA4u;
label_1e2aa4:
    // 0x1e2aa4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e2aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2aa8: 0xc040034  jal         func_1000D0
    ctx->pc = 0x1E2AA8u;
    SET_GPR_U32(ctx, 31, 0x1E2AB0u);
    ctx->pc = 0x1E2AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2AA8u;
            // 0x1e2aac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1000D0u;
    if (runtime->hasFunction(0x1000D0u)) {
        auto targetFn = runtime->lookupFunction(0x1000D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2AB0u; }
        if (ctx->pc != 0x1E2AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfne_0x1000d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2AB0u; }
        if (ctx->pc != 0x1E2AB0u) { return; }
    }
    ctx->pc = 0x1E2AB0u;
label_1e2ab0:
    // 0x1e2ab0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E2AB0u;
    {
        const bool branch_taken_0x1e2ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2AB0u;
            // 0x1e2ab4: 0x2a210006  slti        $at, $s1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2ab0) {
            ctx->pc = 0x1E2ACCu;
            goto label_1e2acc;
        }
    }
    ctx->pc = 0x1E2AB8u;
    // 0x1e2ab8: 0x2a210005  slti        $at, $s1, 0x5
    ctx->pc = 0x1e2ab8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1e2abc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2ABCu;
    {
        const bool branch_taken_0x1e2abc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2abc) {
            ctx->pc = 0x1E2AC8u;
            goto label_1e2ac8;
        }
    }
    ctx->pc = 0x1E2AC4u;
    // 0x1e2ac4: 0xe6140020  swc1        $f20, 0x20($s0)
    ctx->pc = 0x1e2ac4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_1e2ac8:
    // 0x1e2ac8: 0x2a210006  slti        $at, $s1, 0x6
    ctx->pc = 0x1e2ac8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_1e2acc:
    // 0x1e2acc: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E2ACCu;
    {
        const bool branch_taken_0x1e2acc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2ACCu;
            // 0x1e2ad0: 0x3c03c0f8  lui         $v1, 0xC0F8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49400 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2acc) {
            ctx->pc = 0x1E2AE4u;
            goto label_1e2ae4;
        }
    }
    ctx->pc = 0x1E2AD4u;
    // 0x1e2ad4: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E2AD4u;
    SET_GPR_U32(ctx, 31, 0x1E2ADCu);
    ctx->pc = 0x1E2AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2AD4u;
            // 0x1e2ad8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2ADCu; }
        if (ctx->pc != 0x1E2ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2ADCu; }
        if (ctx->pc != 0x1E2ADCu) { return; }
    }
    ctx->pc = 0x1E2ADCu;
label_1e2adc:
    // 0x1e2adc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e2adcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1e2ae0: 0x3c03c0f8  lui         $v1, 0xC0F8
    ctx->pc = 0x1e2ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49400 << 16));
label_1e2ae4:
    // 0x1e2ae4: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x1e2ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x1e2ae8: 0x346369fe  ori         $v1, $v1, 0x69FE
    ctx->pc = 0x1e2ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)27134);
    // 0x1e2aec: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1e2aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1e2af0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1e2af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e2af4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e2af4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e2af8: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x1E2AF8u;
    SET_GPR_U32(ctx, 31, 0x1E2B00u);
    ctx->pc = 0x1E2AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2AF8u;
            // 0x1e2afc: 0x439025  or          $s2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2B00u; }
        if (ctx->pc != 0x1E2B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2B00u; }
        if (ctx->pc != 0x1E2B00u) { return; }
    }
    ctx->pc = 0x1E2B00u;
label_1e2b00:
    // 0x1e2b00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e2b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2b04: 0xc040034  jal         func_1000D0
    ctx->pc = 0x1E2B04u;
    SET_GPR_U32(ctx, 31, 0x1E2B0Cu);
    ctx->pc = 0x1E2B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2B04u;
            // 0x1e2b08: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1000D0u;
    if (runtime->hasFunction(0x1000D0u)) {
        auto targetFn = runtime->lookupFunction(0x1000D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2B0Cu; }
        if (ctx->pc != 0x1E2B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfne_0x1000d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2B0Cu; }
        if (ctx->pc != 0x1E2B0Cu) { return; }
    }
    ctx->pc = 0x1E2B0Cu;
label_1e2b0c:
    // 0x1e2b0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E2B0Cu;
    {
        const bool branch_taken_0x1e2b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2B0Cu;
            // 0x1e2b10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2b0c) {
            ctx->pc = 0x1E2B28u;
            goto label_1e2b28;
        }
    }
    ctx->pc = 0x1E2B14u;
    // 0x1e2b14: 0x2a210006  slti        $at, $s1, 0x6
    ctx->pc = 0x1e2b14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1e2b18: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2B18u;
    {
        const bool branch_taken_0x1e2b18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2b18) {
            ctx->pc = 0x1E2B24u;
            goto label_1e2b24;
        }
    }
    ctx->pc = 0x1E2B20u;
    // 0x1e2b20: 0xe6140024  swc1        $f20, 0x24($s0)
    ctx->pc = 0x1e2b20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_1e2b24:
    // 0x1e2b24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e2b28:
    // 0x1e2b28: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e2b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1e2b2c:
    // 0x1e2b2c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e2b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e2b30: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e2b30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e2b34: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e2b34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e2b38: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e2b38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2b3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e2b3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2b40: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2B40u;
            // 0x1e2b44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2B48u;
}
