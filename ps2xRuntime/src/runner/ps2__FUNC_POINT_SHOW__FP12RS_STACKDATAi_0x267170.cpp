#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _FUNC_POINT_SHOW__FP12RS_STACKDATAi
// Address: 0x267170 - 0x2672b8
void ps2__FUNC_POINT_SHOW__FP12RS_STACKDATAi_0x267170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__FUNC_POINT_SHOW__FP12RS_STACKDATAi_0x267170");
#endif

    switch (ctx->pc) {
        case 0x267198u: goto label_267198;
        case 0x2671d4u: goto label_2671d4;
        case 0x2671e4u: goto label_2671e4;
        case 0x2671f0u: goto label_2671f0;
        case 0x267208u: goto label_267208;
        case 0x267218u: goto label_267218;
        case 0x267228u: goto label_267228;
        case 0x26723cu: goto label_26723c;
        case 0x267250u: goto label_267250;
        case 0x267268u: goto label_267268;
        case 0x267278u: goto label_267278;
        case 0x267294u: goto label_267294;
        default: break;
    }

    ctx->pc = 0x267170u;

    // 0x267170: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x267170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x267174: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x267174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x267178: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x267178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26717c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26717cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x267180: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x267180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x267184: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x267184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x267188: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x267188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26718c: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x26718cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x267190: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x267190u;
    SET_GPR_U32(ctx, 31, 0x267198u);
    ctx->pc = 0x267194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267190u;
            // 0x267194: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267198u; }
        if (ctx->pc != 0x267198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267198u; }
        if (ctx->pc != 0x267198u) { return; }
    }
    ctx->pc = 0x267198u;
label_267198:
    // 0x267198: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x267198u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26719c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26719Cu;
    {
        const bool branch_taken_0x26719c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2671A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26719Cu;
            // 0x2671a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26719c) {
            ctx->pc = 0x2671ACu;
            goto label_2671ac;
        }
    }
    ctx->pc = 0x2671A4u;
    // 0x2671a4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2671A4u;
    {
        const bool branch_taken_0x2671a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2671A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2671A4u;
            // 0x2671a8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2671a4) {
            ctx->pc = 0x2672A0u;
            goto label_2672a0;
        }
    }
    ctx->pc = 0x2671ACu;
label_2671ac:
    // 0x2671ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2671acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2671b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2671b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2671b4: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2671B4u;
    {
        const bool branch_taken_0x2671b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2671B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2671B4u;
            // 0x2671b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2671b4) {
            ctx->pc = 0x267210u;
            goto label_267210;
        }
    }
    ctx->pc = 0x2671BCu;
    // 0x2671bc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2671BCu;
    {
        const bool branch_taken_0x2671bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2671C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2671BCu;
            // 0x2671c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2671bc) {
            ctx->pc = 0x2671CCu;
            goto label_2671cc;
        }
    }
    ctx->pc = 0x2671C4u;
    // 0x2671c4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2671C4u;
    {
        const bool branch_taken_0x2671c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2671c4) {
            ctx->pc = 0x26727Cu;
            goto label_26727c;
        }
    }
    ctx->pc = 0x2671CCu;
label_2671cc:
    // 0x2671cc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2671CCu;
    SET_GPR_U32(ctx, 31, 0x2671D4u);
    ctx->pc = 0x2671D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2671CCu;
            // 0x2671d0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2671D4u; }
        if (ctx->pc != 0x2671D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2671D4u; }
        if (ctx->pc != 0x2671D4u) { return; }
    }
    ctx->pc = 0x2671D4u;
label_2671d4:
    // 0x2671d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2671d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2671d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2671d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2671dc: 0xc097e48  jal         func_25F920
    ctx->pc = 0x2671DCu;
    SET_GPR_U32(ctx, 31, 0x2671E4u);
    ctx->pc = 0x2671E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2671DCu;
            // 0x2671e0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2671E4u; }
        if (ctx->pc != 0x2671E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2671E4u; }
        if (ctx->pc != 0x2671E4u) { return; }
    }
    ctx->pc = 0x2671E4u;
label_2671e4:
    // 0x2671e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2671e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2671e8: 0xc057530  jal         func_15D4C0
    ctx->pc = 0x2671E8u;
    SET_GPR_U32(ctx, 31, 0x2671F0u);
    ctx->pc = 0x2671ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2671E8u;
            // 0x2671ec: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D4C0u;
    if (runtime->hasFunction(0x15D4C0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2671F0u; }
        if (ctx->pc != 0x2671F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFi_0x15d4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2671F0u; }
        if (ctx->pc != 0x2671F0u) { return; }
    }
    ctx->pc = 0x2671F0u;
label_2671f0:
    // 0x2671f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2671F0u;
    {
        const bool branch_taken_0x2671f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2671F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2671F0u;
            // 0x2671f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2671f0) {
            ctx->pc = 0x267200u;
            goto label_267200;
        }
    }
    ctx->pc = 0x2671F8u;
    // 0x2671f8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2671F8u;
    {
        const bool branch_taken_0x2671f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2671FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2671F8u;
            // 0x2671fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2671f8) {
            ctx->pc = 0x26729Cu;
            goto label_26729c;
        }
    }
    ctx->pc = 0x267200u;
label_267200:
    // 0x267200: 0xc0a763c  jal         func_29D8F0
    ctx->pc = 0x267200u;
    SET_GPR_U32(ctx, 31, 0x267208u);
    ctx->pc = 0x267204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267200u;
            // 0x267204: 0x244402b0  addiu       $a0, $v0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8F0u;
    if (runtime->hasFunction(0x29D8F0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267208u; }
        if (ctx->pc != 0x267208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Search__14CFuncPointMngrFPc_0x29d8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267208u; }
        if (ctx->pc != 0x267208u) { return; }
    }
    ctx->pc = 0x267208u;
label_267208:
    // 0x267208: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x267208u;
    {
        const bool branch_taken_0x267208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26720Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267208u;
            // 0x26720c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267208) {
            ctx->pc = 0x26727Cu;
            goto label_26727c;
        }
    }
    ctx->pc = 0x267210u;
label_267210:
    // 0x267210: 0xc097e48  jal         func_25F920
    ctx->pc = 0x267210u;
    SET_GPR_U32(ctx, 31, 0x267218u);
    ctx->pc = 0x267214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267210u;
            // 0x267214: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267218u; }
        if (ctx->pc != 0x267218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267218u; }
        if (ctx->pc != 0x267218u) { return; }
    }
    ctx->pc = 0x267218u;
label_267218:
    // 0x267218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x267218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26721c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26721cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267220: 0xc097e48  jal         func_25F920
    ctx->pc = 0x267220u;
    SET_GPR_U32(ctx, 31, 0x267228u);
    ctx->pc = 0x267224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267220u;
            // 0x267224: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267228u; }
        if (ctx->pc != 0x267228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267228u; }
        if (ctx->pc != 0x267228u) { return; }
    }
    ctx->pc = 0x267228u;
label_267228:
    // 0x267228: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x267228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x26722c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26722cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267230: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267234: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x267234u;
    SET_GPR_U32(ctx, 31, 0x26723Cu);
    ctx->pc = 0x267238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267234u;
            // 0x267238: 0x24a5c708  addiu       $a1, $a1, -0x38F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26723Cu; }
        if (ctx->pc != 0x26723Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26723Cu; }
        if (ctx->pc != 0x26723Cu) { return; }
    }
    ctx->pc = 0x26723Cu;
label_26723c:
    // 0x26723c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26723Cu;
    {
        const bool branch_taken_0x26723c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26723Cu;
            // 0x267240: 0x26440cb0  addiu       $a0, $s2, 0xCB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26723c) {
            ctx->pc = 0x267270u;
            goto label_267270;
        }
    }
    ctx->pc = 0x267244u;
    // 0x267244: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x267244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267248: 0xc057508  jal         func_15D420
    ctx->pc = 0x267248u;
    SET_GPR_U32(ctx, 31, 0x267250u);
    ctx->pc = 0x26724Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267248u;
            // 0x26724c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D420u;
    if (runtime->hasFunction(0x15D420u)) {
        auto targetFn = runtime->lookupFunction(0x15D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267250u; }
        if (ctx->pc != 0x267250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFPc_0x15d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267250u; }
        if (ctx->pc != 0x267250u) { return; }
    }
    ctx->pc = 0x267250u;
label_267250:
    // 0x267250: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x267250u;
    {
        const bool branch_taken_0x267250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267250u;
            // 0x267254: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267250) {
            ctx->pc = 0x267260u;
            goto label_267260;
        }
    }
    ctx->pc = 0x267258u;
    // 0x267258: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x267258u;
    {
        const bool branch_taken_0x267258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26725Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267258u;
            // 0x26725c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267258) {
            ctx->pc = 0x26729Cu;
            goto label_26729c;
        }
    }
    ctx->pc = 0x267260u;
label_267260:
    // 0x267260: 0xc0a763c  jal         func_29D8F0
    ctx->pc = 0x267260u;
    SET_GPR_U32(ctx, 31, 0x267268u);
    ctx->pc = 0x267264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267260u;
            // 0x267264: 0x244402b0  addiu       $a0, $v0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8F0u;
    if (runtime->hasFunction(0x29D8F0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267268u; }
        if (ctx->pc != 0x267268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Search__14CFuncPointMngrFPc_0x29d8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267268u; }
        if (ctx->pc != 0x267268u) { return; }
    }
    ctx->pc = 0x267268u;
label_267268:
    // 0x267268: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x267268u;
    {
        const bool branch_taken_0x267268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26726Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267268u;
            // 0x26726c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267268) {
            ctx->pc = 0x26727Cu;
            goto label_26727c;
        }
    }
    ctx->pc = 0x267270u;
label_267270:
    // 0x267270: 0xc0a763c  jal         func_29D8F0
    ctx->pc = 0x267270u;
    SET_GPR_U32(ctx, 31, 0x267278u);
    ctx->pc = 0x267274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267270u;
            // 0x267274: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8F0u;
    if (runtime->hasFunction(0x29D8F0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267278u; }
        if (ctx->pc != 0x267278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Search__14CFuncPointMngrFPc_0x29d8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267278u; }
        if (ctx->pc != 0x267278u) { return; }
    }
    ctx->pc = 0x267278u;
label_267278:
    // 0x267278: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x267278u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26727c:
    // 0x26727c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26727Cu;
    {
        const bool branch_taken_0x26727c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x267280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26727Cu;
            // 0x267280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26727c) {
            ctx->pc = 0x26728Cu;
            goto label_26728c;
        }
    }
    ctx->pc = 0x267284u;
    // 0x267284: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x267284u;
    {
        const bool branch_taken_0x267284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267284u;
            // 0x267288: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267284) {
            ctx->pc = 0x26729Cu;
            goto label_26729c;
        }
    }
    ctx->pc = 0x26728Cu;
label_26728c:
    // 0x26728c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26728Cu;
    SET_GPR_U32(ctx, 31, 0x267294u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267294u; }
        if (ctx->pc != 0x267294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267294u; }
        if (ctx->pc != 0x267294u) { return; }
    }
    ctx->pc = 0x267294u;
label_267294:
    // 0x267294: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x267294u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x267298: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x267298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26729c:
    // 0x26729c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26729cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2672a0:
    // 0x2672a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2672a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2672a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2672a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2672a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2672a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2672ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2672acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2672b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2672B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2672B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2672B0u;
            // 0x2672b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2672B8u;
}
