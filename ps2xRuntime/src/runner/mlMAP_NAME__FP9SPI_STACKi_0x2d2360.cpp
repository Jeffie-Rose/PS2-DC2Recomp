#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mlMAP_NAME__FP9SPI_STACKi
// Address: 0x2d2360 - 0x2d24f4
void mlMAP_NAME__FP9SPI_STACKi_0x2d2360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mlMAP_NAME__FP9SPI_STACKi_0x2d2360");
#endif

    switch (ctx->pc) {
        case 0x2d238cu: goto label_2d238c;
        case 0x2d239cu: goto label_2d239c;
        case 0x2d23acu: goto label_2d23ac;
        case 0x2d23b8u: goto label_2d23b8;
        case 0x2d23f0u: goto label_2d23f0;
        case 0x2d2418u: goto label_2d2418;
        case 0x2d247cu: goto label_2d247c;
        case 0x2d248cu: goto label_2d248c;
        case 0x2d24b0u: goto label_2d24b0;
        case 0x2d24c8u: goto label_2d24c8;
        default: break;
    }

    ctx->pc = 0x2d2360u;

    // 0x2d2360: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2d2360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d2364: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2d2364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d2368: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d2368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d236c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d236cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d2370: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2d2370u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2374: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d2374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d2378: 0x24940008  addiu       $s4, $a0, 0x8
    ctx->pc = 0x2d2378u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2d237c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d237cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d2380: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d2380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d2384: 0xc05191c  jal         func_146470
    ctx->pc = 0x2D2384u;
    SET_GPR_U32(ctx, 31, 0x2D238Cu);
    ctx->pc = 0x2D2388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2384u;
            // 0x2d2388: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D238Cu; }
        if (ctx->pc != 0x2D238Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D238Cu; }
        if (ctx->pc != 0x2D238Cu) { return; }
    }
    ctx->pc = 0x2D238Cu;
label_2d238c:
    // 0x2d238c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d238cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2390: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x2d2390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x2d2394: 0xc05191c  jal         func_146470
    ctx->pc = 0x2D2394u;
    SET_GPR_U32(ctx, 31, 0x2D239Cu);
    ctx->pc = 0x2D2398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2394u;
            // 0x2d2398: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D239Cu; }
        if (ctx->pc != 0x2D239Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D239Cu; }
        if (ctx->pc != 0x2D239Cu) { return; }
    }
    ctx->pc = 0x2D239Cu;
label_2d239c:
    // 0x2d239c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d239cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d23a0: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x2d23a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x2d23a4: 0xc05191c  jal         func_146470
    ctx->pc = 0x2D23A4u;
    SET_GPR_U32(ctx, 31, 0x2D23ACu);
    ctx->pc = 0x2D23A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D23A4u;
            // 0x2d23a8: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D23ACu; }
        if (ctx->pc != 0x2D23ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D23ACu; }
        if (ctx->pc != 0x2D23ACu) { return; }
    }
    ctx->pc = 0x2D23ACu;
label_2d23ac:
    // 0x2d23ac: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x2d23acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x2d23b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d23b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d23b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d23b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d23b8:
    // 0x2d23b8: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x2d23b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x2d23bc: 0x8c530070  lw          $s3, 0x70($v0)
    ctx->pc = 0x2d23bcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x2d23c0: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D23C0u;
    {
        const bool branch_taken_0x2d23c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d23c0) {
            ctx->pc = 0x2D23D4u;
            goto label_2d23d4;
        }
    }
    ctx->pc = 0x2D23C8u;
    // 0x2d23c8: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x2d23c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d23cc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D23CCu;
    {
        const bool branch_taken_0x2d23cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d23cc) {
            ctx->pc = 0x2D23E4u;
            goto label_2d23e4;
        }
    }
    ctx->pc = 0x2D23D4u;
label_2d23d4:
    // 0x2d23d4: 0x0  nop
    ctx->pc = 0x2d23d4u;
    // NOP
    // 0x2d23d8: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x2d23d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x2d23dc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2D23DCu;
    {
        const bool branch_taken_0x2d23dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D23E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D23DCu;
            // 0x2d23e0: 0xac400080  sw          $zero, 0x80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d23dc) {
            ctx->pc = 0x2D2428u;
            goto label_2d2428;
        }
    }
    ctx->pc = 0x2D23E4u;
label_2d23e4:
    // 0x2d23e4: 0x0  nop
    ctx->pc = 0x2d23e4u;
    // NOP
    // 0x2d23e8: 0xc04a422  jal         func_129088
    ctx->pc = 0x2D23E8u;
    SET_GPR_U32(ctx, 31, 0x2D23F0u);
    ctx->pc = 0x2D23ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D23E8u;
            // 0x2d23ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D23F0u; }
        if (ctx->pc != 0x2D23F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D23F0u; }
        if (ctx->pc != 0x2D23F0u) { return; }
    }
    ctx->pc = 0x2D23F0u;
label_2d23f0:
    // 0x2d23f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d23f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d23f4: 0x8f839dd4  lw          $v1, -0x622C($gp)
    ctx->pc = 0x2d23f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942164)));
    // 0x2d23f8: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x2d23f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x2d23fc: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x2d23fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2d2400: 0x8f829dd0  lw          $v0, -0x6230($gp)
    ctx->pc = 0x2d2400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942160)));
    // 0x2d2404: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d2404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d2408: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2d2408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2d240c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2d240cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d2410: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2D2410u;
    SET_GPR_U32(ctx, 31, 0x2D2418u);
    ctx->pc = 0x2D2414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2410u;
            // 0x2d2414: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2418u; }
        if (ctx->pc != 0x2D2418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2418u; }
        if (ctx->pc != 0x2D2418u) { return; }
    }
    ctx->pc = 0x2D2418u;
label_2d2418:
    // 0x2d2418: 0x8f829dd0  lw          $v0, -0x6230($gp)
    ctx->pc = 0x2d2418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942160)));
    // 0x2d241c: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2d241cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d2420: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d2420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d2424: 0xaf829dd0  sw          $v0, -0x6230($gp)
    ctx->pc = 0x2d2424u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942160), GPR_U32(ctx, 2));
label_2d2428:
    // 0x2d2428: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d2428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d242c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x2d242cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2d2430: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2D2430u;
    {
        const bool branch_taken_0x2d2430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2430u;
            // 0x2d2434: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2430) {
            ctx->pc = 0x2D23B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d23b8;
        }
    }
    ctx->pc = 0x2D2438u;
    // 0x2d2438: 0x8f879dd8  lw          $a3, -0x6228($gp)
    ctx->pc = 0x2d2438u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x2d243c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d243cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2440: 0x8f859dc8  lw          $a1, -0x6238($gp)
    ctx->pc = 0x2d2440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942152)));
    // 0x2d2444: 0x24940008  addiu       $s4, $a0, 0x8
    ctx->pc = 0x2d2444u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2d2448: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2d2448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d244c: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x2d244cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2d2450: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x2d2450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2d2454: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x2d2454u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2d2458: 0xaf839dd8  sw          $v1, -0x6228($gp)
    ctx->pc = 0x2d2458u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942168), GPR_U32(ctx, 3));
    // 0x2d245c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2d245cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2d2460: 0xa38021  addu        $s0, $a1, $v1
    ctx->pc = 0x2d2460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2d2464: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d2464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2d2468: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x2d2468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x2d246c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2d246cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2d2470: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2d2470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2d2474: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2D2474u;
    SET_GPR_U32(ctx, 31, 0x2D247Cu);
    ctx->pc = 0x2D2478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2474u;
            // 0x2d2478: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D247Cu; }
        if (ctx->pc != 0x2D247Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D247Cu; }
        if (ctx->pc != 0x2D247Cu) { return; }
    }
    ctx->pc = 0x2D247Cu;
label_2d247c:
    // 0x2d247c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d247cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2480: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2d2480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2d2484: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2D2484u;
    SET_GPR_U32(ctx, 31, 0x2D248Cu);
    ctx->pc = 0x2D2488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2484u;
            // 0x2d2488: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D248Cu; }
        if (ctx->pc != 0x2D248Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D248Cu; }
        if (ctx->pc != 0x2D248Cu) { return; }
    }
    ctx->pc = 0x2D248Cu;
label_2d248c:
    // 0x2d248c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2d248cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2d2490: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d2490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d2494: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2d2494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2d2498: 0x2aa20006  slti        $v0, $s5, 0x6
    ctx->pc = 0x2d2498u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2d249c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D249Cu;
    {
        const bool branch_taken_0x2d249c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D24A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D249Cu;
            // 0x2d24a0: 0x2aa20007  slti        $v0, $s5, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d249c) {
            ctx->pc = 0x2D24B8u;
            goto label_2d24b8;
        }
    }
    ctx->pc = 0x2D24A4u;
    // 0x2d24a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d24a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d24a8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2D24A8u;
    SET_GPR_U32(ctx, 31, 0x2D24B0u);
    ctx->pc = 0x2D24ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D24A8u;
            // 0x2d24ac: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D24B0u; }
        if (ctx->pc != 0x2D24B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D24B0u; }
        if (ctx->pc != 0x2D24B0u) { return; }
    }
    ctx->pc = 0x2D24B0u;
label_2d24b0:
    // 0x2d24b0: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2d24b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2d24b4: 0x2aa20007  slti        $v0, $s5, 0x7
    ctx->pc = 0x2d24b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)7) ? 1 : 0);
label_2d24b8:
    // 0x2d24b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D24B8u;
    {
        const bool branch_taken_0x2d24b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D24BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D24B8u;
            // 0x2d24bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d24b8) {
            ctx->pc = 0x2D24CCu;
            goto label_2d24cc;
        }
    }
    ctx->pc = 0x2D24C0u;
    // 0x2d24c0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2D24C0u;
    SET_GPR_U32(ctx, 31, 0x2D24C8u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D24C8u; }
        if (ctx->pc != 0x2D24C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D24C8u; }
        if (ctx->pc != 0x2D24C8u) { return; }
    }
    ctx->pc = 0x2D24C8u;
label_2d24c8:
    // 0x2d24c8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2d24c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_2d24cc:
    // 0x2d24cc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2d24ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d24d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d24d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d24d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d24d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d24d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d24d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d24dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d24dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d24e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d24e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d24e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d24e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d24e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d24e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d24ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2D24ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D24F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D24ECu;
            // 0x2d24f0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D24F4u;
}
