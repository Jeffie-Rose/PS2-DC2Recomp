#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNearParts__8CEditMapFP14CEditPartsInfoPffPP10CEditPartsi
// Address: 0x1b2320 - 0x1b24c8
void GetNearParts__8CEditMapFP14CEditPartsInfoPffPP10CEditPartsi_0x1b2320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNearParts__8CEditMapFP14CEditPartsInfoPffPP10CEditPartsi_0x1b2320");
#endif

    switch (ctx->pc) {
        case 0x1b2320u: goto label_1b2320;
        case 0x1b2324u: goto label_1b2324;
        case 0x1b2328u: goto label_1b2328;
        case 0x1b232cu: goto label_1b232c;
        case 0x1b2330u: goto label_1b2330;
        case 0x1b2334u: goto label_1b2334;
        case 0x1b2338u: goto label_1b2338;
        case 0x1b233cu: goto label_1b233c;
        case 0x1b2340u: goto label_1b2340;
        case 0x1b2344u: goto label_1b2344;
        case 0x1b2348u: goto label_1b2348;
        case 0x1b234cu: goto label_1b234c;
        case 0x1b2350u: goto label_1b2350;
        case 0x1b2354u: goto label_1b2354;
        case 0x1b2358u: goto label_1b2358;
        case 0x1b235cu: goto label_1b235c;
        case 0x1b2360u: goto label_1b2360;
        case 0x1b2364u: goto label_1b2364;
        case 0x1b2368u: goto label_1b2368;
        case 0x1b236cu: goto label_1b236c;
        case 0x1b2370u: goto label_1b2370;
        case 0x1b2374u: goto label_1b2374;
        case 0x1b2378u: goto label_1b2378;
        case 0x1b237cu: goto label_1b237c;
        case 0x1b2380u: goto label_1b2380;
        case 0x1b2384u: goto label_1b2384;
        case 0x1b2388u: goto label_1b2388;
        case 0x1b238cu: goto label_1b238c;
        case 0x1b2390u: goto label_1b2390;
        case 0x1b2394u: goto label_1b2394;
        case 0x1b2398u: goto label_1b2398;
        case 0x1b239cu: goto label_1b239c;
        case 0x1b23a0u: goto label_1b23a0;
        case 0x1b23a4u: goto label_1b23a4;
        case 0x1b23a8u: goto label_1b23a8;
        case 0x1b23acu: goto label_1b23ac;
        case 0x1b23b0u: goto label_1b23b0;
        case 0x1b23b4u: goto label_1b23b4;
        case 0x1b23b8u: goto label_1b23b8;
        case 0x1b23bcu: goto label_1b23bc;
        case 0x1b23c0u: goto label_1b23c0;
        case 0x1b23c4u: goto label_1b23c4;
        case 0x1b23c8u: goto label_1b23c8;
        case 0x1b23ccu: goto label_1b23cc;
        case 0x1b23d0u: goto label_1b23d0;
        case 0x1b23d4u: goto label_1b23d4;
        case 0x1b23d8u: goto label_1b23d8;
        case 0x1b23dcu: goto label_1b23dc;
        case 0x1b23e0u: goto label_1b23e0;
        case 0x1b23e4u: goto label_1b23e4;
        case 0x1b23e8u: goto label_1b23e8;
        case 0x1b23ecu: goto label_1b23ec;
        case 0x1b23f0u: goto label_1b23f0;
        case 0x1b23f4u: goto label_1b23f4;
        case 0x1b23f8u: goto label_1b23f8;
        case 0x1b23fcu: goto label_1b23fc;
        case 0x1b2400u: goto label_1b2400;
        case 0x1b2404u: goto label_1b2404;
        case 0x1b2408u: goto label_1b2408;
        case 0x1b240cu: goto label_1b240c;
        case 0x1b2410u: goto label_1b2410;
        case 0x1b2414u: goto label_1b2414;
        case 0x1b2418u: goto label_1b2418;
        case 0x1b241cu: goto label_1b241c;
        case 0x1b2420u: goto label_1b2420;
        case 0x1b2424u: goto label_1b2424;
        case 0x1b2428u: goto label_1b2428;
        case 0x1b242cu: goto label_1b242c;
        case 0x1b2430u: goto label_1b2430;
        case 0x1b2434u: goto label_1b2434;
        case 0x1b2438u: goto label_1b2438;
        case 0x1b243cu: goto label_1b243c;
        case 0x1b2440u: goto label_1b2440;
        case 0x1b2444u: goto label_1b2444;
        case 0x1b2448u: goto label_1b2448;
        case 0x1b244cu: goto label_1b244c;
        case 0x1b2450u: goto label_1b2450;
        case 0x1b2454u: goto label_1b2454;
        case 0x1b2458u: goto label_1b2458;
        case 0x1b245cu: goto label_1b245c;
        case 0x1b2460u: goto label_1b2460;
        case 0x1b2464u: goto label_1b2464;
        case 0x1b2468u: goto label_1b2468;
        case 0x1b246cu: goto label_1b246c;
        case 0x1b2470u: goto label_1b2470;
        case 0x1b2474u: goto label_1b2474;
        case 0x1b2478u: goto label_1b2478;
        case 0x1b247cu: goto label_1b247c;
        case 0x1b2480u: goto label_1b2480;
        case 0x1b2484u: goto label_1b2484;
        case 0x1b2488u: goto label_1b2488;
        case 0x1b248cu: goto label_1b248c;
        case 0x1b2490u: goto label_1b2490;
        case 0x1b2494u: goto label_1b2494;
        case 0x1b2498u: goto label_1b2498;
        case 0x1b249cu: goto label_1b249c;
        case 0x1b24a0u: goto label_1b24a0;
        case 0x1b24a4u: goto label_1b24a4;
        case 0x1b24a8u: goto label_1b24a8;
        case 0x1b24acu: goto label_1b24ac;
        case 0x1b24b0u: goto label_1b24b0;
        case 0x1b24b4u: goto label_1b24b4;
        case 0x1b24b8u: goto label_1b24b8;
        case 0x1b24bcu: goto label_1b24bc;
        case 0x1b24c0u: goto label_1b24c0;
        case 0x1b24c4u: goto label_1b24c4;
        default: break;
    }

    ctx->pc = 0x1b2320u;

label_1b2320:
    // 0x1b2320: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1b2320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_1b2324:
    // 0x1b2324: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1b2324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1b2328:
    // 0x1b2328: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1b2328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1b232c:
    // 0x1b232c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b232cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1b2330:
    // 0x1b2330: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x1b2330u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1b2334:
    // 0x1b2334: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b2334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1b2338:
    // 0x1b2338: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1b2338u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b233c:
    // 0x1b233c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b233cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1b2340:
    // 0x1b2340: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1b2340u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b2344:
    // 0x1b2344: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b2344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1b2348:
    // 0x1b2348: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b2348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b234c:
    // 0x1b234c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b234cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b2350:
    // 0x1b2350: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b2350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b2354:
    // 0x1b2354: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_1b2358:
    if (ctx->pc == 0x1B2358u) {
        ctx->pc = 0x1B2358u;
            // 0x1b2358: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1B235Cu;
        goto label_1b235c;
    }
    ctx->pc = 0x1B2354u;
    {
        const bool branch_taken_0x1b2354 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2354u;
            // 0x1b2358: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2354) {
            ctx->pc = 0x1B2364u;
            goto label_1b2364;
        }
    }
    ctx->pc = 0x1B235Cu;
label_1b235c:
    // 0x1b235c: 0x1000004f  b           . + 4 + (0x4F << 2)
label_1b2360:
    if (ctx->pc == 0x1B2360u) {
        ctx->pc = 0x1B2360u;
            // 0x1b2360: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B2364u;
        goto label_1b2364;
    }
    ctx->pc = 0x1B235Cu;
    {
        const bool branch_taken_0x1b235c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B235Cu;
            // 0x1b2360: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b235c) {
            ctx->pc = 0x1B249Cu;
            goto label_1b249c;
        }
    }
    ctx->pc = 0x1B2364u;
label_1b2364:
    // 0x1b2364: 0x8eb00d44  lw          $s0, 0xD44($s5)
    ctx->pc = 0x1b2364u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3396)));
label_1b2368:
    // 0x1b2368: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1b2368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b236c:
    // 0x1b236c: 0xc04c154  jal         func_130550
label_1b2370:
    if (ctx->pc == 0x1B2370u) {
        ctx->pc = 0x1B2370u;
            // 0x1b2370: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1B2374u;
        goto label_1b2374;
    }
    ctx->pc = 0x1B236Cu;
    SET_GPR_U32(ctx, 31, 0x1B2374u);
    ctx->pc = 0x1B2370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B236Cu;
            // 0x1b2370: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130550u;
    if (runtime->hasFunction(0x130550u)) {
        auto targetFn = runtime->lookupFunction(0x130550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2374u; }
        if (ctx->pc != 0x1B2374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCreateMatrixPY__FPA4_fPff_0x130550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2374u; }
        if (ctx->pc != 0x1B2374u) { return; }
    }
    ctx->pc = 0x1B2374u;
label_1b2374:
    // 0x1b2374: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b2374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b2378:
    // 0x1b2378: 0x26270050  addiu       $a3, $s1, 0x50
    ctx->pc = 0x1b2378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1b237c:
    // 0x1b237c: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x1b237cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_1b2380:
    // 0x1b2380: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1b2380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1b2384:
    // 0x1b2384: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x1b2384u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
label_1b2388:
    // 0x1b2388: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1b2388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1b238c:
    // 0x1b238c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1b238cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1b2390:
    // 0x1b2390: 0xc04c278  jal         func_1309E0
label_1b2394:
    if (ctx->pc == 0x1B2394u) {
        ctx->pc = 0x1B2394u;
            // 0x1b2394: 0x24e80010  addiu       $t0, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->pc = 0x1B2398u;
        goto label_1b2398;
    }
    ctx->pc = 0x1B2390u;
    SET_GPR_U32(ctx, 31, 0x1B2398u);
    ctx->pc = 0x1B2394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2390u;
            // 0x1b2394: 0x24e80010  addiu       $t0, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1309E0u;
    if (runtime->hasFunction(0x1309E0u)) {
        auto targetFn = runtime->lookupFunction(0x1309E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2398u; }
        if (ctx->pc != 0x1B2398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgApplyMatrix__FPfPfPA4_fPfPf_0x1309e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2398u; }
        if (ctx->pc != 0x1B2398u) { return; }
    }
    ctx->pc = 0x1B2398u;
label_1b2398:
    // 0x1b2398: 0xc7a30110  lwc1        $f3, 0x110($sp)
    ctx->pc = 0x1b2398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b239c:
    // 0x1b239c: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x1b239cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
label_1b23a0:
    // 0x1b23a0: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x1b23a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b23a4:
    // 0x1b23a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b23a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b23a8:
    // 0x1b23a8: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x1b23a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b23ac:
    // 0x1b23ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b23acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b23b0:
    // 0x1b23b0: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x1b23b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b23b4:
    // 0x1b23b4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1b23b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b23b8:
    // 0x1b23b8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1b23b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1b23bc:
    // 0x1b23bc: 0x0  nop
    ctx->pc = 0x1b23bcu;
    // NOP
label_1b23c0:
    // 0x1b23c0: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x1b23c0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_1b23c4:
    // 0x1b23c4: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x1b23c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_1b23c8:
    // 0x1b23c8: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1b23c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_1b23cc:
    // 0x1b23cc: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x1b23ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_1b23d0:
    // 0x1b23d0: 0xe7a30110  swc1        $f3, 0x110($sp)
    ctx->pc = 0x1b23d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1b23d4:
    // 0x1b23d4: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x1b23d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1b23d8:
    // 0x1b23d8: 0xe7a10120  swc1        $f1, 0x120($sp)
    ctx->pc = 0x1b23d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_1b23dc:
    // 0x1b23dc: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1b23e0:
    if (ctx->pc == 0x1B23E0u) {
        ctx->pc = 0x1B23E0u;
            // 0x1b23e0: 0xe7a00128  swc1        $f0, 0x128($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
        ctx->pc = 0x1B23E4u;
        goto label_1b23e4;
    }
    ctx->pc = 0x1B23DCu;
    {
        const bool branch_taken_0x1b23dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B23E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B23DCu;
            // 0x1b23e0: 0xe7a00128  swc1        $f0, 0x128($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b23dc) {
            ctx->pc = 0x1B2488u;
            goto label_1b2488;
        }
    }
    ctx->pc = 0x1B23E4u;
label_1b23e4:
    // 0x1b23e4: 0x82020070  lb          $v0, 0x70($s0)
    ctx->pc = 0x1b23e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
label_1b23e8:
    // 0x1b23e8: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x1b23e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1b23ec:
    // 0x1b23ec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b23ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b23f0:
    // 0x1b23f0: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_1b23f4:
    if (ctx->pc == 0x1B23F4u) {
        ctx->pc = 0x1B23F8u;
        goto label_1b23f8;
    }
    ctx->pc = 0x1B23F0u;
    {
        const bool branch_taken_0x1b23f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b23f0) {
            ctx->pc = 0x1B2480u;
            goto label_1b2480;
        }
    }
    ctx->pc = 0x1B23F8u;
label_1b23f8:
    // 0x1b23f8: 0x8e030310  lw          $v1, 0x310($s0)
    ctx->pc = 0x1b23f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 784)));
label_1b23fc:
    // 0x1b23fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b23fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b2400:
    // 0x1b2400: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
label_1b2404:
    if (ctx->pc == 0x1B2404u) {
        ctx->pc = 0x1B2408u;
        goto label_1b2408;
    }
    ctx->pc = 0x1B2400u;
    {
        const bool branch_taken_0x1b2400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b2400) {
            ctx->pc = 0x1B2480u;
            goto label_1b2480;
        }
    }
    ctx->pc = 0x1B2408u;
label_1b2408:
    // 0x1b2408: 0x8e020324  lw          $v0, 0x324($s0)
    ctx->pc = 0x1b2408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
label_1b240c:
    // 0x1b240c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1b2410:
    if (ctx->pc == 0x1B2410u) {
        ctx->pc = 0x1B2414u;
        goto label_1b2414;
    }
    ctx->pc = 0x1B240Cu;
    {
        const bool branch_taken_0x1b240c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b240c) {
            ctx->pc = 0x1B2480u;
            goto label_1b2480;
        }
    }
    ctx->pc = 0x1B2414u;
label_1b2414:
    // 0x1b2414: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1b2414u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b2418:
    // 0x1b2418: 0x24530050  addiu       $s3, $v0, 0x50
    ctx->pc = 0x1b2418u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_1b241c:
    // 0x1b241c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b241cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b2420:
    // 0x1b2420: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b2420u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b2424:
    // 0x1b2424: 0x320f809  jalr        $t9
label_1b2428:
    if (ctx->pc == 0x1B2428u) {
        ctx->pc = 0x1B2428u;
            // 0x1b2428: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x1B242Cu;
        goto label_1b242c;
    }
    ctx->pc = 0x1B2424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B242Cu);
        ctx->pc = 0x1B2428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2424u;
            // 0x1b2428: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B242Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B242Cu; }
            if (ctx->pc != 0x1B242Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1B242Cu;
label_1b242c:
    // 0x1b242c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1b242cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b2430:
    // 0x1b2430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b2434:
    // 0x1b2434: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1b2434u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1b2438:
    // 0x1b2438: 0x320f809  jalr        $t9
label_1b243c:
    if (ctx->pc == 0x1B243Cu) {
        ctx->pc = 0x1B243Cu;
            // 0x1b243c: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x1B2440u;
        goto label_1b2440;
    }
    ctx->pc = 0x1B2438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B2440u);
        ctx->pc = 0x1B243Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2438u;
            // 0x1b243c: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B2440u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B2440u; }
            if (ctx->pc != 0x1B2440u) { return; }
        }
        }
    }
    ctx->pc = 0x1B2440u;
label_1b2440:
    // 0x1b2440: 0xc7ac0164  lwc1        $f12, 0x164($sp)
    ctx->pc = 0x1b2440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b2444:
    // 0x1b2444: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1b2444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1b2448:
    // 0x1b2448: 0xc04c154  jal         func_130550
label_1b244c:
    if (ctx->pc == 0x1B244Cu) {
        ctx->pc = 0x1B244Cu;
            // 0x1b244c: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x1B2450u;
        goto label_1b2450;
    }
    ctx->pc = 0x1B2448u;
    SET_GPR_U32(ctx, 31, 0x1B2450u);
    ctx->pc = 0x1B244Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2448u;
            // 0x1b244c: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130550u;
    if (runtime->hasFunction(0x130550u)) {
        auto targetFn = runtime->lookupFunction(0x130550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2450u; }
        if (ctx->pc != 0x1B2450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCreateMatrixPY__FPA4_fPff_0x130550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2450u; }
        if (ctx->pc != 0x1B2450u) { return; }
    }
    ctx->pc = 0x1B2450u;
label_1b2450:
    // 0x1b2450: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1b2450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1b2454:
    // 0x1b2454: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1b2454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1b2458:
    // 0x1b2458: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1b2458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1b245c:
    // 0x1b245c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1b245cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b2460:
    // 0x1b2460: 0xc04c278  jal         func_1309E0
label_1b2464:
    if (ctx->pc == 0x1B2464u) {
        ctx->pc = 0x1B2464u;
            // 0x1b2464: 0x26680010  addiu       $t0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x1B2468u;
        goto label_1b2468;
    }
    ctx->pc = 0x1B2460u;
    SET_GPR_U32(ctx, 31, 0x1B2468u);
    ctx->pc = 0x1B2464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2460u;
            // 0x1b2464: 0x26680010  addiu       $t0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1309E0u;
    if (runtime->hasFunction(0x1309E0u)) {
        auto targetFn = runtime->lookupFunction(0x1309E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2468u; }
        if (ctx->pc != 0x1B2468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgApplyMatrix__FPfPfPA4_fPfPf_0x1309e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2468u; }
        if (ctx->pc != 0x1B2468u) { return; }
    }
    ctx->pc = 0x1B2468u;
label_1b2468:
    // 0x1b2468: 0x257082a  slt         $at, $s2, $s7
    ctx->pc = 0x1b2468u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_1b246c:
    // 0x1b246c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1b2470:
    if (ctx->pc == 0x1B2470u) {
        ctx->pc = 0x1B2470u;
            // 0x1b2470: 0x2d41021  addu        $v0, $s6, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
        ctx->pc = 0x1B2474u;
        goto label_1b2474;
    }
    ctx->pc = 0x1B246Cu;
    {
        const bool branch_taken_0x1b246c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B246Cu;
            // 0x1b2470: 0x2d41021  addu        $v0, $s6, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b246c) {
            ctx->pc = 0x1B2498u;
            goto label_1b2498;
        }
    }
    ctx->pc = 0x1B2474u;
label_1b2474:
    // 0x1b2474: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b2474u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1b2478:
    // 0x1b2478: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b2478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_1b247c:
    // 0x1b247c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1b247cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_1b2480:
    // 0x1b2480: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b2480u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1b2484:
    // 0x1b2484: 0x26100330  addiu       $s0, $s0, 0x330
    ctx->pc = 0x1b2484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
label_1b2488:
    // 0x1b2488: 0x8ea20d40  lw          $v0, 0xD40($s5)
    ctx->pc = 0x1b2488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3392)));
label_1b248c:
    // 0x1b248c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1b248cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b2490:
    // 0x1b2490: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_1b2494:
    if (ctx->pc == 0x1B2494u) {
        ctx->pc = 0x1B2498u;
        goto label_1b2498;
    }
    ctx->pc = 0x1B2490u;
    {
        const bool branch_taken_0x1b2490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2490) {
            ctx->pc = 0x1B23E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b23e4;
        }
    }
    ctx->pc = 0x1B2498u;
label_1b2498:
    // 0x1b2498: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1b2498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b249c:
    // 0x1b249c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1b249cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1b24a0:
    // 0x1b24a0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b24a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b24a4:
    // 0x1b24a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b24a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b24a8:
    // 0x1b24a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b24a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b24ac:
    // 0x1b24ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b24acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b24b0:
    // 0x1b24b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b24b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b24b4:
    // 0x1b24b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b24b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b24b8:
    // 0x1b24b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b24b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b24bc:
    // 0x1b24bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b24bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b24c0:
    // 0x1b24c0: 0x3e00008  jr          $ra
label_1b24c4:
    if (ctx->pc == 0x1B24C4u) {
        ctx->pc = 0x1B24C4u;
            // 0x1b24c4: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x1B24C8u;
        goto label_fallthrough_0x1b24c0;
    }
    ctx->pc = 0x1B24C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B24C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B24C0u;
            // 0x1b24c4: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b24c0:
    ctx->pc = 0x1B24C8u;
}
