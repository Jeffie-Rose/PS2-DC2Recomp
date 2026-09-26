#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchHealingPoint__11CAutoMapGenFP4CMap
// Address: 0x1d8140 - 0x1d8224
void SearchHealingPoint__11CAutoMapGenFP4CMap_0x1d8140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchHealingPoint__11CAutoMapGenFP4CMap_0x1d8140");
#endif

    switch (ctx->pc) {
        case 0x1d8140u: goto label_1d8140;
        case 0x1d8144u: goto label_1d8144;
        case 0x1d8148u: goto label_1d8148;
        case 0x1d814cu: goto label_1d814c;
        case 0x1d8150u: goto label_1d8150;
        case 0x1d8154u: goto label_1d8154;
        case 0x1d8158u: goto label_1d8158;
        case 0x1d815cu: goto label_1d815c;
        case 0x1d8160u: goto label_1d8160;
        case 0x1d8164u: goto label_1d8164;
        case 0x1d8168u: goto label_1d8168;
        case 0x1d816cu: goto label_1d816c;
        case 0x1d8170u: goto label_1d8170;
        case 0x1d8174u: goto label_1d8174;
        case 0x1d8178u: goto label_1d8178;
        case 0x1d817cu: goto label_1d817c;
        case 0x1d8180u: goto label_1d8180;
        case 0x1d8184u: goto label_1d8184;
        case 0x1d8188u: goto label_1d8188;
        case 0x1d818cu: goto label_1d818c;
        case 0x1d8190u: goto label_1d8190;
        case 0x1d8194u: goto label_1d8194;
        case 0x1d8198u: goto label_1d8198;
        case 0x1d819cu: goto label_1d819c;
        case 0x1d81a0u: goto label_1d81a0;
        case 0x1d81a4u: goto label_1d81a4;
        case 0x1d81a8u: goto label_1d81a8;
        case 0x1d81acu: goto label_1d81ac;
        case 0x1d81b0u: goto label_1d81b0;
        case 0x1d81b4u: goto label_1d81b4;
        case 0x1d81b8u: goto label_1d81b8;
        case 0x1d81bcu: goto label_1d81bc;
        case 0x1d81c0u: goto label_1d81c0;
        case 0x1d81c4u: goto label_1d81c4;
        case 0x1d81c8u: goto label_1d81c8;
        case 0x1d81ccu: goto label_1d81cc;
        case 0x1d81d0u: goto label_1d81d0;
        case 0x1d81d4u: goto label_1d81d4;
        case 0x1d81d8u: goto label_1d81d8;
        case 0x1d81dcu: goto label_1d81dc;
        case 0x1d81e0u: goto label_1d81e0;
        case 0x1d81e4u: goto label_1d81e4;
        case 0x1d81e8u: goto label_1d81e8;
        case 0x1d81ecu: goto label_1d81ec;
        case 0x1d81f0u: goto label_1d81f0;
        case 0x1d81f4u: goto label_1d81f4;
        case 0x1d81f8u: goto label_1d81f8;
        case 0x1d81fcu: goto label_1d81fc;
        case 0x1d8200u: goto label_1d8200;
        case 0x1d8204u: goto label_1d8204;
        case 0x1d8208u: goto label_1d8208;
        case 0x1d820cu: goto label_1d820c;
        case 0x1d8210u: goto label_1d8210;
        case 0x1d8214u: goto label_1d8214;
        case 0x1d8218u: goto label_1d8218;
        case 0x1d821cu: goto label_1d821c;
        case 0x1d8220u: goto label_1d8220;
        default: break;
    }

    ctx->pc = 0x1d8140u;

label_1d8140:
    // 0x1d8140: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1d8140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1d8144:
    // 0x1d8144: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d8144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1d8148:
    // 0x1d8148: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d8148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1d814c:
    // 0x1d814c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d814cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d8150:
    // 0x1d8150: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d8150u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d8154:
    // 0x1d8154: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d8154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d8158:
    // 0x1d8158: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d8158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d815c:
    // 0x1d815c: 0x1260002a  beqz        $s3, . + 4 + (0x2A << 2)
label_1d8160:
    if (ctx->pc == 0x1D8160u) {
        ctx->pc = 0x1D8160u;
            // 0x1d8160: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D8164u;
        goto label_1d8164;
    }
    ctx->pc = 0x1D815Cu;
    {
        const bool branch_taken_0x1d815c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D815Cu;
            // 0x1d8160: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d815c) {
            ctx->pc = 0x1D8208u;
            goto label_1d8208;
        }
    }
    ctx->pc = 0x1D8164u;
label_1d8164:
    // 0x1d8164: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d8164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8168:
    // 0x1d8168: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1d8168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1d816c:
    // 0x1d816c: 0x26460006  addiu       $a2, $s2, 0x6
    ctx->pc = 0x1d816cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
label_1d8170:
    // 0x1d8170: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1d8170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1d8174:
    // 0x1d8174: 0xc04a234  jal         func_1288D0
label_1d8178:
    if (ctx->pc == 0x1D8178u) {
        ctx->pc = 0x1D8178u;
            // 0x1d8178: 0x24a57e10  addiu       $a1, $a1, 0x7E10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32272));
        ctx->pc = 0x1D817Cu;
        goto label_1d817c;
    }
    ctx->pc = 0x1D8174u;
    SET_GPR_U32(ctx, 31, 0x1D817Cu);
    ctx->pc = 0x1D8178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8174u;
            // 0x1d8178: 0x24a57e10  addiu       $a1, $a1, 0x7E10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D817Cu; }
        if (ctx->pc != 0x1D817Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D817Cu; }
        if (ctx->pc != 0x1D817Cu) { return; }
    }
    ctx->pc = 0x1D817Cu;
label_1d817c:
    // 0x1d817c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d817cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d8180:
    // 0x1d8180: 0xc057508  jal         func_15D420
label_1d8184:
    if (ctx->pc == 0x1D8184u) {
        ctx->pc = 0x1D8184u;
            // 0x1d8184: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1D8188u;
        goto label_1d8188;
    }
    ctx->pc = 0x1D8180u;
    SET_GPR_U32(ctx, 31, 0x1D8188u);
    ctx->pc = 0x1D8184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8180u;
            // 0x1d8184: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D420u;
    if (runtime->hasFunction(0x15D420u)) {
        auto targetFn = runtime->lookupFunction(0x15D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8188u; }
        if (ctx->pc != 0x1D8188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFPc_0x15d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8188u; }
        if (ctx->pc != 0x1D8188u) { return; }
    }
    ctx->pc = 0x1D8188u;
label_1d8188:
    // 0x1d8188: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d8188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d818c:
    // 0x1d818c: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
label_1d8190:
    if (ctx->pc == 0x1D8190u) {
        ctx->pc = 0x1D8194u;
        goto label_1d8194;
    }
    ctx->pc = 0x1D818Cu;
    {
        const bool branch_taken_0x1d818c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d818c) {
            ctx->pc = 0x1D81F4u;
            goto label_1d81f4;
        }
    }
    ctx->pc = 0x1D8194u;
label_1d8194:
    // 0x1d8194: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d8194u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d8198:
    // 0x1d8198: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d819c:
    // 0x1d819c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1d819cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1d81a0:
    // 0x1d81a0: 0x320f809  jalr        $t9
label_1d81a4:
    if (ctx->pc == 0x1D81A4u) {
        ctx->pc = 0x1D81A4u;
            // 0x1d81a4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1D81A8u;
        goto label_1d81a8;
    }
    ctx->pc = 0x1D81A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D81A8u);
        ctx->pc = 0x1D81A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D81A0u;
            // 0x1d81a4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D81A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D81A8u; }
            if (ctx->pc != 0x1D81A8u) { return; }
        }
        }
    }
    ctx->pc = 0x1D81A8u;
label_1d81a8:
    // 0x1d81a8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1d81a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1d81ac:
    // 0x1d81ac: 0x262402b0  addiu       $a0, $s1, 0x2B0
    ctx->pc = 0x1d81acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 688));
label_1d81b0:
    // 0x1d81b0: 0xc0a763c  jal         func_29D8F0
label_1d81b4:
    if (ctx->pc == 0x1D81B4u) {
        ctx->pc = 0x1D81B4u;
            // 0x1d81b4: 0x24a57e18  addiu       $a1, $a1, 0x7E18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32280));
        ctx->pc = 0x1D81B8u;
        goto label_1d81b8;
    }
    ctx->pc = 0x1D81B0u;
    SET_GPR_U32(ctx, 31, 0x1D81B8u);
    ctx->pc = 0x1D81B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D81B0u;
            // 0x1d81b4: 0x24a57e18  addiu       $a1, $a1, 0x7E18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8F0u;
    if (runtime->hasFunction(0x29D8F0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D81B8u; }
        if (ctx->pc != 0x1D81B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Search__14CFuncPointMngrFPc_0x29d8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D81B8u; }
        if (ctx->pc != 0x1D81B8u) { return; }
    }
    ctx->pc = 0x1D81B8u;
label_1d81b8:
    // 0x1d81b8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1d81bc:
    if (ctx->pc == 0x1D81BCu) {
        ctx->pc = 0x1D81C0u;
        goto label_1d81c0;
    }
    ctx->pc = 0x1D81B8u;
    {
        const bool branch_taken_0x1d81b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d81b8) {
            ctx->pc = 0x1D8204u;
            goto label_1d8204;
        }
    }
    ctx->pc = 0x1D81C0u;
label_1d81c0:
    // 0x1d81c0: 0x78420180  lq          $v0, 0x180($v0)
    ctx->pc = 0x1d81c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 384)));
label_1d81c4:
    // 0x1d81c4: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1d81c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1d81c8:
    // 0x1d81c8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1d81c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1d81cc:
    // 0x1d81cc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d81ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d81d0:
    // 0x1d81d0: 0xc041c38  jal         func_1070E0
label_1d81d4:
    if (ctx->pc == 0x1D81D4u) {
        ctx->pc = 0x1D81D4u;
            // 0x1d81d4: 0x7cc20000  sq          $v0, 0x0($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x1D81D8u;
        goto label_1d81d8;
    }
    ctx->pc = 0x1D81D0u;
    SET_GPR_U32(ctx, 31, 0x1D81D8u);
    ctx->pc = 0x1D81D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D81D0u;
            // 0x1d81d4: 0x7cc20000  sq          $v0, 0x0($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D81D8u; }
        if (ctx->pc != 0x1D81D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D81D8u; }
        if (ctx->pc != 0x1D81D8u) { return; }
    }
    ctx->pc = 0x1D81D8u;
label_1d81d8:
    // 0x1d81d8: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d81d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d81dc:
    // 0x1d81dc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1d81dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1d81e0:
    // 0x1d81e0: 0xc070640  jal         func_1C1900
label_1d81e4:
    if (ctx->pc == 0x1D81E4u) {
        ctx->pc = 0x1D81E4u;
            // 0x1d81e4: 0x24845c10  addiu       $a0, $a0, 0x5C10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23568));
        ctx->pc = 0x1D81E8u;
        goto label_1d81e8;
    }
    ctx->pc = 0x1D81E0u;
    SET_GPR_U32(ctx, 31, 0x1D81E8u);
    ctx->pc = 0x1D81E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D81E0u;
            // 0x1d81e4: 0x24845c10  addiu       $a0, $a0, 0x5C10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1900u;
    if (runtime->hasFunction(0x1C1900u)) {
        auto targetFn = runtime->lookupFunction(0x1C1900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D81E8u; }
        if (ctx->pc != 0x1D81E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__17CHealingEffectManFPf_0x1c1900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D81E8u; }
        if (ctx->pc != 0x1D81E8u) { return; }
    }
    ctx->pc = 0x1D81E8u;
label_1d81e8:
    // 0x1d81e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d81e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d81ec:
    // 0x1d81ec: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d81f0:
    if (ctx->pc == 0x1D81F0u) {
        ctx->pc = 0x1D81F0u;
            // 0x1d81f0: 0xae0301b0  sw          $v1, 0x1B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 3));
        ctx->pc = 0x1D81F4u;
        goto label_1d81f4;
    }
    ctx->pc = 0x1D81ECu;
    {
        const bool branch_taken_0x1d81ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D81F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D81ECu;
            // 0x1d81f0: 0xae0301b0  sw          $v1, 0x1B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d81ec) {
            ctx->pc = 0x1D8204u;
            goto label_1d8204;
        }
    }
    ctx->pc = 0x1D81F4u;
label_1d81f4:
    // 0x1d81f4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d81f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1d81f8:
    // 0x1d81f8: 0x2a430004  slti        $v1, $s2, 0x4
    ctx->pc = 0x1d81f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_1d81fc:
    // 0x1d81fc: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
label_1d8200:
    if (ctx->pc == 0x1D8200u) {
        ctx->pc = 0x1D8204u;
        goto label_1d8204;
    }
    ctx->pc = 0x1D81FCu;
    {
        const bool branch_taken_0x1d81fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d81fc) {
            ctx->pc = 0x1D8168u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d8168;
        }
    }
    ctx->pc = 0x1D8204u;
label_1d8204:
    // 0x1d8204: 0x0  nop
    ctx->pc = 0x1d8204u;
    // NOP
label_1d8208:
    // 0x1d8208: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d8208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1d820c:
    // 0x1d820c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d820cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d8210:
    // 0x1d8210: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d8210u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d8214:
    // 0x1d8214: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d8214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d8218:
    // 0x1d8218: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d8218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d821c:
    // 0x1d821c: 0x3e00008  jr          $ra
label_1d8220:
    if (ctx->pc == 0x1D8220u) {
        ctx->pc = 0x1D8220u;
            // 0x1d8220: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1D8224u;
        goto label_fallthrough_0x1d821c;
    }
    ctx->pc = 0x1D821Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D821Cu;
            // 0x1d8220: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1d821c:
    ctx->pc = 0x1D8224u;
}
