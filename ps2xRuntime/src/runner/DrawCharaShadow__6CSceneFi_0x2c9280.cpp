#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawCharaShadow__6CSceneFi
// Address: 0x2c9280 - 0x2c93cc
void DrawCharaShadow__6CSceneFi_0x2c9280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawCharaShadow__6CSceneFi_0x2c9280");
#endif

    switch (ctx->pc) {
        case 0x2c9280u: goto label_2c9280;
        case 0x2c9284u: goto label_2c9284;
        case 0x2c9288u: goto label_2c9288;
        case 0x2c928cu: goto label_2c928c;
        case 0x2c9290u: goto label_2c9290;
        case 0x2c9294u: goto label_2c9294;
        case 0x2c9298u: goto label_2c9298;
        case 0x2c929cu: goto label_2c929c;
        case 0x2c92a0u: goto label_2c92a0;
        case 0x2c92a4u: goto label_2c92a4;
        case 0x2c92a8u: goto label_2c92a8;
        case 0x2c92acu: goto label_2c92ac;
        case 0x2c92b0u: goto label_2c92b0;
        case 0x2c92b4u: goto label_2c92b4;
        case 0x2c92b8u: goto label_2c92b8;
        case 0x2c92bcu: goto label_2c92bc;
        case 0x2c92c0u: goto label_2c92c0;
        case 0x2c92c4u: goto label_2c92c4;
        case 0x2c92c8u: goto label_2c92c8;
        case 0x2c92ccu: goto label_2c92cc;
        case 0x2c92d0u: goto label_2c92d0;
        case 0x2c92d4u: goto label_2c92d4;
        case 0x2c92d8u: goto label_2c92d8;
        case 0x2c92dcu: goto label_2c92dc;
        case 0x2c92e0u: goto label_2c92e0;
        case 0x2c92e4u: goto label_2c92e4;
        case 0x2c92e8u: goto label_2c92e8;
        case 0x2c92ecu: goto label_2c92ec;
        case 0x2c92f0u: goto label_2c92f0;
        case 0x2c92f4u: goto label_2c92f4;
        case 0x2c92f8u: goto label_2c92f8;
        case 0x2c92fcu: goto label_2c92fc;
        case 0x2c9300u: goto label_2c9300;
        case 0x2c9304u: goto label_2c9304;
        case 0x2c9308u: goto label_2c9308;
        case 0x2c930cu: goto label_2c930c;
        case 0x2c9310u: goto label_2c9310;
        case 0x2c9314u: goto label_2c9314;
        case 0x2c9318u: goto label_2c9318;
        case 0x2c931cu: goto label_2c931c;
        case 0x2c9320u: goto label_2c9320;
        case 0x2c9324u: goto label_2c9324;
        case 0x2c9328u: goto label_2c9328;
        case 0x2c932cu: goto label_2c932c;
        case 0x2c9330u: goto label_2c9330;
        case 0x2c9334u: goto label_2c9334;
        case 0x2c9338u: goto label_2c9338;
        case 0x2c933cu: goto label_2c933c;
        case 0x2c9340u: goto label_2c9340;
        case 0x2c9344u: goto label_2c9344;
        case 0x2c9348u: goto label_2c9348;
        case 0x2c934cu: goto label_2c934c;
        case 0x2c9350u: goto label_2c9350;
        case 0x2c9354u: goto label_2c9354;
        case 0x2c9358u: goto label_2c9358;
        case 0x2c935cu: goto label_2c935c;
        case 0x2c9360u: goto label_2c9360;
        case 0x2c9364u: goto label_2c9364;
        case 0x2c9368u: goto label_2c9368;
        case 0x2c936cu: goto label_2c936c;
        case 0x2c9370u: goto label_2c9370;
        case 0x2c9374u: goto label_2c9374;
        case 0x2c9378u: goto label_2c9378;
        case 0x2c937cu: goto label_2c937c;
        case 0x2c9380u: goto label_2c9380;
        case 0x2c9384u: goto label_2c9384;
        case 0x2c9388u: goto label_2c9388;
        case 0x2c938cu: goto label_2c938c;
        case 0x2c9390u: goto label_2c9390;
        case 0x2c9394u: goto label_2c9394;
        case 0x2c9398u: goto label_2c9398;
        case 0x2c939cu: goto label_2c939c;
        case 0x2c93a0u: goto label_2c93a0;
        case 0x2c93a4u: goto label_2c93a4;
        case 0x2c93a8u: goto label_2c93a8;
        case 0x2c93acu: goto label_2c93ac;
        case 0x2c93b0u: goto label_2c93b0;
        case 0x2c93b4u: goto label_2c93b4;
        case 0x2c93b8u: goto label_2c93b8;
        case 0x2c93bcu: goto label_2c93bc;
        case 0x2c93c0u: goto label_2c93c0;
        case 0x2c93c4u: goto label_2c93c4;
        case 0x2c93c8u: goto label_2c93c8;
        default: break;
    }

    ctx->pc = 0x2c9280u;

label_2c9280:
    // 0x2c9280: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2c9280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_2c9284:
    // 0x2c9284: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c9284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2c9288:
    // 0x2c9288: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c9288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2c928c:
    // 0x2c928c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c928cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c9290:
    // 0x2c9290: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c9290u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c9294:
    // 0x2c9294: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c9294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c9298:
    // 0x2c9298: 0xc0a0ed8  jal         func_283B60
label_2c929c:
    if (ctx->pc == 0x2C929Cu) {
        ctx->pc = 0x2C929Cu;
            // 0x2c929c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2C92A0u;
        goto label_2c92a0;
    }
    ctx->pc = 0x2C9298u;
    SET_GPR_U32(ctx, 31, 0x2C92A0u);
    ctx->pc = 0x2C929Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9298u;
            // 0x2c929c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C92A0u; }
        if (ctx->pc != 0x2C92A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C92A0u; }
        if (ctx->pc != 0x2C92A0u) { return; }
    }
    ctx->pc = 0x2C92A0u;
label_2c92a0:
    // 0x2c92a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c92a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c92a4:
    // 0x2c92a4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_2c92a8:
    if (ctx->pc == 0x2C92A8u) {
        ctx->pc = 0x2C92A8u;
            // 0x2c92a8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2C92ACu;
        goto label_2c92ac;
    }
    ctx->pc = 0x2C92A4u;
    {
        const bool branch_taken_0x2c92a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C92A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C92A4u;
            // 0x2c92a8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c92a4) {
            ctx->pc = 0x2C92B4u;
            goto label_2c92b4;
        }
    }
    ctx->pc = 0x2C92ACu;
label_2c92ac:
    // 0x2c92ac: 0x10000041  b           . + 4 + (0x41 << 2)
label_2c92b0:
    if (ctx->pc == 0x2C92B0u) {
        ctx->pc = 0x2C92B0u;
            // 0x2c92b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C92B4u;
        goto label_2c92b4;
    }
    ctx->pc = 0x2C92ACu;
    {
        const bool branch_taken_0x2c92ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C92B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C92ACu;
            // 0x2c92b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c92ac) {
            ctx->pc = 0x2C93B4u;
            goto label_2c93b4;
        }
    }
    ctx->pc = 0x2C92B4u;
label_2c92b4:
    // 0x2c92b4: 0xc050dd8  jal         func_143760
label_2c92b8:
    if (ctx->pc == 0x2C92B8u) {
        ctx->pc = 0x2C92B8u;
            // 0x2c92b8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2C92BCu;
        goto label_2c92bc;
    }
    ctx->pc = 0x2C92B4u;
    SET_GPR_U32(ctx, 31, 0x2C92BCu);
    ctx->pc = 0x2C92B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C92B4u;
            // 0x2c92b8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143760u;
    if (runtime->hasFunction(0x143760u)) {
        auto targetFn = runtime->lookupFunction(0x143760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C92BCu; }
        if (ctx->pc != 0x2C92BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetLight__FPA4_fPA4_f_0x143760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C92BCu; }
        if (ctx->pc != 0x2C92BCu) { return; }
    }
    ctx->pc = 0x2C92BCu;
label_2c92bc:
    // 0x2c92bc: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2c92bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
label_2c92c0:
    // 0x2c92c0: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x2c92c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2c92c4:
    // 0x2c92c4: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x2c92c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_2c92c8:
    // 0x2c92c8: 0x27a400c4  addiu       $a0, $sp, 0xC4
    ctx->pc = 0x2c92c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_2c92cc:
    // 0x2c92cc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2c92ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2c92d0:
    // 0x2c92d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c92d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c92d4:
    // 0x2c92d4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2c92d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_2c92d8:
    // 0x2c92d8: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x2c92d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2c92dc:
    // 0x2c92dc: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x2c92dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2c92e0:
    // 0x2c92e0: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2c92e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c92e4:
    // 0x2c92e4: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x2c92e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2c92e8:
    // 0x2c92e8: 0xe7a200c4  swc1        $f2, 0xC4($sp)
    ctx->pc = 0x2c92e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_2c92ec:
    // 0x2c92ec: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x2c92ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2c92f0:
    // 0x2c92f0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2c92f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c92f4:
    // 0x2c92f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c92f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c92f8:
    // 0x2c92f8: 0x0  nop
    ctx->pc = 0x2c92f8u;
    // NOP
label_2c92fc:
    // 0x2c92fc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2c9300:
    if (ctx->pc == 0x2C9300u) {
        ctx->pc = 0x2C9304u;
        goto label_2c9304;
    }
    ctx->pc = 0x2C92FCu;
    {
        const bool branch_taken_0x2c92fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c92fc) {
            ctx->pc = 0x2C9308u;
            goto label_2c9308;
        }
    }
    ctx->pc = 0x2C9304u;
label_2c9304:
    // 0x2c9304: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2c9304u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2c9308:
    // 0x2c9308: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2c9308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_2c930c:
    // 0x2c930c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2c930cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2c9310:
    // 0x2c9310: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c9310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c9314:
    // 0x2c9314: 0x0  nop
    ctx->pc = 0x2c9314u;
    // NOP
label_2c9318:
    // 0x2c9318: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c9318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c931c:
    // 0x2c931c: 0x0  nop
    ctx->pc = 0x2c931cu;
    // NOP
label_2c9320:
    // 0x2c9320: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2c9324:
    if (ctx->pc == 0x2C9324u) {
        ctx->pc = 0x2C9324u;
            // 0x2c9324: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->pc = 0x2C9328u;
        goto label_2c9328;
    }
    ctx->pc = 0x2C9320u;
    {
        const bool branch_taken_0x2c9320 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C9324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9320u;
            // 0x2c9324: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9320) {
            ctx->pc = 0x2C932Cu;
            goto label_2c932c;
        }
    }
    ctx->pc = 0x2C9328u;
label_2c9328:
    // 0x2c9328: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2c9328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2c932c:
    // 0x2c932c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2c932cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_2c9330:
    // 0x2c9330: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x2c9330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2c9334:
    // 0x2c9334: 0x24425340  addiu       $v0, $v0, 0x5340
    ctx->pc = 0x2c9334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21312));
label_2c9338:
    // 0x2c9338: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x2c9338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2c933c:
    // 0x2c933c: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x2c933cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2c9340:
    // 0x2c9340: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c9340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c9344:
    // 0x2c9344: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c9344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c9348:
    // 0x2c9348: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2c9348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_2c934c:
    // 0x2c934c: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x2c934cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
label_2c9350:
    // 0x2c9350: 0x24425350  addiu       $v0, $v0, 0x5350
    ctx->pc = 0x2c9350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21328));
label_2c9354:
    // 0x2c9354: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2c9354u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2c9358:
    // 0x2c9358: 0xc0b22fc  jal         func_2C8BF0
label_2c935c:
    if (ctx->pc == 0x2C935Cu) {
        ctx->pc = 0x2C935Cu;
            // 0x2c935c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x2C9360u;
        goto label_2c9360;
    }
    ctx->pc = 0x2C9358u;
    SET_GPR_U32(ctx, 31, 0x2C9360u);
    ctx->pc = 0x2C935Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9358u;
            // 0x2c935c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8BF0u;
    if (runtime->hasFunction(0x2C8BF0u)) {
        auto targetFn = runtime->lookupFunction(0x2C8BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9360u; }
        if (ctx->pc != 0x2C9360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDrawCharaShadow__6CSceneFi_0x2c8bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9360u; }
        if (ctx->pc != 0x2C9360u) { return; }
    }
    ctx->pc = 0x2C9360u;
label_2c9360:
    // 0x2c9360: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2c9364:
    if (ctx->pc == 0x2C9364u) {
        ctx->pc = 0x2C9364u;
            // 0x2c9364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9368u;
        goto label_2c9368;
    }
    ctx->pc = 0x2C9360u;
    {
        const bool branch_taken_0x2c9360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9360u;
            // 0x2c9364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9360) {
            ctx->pc = 0x2C9370u;
            goto label_2c9370;
        }
    }
    ctx->pc = 0x2C9368u;
label_2c9368:
    // 0x2c9368: 0x10000012  b           . + 4 + (0x12 << 2)
label_2c936c:
    if (ctx->pc == 0x2C936Cu) {
        ctx->pc = 0x2C936Cu;
            // 0x2c936c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9370u;
        goto label_2c9370;
    }
    ctx->pc = 0x2C9368u;
    {
        const bool branch_taken_0x2c9368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C936Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9368u;
            // 0x2c936c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9368) {
            ctx->pc = 0x2C93B4u;
            goto label_2c93b4;
        }
    }
    ctx->pc = 0x2C9370u;
label_2c9370:
    // 0x2c9370: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c9370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c9374:
    // 0x2c9374: 0xc05d3d4  jal         func_174F50
label_2c9378:
    if (ctx->pc == 0x2C9378u) {
        ctx->pc = 0x2C9378u;
            // 0x2c9378: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x2C937Cu;
        goto label_2c937c;
    }
    ctx->pc = 0x2C9374u;
    SET_GPR_U32(ctx, 31, 0x2C937Cu);
    ctx->pc = 0x2C9378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9374u;
            // 0x2c9378: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174F50u;
    if (runtime->hasFunction(0x174F50u)) {
        auto targetFn = runtime->lookupFunction(0x174F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C937Cu; }
        if (ctx->pc != 0x2C937Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiPf_0x174f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C937Cu; }
        if (ctx->pc != 0x2C937Cu) { return; }
    }
    ctx->pc = 0x2C937Cu;
label_2c937c:
    // 0x2c937c: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x2c937cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c9380:
    // 0x2c9380: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2c9380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_2c9384:
    // 0x2c9384: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c9384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c9388:
    // 0x2c9388: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2c9388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2c938c:
    // 0x2c938c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2c938cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2c9390:
    // 0x2c9390: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2c9390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2c9394:
    // 0x2c9394: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c9394u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2c9398:
    // 0x2c9398: 0xc050e30  jal         func_1438C0
label_2c939c:
    if (ctx->pc == 0x2C939Cu) {
        ctx->pc = 0x2C939Cu;
            // 0x2c939c: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->pc = 0x2C93A0u;
        goto label_2c93a0;
    }
    ctx->pc = 0x2C9398u;
    SET_GPR_U32(ctx, 31, 0x2C93A0u);
    ctx->pc = 0x2C939Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9398u;
            // 0x2c939c: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1438C0u;
    if (runtime->hasFunction(0x1438C0u)) {
        auto targetFn = runtime->lookupFunction(0x1438C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C93A0u; }
        if (ctx->pc != 0x2C93A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetDropShadowMatrix__FPfPfPf_0x1438c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C93A0u; }
        if (ctx->pc != 0x2C93A0u) { return; }
    }
    ctx->pc = 0x2C93A0u;
label_2c93a0:
    // 0x2c93a0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2c93a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c93a4:
    // 0x2c93a4: 0x8f3900cc  lw          $t9, 0xCC($t9)
    ctx->pc = 0x2c93a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 204)));
label_2c93a8:
    // 0x2c93a8: 0x320f809  jalr        $t9
label_2c93ac:
    if (ctx->pc == 0x2C93ACu) {
        ctx->pc = 0x2C93ACu;
            // 0x2c93ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C93B0u;
        goto label_2c93b0;
    }
    ctx->pc = 0x2C93A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C93B0u);
        ctx->pc = 0x2C93ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C93A8u;
            // 0x2c93ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C93B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C93B0u; }
            if (ctx->pc != 0x2C93B0u) { return; }
        }
        }
    }
    ctx->pc = 0x2C93B0u;
label_2c93b0:
    // 0x2c93b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c93b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c93b4:
    // 0x2c93b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c93b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c93b8:
    // 0x2c93b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c93b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c93bc:
    // 0x2c93bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c93bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c93c0:
    // 0x2c93c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c93c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c93c4:
    // 0x2c93c4: 0x3e00008  jr          $ra
label_2c93c8:
    if (ctx->pc == 0x2C93C8u) {
        ctx->pc = 0x2C93C8u;
            // 0x2c93c8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x2C93CCu;
        goto label_fallthrough_0x2c93c4;
    }
    ctx->pc = 0x2C93C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C93C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C93C4u;
            // 0x2c93c8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2c93c4:
    ctx->pc = 0x2C93CCu;
}
