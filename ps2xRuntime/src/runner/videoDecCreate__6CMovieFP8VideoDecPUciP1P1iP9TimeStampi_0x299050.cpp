#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: videoDecCreate__6CMovieFP8VideoDecPUciP1P1iP9TimeStampi
// Address: 0x299050 - 0x29914c
void videoDecCreate__6CMovieFP8VideoDecPUciP1P1iP9TimeStampi_0x299050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("videoDecCreate__6CMovieFP8VideoDecPUciP1P1iP9TimeStampi_0x299050");
#endif

    switch (ctx->pc) {
        case 0x299090u: goto label_299090;
        case 0x2990a8u: goto label_2990a8;
        case 0x2990c0u: goto label_2990c0;
        case 0x2990d8u: goto label_2990d8;
        case 0x2990f0u: goto label_2990f0;
        case 0x299108u: goto label_299108;
        case 0x299128u: goto label_299128;
        default: break;
    }

    ctx->pc = 0x299050u;

    // 0x299050: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x299050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x299054: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x299054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x299058: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x299058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29905c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29905cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x299060: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x299060u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299064: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x299064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x299068: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x299068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29906c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29906cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x299070: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x299070u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299074: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x299074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x299078: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x299078u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29907c: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x29907cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299080: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x299080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299084: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x299084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299088: 0xc04383a  jal         func_10E0E8
    ctx->pc = 0x299088u;
    SET_GPR_U32(ctx, 31, 0x299090u);
    ctx->pc = 0x29908Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299088u;
            // 0x29908c: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E0E8u;
    if (runtime->hasFunction(0x10E0E8u)) {
        auto targetFn = runtime->lookupFunction(0x10E0E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299090u; }
        if (ctx->pc != 0x299090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMpegCreate_0x10e0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299090u; }
        if (ctx->pc != 0x299090u) { return; }
    }
    ctx->pc = 0x299090u;
label_299090:
    // 0x299090: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x299090u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x299094: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x299094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299098: 0x24c69500  addiu       $a2, $a2, -0x6B00
    ctx->pc = 0x299098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939904));
    // 0x29909c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29909cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2990a0: 0xc043940  jal         func_10E500
    ctx->pc = 0x2990A0u;
    SET_GPR_U32(ctx, 31, 0x2990A8u);
    ctx->pc = 0x2990A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2990A0u;
            // 0x2990a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E500u;
    if (runtime->hasFunction(0x10E500u)) {
        auto targetFn = runtime->lookupFunction(0x10E500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2990A8u; }
        if (ctx->pc != 0x2990A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMpegAddCallback_0x10e500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2990A8u; }
        if (ctx->pc != 0x2990A8u) { return; }
    }
    ctx->pc = 0x2990A8u;
label_2990a8:
    // 0x2990a8: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x2990a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x2990ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2990acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2990b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2990b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2990b4: 0x24c69510  addiu       $a2, $a2, -0x6AF0
    ctx->pc = 0x2990b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939920));
    // 0x2990b8: 0xc043940  jal         func_10E500
    ctx->pc = 0x2990B8u;
    SET_GPR_U32(ctx, 31, 0x2990C0u);
    ctx->pc = 0x2990BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2990B8u;
            // 0x2990bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E500u;
    if (runtime->hasFunction(0x10E500u)) {
        auto targetFn = runtime->lookupFunction(0x10E500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2990C0u; }
        if (ctx->pc != 0x2990C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMpegAddCallback_0x10e500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2990C0u; }
        if (ctx->pc != 0x2990C0u) { return; }
    }
    ctx->pc = 0x2990C0u;
label_2990c0:
    // 0x2990c0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x2990c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x2990c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2990c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2990c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2990c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2990cc: 0x24c69540  addiu       $a2, $a2, -0x6AC0
    ctx->pc = 0x2990ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939968));
    // 0x2990d0: 0xc043940  jal         func_10E500
    ctx->pc = 0x2990D0u;
    SET_GPR_U32(ctx, 31, 0x2990D8u);
    ctx->pc = 0x2990D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2990D0u;
            // 0x2990d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E500u;
    if (runtime->hasFunction(0x10E500u)) {
        auto targetFn = runtime->lookupFunction(0x10E500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2990D8u; }
        if (ctx->pc != 0x2990D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMpegAddCallback_0x10e500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2990D8u; }
        if (ctx->pc != 0x2990D8u) { return; }
    }
    ctx->pc = 0x2990D8u;
label_2990d8:
    // 0x2990d8: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x2990d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x2990dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2990dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2990e0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2990e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2990e4: 0x24c69570  addiu       $a2, $a2, -0x6A90
    ctx->pc = 0x2990e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940016));
    // 0x2990e8: 0xc043940  jal         func_10E500
    ctx->pc = 0x2990E8u;
    SET_GPR_U32(ctx, 31, 0x2990F0u);
    ctx->pc = 0x2990ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2990E8u;
            // 0x2990ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E500u;
    if (runtime->hasFunction(0x10E500u)) {
        auto targetFn = runtime->lookupFunction(0x10E500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2990F0u; }
        if (ctx->pc != 0x2990F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMpegAddCallback_0x10e500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2990F0u; }
        if (ctx->pc != 0x2990F0u) { return; }
    }
    ctx->pc = 0x2990F0u;
label_2990f0:
    // 0x2990f0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x2990f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x2990f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2990f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2990f8: 0x24c695a0  addiu       $a2, $a2, -0x6A60
    ctx->pc = 0x2990f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940064));
    // 0x2990fc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2990fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x299100: 0xc043940  jal         func_10E500
    ctx->pc = 0x299100u;
    SET_GPR_U32(ctx, 31, 0x299108u);
    ctx->pc = 0x299104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299100u;
            // 0x299104: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E500u;
    if (runtime->hasFunction(0x10E500u)) {
        auto targetFn = runtime->lookupFunction(0x10E500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299108u; }
        if (ctx->pc != 0x299108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMpegAddCallback_0x10e500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299108u; }
        if (ctx->pc != 0x299108u) { return; }
    }
    ctx->pc = 0x299108u;
label_299108:
    // 0x299108: 0xae8000a8  sw          $zero, 0xA8($s4)
    ctx->pc = 0x299108u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 168), GPR_U32(ctx, 0));
    // 0x29910c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29910cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299110: 0x8fa90060  lw          $t1, 0x60($sp)
    ctx->pc = 0x299110u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x299114: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x299114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299118: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x299118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29911c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x29911cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299120: 0xc0a6740  jal         func_299D00
    ctx->pc = 0x299120u;
    SET_GPR_U32(ctx, 31, 0x299128u);
    ctx->pc = 0x299124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299120u;
            // 0x299124: 0x26840048  addiu       $a0, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299D00u;
    if (runtime->hasFunction(0x299D00u)) {
        auto targetFn = runtime->lookupFunction(0x299D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299128u; }
        if (ctx->pc != 0x299128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        viBufCreate__FP5ViBufP1P1iP9TimeStampi_0x299d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299128u; }
        if (ctx->pc != 0x299128u) { return; }
    }
    ctx->pc = 0x299128u;
label_299128:
    // 0x299128: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x299128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29912c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29912cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x299130: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x299130u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x299134: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x299134u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299138: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x299138u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29913c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29913cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299140: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x299140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299144: 0x3e00008  jr          $ra
    ctx->pc = 0x299144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299144u;
            // 0x299148: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29914Cu;
}
