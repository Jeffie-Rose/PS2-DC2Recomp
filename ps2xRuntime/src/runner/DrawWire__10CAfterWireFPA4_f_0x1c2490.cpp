#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawWire__10CAfterWireFPA4_f
// Address: 0x1c2490 - 0x1c2604
void DrawWire__10CAfterWireFPA4_f_0x1c2490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawWire__10CAfterWireFPA4_f_0x1c2490");
#endif

    switch (ctx->pc) {
        case 0x1c24e0u: goto label_1c24e0;
        case 0x1c24ecu: goto label_1c24ec;
        case 0x1c24fcu: goto label_1c24fc;
        case 0x1c2504u: goto label_1c2504;
        case 0x1c2510u: goto label_1c2510;
        case 0x1c251cu: goto label_1c251c;
        case 0x1c2528u: goto label_1c2528;
        case 0x1c2534u: goto label_1c2534;
        case 0x1c2540u: goto label_1c2540;
        case 0x1c254cu: goto label_1c254c;
        case 0x1c2558u: goto label_1c2558;
        case 0x1c2564u: goto label_1c2564;
        case 0x1c256cu: goto label_1c256c;
        case 0x1c2580u: goto label_1c2580;
        case 0x1c2598u: goto label_1c2598;
        case 0x1c25a4u: goto label_1c25a4;
        case 0x1c25e8u: goto label_1c25e8;
        default: break;
    }

    ctx->pc = 0x1c2490u;

    // 0x1c2490: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1c2490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1c2494: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c2494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1c2498: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c2498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c249c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c249cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c24a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c24a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c24a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c24a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c24a8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c24a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c24ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c24acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c24b0: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x1C24B0u;
    {
        const bool branch_taken_0x1c24b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C24B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C24B0u;
            // 0x1c24b4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c24b0) {
            ctx->pc = 0x1C25E8u;
            goto label_1c25e8;
        }
    }
    ctx->pc = 0x1C24B8u;
    // 0x1c24b8: 0x86460112  lh          $a2, 0x112($s2)
    ctx->pc = 0x1c24b8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
    // 0x1c24bc: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x1c24bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c24c0: 0x14600049  bnez        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x1C24C0u;
    {
        const bool branch_taken_0x1c24c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c24c0) {
            ctx->pc = 0x1C25E8u;
            goto label_1c25e8;
        }
    }
    ctx->pc = 0x1C24C8u;
    // 0x1c24c8: 0x86480114  lh          $t0, 0x114($s2)
    ctx->pc = 0x1c24c8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 276)));
    // 0x1c24cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c24ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c24d0: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x1c24d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1c24d4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1c24d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c24d8: 0xc072324  jal         func_1C8C90
    ctx->pc = 0x1C24D8u;
    SET_GPR_U32(ctx, 31, 0x1C24E0u);
    ctx->pc = 0x1C24DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C24D8u;
            // 0x1c24dc: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8C90u;
    if (runtime->hasFunction(0x1C8C90u)) {
        auto targetFn = runtime->lookupFunction(0x1C8C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C24E0u; }
        if (ctx->pc != 0x1C24E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatSmoothPass__FPA4_fPA4_fiiii_0x1c8c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C24E0u; }
        if (ctx->pc != 0x1C24E0u) { return; }
    }
    ctx->pc = 0x1C24E0u;
label_1c24e0:
    // 0x1c24e0: 0xa6420110  sh          $v0, 0x110($s2)
    ctx->pc = 0x1c24e0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 272), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c24e4: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1C24E4u;
    SET_GPR_U32(ctx, 31, 0x1C24ECu);
    ctx->pc = 0x1C24E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C24E4u;
            // 0x1c24e8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C24ECu; }
        if (ctx->pc != 0x1C24ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C24ECu; }
        if (ctx->pc != 0x1C24ECu) { return; }
    }
    ctx->pc = 0x1C24ECu;
label_1c24ec:
    // 0x1c24ec: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c24ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c24f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c24f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c24f4: 0xc04d104  jal         func_134410
    ctx->pc = 0x1C24F4u;
    SET_GPR_U32(ctx, 31, 0x1C24FCu);
    ctx->pc = 0x1C24F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C24F4u;
            // 0x1c24f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C24FCu; }
        if (ctx->pc != 0x1C24FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C24FCu; }
        if (ctx->pc != 0x1C24FCu) { return; }
    }
    ctx->pc = 0x1C24FCu;
label_1c24fc:
    // 0x1c24fc: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1C24FCu;
    SET_GPR_U32(ctx, 31, 0x1C2504u);
    ctx->pc = 0x1C2500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C24FCu;
            // 0x1c2500: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2504u; }
        if (ctx->pc != 0x1C2504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2504u; }
        if (ctx->pc != 0x1C2504u) { return; }
    }
    ctx->pc = 0x1C2504u;
label_1c2504:
    // 0x1c2504: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c2504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c2508: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x1C2508u;
    SET_GPR_U32(ctx, 31, 0x1C2510u);
    ctx->pc = 0x1C250Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2508u;
            // 0x1c250c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2510u; }
        if (ctx->pc != 0x1C2510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2510u; }
        if (ctx->pc != 0x1C2510u) { return; }
    }
    ctx->pc = 0x1C2510u;
label_1c2510:
    // 0x1c2510: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c2510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c2514: 0xc04d44c  jal         func_135130
    ctx->pc = 0x1C2514u;
    SET_GPR_U32(ctx, 31, 0x1C251Cu);
    ctx->pc = 0x1C2518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2514u;
            // 0x1c2518: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C251Cu; }
        if (ctx->pc != 0x1C251Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C251Cu; }
        if (ctx->pc != 0x1C251Cu) { return; }
    }
    ctx->pc = 0x1C251Cu;
label_1c251c:
    // 0x1c251c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c251cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c2520: 0xc04d434  jal         func_1350D0
    ctx->pc = 0x1C2520u;
    SET_GPR_U32(ctx, 31, 0x1C2528u);
    ctx->pc = 0x1C2524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2520u;
            // 0x1c2524: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350D0u;
    if (runtime->hasFunction(0x1350D0u)) {
        auto targetFn = runtime->lookupFunction(0x1350D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2528u; }
        if (ctx->pc != 0x1C2528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shading__11mgCDrawPrimFi_0x1350d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2528u; }
        if (ctx->pc != 0x1C2528u) { return; }
    }
    ctx->pc = 0x1C2528u;
label_1c2528:
    // 0x1c2528: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c2528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c252c: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1C252Cu;
    SET_GPR_U32(ctx, 31, 0x1C2534u);
    ctx->pc = 0x1C2530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C252Cu;
            // 0x1c2530: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2534u; }
        if (ctx->pc != 0x1C2534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2534u; }
        if (ctx->pc != 0x1C2534u) { return; }
    }
    ctx->pc = 0x1C2534u;
label_1c2534:
    // 0x1c2534: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c2534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c2538: 0xc04d3fc  jal         func_134FF0
    ctx->pc = 0x1C2538u;
    SET_GPR_U32(ctx, 31, 0x1C2540u);
    ctx->pc = 0x1C253Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2538u;
            // 0x1c253c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134FF0u;
    if (runtime->hasFunction(0x134FF0u)) {
        auto targetFn = runtime->lookupFunction(0x134FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2540u; }
        if (ctx->pc != 0x1C2540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTest__11mgCDrawPrimFi_0x134ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2540u; }
        if (ctx->pc != 0x1C2540u) { return; }
    }
    ctx->pc = 0x1C2540u;
label_1c2540:
    // 0x1c2540: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c2540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c2544: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x1C2544u;
    SET_GPR_U32(ctx, 31, 0x1C254Cu);
    ctx->pc = 0x1C2548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2544u;
            // 0x1c2548: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C254Cu; }
        if (ctx->pc != 0x1C254Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C254Cu; }
        if (ctx->pc != 0x1C254Cu) { return; }
    }
    ctx->pc = 0x1C254Cu;
label_1c254c:
    // 0x1c254c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c254cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c2550: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1C2550u;
    SET_GPR_U32(ctx, 31, 0x1C2558u);
    ctx->pc = 0x1C2554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2550u;
            // 0x1c2554: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2558u; }
        if (ctx->pc != 0x1C2558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2558u; }
        if (ctx->pc != 0x1C2558u) { return; }
    }
    ctx->pc = 0x1C2558u;
label_1c2558:
    // 0x1c2558: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1c2558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c255c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1C255Cu;
    {
        const bool branch_taken_0x1c255c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C255Cu;
            // 0x1c2560: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c255c) {
            ctx->pc = 0x1C25D0u;
            goto label_1c25d0;
        }
    }
    ctx->pc = 0x1C2564u;
label_1c2564:
    // 0x1c2564: 0xc051638  jal         func_1458E0
    ctx->pc = 0x1C2564u;
    SET_GPR_U32(ctx, 31, 0x1C256Cu);
    ctx->pc = 0x1C2568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2564u;
            // 0x1c2568: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1458E0u;
    if (runtime->hasFunction(0x1458E0u)) {
        auto targetFn = runtime->lookupFunction(0x1458E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C256Cu; }
        if (ctx->pc != 0x1C256Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim__FPiPf_0x1458e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C256Cu; }
        if (ctx->pc != 0x1C256Cu) { return; }
    }
    ctx->pc = 0x1C256Cu;
label_1c256c:
    // 0x1c256c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C256Cu;
    {
        const bool branch_taken_0x1c256c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C256Cu;
            // 0x1c2570: 0x3c024300  lui         $v0, 0x4300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c256c) {
            ctx->pc = 0x1C25A4u;
            goto label_1c25a4;
        }
    }
    ctx->pc = 0x1C2574u;
    // 0x1c2574: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c2574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2578: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C2578u;
    SET_GPR_U32(ctx, 31, 0x1C2580u);
    ctx->pc = 0x1C257Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2578u;
            // 0x1c257c: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2580u; }
        if (ctx->pc != 0x1C2580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2580u; }
        if (ctx->pc != 0x1C2580u) { return; }
    }
    ctx->pc = 0x1C2580u;
label_1c2580:
    // 0x1c2580: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1c2580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1c2584: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1c2584u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2588: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c2588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c258c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1c258cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1c2590: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C2590u;
    SET_GPR_U32(ctx, 31, 0x1C2598u);
    ctx->pc = 0x1C2594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2590u;
            // 0x1c2594: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2598u; }
        if (ctx->pc != 0x1C2598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2598u; }
        if (ctx->pc != 0x1C2598u) { return; }
    }
    ctx->pc = 0x1C2598u;
label_1c2598:
    // 0x1c2598: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c2598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c259c: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C259Cu;
    SET_GPR_U32(ctx, 31, 0x1C25A4u);
    ctx->pc = 0x1C25A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C259Cu;
            // 0x1c25a0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C25A4u; }
        if (ctx->pc != 0x1C25A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C25A4u; }
        if (ctx->pc != 0x1C25A4u) { return; }
    }
    ctx->pc = 0x1C25A4u;
label_1c25a4:
    // 0x1c25a4: 0x0  nop
    ctx->pc = 0x1c25a4u;
    // NOP
    // 0x1c25a8: 0x86430110  lh          $v1, 0x110($s2)
    ctx->pc = 0x1c25a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x1c25ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c25acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c25b0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1c25b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1c25b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c25b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c25b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c25b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c25bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c25bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c25c0: 0x0  nop
    ctx->pc = 0x1c25c0u;
    // NOP
    // 0x1c25c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c25c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c25c8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1c25c8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1c25cc: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1c25ccu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1c25d0:
    // 0x1c25d0: 0x86420110  lh          $v0, 0x110($s2)
    ctx->pc = 0x1c25d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x1c25d4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1c25d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c25d8: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1C25D8u;
    {
        const bool branch_taken_0x1c25d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C25DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C25D8u;
            // 0x1c25dc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c25d8) {
            ctx->pc = 0x1C2564u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c2564;
        }
    }
    ctx->pc = 0x1C25E0u;
    // 0x1c25e0: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1C25E0u;
    SET_GPR_U32(ctx, 31, 0x1C25E8u);
    ctx->pc = 0x1C25E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C25E0u;
            // 0x1c25e4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C25E8u; }
        if (ctx->pc != 0x1C25E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C25E8u; }
        if (ctx->pc != 0x1C25E8u) { return; }
    }
    ctx->pc = 0x1C25E8u;
label_1c25e8:
    // 0x1c25e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c25e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c25ec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c25ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c25f0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c25f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c25f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c25f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c25f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c25f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c25fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C25FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C25FCu;
            // 0x1c2600: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C2604u;
}
